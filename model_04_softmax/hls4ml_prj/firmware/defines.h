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
#define OUT_HEIGHT_2 26
#define OUT_WIDTH_2 26
#define N_FILT_2 4
#define OUT_HEIGHT_2 26
#define OUT_WIDTH_2 26
#define N_FILT_2 4
#define OUT_HEIGHT_4 6
#define OUT_WIDTH_4 6
#define N_FILT_4 4
#define OUT_HEIGHT_5 4
#define OUT_WIDTH_5 4
#define N_FILT_5 8
#define OUT_HEIGHT_5 4
#define OUT_WIDTH_5 4
#define N_FILT_5 8
#define OUT_HEIGHT_7 2
#define OUT_WIDTH_7 2
#define N_FILT_7 8
#define N_SIZE_0_8 32
#define N_LAYER_9 10
#define N_LAYER_9 10

// hls-fpga-machine-learning insert layer-precision
typedef nnet::array<ap_fixed<16,6>, 1*1> input_t;
typedef ap_fixed<16,6> model_default_t;
typedef nnet::array<ap_fixed<16,6>, 4*1> layer2_t;
typedef ap_fixed<16,6> conv2d_weight_t;
typedef ap_fixed<16,6> conv2d_bias_t;
typedef nnet::array<ap_fixed<16,6>, 4*1> layer3_t;
typedef ap_fixed<18,8> conv2d_softmax_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> conv2d_softmax_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> conv2d_softmax_inv_table_t;
typedef nnet::array<ap_fixed<16,6>, 4*1> layer4_t;
typedef nnet::array<ap_fixed<16,6>, 8*1> layer5_t;
typedef ap_fixed<16,6> conv2d_1_weight_t;
typedef ap_fixed<16,6> conv2d_1_bias_t;
typedef nnet::array<ap_fixed<16,6>, 8*1> layer6_t;
typedef ap_fixed<18,8> conv2d_1_softmax_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> conv2d_1_softmax_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> conv2d_1_softmax_inv_table_t;
typedef nnet::array<ap_fixed<16,6>, 8*1> layer7_t;
typedef nnet::array<ap_fixed<16,6>, 10*1> layer9_t;
typedef ap_fixed<16,6> dense_weight_t;
typedef ap_fixed<16,6> dense_bias_t;
typedef ap_uint<1> layer9_index;
typedef nnet::array<ap_fixed<16,6>, 10*1> result_t;
typedef ap_fixed<18,8> dense_softmax_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> dense_softmax_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> dense_softmax_inv_table_t;

#endif