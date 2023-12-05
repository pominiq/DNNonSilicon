"""
Date: Oct 18 14:00
Author: David Matthew Lane
Purpose: Creating CNN Keras model for use with HLS4ML

Model training with MNIST data set, (CNN)

Batch size definition:

    Batch size is a term used in machine learning and refers to the number of training examples utilised in one iteration. 
    The batch size can be one of three options:
        1. batch mode: where the batch size is equal to the total dataset thus making the iteration and epoch values equivalent
        2. mini-batch mode: where the batch size is greater than one but less than the total dataset size. Usually, a number that can be divided into the total dataset size.
        3. stochastic mode: where the batch size is equal to one. Therefore the gradient and the neural network parameters are updated after each sample.

    In general: Larger batch sizes result in faster progress in training, but don't always converge as fast. 
                Smaller batch sizes train slower, but can converge faster. It's definitely problem dependent.
    In general, the models improve with more epochs of training, to a point. They'll start to plateau in 
                accuracy as they converge. Try something like 50 and plot number of epochs (x axis) vs. 
                accuracy (y axis). You'll see where it levels out. 
"""

import tensorflow as tf
from keras.utils import to_categorical
import numpy as np
from keras.datasets import mnist
from keras import layers, models
from qkeras import *

import time
timestr = time.strftime("%Y%m%d-%H%M%S") #used for timestamping iterations

train = True


def load_keras_model_from_json_file():
    
    # load json and create model
    json_file = open('Keras_models/model.json', 'r')
    loaded_model_json = json_file.read()
    json_file.close()
    loaded_model = tf.keras.models.model_from_json(loaded_model_json)
    # load weights into new model
    loaded_model.load_weights("Keras_models/model.weights.h5")
    print("Loaded model from disk")

    # evaluate loaded model on test data
    loaded_model.compile(optimizer='adam',
                  loss=tf.keras.losses.CategoricalCrossentropy(from_logits=True),
                  metrics=['accuracy'])
    
    return loaded_model


def save_model_and_dataset(model, train_images,train_labels,test_images,test_labels):
        # serialize model to JSON
    model_json = model.to_json()
    with open("Keras_models/model.json", "w") as json_file:
        json_file.write(model_json)

    # serialize weights to HDF5
    model.save_weights("Keras_models/model.weights.h5")
    print("Saved model to disk")

    # Save test and training sets
    np.save('Keras_models/train_images.npy', train_images)
    np.save('Keras_models/train_labels.npy', train_labels)
    np.save('Keras_models/test_images.npy', test_images)
    np.save('Keras_models/test_labels.npy', test_labels)
    print("- Succesfully saved IO training and test sets as .npy-files")

# Manually quantize weights to 16-bit
def quantize_weights_to_16bit(model):
    for layer in model.layers:
        if hasattr(layer, 'weights'):
            weights = layer.get_weights()
            quantized_weights = [np.float16(w) for w in weights]
            layer.set_weights(quantized_weights)
    return model


def quantize_weights_to_8bit(model):
    for layer in model.layers:
        if hasattr(layer, 'weights'):
            weights = layer.get_weights()
            quantized_weights = [np.uint8(w * 255.0) for w in weights]  # Scaling weights to 0-255 range
            layer.set_weights(quantized_weights)
    return model

def main():
    
    ## Load dataset
    #   Tuple of NumPy arrays: (x_train, y_train), (x_test, y_test)
    (train_images, train_labels), (test_images, test_labels) = mnist.load_data()
    # Reshape and normalize images
    train_images = train_images.reshape((60000, 28, 28, 1))
    train_images = train_images.astype('float16') / 255
    test_images = test_images.reshape((10000, 28, 28, 1))
    test_images = test_images.astype('float16') / 255
    # One-hot encode labels (keep this as float32 for stability in the loss calculations)
    train_labels = to_categorical(train_labels, dtype='float32')
    test_labels = to_categorical(test_labels, dtype='float32')
    # Remove One-hot encoding for use with SparseCross    
    #train_labels = np.argmax(train_labels,axis=1)
    #test_labels = np.argmax(test_labels,axis=1)

    print("___________1___________")
    if train == True:
        model = models.Sequential()
        model.add(layers.Conv2D(4, (3, 3), activation='relu', input_shape=(28, 28, 1)))
        model.add(layers.MaxPooling2D((4, 4)))
        model.add(layers.Conv2D(8, (3, 3), activation='relu'))
        model.add(layers.MaxPooling2D((2, 2)))
        model.add(layers.Flatten())
        model.add(layers.Dense(10, dtype='float32'))  # Ensure that the final layer has float32 dtype

        model.compile(optimizer='adam',
                    loss=tf.keras.losses.CategoricalCrossentropy(from_logits=True),
                    metrics=['accuracy'])

        # Train the CNN model
        model.fit(train_images, train_labels, epochs=5)

    elif train == False:
        model = load_keras_model_from_json_file()

    print(model.summary())


    print("___________2___________")
    score = model.evaluate(test_images, test_labels, verbose=0)
    print("Model evaluation \t loss: {:.2f} \t accuracy: {:.2f}%".format(score[0],score[1]*100))
    save_model_and_dataset(model, train_images,train_labels,test_images,test_labels)

    print("___________3___________")
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

    print("___________4___________")
    print("Quantization to 16-bit precision")
    # Quantize the weights of the model
    model_16bit = quantize_weights_to_16bit(model)
    # serialize weights to HDF5
    model_16bit.save_weights("Keras_models/model_16bit.weights.h5")
    print("Saved 16-bit model to disk")
    score = model_16bit.evaluate(test_images, test_labels, verbose=0)
    print("16-bit Model evaluation \t loss: {:.2f} \t accuracy: {:.2f}%".format(score[0],score[1]*100))


if __name__ == "__main__":
    main()
