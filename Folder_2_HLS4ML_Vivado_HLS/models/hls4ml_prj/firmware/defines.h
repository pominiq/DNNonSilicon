#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

// hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 4
#define N_LAYER_2 128
#define N_LAYER_2 128
#define N_LAYER_4 3
#define N_LAYER_4 3

// hls-fpga-machine-learning insert layer-precision
typedef nnet::array<ap_fixed<16,6>, 4*1> input_t;
typedef ap_fixed<16,6> model_default_t;
typedef nnet::array<ap_fixed<16,6>, 128*1> layer2_t;
typedef ap_uint<1> layer2_index;
typedef nnet::array<ap_fixed<16,6>, 128*1> layer3_t;
typedef ap_fixed<18,8> dense_relu_table_t;
typedef nnet::array<ap_fixed<16,6>, 3*1> layer4_t;
typedef ap_uint<1> layer4_index;
typedef nnet::array<ap_fixed<16,6>, 3*1> result_t;
typedef ap_fixed<18,8> dense_1_softmax_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> dense_1_softmax_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> dense_1_softmax_inv_table_t;

#endif
