# General imports
import logging
import os
import subprocess
import time
import numpy as np
import matplotlib.pyplot as plt

from WirelessEndoscopyCapsule import run_openlane2, main_menu_text, replace_model_weights_with_prune_equivalent, load_keras_model_from_json_file, model_evaluation_and_generic_quantization, config_and_compile_hls4ml_model_from_CNN_model, config_and_compile_hls4ml_model_from_keras_model, hls_bitstream_results, current_script_path, subfolder_path

# TensorFlow and Keras imports
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '3'  # FATAL
logging.getLogger('tensorflow').setLevel(logging.FATAL)
print("Running tensorflow - log set to minimum. Can be changed ")
import tensorflow as tf
import tensorflow_model_optimization as tfmot
from tensorflow_model_optimization.python.core.sparsity.keras import prune, pruning_callbacks, pruning_wrapper, pruning_schedule
from keras.utils import to_categorical
from keras.datasets import mnist, cifar10
from keras import layers, models, activations
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

# Get the path of the current script
current_script_path = current_script_path
# Navigate to the subfolder from the current script path
subfolder_path = subfolder_path

# Time stamp (may be used for saving files)
timestr = time.strftime("%Y%m%d-%H%M%S") #used for timestamping iterations

## Set path for Vivado and Vitis HLS
os.environ['PATH'] += os.pathsep + '/tools/Xilinx/Vivado/2020.1/bin'
#os.environ['PATH'] += os.pathsep + '/home/pominiq/vitis_complete/Vivado/2023.2/bin'
#os.environ['PATH'] += os.pathsep + '/home/pominiq/vitis_complete/Vitis_HLS/2023.2/bin'

###############################################################################################
############################################ MAIN #############################################
###############################################################################################
# Main function. Here the actual flow is run
def main():    
    # Used to load model from folder, or to save project with
    modelname =             "Dummy_PR75_RF1"

    #Flow step variables

    #### Step 1
    train =                 True
    pruning =               True

    # List of example models
    TEST =                  False        # For testing individual layers
    DUMMY =                 True       # Used to test dense and activation layers
    MNIST =                 False       # Baseline CNN
    CIFAR =                 False       # Compatibility CNN with Separable Conv2D and pruning

    #### Step 2
    hls_model_comparison =  True
    default_reuse_factor =  1           # Lowest is RF = 1
    clock_period =          25         # in nanoseconds, 1 / 2.5e-9 = 400 MHz
    
    #### Step 3
    backend =               'Vivado'
    build =                 True

    #### Step 4
    # Not recommended
    openlane =              False

    # Main menu text
    main_menu_text(train, hls_model_comparison, build, openlane)

    # Step 1: Either train an example model or load model from a folder
    if train == False:
        print("___________________________________\nLOADING MODEL FROM SUBFOLDER PATH\n___________________________________")
        # load data numpy test images and labels for dataset from same folder
        #test_images = np.load('{}/test_images_{}.npy'.format(subfolder_path,modelname))
        #test_labels = np.load('{}/test_labels_{}.npy'.format(subfolder_path,modelname))
        #model = load_keras_model_from_json_file("model_16bit_{}".format(modelname))
        model = models.load_model("Folder_1_TensorFlow_model/TensorFlow_CNN_model/{}.keras".format(modelname))

    if TEST == True:
        # Tuple of NumPy arrays: (x_train, y_train), (x_test, y_test)
        (train_images, train_labels), (test_images, test_labels) = cifar10.load_data()
        # Normalize pixel values to be between 0 and 1
        train_images, test_images = train_images / 255.0, test_images / 255.0
        
        if train == True:
            model = create_example_model_MobileNet_SepConv2D(train_images, train_labels, test_images, test_labels)

    elif DUMMY == True:
        # Load Iris dataset
        iris = load_iris()
        # Features and labels
        X = iris.data
        y = iris.target
        # Splitting the dataset into train and test sets
        train_images, test_images, train_labels, test_labels = train_test_split(X, y, test_size=0.25, random_state=42)

        # Scaling features
        scaler = StandardScaler()
        train_images = scaler.fit_transform(train_images)
        test_images = scaler.transform(test_images.reshape(-1,4))
        
        if train == True:
            model = create_example_model_IRIS(pruning, train_images, train_labels, test_images, test_labels)

    elif MNIST == True:
        # Tuple of NumPy arrays: (x_train, y_train), (x_test, y_test)
        (train_images, train_labels), (test_images, test_labels) = mnist.load_data()
        # Reshape and normalize images
        train_images = train_images.reshape((60000, 28, 28, 1))
        train_images = train_images.astype('float16') / 255
        test_images = test_images.reshape((10000, 28, 28, 1))
        test_images = test_images.astype('float16') / 255
        # One-hot encode labels (keep this as float32 for stability in the loss calculations)
        train_labels = to_categorical(train_labels, dtype='float32')
        test_labels = to_categorical(test_labels, dtype='float32')

        if train == True:
            model = create_example_model_MNIST(train_images, train_labels, test_images, test_labels)

    elif CIFAR == True:
        # Tuple of NumPy arrays: (x_train, y_train), (x_test, y_test)
        (train_images, train_labels), (test_images, test_labels) = cifar10.load_data()
        # Normalize pixel values to be between 0 and 1
        train_images, test_images = train_images / 255.0, test_images / 255.0

        if train == True:
            print("___________________________________\nTRAINING MODELS\n___________________________________")
            # Create the desired example model
            model = create_example_model_CIFAR(modelname, train_images, train_labels, test_images, test_labels)

    # Prune model
    if pruning == True and DUMMY == False:
        model = pruning_routine(model, train_images, train_labels, test_images, test_labels)

    # Evaluate and quantize to 16-bit. Save the models.
    model_evaluation_and_generic_quantization(model, modelname, train_images, train_labels, test_images, test_labels, MNIST)

    # Step 2: Create HLS model and make comparisons
    if hls_model_comparison == True:
        print("___________________________________\nGENERATING HLS MODEL W/ COMPARISON\n___________________________________")
        # Compile HLS4ML model from loaded model
        if TEST == True or CIFAR == True or MNIST == True:
            hls_model = config_and_compile_hls4ml_model_from_CNN_model(model,default_reuse_factor,clock_period,backend)
        elif DUMMY == True:
            hls_model = config_and_compile_hls4ml_model_from_keras_model(model,default_reuse_factor,clock_period,backend)

        # Output comparison
        hls_bitstream_results(hls_model, test_images, test_labels)
    else:
        print("___________________________________\nHLS MODEL NOT CREATED\n___________________________________")
        build = False


    # Step 3: Either run Vivado HLS 2020.1 or do nothing
        # Can be expanded to add Vitis and Quartis
    if build == True:
        print("___________________________________\HLS ACTIVATED\n___________________________________")

        hls_model.build(csim=True,
                        synth=True,
                        vsynth=True,
                        export=True,
                        )
        print("##############################\n\t DONE \t\n##############################")
        # Check reports
        hls4ml.report.read_vivado_report('Folder_2_HLS4ML_Vivado_HLS/models/hls4ml_prj')
    else:
        print("___________________________________\nNO VERILOG GENERATED\n___________________________________")


    # Step 4: Run it through openlane
    if openlane == True:
        run_openlane2(clock_period)
    else:
        print("___________________________________\nNO LAYOUT ATTEMPT\n___________________________________")


###############################################################################################
########################################### MODELS ############################################
###############################################################################################
def create_a_layer(modelname):
    # Tuple of NumPy arrays: (x_train, y_train), (x_test, y_test)
    (train_images, train_labels), (test_images, test_labels) = cifar10.load_data()
    # Normalize pixel values to be between 0 and 1
    train_images, test_images = train_images / 255.0, test_images / 255.0

    # Model architecture
    model = models.Sequential()
    model.add(layers.Input(shape=(32, 32, 3)))
    model.add(layers.SeparableConv2D(32, (3,3), activation='relu'))
    model.add(layers.MaxPooling2D((2,2)))
    model.add(layers.BatchNormalization())
    model.add(layers.Flatten())
    model.add(layers.Dense(32, activation='relu'))
    model.add(layers.Dense(10, dtype='float32', activation='softmax'))
    
    model.summary()
    
    model.compile(optimizer='adam',
              loss=tf.keras.losses.SparseCategoricalCrossentropy(),
              metrics=['accuracy'])

    history = model.fit(train_images, train_labels, epochs=5, 
                    validation_data=(test_images, test_labels))

    # Train the CNN model
    score = model.evaluate(test_images, test_labels, verbose=0)
    print("Model evaluation \t loss: {:.2f} \t accuracy: {:.2f}%".format(score[0],score[1]*100))
    # Evaluate and quantize to 16-bit. Save all the models.
    model_evaluation_and_generic_quantization(model, modelname, train_images, train_labels, test_images, test_labels)

    return (model, test_images, test_labels)

# Downloads, trains and creates 
# the example IRIS dense and activation layer test
def create_example_model_IRIS(pruning, train_images, train_labels, test_images, test_labels):

    model = models.Sequential()
    model.add(layers.Dense(128, activation='relu',input_shape=(4,)))
    model.add(layers.Dense(3, activation='softmax'))

    model.compile(optimizer='adam',
        loss=tf.keras.losses.SparseCategoricalCrossentropy(),
        metrics=['accuracy'])

    # Train the SLP model
    model.fit(train_images, train_labels, epochs=50)
    print(model.summary())
    score = model.evaluate(test_images, test_labels, verbose=0)
    print("Model evaluation \t loss: {:.2f} \t accuracy: {:.2f}%".format(score[0],score[1]*100))

    if pruning == True:
        print("_________ With Pruning _________")
        pruning_schedule = tfmot.sparsity.keras.ConstantSparsity(0.75,
                                                                begin_step=0,
                                                                frequency=1)
        pruned_model = tfmot.sparsity.keras.prune_low_magnitude(model, 
                                                        pruning_schedule=pruning_schedule)
        # Define the pruning callback
        callbacks = [
        tfmot.sparsity.keras.UpdatePruningStep()
        ]

        pruned_model.compile(optimizer='adam',
                    loss=tf.keras.losses.SparseCategoricalCrossentropy(),
                    metrics=['accuracy'])

        # Train the SLP model
        pruned_model.fit(train_images, train_labels, epochs=50, callbacks=callbacks)
        print(pruned_model.summary())
        
        total_zeros = 0
        total_params = 0
        for layer in model.layers:
            if isinstance(layer, layers.Dense) or isinstance(layer, layers.SeparableConv2D):
                # Assuming weights are in the first element of the list
                weights = layer.get_weights()[0] 
                layer_zeros = np.sum(weights == 0)
                total_zeros += layer_zeros
                total_params += weights.size

        percentage = (total_zeros/total_params)*100
        print("Total zeros: {}\t Total params: {}\t 0Percentage: {:.2f}%".format(total_zeros, total_params, percentage))
        
        score = pruned_model.evaluate(test_images, test_labels, verbose=0)
        print("Pruned model evaluation \t loss: {:.2f} \t accuracy: {:.2f}%".format(score[0],score[1]*100))

        # To preserve layer type (for compatibility with HLS4ML), the prune mask created
        # by tfmot is effectively removed
        model = replace_model_weights_with_prune_equivalent(model, pruned_model)

    return model

# Baseline: 
# The "AI by AI" MNIST CNN
def create_example_model_MNIST(train_images,train_labels,test_images,test_labels):

    # Model architecture
    model = models.Sequential()
    model.add(layers.Conv2D(4, (3, 3), activation='relu', input_shape=(28, 28, 1)))
    model.add(layers.MaxPooling2D((4, 4)))
    model.add(layers.Conv2D(8, (3, 3), activation='relu'))
    model.add(layers.MaxPooling2D((2, 2)))
    model.add(layers.Flatten())
    model.add(layers.Dense(10, dtype='float32', activation='softmax'))  # Ensure that the final layer has float32 dtype

    model.compile(optimizer='adam',
                loss=tf.keras.losses.CategoricalCrossentropy(),
                metrics=['accuracy'])

    # Train the CNN model
    history = model.fit(train_images, train_labels, epochs=10, validation_data=(test_images, test_labels))
    print(model.summary())

    # Evaluate
    score = model.evaluate(test_images, test_labels, verbose=0)
    print("Model evaluation \t loss: {:.2f} \t accuracy: {:.2f}%".format(score[0],score[1]*100))

    plt.figure(figsize=(8,5))
    plt.plot(history.history['accuracy'], label='accuracy', color='blue')
    plt.plot(history.history['val_accuracy'], label = 'val_accuracy',color='lightblue')
    plt.text(len(history.history['accuracy']) - 1, history.history['accuracy'][-1], 
             f'{history.history["accuracy"][-1]:.4f}', fontsize=14, color='blue', ha='center')
    plt.text(len(history.history['val_accuracy']) - 1, history.history['val_accuracy'][-1], 
             f'{history.history["val_accuracy"][-1]:.4f}', fontsize=14, color='lightblue', ha='center')
    plt.xlabel('Epoch')
    plt.ylabel('Accuracy')
    plt.ylim([0.5, 1])
    plt.legend(loc='upper left')
    plt.grid(True)
    plt.show()

    return model

# Compatibility model: 
# Small separable convolution CNN
def create_example_model_CIFAR(modelname,train_images,train_labels,test_images,test_labels):

    # Model architecture
    model = models.Sequential()
    model.add(layers.Input(shape=(32, 32, 3)))
    model.add(layers.SeparableConv2D(32, (3,3), activation='relu'))
    model.add(layers.MaxPooling2D((2,2)))
    model.add(layers.BatchNormalization())
    model.add(layers.SeparableConv2D(64, (3,3), activation='relu'))
    model.add(layers.MaxPooling2D(4,4))
    model.add(layers.BatchNormalization())
    model.add(layers.SeparableConv2D(64, (3, 3), activation='relu'))
    model.add(layers.Flatten())
    model.add(layers.Dense(32, activation='relu'))
    model.add(layers.Dense(10, dtype='float32', activation='softmax'))
    
    model.summary()
    
    model.compile(optimizer='adam',
              loss=tf.keras.losses.SparseCategoricalCrossentropy(),
              metrics=['accuracy'])

    # Train the CNN model
    history = model.fit(train_images, train_labels, epochs=15, 
                    validation_data=(test_images, test_labels))

    # Evaluate
    score = model.evaluate(test_images, test_labels, verbose=0)
    print("Model evaluation \t loss: {:.2f} \t accuracy: {:.2f}%".format(score[0],score[1]*100))

    plt.figure(figsize=(8,5))
    plt.plot(history.history['accuracy'], label='accuracy', color='blue')
    plt.plot(history.history['val_accuracy'], label = 'val_accuracy',color='lightblue')
    plt.text(len(history.history['accuracy']) - 1, history.history['accuracy'][-1], 
             f'{history.history["accuracy"][-1]:.4f}', fontsize=14, color='blue', ha='center')
    plt.text(len(history.history['val_accuracy']) - 1, history.history['val_accuracy'][-1], 
             f'{history.history["val_accuracy"][-1]:.4f}', fontsize=14, color='lightblue', ha='center')
    plt.xlabel('Epoch')
    plt.ylabel('Accuracy')
    plt.ylim([0.5, 1])
    plt.legend(loc='upper left')
    plt.grid(True)
    plt.show()

    return model

# MobileNet-inspired model:
# Uses a more manual approach to Depthwise-Separable convolution from that paper
def separable_conv_block(model, filters, kernel_size, strides, padding='same'):
    
    model.add(layers.DepthwiseConv2D(kernel_size=kernel_size, strides=strides, padding=padding))
    model.add(layers.BatchNormalization())
    model.add(layers.ReLU())
    model.add(layers.Conv2D(filters=filters, kernel_size=1, strides=1))
    model.add(layers.BatchNormalization())
    model.add(layers.ReLU())
    return model

def create_example_model_MobileNet_SepConv2D(train_images, train_labels, test_images, test_labels):
    
    model = models.Sequential()
    model.add(layers.Input(shape=(32, 32, 3)))
    model.add(layers.DepthwiseConv2D(kernel_size=3, strides=1, activation='relu'))
    model.add(layers.MaxPooling2D((2, 2)))
    
    #model.add(layers.Input(shape=(32, 32, 3)))
    #model = separable_conv_block(model, filters=16, kernel_size=3, strides=1)
    #model.add(layers.MaxPooling2D(2,2))
    #model = separable_conv_block(model, filters=16, kernel_size=3, strides=1)
    #model.add(layers.MaxPooling2D(2,2))
    #model = separable_conv_block(model, filters=24, kernel_size=3, strides=1)
    #model.add(layers.MaxPooling2D(2,2))
    model.add(layers.Flatten())
    model.add(layers.Dense(units=10, dtype='float32', activation='softmax'))
    model.summary()

    model.compile(optimizer='adam',
              loss=tf.keras.losses.SparseCategoricalCrossentropy(),
              metrics=['accuracy'])

    # Train the CNN model
    history = model.fit(train_images, train_labels, epochs=20, 
                    validation_data=(test_images, test_labels))

    # Evaluate
    score = model.evaluate(test_images, test_labels, verbose=0)
    print("Model evaluation \t loss: {:.2f} \t accuracy: {:.2f}%".format(score[0],score[1]*100))

    plt.figure(figsize=(8,5))
    plt.plot(history.history['accuracy'], label='accuracy', color='blue')
    plt.plot(history.history['val_accuracy'], label = 'val_accuracy',color='lightblue')
    plt.text(len(history.history['accuracy']) - 1, history.history['accuracy'][-1], 
             f'{history.history["accuracy"][-1]:.4f}', fontsize=14, color='blue', ha='center')
    plt.text(len(history.history['val_accuracy']) - 1, history.history['val_accuracy'][-1], 
             f'{history.history["val_accuracy"][-1]:.4f}', fontsize=14, color='lightblue', ha='center')
    plt.xlabel('Epoch')
    plt.ylabel('Accuracy')
    plt.ylim([0.5, 1])
    plt.legend(loc='upper left')
    plt.grid(True)
    plt.show()

    return model

# Generic polynomial decay pruning routine
def pruning_routine(model,train_images, train_labels, test_images, test_labels):
    
    batch_size = 128
    epochs = 1
    validation_split = 0.1 # 10% of training set will be used for validation set. 
    num_images = train_images.shape[0] * (1 - validation_split)
    end_step = np.ceil(num_images / batch_size).astype(np.int32) * epochs

    print("_________ With Pruning _________")
    pruning_schedule = tfmot.sparsity.keras.PolynomialDecay(initial_sparsity=0.5,
                                                            final_sparsity=0.7,
                                                            begin_step=0,
                                                            end_step=end_step)
    pruned_model = tfmot.sparsity.keras.prune_low_magnitude(model, 
                                                    pruning_schedule=pruning_schedule)
    # Define the pruning callback
    callbacks = [
    tfmot.sparsity.keras.UpdatePruningStep()
    ]

    pruned_model.compile(optimizer='adam',
            loss=tf.keras.losses.SparseCategoricalCrossentropy(),
            metrics=['accuracy'])

    # Train the pruned model
    pruned_history = pruned_model.fit(train_images, train_labels, epochs=epochs, batch_size=batch_size, 
                validation_split=validation_split, callbacks=callbacks)

    print(pruned_model.summary())

    score = pruned_model.evaluate(test_images, test_labels, verbose=0)
    print("Pruned model evaluation \t loss: {:.2f} \t accuracy: {:.2f}%".format(score[0],score[1]*100))

    # To preserve layer type (for compatibility with HLS4ML), 
    # the prune mask created by tfmot is removed
    model = replace_model_weights_with_prune_equivalent(model, pruned_model)

    print(model.summary())
    
    total_zeros = 0
    total_params = 0
    for layer in model.layers:
        if isinstance(layer, layers.Dense) or isinstance(layer, layers.SeparableConv2D):
            # Assuming weights are in the first element of the list
            weights = layer.get_weights()[0] 
            layer_zeros = np.sum(weights == 0)
            total_zeros += layer_zeros
            total_params += weights.size
    
    percentage = (total_zeros/total_params)*100
    print("Total zeros: {}\t Total params: {}\t 0Percentage: {:.2f}%".format(total_zeros, total_params, percentage))
    
    model.compile(optimizer='adam',
            loss=tf.keras.losses.SparseCategoricalCrossentropy(),
            metrics=['accuracy'])
    
    score = model.evaluate(test_images, test_labels, verbose=0)
    print("Post-save pruned model evaluation \t loss: {:.2f} \t accuracy: {:.2f}%".format(score[0],score[1]*100))

    """
    plt.figure(figsize=(8,5))
    plt.plot(pruned_history.history['accuracy'], label='PrunedCNN acc', color='red')
    plt.plot(pruned_history.history['val_accuracy'], label='PrunedCNN val_acc', color='salmon')
    plt.text(len(pruned_history.history['accuracy']) - 1, pruned_history.history['accuracy'][-1], 
            f'{pruned_history.history["accuracy"][-1]:.4f}', fontsize=14, color='red', ha='center')
    plt.text(len(pruned_history.history['val_accuracy']) - 1, pruned_history.history['val_accuracy'][-1], 
            f'{pruned_history.history["val_accuracy"][-1]:.4f}', fontsize=14, color='salmon', ha='center')
    plt.xlabel('Epoch')
    plt.ylabel('Accuracy')
    plt.ylim([0.5, 1])
    plt.legend(loc='upper left')
    plt.grid(True)
    plt.show()
    """

    return model


## Openlane2 flow
class Openlane2Flow(SequentialFlow):
    Steps = [
        Yosys.Synthesis,
        Checker.YosysUnmappedCells,
        Checker.YosysSynthChecks,
        OpenROAD.CheckSDCFiles,
        OpenROAD.Floorplan,
        OpenROAD.CutRows,
        OpenROAD.TapEndcapInsertion,
        OpenROAD.IOPlacement,
        OpenROAD.GlobalPlacement,
        OpenROAD.RepairDesignPostGPL,
        OpenROAD.DetailedPlacement,
        OpenROAD.CTS,
        OpenROAD.ResizerTimingPostCTS,
        OpenROAD.GlobalRouting,
        OpenROAD.RepairDesignPostGRT,
        OpenROAD.GeneratePDN,
        OpenROAD.RepairAntennas,
        OpenROAD.DetailedRouting,
        OpenROAD.CheckAntennas,
        OpenROAD.FillInsertion,
        OpenROAD.IRDropReport,
        Magic.StreamOut,
        Magic.DRC,
        Magic.SpiceExtraction,
        Netgen.LVS
    ]


if __name__ == "__main__":
    main()
