"""
Date: Oct 18 14:00
Author: David Matthew Lane
Purpose: Testing HLS4ML on Keras model

Dependencies for script:
    hls4ml                        0.7.1
    keras                         2.14.0
    keras-core                    0.1.7
    numpy                         1.26.0
    openlane                      2.0.0b15
    pandas                        2.1.1
    scikit-learn                  1.3.1

Boards supported:
    pynq-z2 (part: xc7z020clg400-1)
    zcu102 (part: xczu9eg-ffvb1156-2-e)
    alveo-u50 (part: xcu50-fsvh2104-2-e)
    alveo-u250 (part: xcu250-figd2104-2L-e)
    alveo-u200 (part: xcu200-fsgd2104-2-e)
    alveo-u280 (part: xcu280-fsvh2892-2L-e)
"""
import pydot # for visualisation
import graphviz # for visualisation

import os
import time
import numpy as np
import matplotlib.pyplot as plt
from sklearn.metrics import log_loss, accuracy_score # sklearn has an easy interface for testing

import hls4ml # Engine for generating Verilog-files from ML models
from hls4ml.model.profiling import numerical

import tensorflow as tf
import keras_core as keras # Framework for machine learning models
from keras.utils import to_categorical
from keras.datasets import mnist

timestr = time.strftime("%Y%m%d-%H%M%S") #used for timestamping iterations

## Set path for Vivado HLSs
os.environ['PATH'] += os.pathsep + '/home/pominiq/Vivado/2020.1/bin'

#Global variables
build = True

#train_images = np.load('Keras_models/train_images.npy') # No training in this script
#train_labels = np.load('Keras_models/test_labels.npy')
global test_images
global test_labels


def load_keras_model_from_json_file():
    
    # load json and create model
    json_file = open('Keras_models/model_16bit.json', 'r')
    loaded_model_json = json_file.read()
    json_file.close()
    loaded_model = tf.keras.models.model_from_json(loaded_model_json)
    # load weights into new model
    loaded_model.load_weights("Keras_models/model_16bit.weights.h5")
    print("Loaded model from disk")

    # evaluate loaded model on test data
    loaded_model.compile(optimizer='adam',
                  loss=tf.keras.losses.CategoricalCrossentropy(from_logits=True),
                  metrics=['accuracy'])
    
    print(loaded_model.summary())

    return loaded_model


def config_and_compile_hls4ml_model_from_keras_model(loaded_model):
    
    # Load configuration in HLS4ML tool on keras model
    config = hls4ml.utils.config_from_keras_model(loaded_model, 
                                                granularity='model',
                                                default_precision='ap_fixed<16,6>',
                                                default_reuse_factor=64, #1,2,4,8,16,32,64,160,320. 
                                                # or for Conv2D layer: 1,2,3,4,6,9,12,18,36,72,144,288
                                                default_strategy='Resource',
                                                )

    hls_model = hls4ml.converters.convert_from_keras_model(loaded_model,
                                                           hls_config=config,
                                                           io_type='io_stream', # Set to io_stream for CNN
                                                           clock_period=10,
                                                           output_dir='model_4/hls4ml_prj',
                                                           part='xc7z020clg400-1',
                                                           backend='Vivado'
                                                           )
    
    print("___________________________________________________________________")
    print("HLS4ML conversion succesful\n ")
    # .plot_model function saves model to .png
    hls4ml.utils.plot_model(hls_model, to_file="hls_model.png", show_shapes=True, show_precision=True)
    print("HLS4ML model plot saved\n ")

    #################################### PREDICTIONS ON FPGA FIRMWARE ####################################
    # Readies the HLS model for emulation
    hls_model.compile()
    
    return hls_model


def hls_vs_tf_model_comparison(loaded_model, hls_model, test_images, test_labels)-> tuple:

    hls_labels = hls_model.predict(test_images) # Executes the FPGA firmware with bit-accurate emulation on the CPU.
    print("FPGA simulation ready\n ")
    
    # Calculating accuracy and crossentropy loss of HLS_model
    hls_accuracy = accuracy_score(np.argmax(test_labels,axis=1), np.argmax(hls_labels, axis=1))
    hls_crossentropyloss = log_loss(y_true=test_labels, y_pred=hls_labels)
    metrics_tuple = (hls_crossentropyloss, hls_accuracy)

    print("___________________________________________________________________")
    print("HLS4ML model evaluation \t Loss: {:.2f} \t Accuracy: {:.2f}%".format(metrics_tuple[0], metrics_tuple[1]*100))    
    ## Determine accuracy of Kera model, for comparison
    keras_score = loaded_model.evaluate(test_images, test_labels, verbose=0)
    print("Keras  model evaluation \t Loss: {:.2f} \t Accuracy: {:.2f}%".format(keras_score[0],keras_score[1]*100))
    print("___________________________________________________________________")

    return metrics_tuple


def main():
    # test set n=10.000, 28x28 px images from MNIST
    test_images = np.load('Keras_models/test_images.npy')
    test_labels = np.load('Keras_models/test_labels.npy')
    # Set dtype of test_images, for interactions with numpy and scikitlearn functions
    test_images = np.ascontiguousarray(test_images, dtype='float32')

    # Load tf.keras model from local json file and h5 weight file
    loaded_model = load_keras_model_from_json_file()

    hls_model = config_and_compile_hls4ml_model_from_keras_model(loaded_model)

    hls_vs_tf_model_comparison(loaded_model, hls_model,test_images,test_labels)

    # Run Vivado
    if build == True:
        hls_model.build(csim=True,
                        synth=True,
                        vsynth=True,
                        export=True,
                        bitfile=True,
                        )
        print("##############################\n\t DONE \t\n##############################")
        # Check reports
        hls4ml.report.read_vivado_report('model_4/hls4ml_prj/')
    else:
        print("##################################\n\t Model not build \t\n#################################")


if __name__ == "__main__":
    main()