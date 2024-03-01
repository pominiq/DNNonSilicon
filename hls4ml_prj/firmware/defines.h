#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

// hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 32
#define N_INPUT_2_1 32
#define N_INPUT_3_1 3
#define OUT_HEIGHT_2 30
#define OUT_WIDTH_2 30
#define N_FILT_2 32
#define OUT_HEIGHT_2 30
#define OUT_WIDTH_2 30
#define N_FILT_2 32
#define OUT_HEIGHT_4 15
#define OUT_WIDTH_4 15
#define N_FILT_4 32
#define OUT_HEIGHT_4 15
#define OUT_WIDTH_4 15
#define N_FILT_4 32
#define OUT_HEIGHT_6 13
#define OUT_WIDTH_6 13
#define N_FILT_6 64
#define OUT_HEIGHT_6 13
#define OUT_WIDTH_6 13
#define N_FILT_6 64
#define OUT_HEIGHT_8 3
#define OUT_WIDTH_8 3
#define N_FILT_8 64
#define OUT_HEIGHT_8 3
#define OUT_WIDTH_8 3
#define N_FILT_8 64
#define OUT_HEIGHT_10 1
#define OUT_WIDTH_10 1
#define N_FILT_10 64
#define OUT_HEIGHT_10 1
#define OUT_WIDTH_10 1
#define N_FILT_10 64
#define N_SIZE_0_12 64
#define N_LAYER_13 32
#define N_LAYER_13 32
#define N_LAYER_15 10
#define N_LAYER_15 10

// hls-fpga-machine-learning insert layer-precision
typedef nnet::array<ap_fixed<16,6>, 3*1> input_t;
typedef ap_fixed<16,6> model_default_t;
typedef nnet::array<ap_fixed<16,6>, 32*1> layer2_t;
typedef ap_uint<1> zero_bias2_t;
typedef nnet::array<ap_fixed<16,6>, 3*1> separable_conv2d_dw_out_t;
typedef nnet::array<ap_fixed<16,6>, 32*1> layer3_t;
typedef ap_fixed<18,8> separable_conv2d_relu_table_t;
typedef nnet::array<ap_fixed<16,6>, 32*1> layer4_t;
typedef nnet::array<ap_fixed<16,6>, 32*1> layer5_t;
typedef nnet::array<ap_fixed<16,6>, 64*1> layer6_t;
typedef ap_uint<1> zero_bias6_t;
typedef nnet::array<ap_fixed<16,6>, 32*1> separable_conv2d_1_dw_out_t;
typedef nnet::array<ap_fixed<16,6>, 64*1> layer7_t;
typedef ap_fixed<18,8> separable_conv2d_1_relu_table_t;
typedef nnet::array<ap_fixed<16,6>, 64*1> layer8_t;
typedef nnet::array<ap_fixed<16,6>, 64*1> layer9_t;
typedef nnet::array<ap_fixed<16,6>, 64*1> layer10_t;
typedef ap_uint<1> zero_bias10_t;
typedef nnet::array<ap_fixed<16,6>, 64*1> separable_conv2d_2_dw_out_t;
typedef nnet::array<ap_fixed<16,6>, 64*1> layer11_t;
typedef ap_fixed<18,8> separable_conv2d_2_relu_table_t;
typedef nnet::array<ap_fixed<16,6>, 32*1> layer13_t;
typedef ap_uint<1> layer13_index;
typedef nnet::array<ap_fixed<16,6>, 32*1> layer14_t;
typedef ap_fixed<18,8> dense_relu_table_t;
typedef nnet::array<ap_fixed<16,6>, 10*1> layer15_t;
typedef ap_uint<1> layer15_index;
typedef nnet::array<ap_fixed<16,6>, 10*1> result_t;
typedef ap_fixed<18,8> dense_1_softmax_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> dense_1_softmax_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> dense_1_softmax_inv_table_t;

#endif
