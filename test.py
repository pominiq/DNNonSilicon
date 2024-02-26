 General imports
import logging
import os
import subprocess
import time
import numpy as np
import matplotlib.pyplot as plt

# TensorFlow and Keras imports
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '3'  # FATAL
logging.getLogger('tensorflow').setLevel(logging.FATAL)
print("Running tensorflow")
import tensorflow as tf
import tensorflow_model_optimization as tfmot
from tensorflow_model_optimization.python.core.sparsity.keras import prune, pruning_callbacks, pruning_wrapper, pruning_schedule
from keras.utils import to_categorical
from keras.datasets import mnist, imdb, cifar10
from keras import layers, models, preprocessing
from qkeras.utils import _add_supported_quantized_objects

# SciKit learn imports
from sklearn.metrics import log_loss, accuracy_score # sklearn has an easy interface for testing
from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import OneHotEncoder, StandardScaler

# HLS4ML imports
import hls4ml # Engine for generating Verilog-files from ML models
from hls4ml.model.profiling import numerical
from hls4ml.converters.keras_to_hls import get_supported_keras_layers

## Openlane2 imports
from openlane.flows import SequentialFlow, Flow
from openlane.steps import Yosys, Misc, OpenROAD, Magic, Netgen, Checker


def separable_conv_block(model, filters, kernel_size, strides, padding='same'):
    
    model.add(layers.DepthwiseConv2D(kernel_size=kernel_size, strides=strides, padding=padding))
    model.add(layers.BatchNormalization())
    model.add(layers.Activation(activation='relu'))

    model.add(layers.Conv2D(filters=filters, kernel_size=1, strides=1))
    model.add(layers.BatchNormalization())
    model.add(layers.Activation(activation='relu'))

    return model
  
def create_example_model_MobileNet_SepConv2D(train_images, train_labels, test_images, test_labels):
    
    model = models.Sequential()
    model.add(layers.Input(shape=(32, 32, 3)))
    model = separable_conv_block(model, filters=32, kernel_size=3, strides=1)
    model = separable_conv_block(model, filters=64, kernel_size=3, strides=2)
    model = separable_conv_block(model, filters=64, kernel_size=3, strides=2)
    model.add(layers.MaxPooling2D(2,2))
    model.add(layers.Flatten())
    model.add(layers.Dense(units=10, dtype='float32', activation='softmax'))
    model.summary()

    model.compile(optimizer='adam',
              loss=tf.keras.losses.SparseCategoricalCrossentropy(),
              metrics=['accuracy'])

    # Train the CNN model
    history = model.fit(train_images, train_labels, epochs=1, 
                    validation_data=(test_images, test_labels))

    # Evaluate
    score = model.evaluate(test_images, test_labels, verbose=0)
    print("Model evaluation \t loss: {:.2f} \t accuracy: {:.2f}%".format(score[0],score[1]*100))


    return model




