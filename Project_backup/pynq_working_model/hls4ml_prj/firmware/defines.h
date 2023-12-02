#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

// hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 28
#define N_INPUT_2_1 28
#define N_INPUT_3_1 1
#define OUT_HEIGHT_2 25
#define OUT_WIDTH_2 25
#define N_FILT_2 4
#define OUT_HEIGHT_2 25
#define OUT_WIDTH_2 25
#define N_FILT_2 4
#define OUT_HEIGHT_4 12
#define OUT_WIDTH_4 12
#define N_FILT_4 4
#define N_SIZE_0_5 576
#define N_LAYER_6 12
#define N_LAYER_6 12

// hls-fpga-machine-learning insert layer-precision
typedef nnet::array<ap_fixed<16,8>, 1*1> input_t;
typedef ap_fixed<16,8> model_default_t;
typedef nnet::array<ap_fixed<16,8>, 4*1> layer2_t;
typedef ap_fixed<16,8> conv2d_weight_t;
typedef ap_fixed<16,8> conv2d_bias_t;
typedef nnet::array<ap_fixed<16,8>, 4*1> layer3_t;
typedef ap_fixed<18,8> conv2d_relu_table_t;
typedef nnet::array<ap_fixed<16,8>, 4*1> layer4_t;
typedef nnet::array<ap_fixed<16,8>, 12*1> layer6_t;
typedef ap_fixed<16,8> dense_weight_t;
typedef ap_fixed<16,8> dense_bias_t;
typedef ap_uint<1> layer6_index;
typedef nnet::array<ap_fixed<16,8>, 12*1> result_t;
typedef ap_fixed<18,8> dense_softmax_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> dense_softmax_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> dense_softmax_inv_table_t;

#endif
