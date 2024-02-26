#include <iostream>

#include "myproject.h"
#include "parameters.h"

void myproject(
    hls::stream<input_t> &input_1,
    hls::stream<result_t> &layer33_out
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS INTERFACE axis port=input_1,layer33_out 
    #pragma HLS DATAFLOW 

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        // hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<model_default_t, 27>(w2, "w2.txt");
        nnet::load_weights_from_txt<model_default_t, 3>(b2, "b2.txt");
        nnet::load_weights_from_txt<model_default_t, 48>(w37, "w37.txt");
        nnet::load_weights_from_txt<model_default_t, 16>(b37, "b37.txt");
        nnet::load_weights_from_txt<model_default_t, 144>(w11, "w11.txt");
        nnet::load_weights_from_txt<model_default_t, 16>(b11, "b11.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(w38, "w38.txt");
        nnet::load_weights_from_txt<model_default_t, 16>(b38, "b38.txt");
        nnet::load_weights_from_txt<model_default_t, 144>(w20, "w20.txt");
        nnet::load_weights_from_txt<model_default_t, 16>(b20, "b20.txt");
        nnet::load_weights_from_txt<model_default_t, 384>(w39, "w39.txt");
        nnet::load_weights_from_txt<model_default_t, 24>(b39, "b39.txt");
        nnet::load_weights_from_txt<model_default_t, 6144>(w30, "w30.txt");
        nnet::load_weights_from_txt<model_default_t, 16>(b30, "b30.txt");
        nnet::load_weights_from_txt<model_default_t, 160>(w32, "w32.txt");
        nnet::load_weights_from_txt<model_default_t, 10>(b32, "b32.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    hls::stream<layer34_t> layer34_out("layer34_out");
    #pragma HLS STREAM variable=layer34_out depth=1156
    nnet::zeropad2d_cl<input_t, layer34_t, config34>(input_1, layer34_out); // zp2d_depthwise_conv2d

    hls::stream<layer2_t> layer2_out("layer2_out");
    #pragma HLS STREAM variable=layer2_out depth=1024
    nnet::depthwise_conv_2d_cl<layer34_t, layer2_t, config2>(layer34_out, layer2_out, w2, b2); // depthwise_conv2d

    hls::stream<layer5_t> layer5_out("layer5_out");
    #pragma HLS STREAM variable=layer5_out depth=1024
    nnet::relu<layer2_t, layer5_t, relu_config5>(layer2_out, layer5_out); // activation

    hls::stream<layer37_t> layer37_out("layer37_out");
    #pragma HLS STREAM variable=layer37_out depth=1024
    nnet::pointwise_conv_2d_cl<layer5_t, layer37_t, config37>(layer5_out, layer37_out, w37, b37); // conv2d

    hls::stream<layer9_t> layer9_out("layer9_out");
    #pragma HLS STREAM variable=layer9_out depth=1024
    nnet::relu<layer37_t, layer9_t, relu_config9>(layer37_out, layer9_out); // activation_1

    hls::stream<layer10_t> layer10_out("layer10_out");
    #pragma HLS STREAM variable=layer10_out depth=256
    nnet::pooling2d_cl<layer9_t, layer10_t, config10>(layer9_out, layer10_out); // max_pooling2d

    hls::stream<layer35_t> layer35_out("layer35_out");
    #pragma HLS STREAM variable=layer35_out depth=324
    nnet::zeropad2d_cl<layer10_t, layer35_t, config35>(layer10_out, layer35_out); // zp2d_depthwise_conv2d_1

    hls::stream<layer11_t> layer11_out("layer11_out");
    #pragma HLS STREAM variable=layer11_out depth=256
    nnet::depthwise_conv_2d_cl<layer35_t, layer11_t, config11>(layer35_out, layer11_out, w11, b11); // depthwise_conv2d_1

    hls::stream<layer14_t> layer14_out("layer14_out");
    #pragma HLS STREAM variable=layer14_out depth=256
    nnet::relu<layer11_t, layer14_t, relu_config14>(layer11_out, layer14_out); // activation_2

    hls::stream<layer38_t> layer38_out("layer38_out");
    #pragma HLS STREAM variable=layer38_out depth=256
    nnet::pointwise_conv_2d_cl<layer14_t, layer38_t, config38>(layer14_out, layer38_out, w38, b38); // conv2d_1

    hls::stream<layer18_t> layer18_out("layer18_out");
    #pragma HLS STREAM variable=layer18_out depth=256
    nnet::relu<layer38_t, layer18_t, relu_config18>(layer38_out, layer18_out); // activation_3

    hls::stream<layer19_t> layer19_out("layer19_out");
    #pragma HLS STREAM variable=layer19_out depth=64
    nnet::pooling2d_cl<layer18_t, layer19_t, config19>(layer18_out, layer19_out); // max_pooling2d_1

    hls::stream<layer36_t> layer36_out("layer36_out");
    #pragma HLS STREAM variable=layer36_out depth=100
    nnet::zeropad2d_cl<layer19_t, layer36_t, config36>(layer19_out, layer36_out); // zp2d_depthwise_conv2d_2

    hls::stream<layer20_t> layer20_out("layer20_out");
    #pragma HLS STREAM variable=layer20_out depth=64
    nnet::depthwise_conv_2d_cl<layer36_t, layer20_t, config20>(layer36_out, layer20_out, w20, b20); // depthwise_conv2d_2

    hls::stream<layer23_t> layer23_out("layer23_out");
    #pragma HLS STREAM variable=layer23_out depth=64
    nnet::relu<layer20_t, layer23_t, relu_config23>(layer20_out, layer23_out); // activation_4

    hls::stream<layer39_t> layer39_out("layer39_out");
    #pragma HLS STREAM variable=layer39_out depth=64
    nnet::pointwise_conv_2d_cl<layer23_t, layer39_t, config39>(layer23_out, layer39_out, w39, b39); // conv2d_2

    hls::stream<layer27_t> layer27_out("layer27_out");
    #pragma HLS STREAM variable=layer27_out depth=64
    nnet::relu<layer39_t, layer27_t, relu_config27>(layer39_out, layer27_out); // activation_5

    hls::stream<layer28_t> layer28_out("layer28_out");
    #pragma HLS STREAM variable=layer28_out depth=16
    nnet::pooling2d_cl<layer27_t, layer28_t, config28>(layer27_out, layer28_out); // max_pooling2d_2

    auto& layer29_out = layer28_out;
    hls::stream<layer30_t> layer30_out("layer30_out");
    #pragma HLS STREAM variable=layer30_out depth=1
    nnet::dense<layer28_t, layer30_t, config30>(layer29_out, layer30_out, w30, b30); // dense

    hls::stream<layer31_t> layer31_out("layer31_out");
    #pragma HLS STREAM variable=layer31_out depth=1
    nnet::relu<layer30_t, layer31_t, relu_config31>(layer30_out, layer31_out); // dense_relu

    hls::stream<layer32_t> layer32_out("layer32_out");
    #pragma HLS STREAM variable=layer32_out depth=1
    nnet::dense<layer31_t, layer32_t, config32>(layer31_out, layer32_out, w32, b32); // dense_1

    nnet::softmax<layer32_t, result_t, softmax_config33>(layer32_out, layer33_out); // dense_1_softmax

}
