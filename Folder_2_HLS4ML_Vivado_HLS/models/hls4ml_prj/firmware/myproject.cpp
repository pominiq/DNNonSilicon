#include <iostream>

#include "myproject.h"
#include "parameters.h"

void myproject(
    hls::stream<input_t> &input_1,
    hls::stream<result_t> &layer16_out
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS INTERFACE axis port=input_1,layer16_out 
    #pragma HLS DATAFLOW 

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        // hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<model_default_t, 27>(d2, "d2.txt");
        nnet::load_weights_from_txt<model_default_t, 96>(p2, "p2.txt");
        nnet::load_weights_from_txt<zero_bias2_t, 3>(z2, "z2.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(b2, "b2.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(s5, "s5.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(b5, "b5.txt");
        nnet::load_weights_from_txt<model_default_t, 288>(d6, "d6.txt");
        nnet::load_weights_from_txt<model_default_t, 2048>(p6, "p6.txt");
        nnet::load_weights_from_txt<zero_bias6_t, 32>(z6, "z6.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b6, "b6.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(s9, "s9.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b9, "b9.txt");
        nnet::load_weights_from_txt<model_default_t, 576>(d10, "d10.txt");
        nnet::load_weights_from_txt<model_default_t, 4096>(p10, "p10.txt");
        nnet::load_weights_from_txt<zero_bias10_t, 64>(z10, "z10.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b10, "b10.txt");
        nnet::load_weights_from_txt<model_default_t, 2048>(w13, "w13.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(b13, "b13.txt");
        nnet::load_weights_from_txt<model_default_t, 320>(w15, "w15.txt");
        nnet::load_weights_from_txt<model_default_t, 10>(b15, "b15.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    hls::stream<layer2_t> layer2_out("layer2_out");
    #pragma HLS STREAM variable=layer2_out depth=900
    nnet::separable_conv_2d_cl<input_t, separable_conv2d_dw_out_t, layer2_t, config2>(input_1, layer2_out, d2, p2, z2, b2); // separable_conv2d

    hls::stream<layer3_t> layer3_out("layer3_out");
    #pragma HLS STREAM variable=layer3_out depth=900
    nnet::relu<layer2_t, layer3_t, relu_config3>(layer2_out, layer3_out); // separable_conv2d_relu

    hls::stream<layer4_t> layer4_out("layer4_out");
    #pragma HLS STREAM variable=layer4_out depth=225
    nnet::pooling2d_cl<layer3_t, layer4_t, config4>(layer3_out, layer4_out); // max_pooling2d

    hls::stream<layer5_t> layer5_out("layer5_out");
    #pragma HLS STREAM variable=layer5_out depth=225
    nnet::normalize<layer4_t, layer5_t, config5>(layer4_out, layer5_out, s5, b5); // batch_normalization

    hls::stream<layer6_t> layer6_out("layer6_out");
    #pragma HLS STREAM variable=layer6_out depth=169
    nnet::separable_conv_2d_cl<layer5_t, separable_conv2d_1_dw_out_t, layer6_t, config6>(layer5_out, layer6_out, d6, p6, z6, b6); // separable_conv2d_1

    hls::stream<layer7_t> layer7_out("layer7_out");
    #pragma HLS STREAM variable=layer7_out depth=169
    nnet::relu<layer6_t, layer7_t, relu_config7>(layer6_out, layer7_out); // separable_conv2d_1_relu

    hls::stream<layer8_t> layer8_out("layer8_out");
    #pragma HLS STREAM variable=layer8_out depth=9
    nnet::pooling2d_cl<layer7_t, layer8_t, config8>(layer7_out, layer8_out); // max_pooling2d_1

    hls::stream<layer9_t> layer9_out("layer9_out");
    #pragma HLS STREAM variable=layer9_out depth=9
    nnet::normalize<layer8_t, layer9_t, config9>(layer8_out, layer9_out, s9, b9); // batch_normalization_1

    hls::stream<layer10_t> layer10_out("layer10_out");
    #pragma HLS STREAM variable=layer10_out depth=1
    nnet::separable_conv_2d_cl<layer9_t, separable_conv2d_2_dw_out_t, layer10_t, config10>(layer9_out, layer10_out, d10, p10, z10, b10); // separable_conv2d_2

    hls::stream<layer11_t> layer11_out("layer11_out");
    #pragma HLS STREAM variable=layer11_out depth=1
    nnet::relu<layer10_t, layer11_t, relu_config11>(layer10_out, layer11_out); // separable_conv2d_2_relu

    auto& layer12_out = layer11_out;
    hls::stream<layer13_t> layer13_out("layer13_out");
    #pragma HLS STREAM variable=layer13_out depth=1
    nnet::dense<layer11_t, layer13_t, config13>(layer12_out, layer13_out, w13, b13); // dense

    hls::stream<layer14_t> layer14_out("layer14_out");
    #pragma HLS STREAM variable=layer14_out depth=1
    nnet::relu<layer13_t, layer14_t, relu_config14>(layer13_out, layer14_out); // dense_relu

    hls::stream<layer15_t> layer15_out("layer15_out");
    #pragma HLS STREAM variable=layer15_out depth=1
    nnet::dense<layer14_t, layer15_t, config15>(layer14_out, layer15_out, w15, b15); // dense_1

    nnet::softmax<layer15_t, result_t, softmax_config16>(layer15_out, layer16_out); // dense_1_softmax

}
