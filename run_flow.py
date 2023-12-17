
import tensorflow as tf
from keras.utils import to_categorical
import numpy as np
from keras.datasets import mnist
from keras import layers, models

import time
import numpy as np
from sklearn.metrics import log_loss, accuracy_score # sklearn has an easy interface for testing

import hls4ml # Engine for generating Verilog-files from ML models
from hls4ml.model.profiling import numerical

import tensorflow as tf
from keras.utils import to_categorical
from keras.datasets import mnist
