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
#define OUT_HEIGHT_34 34
#define OUT_WIDTH_34 34
#define N_CHAN_34 3
#define OUT_HEIGHT_2 32
#define OUT_WIDTH_2 32
#define N_CHAN_2 3
#define OUT_HEIGHT_2 32
#define OUT_WIDTH_2 32
#define N_CHAN_2 3
#define OUT_HEIGHT_37 32
#define OUT_WIDTH_37 32
#define N_FILT_37 16
#define OUT_HEIGHT_6 32
#define OUT_WIDTH_6 32
#define N_FILT_6 16
#define OUT_HEIGHT_10 16
#define OUT_WIDTH_10 16
#define N_FILT_10 16
#define OUT_HEIGHT_35 18
#define OUT_WIDTH_35 18
#define N_CHAN_35 16
#define OUT_HEIGHT_11 16
#define OUT_WIDTH_11 16
#define N_CHAN_11 16
#define OUT_HEIGHT_11 16
#define OUT_WIDTH_11 16
#define N_CHAN_11 16
#define OUT_HEIGHT_38 16
#define OUT_WIDTH_38 16
#define N_FILT_38 16
#define OUT_HEIGHT_15 16
#define OUT_WIDTH_15 16
#define N_FILT_15 16
#define OUT_HEIGHT_19 8
#define OUT_WIDTH_19 8
#define N_FILT_19 16
#define OUT_HEIGHT_36 10
#define OUT_WIDTH_36 10
#define N_CHAN_36 16
#define OUT_HEIGHT_20 8
#define OUT_WIDTH_20 8
#define N_CHAN_20 16
#define OUT_HEIGHT_20 8
#define OUT_WIDTH_20 8
#define N_CHAN_20 16
#define OUT_HEIGHT_39 8
#define OUT_WIDTH_39 8
#define N_FILT_39 24
#define OUT_HEIGHT_24 8
#define OUT_WIDTH_24 8
#define N_FILT_24 24
#define OUT_HEIGHT_28 4
#define OUT_WIDTH_28 4
#define N_FILT_28 24
#define N_SIZE_0_29 384
#define N_LAYER_30 16
#define N_LAYER_30 16
#define N_LAYER_32 10
#define N_LAYER_32 10

// hls-fpga-machine-learning insert layer-precision
typedef nnet::array<ap_fixed<16,6>, 3*1> input_t;
typedef nnet::array<ap_fixed<16,6>, 3*1> layer34_t;
typedef ap_fixed<16,6> model_default_t;
typedef nnet::array<ap_fixed<16,6>, 3*1> layer2_t;
typedef nnet::array<ap_fixed<16,6>, 3*1> layer5_t;
typedef ap_fixed<18,8> activation_table_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer37_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer9_t;
typedef ap_fixed<18,8> activation_1_table_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer10_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer35_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer11_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer14_t;
typedef ap_fixed<18,8> activation_2_table_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer38_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer18_t;
typedef ap_fixed<18,8> activation_3_table_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer19_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer36_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer20_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer23_t;
typedef ap_fixed<18,8> activation_4_table_t;
typedef nnet::array<ap_fixed<16,6>, 24*1> layer39_t;
typedef nnet::array<ap_fixed<16,6>, 24*1> layer27_t;
typedef ap_fixed<18,8> activation_5_table_t;
typedef nnet::array<ap_fixed<16,6>, 24*1> layer28_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer30_t;
typedef ap_uint<1> layer30_index;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer31_t;
typedef ap_fixed<18,8> dense_relu_table_t;
typedef nnet::array<ap_fixed<16,6>, 10*1> layer32_t;
typedef ap_uint<1> layer32_index;
typedef nnet::array<ap_fixed<16,6>, 10*1> result_t;
typedef ap_fixed<18,8> dense_1_softmax_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> dense_1_softmax_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> dense_1_softmax_inv_table_t;

#endif
