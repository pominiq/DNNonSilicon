
# General imports
import logging
import os
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '3'  # FATAL
logging.getLogger('tensorflow').setLevel(logging.FATAL)

import subprocess
import time
import numpy as np
from sklearn.metrics import log_loss, accuracy_score # sklearn has an easy interface for testing

# TensorFlow imports
import tensorflow as tf
import tensorflow_model_optimization as tfmot
from keras.utils import to_categorical
import numpy as np
from keras.datasets import mnist
from keras import layers, models

# HLS4ML imports
import hls4ml # Engine for generating Verilog-files from ML models
from hls4ml.model.profiling import numerical

## Openlane related imports
from openlane.flows import SequentialFlow, Flow
from openlane.steps import Yosys, Misc, OpenROAD, Magic, Netgen, Checker

# Get the path of the current script
current_script_path = os.path.dirname(os.path.abspath(__file__))
# Navigate to the subfolder from the current script path
subfolder_path = os.path.join(current_script_path, 'Folder_1_TensorFlow_model/TensorFlow_CNN_model')

import time
timestr = time.strftime("%Y%m%d-%H%M%S") #used for timestamping iterations

## Set path for Vivado HLS
os.environ['PATH'] += os.pathsep + '/tools/Xilinx/Vivado/2020.1/bin'

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

def main_menu_text(train, hls_model_comparison, build, openlane):
    print("Welcome to text-based UI version of the flow")
    print("_____________________________________________")
    print("Using model and datasets from folder:")
    print(subfolder_path)
    print("_____________________________________________")
    print("Scripts for the individual steps can be found in the various subfolders. There it is also possible to find the experimental PandaBambu version of the flow.")
    print("The flow requires some specific dependencies, which can be found in the accompanying requirements.txt file for pip installs, and install.md for larger software suites like Vivado HLS and Openlane2.")
    print("I take no credit for the technologies used to create this flow. I simply tried to compile various blocks for the novelty.")
    print("_____________________________________________")
    print("\nInstructions for this script:")
    print("The flow consists of the following steps")
    print("1. Importing NN model.")
    print("2. Using HLS4ML to generate a HLS-compatible version of the imported NN model.")
    print("3. Running the HLS4ML model through Vivado HLS.")
    print("4. Sending the produced Verilog file to Openlane2 for layout creation.")

    # Display overall flow step variables
    print("\nRunning script with\n1. Train example model: \t\t{}\n2. Compare model with HLS generated: \t{}\n3. Build HLS model with Vivado: \t{}\n4. Start Openlane2: \t\t\t{}".format(train, 
                                                                                                                                                hls_model_comparison, 
                                                                                                                                                build,
                                                                                                                                                openlane))

# Downloads, trains and creates the example MNIST CNN model
def create_example_model(train_images, train_labels, test_images, test_labels):
        
    model = models.Sequential()
    model.add(layers.Conv2D(4, (3, 3), activation='relu', input_shape=(28, 28, 1)))
    model.add(layers.MaxPooling2D((4, 4)))
    model.add(layers.Conv2D(8, (3, 3), activation='softmax'))
    model.add(layers.MaxPooling2D((2, 2)))
    model.add(layers.Flatten())
    model.add(layers.Dense(10, dtype='float32', activation='tanh'))  # Ensure that the final layer has float32 dtype

    model.compile(optimizer='adam',
                loss=tf.keras.losses.CategoricalCrossentropy(from_logits=True),
                metrics=['accuracy'])

    # Train the CNN model
    model.fit(train_images, train_labels, epochs=10)
    print(model.summary())

    print("___________2___________")
    score = model.evaluate(test_images, test_labels, verbose=0)
    print("Model evaluation \t loss: {:.2f} \t accuracy: {:.2f}%".format(score[0],score[1]*100))
    save_model_and_dataset(model, train_images,train_labels,test_images,test_labels)


    print("___________3___________")
    print("Quantization to 16-bit precision")
    # Quantize the weights of the model
    model_16bit = quantize_weights_to_16bit(model)
    
    # serialize model to JSON
    model_json = model_16bit.to_json()
    with open("{}/model_16bit.json".format(subfolder_path), "w") as json_file:
        json_file.write(model_json)
    
    # serialize weights to HDF5
    model_16bit.save_weights("{}/model_16bit.weights.h5".format(subfolder_path))
    print("Saved 16-bit model to disk")
    
    score = model_16bit.evaluate(test_images, test_labels, verbose=0)
    print("16-bit Model evaluation \t loss: {:.2f} \t accuracy: {:.2f}%".format(score[0],score[1]*100))
    
    print("___________4___________")
    # checks if this model can be implemented completely unrolled (=parallel)
    # for Vivado-enforced unroll limit of 4096.
    print("Completely Unrolled size must adhere to <4096 for Vivado compiler")
    for layer in model.layers:
        if layer.__class__.__name__ in ['Conv2D', 'Dense']:
            w = layer.get_weights()[0]
            layersize = np.prod(w.shape)
            print("{}: {}".format(layer.name, layersize))  # 0 = weights, 1 = biases
            if layersize > 4096:  # assuming that shape[0] is batch, i.e., 'None'
                print("Layer {} is too large ({}), are you sure you want to train?".format(layer.name, layersize))

    return model

# Loads keras model from folder
def load_keras_model_from_json_file(modelname):
    
    # load json and create model
    json_file = open('{}/{}.json'.format(subfolder_path, modelname), 'r')
    loaded_model_json = json_file.read()
    json_file.close()
    loaded_model = tf.keras.models.model_from_json(loaded_model_json)
    # load weights into new model
    loaded_model.load_weights("{}/{}.weights.h5".format(subfolder_path, modelname))
    print("Loaded model from disk")

    # evaluate loaded model on test data
    loaded_model.compile(optimizer='adam',
                  loss=tf.keras.losses.CategoricalCrossentropy(from_logits=True),
                  metrics=['accuracy'])
    
    return loaded_model

# Saves model and data
def save_model_and_dataset(model, train_images,train_labels,test_images,test_labels):
    
    # Save for use with HLS4ML
    #   - serialize model to JSON
    #   - serialize weights to HDF5
    model_json = model.to_json()
    with open("{}/model.json".format(subfolder_path), "w") as json_file:
        json_file.write(model_json)

    model.save_weights("{}/model.weights.h5".format(subfolder_path))
    print("Saved model to disk")

    # Save for use with keras2c
    #   - save as keras model object
    model.save("{}/keras_model_object.h5".format(subfolder_path), save_format='h5')

    # Save test and training sets
    np.save('{}/train_images.npy'.format(subfolder_path), train_images)
    np.save('{}/train_labels.npy'.format(subfolder_path), train_labels)
    np.save('{}/test_images.npy'.format(subfolder_path), test_images)
    np.save('{}/test_labels.npy'.format(subfolder_path), test_labels)
    print("- Succesfully saved IO training and test sets as .npy-files")

# Manually quantize weights to 16-bit
def quantize_weights_to_16bit(model):
    for layer in model.layers:
        if hasattr(layer, 'weights'):
            weights = layer.get_weights()
            quantized_weights = [np.float16(w) for w in weights]
            layer.set_weights(quantized_weights)
    return model

# Compiles HLS4Ml model from imported TF model based on config parameters
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
                                                           clock_period=25,
                                                           output_dir='Folder_2_HLS4ML_Vivado_HLS/models/hls4ml_prj',
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

# Compares the HLS4ML bit-stream model with TF model
def hls_vs_tf_model_comparison(loaded_model, hls_model, test_images, test_labels)-> tuple:

    # Set dtype of test_images, for interactions with numpy and scikitlearn functions
    test_images = np.ascontiguousarray(test_images, dtype='float32')
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
    #Flow step variables
    train = False
    hls_model_comparison = False
    build = False
    openlane = False

    main_menu_text(train, hls_model_comparison, build, openlane)


    # Step 1: Either train MNIST model or load model from a folder
    if train == True:
        print("___________________________________\nTRAINING MNIST EXAMPLE MODEL\n___________________________________")
        ## Load dataset
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
        # Create the example model
        model = create_example_model(train_images,train_labels,test_images,test_labels)        
    else:
        print("___________________________________\nLOADING MODEL FROM SUBFOLDER PATH\n___________________________________")
        # load data numpy test images and labels for dataset from same folder
        test_images = np.load('{}/test_images.npy'.format(subfolder_path))
        test_labels = np.load('{}/test_labels.npy'.format(subfolder_path))        
        # model filename without extension. I requirement calling .json-file and weights.h5-file the same
        modelname = "model"
        model = load_keras_model_from_json_file(modelname)


    # Step 2: Create HLS model and make comparisons
    if hls_model_comparison == True:
        print("___________________________________\nGENERATING HLS MODEL W/ COMPARISON\n___________________________________")
        # Compile HLS4ML model from loaded model
        hls_model = config_and_compile_hls4ml_model_from_keras_model(model)
        # Output comparison
        hls_vs_tf_model_comparison(model, hls_model,test_images,test_labels)
    else:
        print("___________________________________\nHLS MODEL NOT CREATED\n___________________________________")
        build = False


    # Step 3: Either run Vivado HLS 2020.1 or do nothing
    if build == True:
        print("___________________________________\nVIVADO ACTIVATED\n___________________________________")

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
        # To use openlane2, we need to run it through the nix-shell
        print("a bunch of bash commands and import openlane2 config")
        os.chdir('../openlane2')
        command = "ls & nix-shell"
        # Run the command using subprocess
        process = subprocess.Popen(command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        # Capture the output and errors, if any
        output, error = process.communicate()
        if process.returncode == 0:  # Check if the command ran successfully
            print("Output:")
            print(output.decode())  # Decode bytes to string and print the output
        else:
            print("Error:", error.decode())  # Print the error message if the command failed

        flow = Openlane2Flow(
            {
                "PDK": "sky130A",
                "DESIGN_NAME": "myproject",
                "VERILOG_FILES": "refg::$DESIGN_DIR/Folder_2_HLS4ML_Vivado_HLS/models/hls4ml_prj/myproject_prj/solution1/impl/verilog/*.v",
                "CLOCK_PORT": 'ap_clk',
                "CLOCK_PERIOD": 25,
                "RUN_HEURISTIC_DIODE_INSERTION": True,
                #### Yosys Synthesis specific parameters ###
                "USE_LIGHTER": False,
                "SYNTH_AUTONAME": False,
                "SYNTH_NO_FLAT": False,
                "SYNTH_SIZING": False,
                "SYNTH_ABC_BUFFERING": True,
                "SYNTH_SHARE_RESOURCES": True,
                "SYNTH_STRATEGY": "AREA 3",
                #### Floorplan specific parameters ###
                "FP_SIZING": "relative",
                #"DIE_AREA": [0, 0, 10000, 10000],
                "PL_TARGET_DENSITY_PCT": 50,
                "FP_CORE_UTIL": 30,
                "GPL_CELL_PADDING": 2,
                "PL_ROUTABILITY_DRIVEN": True,
                #"PL_BASIC_PLACEMENT": False, #Never run on large designs
                "PL_MAX_DISPLACEMENT_X": 500,
                "PL_MAX_DISPLACEMENT_Y": 500,
                "GRT_ALLOW_CONGESTION": False,
                "FP_PDN_VPITCH": 30,
                "FP_PDN_HPITCH": 30,
                "FP_PDN_VOFFSET": 5,
                "FP_PDN_HOFFSET": 5,
                "FP_PDN_SKIPTRIM": False,
                "PL_RESIZER_SETUP_SLACK_MARGIN": 0.4,
                "PL_RESIZER_HOLD_SLACK_MARGIN": 0.4,
                "GRT_RESIZER_SETUP_SLACK_MARGIN": 0.2,
                "GRT_RESIZER_HOLD_SLACK_MARGIN": 0.2,
                "MAGIC_DEF_LABELS": False,
                "HEURISTIC_ANTENNA_THRESHOLD": 110,
                "GRT_ANTENNA_ITERS": 5,
                "GRT_ADJUSTMENT": 0.2,
            },
            design_dir=".",
        )
        ## Starts the flow
        flow.start()

    else:
        print("___________________________________\nNO LAYOUT ATTEMPT\n___________________________________")

if __name__ == "__main__":
    main()
