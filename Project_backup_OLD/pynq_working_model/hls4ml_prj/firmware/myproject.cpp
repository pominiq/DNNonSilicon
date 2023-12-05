#include <iostream>

#include "myproject.h"
#include "parameters.h"

void myproject(
    hls::stream<input_t> &input_layer,
    hls::stream<result_t> &layer7_out
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS INTERFACE axis port=input_layer,layer7_out 
    #pragma HLS DATAFLOW 

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        // hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<conv2d_weight_t, 64>(w2, "w2.txt");
        nnet::load_weights_from_txt<conv2d_bias_t, 4>(b2, "b2.txt");
        nnet::load_weights_from_txt<dense_weight_t, 6912>(w6, "w6.txt");
        nnet::load_weights_from_txt<dense_bias_t, 12>(b6, "b6.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    hls::stream<layer2_t> layer2_out("layer2_out");
    #pragma HLS STREAM variable=layer2_out depth=625
    nnet::conv_2d_cl<input_t, layer2_t, config2>(input_layer, layer2_out, w2, b2); // conv2d

    hls::stream<layer3_t> layer3_out("layer3_out");
    #pragma HLS STREAM variable=layer3_out depth=625
    nnet::relu<layer2_t, layer3_t, relu_config3>(layer2_out, layer3_out); // conv2d_relu

    hls::stream<layer4_t> layer4_out("layer4_out");
    #pragma HLS STREAM variable=layer4_out depth=144
    nnet::pooling2d_cl<layer3_t, layer4_t, config4>(layer3_out, layer4_out); // max_pooling2d

    auto& layer5_out = layer4_out;
    hls::stream<layer6_t> layer6_out("layer6_out");
    #pragma HLS STREAM variable=layer6_out depth=1
    nnet::dense<layer4_t, layer6_t, config6>(layer5_out, layer6_out, w6, b6); // dense

    nnet::softmax<layer6_t, result_t, softmax_config7>(layer6_out, layer7_out); // dense_softmax

}
