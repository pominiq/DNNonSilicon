"""Converts keras model to C code and generates test suite

Args:
    model (keras Model or str): model to convert or path to saved .h5 file
    function_name (str): name of main function
    malloc (bool): whether to allocate variables on the stack or heap
    num_tests (int): how many tests to generate in the test suite
    verbose (bool): whether to print progress

Raises:
    ValueError: if model is not instance of keras.models.Model 

Returns:
    None
"""

import sys
sys.path.append('/home/pominiq/projectfolder/Folder_3_keras2c/keras2c/')

from keras2c.keras2c_main import k2c

model = "/home/pominiq/projectfolder/Folder_1_TensorFlow_model/TensorFlow_CNN_model/keras_model_object.h5"
function_name = "MNIST_CNN"

k2c(model, function_name, malloc=False, num_tests=10, verbose=True)

