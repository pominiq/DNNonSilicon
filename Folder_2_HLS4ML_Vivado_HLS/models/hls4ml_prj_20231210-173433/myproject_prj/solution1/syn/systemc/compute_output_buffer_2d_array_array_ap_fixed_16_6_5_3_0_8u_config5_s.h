// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_HH_
#define _compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0.h"
#include "shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s.h"

namespace ap_rtl {

struct compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s : public sc_module {
    // Port declarations 43
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<16> > in_elem_data_0_V_read;
    sc_in< sc_lv<16> > in_elem_data_1_V_read;
    sc_in< sc_lv<16> > in_elem_data_2_V_read;
    sc_in< sc_lv<16> > in_elem_data_3_V_read;
    sc_out< sc_lv<16> > res_stream_V_data_0_V_din;
    sc_in< sc_logic > res_stream_V_data_0_V_full_n;
    sc_out< sc_logic > res_stream_V_data_0_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_1_V_din;
    sc_in< sc_logic > res_stream_V_data_1_V_full_n;
    sc_out< sc_logic > res_stream_V_data_1_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_2_V_din;
    sc_in< sc_logic > res_stream_V_data_2_V_full_n;
    sc_out< sc_logic > res_stream_V_data_2_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_3_V_din;
    sc_in< sc_logic > res_stream_V_data_3_V_full_n;
    sc_out< sc_logic > res_stream_V_data_3_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_4_V_din;
    sc_in< sc_logic > res_stream_V_data_4_V_full_n;
    sc_out< sc_logic > res_stream_V_data_4_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_5_V_din;
    sc_in< sc_logic > res_stream_V_data_5_V_full_n;
    sc_out< sc_logic > res_stream_V_data_5_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_6_V_din;
    sc_in< sc_logic > res_stream_V_data_6_V_full_n;
    sc_out< sc_logic > res_stream_V_data_6_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_7_V_din;
    sc_in< sc_logic > res_stream_V_data_7_V_full_n;
    sc_out< sc_logic > res_stream_V_data_7_V_write;
    sc_out< sc_logic > res_stream_V_data_0_V_blk_n;
    sc_out< sc_logic > res_stream_V_data_1_V_blk_n;
    sc_out< sc_logic > res_stream_V_data_2_V_blk_n;
    sc_out< sc_logic > res_stream_V_data_3_V_blk_n;
    sc_out< sc_logic > res_stream_V_data_4_V_blk_n;
    sc_out< sc_logic > res_stream_V_data_5_V_blk_n;
    sc_out< sc_logic > res_stream_V_data_6_V_blk_n;
    sc_out< sc_logic > res_stream_V_data_7_V_blk_n;
    sc_in< sc_logic > ap_ce;


    // Module declarations
    compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s(sc_module_name name);
    SC_HAS_PROCESS(compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s);

    ~compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s();

    sc_trace_file* mVcdFile;

    dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0* grp_dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0_fu_282;
    shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s* call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322;
    sc_signal< sc_lv<53> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<16> > kernel_data_V_1_4;
    sc_signal< sc_lv<16> > kernel_data_V_1_5;
    sc_signal< sc_lv<16> > kernel_data_V_1_6;
    sc_signal< sc_lv<16> > kernel_data_V_1_7;
    sc_signal< sc_lv<16> > kernel_data_V_1_8;
    sc_signal< sc_lv<16> > kernel_data_V_1_9;
    sc_signal< sc_lv<16> > kernel_data_V_1_10;
    sc_signal< sc_lv<16> > kernel_data_V_1_11;
    sc_signal< sc_lv<16> > kernel_data_V_1_16;
    sc_signal< sc_lv<16> > kernel_data_V_1_17;
    sc_signal< sc_lv<16> > kernel_data_V_1_18;
    sc_signal< sc_lv<16> > kernel_data_V_1_19;
    sc_signal< sc_lv<16> > kernel_data_V_1_20;
    sc_signal< sc_lv<16> > kernel_data_V_1_21;
    sc_signal< sc_lv<16> > kernel_data_V_1_22;
    sc_signal< sc_lv<16> > kernel_data_V_1_23;
    sc_signal< sc_lv<16> > kernel_data_V_1_28;
    sc_signal< sc_lv<16> > kernel_data_V_1_29;
    sc_signal< sc_lv<16> > kernel_data_V_1_30;
    sc_signal< sc_lv<16> > kernel_data_V_1_31;
    sc_signal< sc_lv<16> > kernel_data_V_1_32;
    sc_signal< sc_lv<16> > kernel_data_V_1_33;
    sc_signal< sc_lv<16> > kernel_data_V_1_34;
    sc_signal< sc_lv<16> > kernel_data_V_1_35;
    sc_signal< sc_lv<32> > sX_2;
    sc_signal< sc_lv<32> > sY_2;
    sc_signal< sc_lv<32> > pY_2;
    sc_signal< sc_lv<32> > pX_2;
    sc_signal< sc_logic > ap_CS_fsm_state53;
    sc_signal< sc_lv<1> > and_ln289_2_reg_1191;
    sc_signal< sc_lv<16> > kernel_data_V_1_27_ret_reg_979;
    sc_signal< sc_lv<16> > kernel_data_V_1_26_ret_reg_984;
    sc_signal< sc_lv<16> > kernel_data_V_1_25_ret_reg_989;
    sc_signal< sc_lv<16> > kernel_data_V_1_24_ret_reg_994;
    sc_signal< sc_lv<16> > kernel_data_V_1_15_ret_reg_999;
    sc_signal< sc_lv<16> > kernel_data_V_1_14_ret_reg_1004;
    sc_signal< sc_lv<16> > kernel_data_V_1_13_ret_reg_1009;
    sc_signal< sc_lv<16> > kernel_data_V_1_12_ret_reg_1014;
    sc_signal< sc_lv<16> > kernel_data_V_1_3_ret_reg_1019;
    sc_signal< sc_lv<16> > kernel_data_V_1_2_ret_reg_1024;
    sc_signal< sc_lv<16> > kernel_data_V_1_1_ret_reg_1029;
    sc_signal< sc_lv<16> > kernel_data_V_1_0_ret_reg_1034;
    sc_signal< sc_lv<16> > kernel_data_V_1_4_ret_reg_1039;
    sc_signal< sc_lv<16> > kernel_data_V_1_5_ret_reg_1044;
    sc_signal< sc_lv<16> > kernel_data_V_1_6_ret_reg_1049;
    sc_signal< sc_lv<16> > kernel_data_V_1_7_ret_reg_1054;
    sc_signal< sc_lv<16> > kernel_data_V_1_8_ret_reg_1059;
    sc_signal< sc_lv<16> > kernel_data_V_1_9_ret_reg_1064;
    sc_signal< sc_lv<16> > kernel_data_V_1_10_ret_reg_1069;
    sc_signal< sc_lv<16> > kernel_data_V_1_11_ret_reg_1074;
    sc_signal< sc_lv<16> > kernel_data_V_1_16_ret_reg_1079;
    sc_signal< sc_lv<16> > kernel_data_V_1_17_ret_reg_1084;
    sc_signal< sc_lv<16> > kernel_data_V_1_18_ret_reg_1089;
    sc_signal< sc_lv<16> > kernel_data_V_1_19_ret_reg_1094;
    sc_signal< sc_lv<16> > kernel_data_V_1_20_ret_reg_1099;
    sc_signal< sc_lv<16> > kernel_data_V_1_21_ret_reg_1104;
    sc_signal< sc_lv<16> > kernel_data_V_1_22_ret_reg_1109;
    sc_signal< sc_lv<16> > kernel_data_V_1_23_ret_reg_1114;
    sc_signal< sc_lv<16> > kernel_data_V_1_28_ret_reg_1119;
    sc_signal< sc_lv<16> > kernel_data_V_1_29_ret_reg_1124;
    sc_signal< sc_lv<16> > kernel_data_V_1_30_ret_reg_1129;
    sc_signal< sc_lv<16> > kernel_data_V_1_31_ret_reg_1134;
    sc_signal< sc_lv<16> > kernel_data_V_1_32_ret_reg_1139;
    sc_signal< sc_lv<16> > kernel_data_V_1_33_ret_reg_1144;
    sc_signal< sc_lv<16> > kernel_data_V_1_34_ret_reg_1149;
    sc_signal< sc_lv<16> > kernel_data_V_1_35_ret_reg_1154;
    sc_signal< sc_lv<32> > sX_2_load_reg_1159;
    sc_signal< sc_lv<1> > icmp_ln289_fu_786_p2;
    sc_signal< sc_lv<1> > icmp_ln289_reg_1164;
    sc_signal< sc_lv<32> > sY_2_load_reg_1169;
    sc_signal< sc_lv<1> > icmp_ln289_1_fu_796_p2;
    sc_signal< sc_lv<1> > icmp_ln289_1_reg_1174;
    sc_signal< sc_lv<32> > pY_2_load_reg_1179;
    sc_signal< sc_lv<32> > pX_2_load_reg_1185;
    sc_signal< sc_lv<1> > and_ln289_2_fu_854_p2;
    sc_signal< sc_lv<16> > tmp_data_0_V_reg_1195;
    sc_signal< sc_logic > ap_CS_fsm_state52;
    sc_signal< sc_lv<16> > tmp_data_1_V_reg_1200;
    sc_signal< sc_lv<16> > tmp_data_2_V_reg_1205;
    sc_signal< sc_lv<16> > tmp_data_3_V_reg_1210;
    sc_signal< sc_lv<16> > tmp_data_4_V_reg_1215;
    sc_signal< sc_lv<16> > tmp_data_5_V_reg_1220;
    sc_signal< sc_lv<16> > tmp_data_6_V_reg_1225;
    sc_signal< sc_lv<16> > tmp_data_7_V_reg_1230;
    sc_signal< sc_logic > grp_dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0_fu_282_ap_start;
    sc_signal< sc_logic > grp_dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0_fu_282_ap_done;
    sc_signal< sc_logic > grp_dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0_fu_282_ap_idle;
    sc_signal< sc_logic > grp_dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0_fu_282_ap_ready;
    sc_signal< sc_lv<16> > grp_dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0_fu_282_ap_return_0;
    sc_signal< sc_lv<16> > grp_dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0_fu_282_ap_return_1;
    sc_signal< sc_lv<16> > grp_dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0_fu_282_ap_return_2;
    sc_signal< sc_lv<16> > grp_dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0_fu_282_ap_return_3;
    sc_signal< sc_lv<16> > grp_dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0_fu_282_ap_return_4;
    sc_signal< sc_lv<16> > grp_dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0_fu_282_ap_return_5;
    sc_signal< sc_lv<16> > grp_dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0_fu_282_ap_return_6;
    sc_signal< sc_lv<16> > grp_dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0_fu_282_ap_return_7;
    sc_signal< sc_logic > grp_dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0_fu_282_ap_ce;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_logic > ap_CS_fsm_state34;
    sc_signal< sc_logic > ap_CS_fsm_state35;
    sc_signal< sc_logic > ap_CS_fsm_state36;
    sc_signal< sc_logic > ap_CS_fsm_state37;
    sc_signal< sc_logic > ap_CS_fsm_state38;
    sc_signal< sc_logic > ap_CS_fsm_state39;
    sc_signal< sc_logic > ap_CS_fsm_state40;
    sc_signal< sc_logic > ap_CS_fsm_state41;
    sc_signal< sc_logic > ap_CS_fsm_state42;
    sc_signal< sc_logic > ap_CS_fsm_state43;
    sc_signal< sc_logic > ap_CS_fsm_state44;
    sc_signal< sc_logic > ap_CS_fsm_state45;
    sc_signal< sc_logic > ap_CS_fsm_state46;
    sc_signal< sc_logic > ap_CS_fsm_state47;
    sc_signal< sc_logic > ap_CS_fsm_state48;
    sc_signal< sc_logic > ap_CS_fsm_state49;
    sc_signal< sc_logic > ap_CS_fsm_state50;
    sc_signal< sc_logic > ap_CS_fsm_state51;
    sc_signal< sc_logic > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_start;
    sc_signal< sc_logic > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_done;
    sc_signal< sc_logic > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_idle;
    sc_signal< sc_logic > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_ready;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_0;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_1;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_2;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_3;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_4;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_5;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_6;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_7;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_8;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_9;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_10;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_11;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_12;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_13;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_14;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_15;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_16;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_17;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_18;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_19;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_20;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_21;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_22;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_23;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_24;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_25;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_26;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_27;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_28;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_29;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_30;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_31;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_32;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_33;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_34;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_return_35;
    sc_signal< sc_logic > call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_ce;
    sc_signal< sc_lv<32> > select_ln323_fu_959_p3;
    sc_signal< sc_lv<32> > ap_phi_mux_storemerge_phi_fu_275_p4;
    sc_signal< sc_logic > io_acc_block_signal_op224;
    sc_signal< bool > ap_block_state53;
    sc_signal< sc_lv<1> > icmp_ln313_fu_892_p2;
    sc_signal< sc_lv<1> > icmp_ln317_fu_938_p2;
    sc_signal< sc_logic > grp_dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0_fu_282_ap_start_reg;
    sc_signal< sc_lv<53> > ap_NS_fsm;
    sc_signal< sc_logic > ap_NS_fsm_state2;
    sc_signal< sc_lv<32> > select_ln328_fu_913_p3;
    sc_signal< sc_lv<32> > add_ln321_fu_943_p2;
    sc_signal< sc_lv<32> > add_ln326_fu_897_p2;
    sc_signal< sc_lv<31> > tmp_fu_806_p4;
    sc_signal< sc_lv<31> > tmp_55_fu_826_p4;
    sc_signal< sc_lv<1> > icmp_ln289_2_fu_816_p2;
    sc_signal< sc_lv<1> > icmp_ln289_3_fu_836_p2;
    sc_signal< sc_lv<1> > and_ln289_1_fu_848_p2;
    sc_signal< sc_lv<1> > and_ln289_fu_842_p2;
    sc_signal< sc_lv<32> > add_ln328_fu_908_p2;
    sc_signal< sc_lv<32> > add_ln323_fu_954_p2;
    sc_signal< bool > ap_condition_704;
    sc_signal< bool > ap_condition_881;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<53> ap_ST_fsm_state1;
    static const sc_lv<53> ap_ST_fsm_state2;
    static const sc_lv<53> ap_ST_fsm_state3;
    static const sc_lv<53> ap_ST_fsm_state4;
    static const sc_lv<53> ap_ST_fsm_state5;
    static const sc_lv<53> ap_ST_fsm_state6;
    static const sc_lv<53> ap_ST_fsm_state7;
    static const sc_lv<53> ap_ST_fsm_state8;
    static const sc_lv<53> ap_ST_fsm_state9;
    static const sc_lv<53> ap_ST_fsm_state10;
    static const sc_lv<53> ap_ST_fsm_state11;
    static const sc_lv<53> ap_ST_fsm_state12;
    static const sc_lv<53> ap_ST_fsm_state13;
    static const sc_lv<53> ap_ST_fsm_state14;
    static const sc_lv<53> ap_ST_fsm_state15;
    static const sc_lv<53> ap_ST_fsm_state16;
    static const sc_lv<53> ap_ST_fsm_state17;
    static const sc_lv<53> ap_ST_fsm_state18;
    static const sc_lv<53> ap_ST_fsm_state19;
    static const sc_lv<53> ap_ST_fsm_state20;
    static const sc_lv<53> ap_ST_fsm_state21;
    static const sc_lv<53> ap_ST_fsm_state22;
    static const sc_lv<53> ap_ST_fsm_state23;
    static const sc_lv<53> ap_ST_fsm_state24;
    static const sc_lv<53> ap_ST_fsm_state25;
    static const sc_lv<53> ap_ST_fsm_state26;
    static const sc_lv<53> ap_ST_fsm_state27;
    static const sc_lv<53> ap_ST_fsm_state28;
    static const sc_lv<53> ap_ST_fsm_state29;
    static const sc_lv<53> ap_ST_fsm_state30;
    static const sc_lv<53> ap_ST_fsm_state31;
    static const sc_lv<53> ap_ST_fsm_state32;
    static const sc_lv<53> ap_ST_fsm_state33;
    static const sc_lv<53> ap_ST_fsm_state34;
    static const sc_lv<53> ap_ST_fsm_state35;
    static const sc_lv<53> ap_ST_fsm_state36;
    static const sc_lv<53> ap_ST_fsm_state37;
    static const sc_lv<53> ap_ST_fsm_state38;
    static const sc_lv<53> ap_ST_fsm_state39;
    static const sc_lv<53> ap_ST_fsm_state40;
    static const sc_lv<53> ap_ST_fsm_state41;
    static const sc_lv<53> ap_ST_fsm_state42;
    static const sc_lv<53> ap_ST_fsm_state43;
    static const sc_lv<53> ap_ST_fsm_state44;
    static const sc_lv<53> ap_ST_fsm_state45;
    static const sc_lv<53> ap_ST_fsm_state46;
    static const sc_lv<53> ap_ST_fsm_state47;
    static const sc_lv<53> ap_ST_fsm_state48;
    static const sc_lv<53> ap_ST_fsm_state49;
    static const sc_lv<53> ap_ST_fsm_state50;
    static const sc_lv<53> ap_ST_fsm_state51;
    static const sc_lv<53> ap_ST_fsm_state52;
    static const sc_lv<53> ap_ST_fsm_state53;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_33;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<32> ap_const_lv32_25;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<32> ap_const_lv32_28;
    static const sc_lv<32> ap_const_lv32_29;
    static const sc_lv<32> ap_const_lv32_2A;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_2D;
    static const sc_lv<32> ap_const_lv32_2E;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_31;
    static const sc_lv<32> ap_const_lv32_32;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<31> ap_const_lv31_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln321_fu_943_p2();
    void thread_add_ln323_fu_954_p2();
    void thread_add_ln326_fu_897_p2();
    void thread_add_ln328_fu_908_p2();
    void thread_and_ln289_1_fu_848_p2();
    void thread_and_ln289_2_fu_854_p2();
    void thread_and_ln289_fu_842_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state29();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state30();
    void thread_ap_CS_fsm_state31();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state34();
    void thread_ap_CS_fsm_state35();
    void thread_ap_CS_fsm_state36();
    void thread_ap_CS_fsm_state37();
    void thread_ap_CS_fsm_state38();
    void thread_ap_CS_fsm_state39();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state40();
    void thread_ap_CS_fsm_state41();
    void thread_ap_CS_fsm_state42();
    void thread_ap_CS_fsm_state43();
    void thread_ap_CS_fsm_state44();
    void thread_ap_CS_fsm_state45();
    void thread_ap_CS_fsm_state46();
    void thread_ap_CS_fsm_state47();
    void thread_ap_CS_fsm_state48();
    void thread_ap_CS_fsm_state49();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state50();
    void thread_ap_CS_fsm_state51();
    void thread_ap_CS_fsm_state52();
    void thread_ap_CS_fsm_state53();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_NS_fsm_state2();
    void thread_ap_block_state53();
    void thread_ap_condition_704();
    void thread_ap_condition_881();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_phi_mux_storemerge_phi_fu_275_p4();
    void thread_ap_ready();
    void thread_call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_ce();
    void thread_call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322_ap_start();
    void thread_grp_dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0_fu_282_ap_ce();
    void thread_grp_dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0_fu_282_ap_start();
    void thread_icmp_ln289_1_fu_796_p2();
    void thread_icmp_ln289_2_fu_816_p2();
    void thread_icmp_ln289_3_fu_836_p2();
    void thread_icmp_ln289_fu_786_p2();
    void thread_icmp_ln313_fu_892_p2();
    void thread_icmp_ln317_fu_938_p2();
    void thread_io_acc_block_signal_op224();
    void thread_res_stream_V_data_0_V_blk_n();
    void thread_res_stream_V_data_0_V_din();
    void thread_res_stream_V_data_0_V_write();
    void thread_res_stream_V_data_1_V_blk_n();
    void thread_res_stream_V_data_1_V_din();
    void thread_res_stream_V_data_1_V_write();
    void thread_res_stream_V_data_2_V_blk_n();
    void thread_res_stream_V_data_2_V_din();
    void thread_res_stream_V_data_2_V_write();
    void thread_res_stream_V_data_3_V_blk_n();
    void thread_res_stream_V_data_3_V_din();
    void thread_res_stream_V_data_3_V_write();
    void thread_res_stream_V_data_4_V_blk_n();
    void thread_res_stream_V_data_4_V_din();
    void thread_res_stream_V_data_4_V_write();
    void thread_res_stream_V_data_5_V_blk_n();
    void thread_res_stream_V_data_5_V_din();
    void thread_res_stream_V_data_5_V_write();
    void thread_res_stream_V_data_6_V_blk_n();
    void thread_res_stream_V_data_6_V_din();
    void thread_res_stream_V_data_6_V_write();
    void thread_res_stream_V_data_7_V_blk_n();
    void thread_res_stream_V_data_7_V_din();
    void thread_res_stream_V_data_7_V_write();
    void thread_select_ln323_fu_959_p3();
    void thread_select_ln328_fu_913_p3();
    void thread_tmp_55_fu_826_p4();
    void thread_tmp_fu_806_p4();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif