// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<2> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_ST_fsm_state1 = "1";
const sc_lv<2> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_ST_fsm_state2 = "10";
const sc_lv<32> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<3> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv3_1 = "1";
const sc_lv<32> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv32_12 = "10010";
const sc_lv<32> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv32_11 = "10001";
const sc_lv<1> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv1_1 = "1";
const sc_lv<18> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv18_1FFFF = "11111111111111111";
const sc_lv<18> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv18_20000 = "100000000000000000";
const sc_lv<3> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv3_2 = "10";
const sc_lv<3> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv3_3 = "11";
const sc_lv<32> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv32_1 = "1";
const bool reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_boolean_1 = true;

reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s(sc_module_name name) : sc_module(name), mVcdFile(0) {
    myproject_mux_83_18_1_1_U165 = new myproject_mux_83_18_1_1<1,1,18,18,18,18,18,18,18,18,3,18>("myproject_mux_83_18_1_1_U165");
    myproject_mux_83_18_1_1_U165->din0(zext_ln43_fu_102_p1);
    myproject_mux_83_18_1_1_U165->din1(zext_ln43_1_fu_106_p1);
    myproject_mux_83_18_1_1_U165->din2(zext_ln43_2_fu_110_p1);
    myproject_mux_83_18_1_1_U165->din3(zext_ln43_3_fu_114_p1);
    myproject_mux_83_18_1_1_U165->din4(zext_ln43_4_fu_118_p1);
    myproject_mux_83_18_1_1_U165->din5(zext_ln43_5_fu_122_p1);
    myproject_mux_83_18_1_1_U165->din6(zext_ln43_6_fu_126_p1);
    myproject_mux_83_18_1_1_U165->din7(zext_ln43_7_fu_130_p1);
    myproject_mux_83_18_1_1_U165->din8(empty_fu_98_p1);
    myproject_mux_83_18_1_1_U165->dout(p_Val2_s_fu_134_p10);
    myproject_mux_83_18_1_1_U166 = new myproject_mux_83_18_1_1<1,1,18,18,18,18,18,18,18,18,3,18>("myproject_mux_83_18_1_1_U166");
    myproject_mux_83_18_1_1_U166->din0(zext_ln43_fu_102_p1);
    myproject_mux_83_18_1_1_U166->din1(zext_ln43_1_fu_106_p1);
    myproject_mux_83_18_1_1_U166->din2(zext_ln43_2_fu_110_p1);
    myproject_mux_83_18_1_1_U166->din3(zext_ln43_3_fu_114_p1);
    myproject_mux_83_18_1_1_U166->din4(zext_ln43_4_fu_118_p1);
    myproject_mux_83_18_1_1_U166->din5(zext_ln43_5_fu_122_p1);
    myproject_mux_83_18_1_1_U166->din6(zext_ln43_6_fu_126_p1);
    myproject_mux_83_18_1_1_U166->din7(zext_ln43_7_fu_130_p1);
    myproject_mux_83_18_1_1_U166->din8(p_Val2_14_fu_162_p9);
    myproject_mux_83_18_1_1_U166->dout(p_Val2_14_fu_162_p10);
    myproject_mux_83_18_1_1_U167 = new myproject_mux_83_18_1_1<1,1,18,18,18,18,18,18,18,18,3,18>("myproject_mux_83_18_1_1_U167");
    myproject_mux_83_18_1_1_U167->din0(zext_ln43_fu_102_p1);
    myproject_mux_83_18_1_1_U167->din1(zext_ln43_1_fu_106_p1);
    myproject_mux_83_18_1_1_U167->din2(zext_ln43_2_fu_110_p1);
    myproject_mux_83_18_1_1_U167->din3(zext_ln43_3_fu_114_p1);
    myproject_mux_83_18_1_1_U167->din4(zext_ln43_4_fu_118_p1);
    myproject_mux_83_18_1_1_U167->din5(zext_ln43_5_fu_122_p1);
    myproject_mux_83_18_1_1_U167->din6(zext_ln43_6_fu_126_p1);
    myproject_mux_83_18_1_1_U167->din7(zext_ln43_7_fu_130_p1);
    myproject_mux_83_18_1_1_U167->din8(p_Val2_17_fu_280_p9);
    myproject_mux_83_18_1_1_U167->dout(p_Val2_17_fu_280_p10);
    myproject_mux_83_18_1_1_U168 = new myproject_mux_83_18_1_1<1,1,18,18,18,18,18,18,18,18,3,18>("myproject_mux_83_18_1_1_U168");
    myproject_mux_83_18_1_1_U168->din0(zext_ln43_fu_102_p1);
    myproject_mux_83_18_1_1_U168->din1(zext_ln43_1_fu_106_p1);
    myproject_mux_83_18_1_1_U168->din2(zext_ln43_2_fu_110_p1);
    myproject_mux_83_18_1_1_U168->din3(zext_ln43_3_fu_114_p1);
    myproject_mux_83_18_1_1_U168->din4(zext_ln43_4_fu_118_p1);
    myproject_mux_83_18_1_1_U168->din5(zext_ln43_5_fu_122_p1);
    myproject_mux_83_18_1_1_U168->din6(zext_ln43_6_fu_126_p1);
    myproject_mux_83_18_1_1_U168->din7(zext_ln43_7_fu_130_p1);
    myproject_mux_83_18_1_1_U168->din8(p_Val2_1_fu_308_p9);
    myproject_mux_83_18_1_1_U168->dout(p_Val2_1_fu_308_p10);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_ce );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_ce );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_ce );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( or_ln340_fu_476_p2 );
    sensitive << ( select_ln340_fu_482_p3 );
    sensitive << ( select_ln388_fu_490_p3 );

    SC_METHOD(thread_empty_fu_98_p1);
    sensitive << ( x_V_offset );

    SC_METHOD(thread_lhs_V_1_fu_184_p1);
    sensitive << ( p_Val2_s_fu_134_p10 );

    SC_METHOD(thread_lhs_V_2_fu_330_p1);
    sensitive << ( p_Val2_17_fu_280_p10 );

    SC_METHOD(thread_lhs_V_fu_420_p1);
    sensitive << ( p_Val2_20_reg_506 );

    SC_METHOD(thread_or_ln340_10_fu_390_p2);
    sensitive << ( p_Result_15_fu_358_p3 );
    sensitive << ( xor_ln340_21_fu_384_p2 );

    SC_METHOD(thread_or_ln340_9_fu_244_p2);
    sensitive << ( p_Result_13_fu_212_p3 );
    sensitive << ( xor_ln340_19_fu_238_p2 );

    SC_METHOD(thread_or_ln340_fu_476_p2);
    sensitive << ( p_Result_17_fu_444_p3 );
    sensitive << ( xor_ln340_fu_470_p2 );

    SC_METHOD(thread_p_Result_13_fu_212_p3);
    sensitive << ( p_Val2_16_fu_206_p2 );

    SC_METHOD(thread_p_Result_14_fu_344_p3);
    sensitive << ( ret_V_1_fu_338_p2 );

    SC_METHOD(thread_p_Result_15_fu_358_p3);
    sensitive << ( p_Val2_19_fu_352_p2 );

    SC_METHOD(thread_p_Result_16_fu_432_p3);
    sensitive << ( ret_V_2_fu_426_p2 );

    SC_METHOD(thread_p_Result_17_fu_444_p3);
    sensitive << ( p_Val2_23_fu_440_p2 );

    SC_METHOD(thread_p_Result_s_fu_198_p3);
    sensitive << ( ret_V_fu_192_p2 );

    SC_METHOD(thread_p_Val2_14_fu_162_p9);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( empty_fu_98_p1 );

    SC_METHOD(thread_p_Val2_16_fu_206_p2);
    sensitive << ( p_Val2_s_fu_134_p10 );
    sensitive << ( p_Val2_14_fu_162_p10 );

    SC_METHOD(thread_p_Val2_17_fu_280_p9);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( empty_fu_98_p1 );

    SC_METHOD(thread_p_Val2_19_fu_352_p2);
    sensitive << ( p_Val2_17_fu_280_p10 );
    sensitive << ( p_Val2_1_fu_308_p10 );

    SC_METHOD(thread_p_Val2_1_fu_308_p9);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( empty_fu_98_p1 );

    SC_METHOD(thread_p_Val2_20_fu_266_p3);
    sensitive << ( or_ln340_9_fu_244_p2 );
    sensitive << ( select_ln340_18_fu_250_p3 );
    sensitive << ( select_ln388_9_fu_258_p3 );

    SC_METHOD(thread_p_Val2_21_fu_412_p3);
    sensitive << ( or_ln340_10_fu_390_p2 );
    sensitive << ( select_ln340_20_fu_396_p3 );
    sensitive << ( select_ln388_10_fu_404_p3 );

    SC_METHOD(thread_p_Val2_23_fu_440_p2);
    sensitive << ( p_Val2_20_reg_506 );
    sensitive << ( p_Val2_21_reg_512 );

    SC_METHOD(thread_ret_V_1_fu_338_p2);
    sensitive << ( rhs_V_2_fu_334_p1 );
    sensitive << ( lhs_V_2_fu_330_p1 );

    SC_METHOD(thread_ret_V_2_fu_426_p2);
    sensitive << ( lhs_V_fu_420_p1 );
    sensitive << ( rhs_V_fu_423_p1 );

    SC_METHOD(thread_ret_V_fu_192_p2);
    sensitive << ( rhs_V_1_fu_188_p1 );
    sensitive << ( lhs_V_1_fu_184_p1 );

    SC_METHOD(thread_rhs_V_1_fu_188_p1);
    sensitive << ( p_Val2_14_fu_162_p10 );

    SC_METHOD(thread_rhs_V_2_fu_334_p1);
    sensitive << ( p_Val2_1_fu_308_p10 );

    SC_METHOD(thread_rhs_V_fu_423_p1);
    sensitive << ( p_Val2_21_reg_512 );

    SC_METHOD(thread_select_ln340_18_fu_250_p3);
    sensitive << ( p_Val2_16_fu_206_p2 );
    sensitive << ( xor_ln340_18_fu_232_p2 );

    SC_METHOD(thread_select_ln340_20_fu_396_p3);
    sensitive << ( p_Val2_19_fu_352_p2 );
    sensitive << ( xor_ln340_20_fu_378_p2 );

    SC_METHOD(thread_select_ln340_fu_482_p3);
    sensitive << ( p_Val2_23_fu_440_p2 );
    sensitive << ( xor_ln340_22_fu_464_p2 );

    SC_METHOD(thread_select_ln388_10_fu_404_p3);
    sensitive << ( p_Val2_19_fu_352_p2 );
    sensitive << ( underflow_1_fu_372_p2 );

    SC_METHOD(thread_select_ln388_9_fu_258_p3);
    sensitive << ( p_Val2_16_fu_206_p2 );
    sensitive << ( underflow_fu_226_p2 );

    SC_METHOD(thread_select_ln388_fu_490_p3);
    sensitive << ( p_Val2_23_fu_440_p2 );
    sensitive << ( underflow_2_fu_458_p2 );

    SC_METHOD(thread_underflow_1_fu_372_p2);
    sensitive << ( p_Result_14_fu_344_p3 );
    sensitive << ( xor_ln786_10_fu_366_p2 );

    SC_METHOD(thread_underflow_2_fu_458_p2);
    sensitive << ( p_Result_16_fu_432_p3 );
    sensitive << ( xor_ln786_fu_452_p2 );

    SC_METHOD(thread_underflow_fu_226_p2);
    sensitive << ( p_Result_s_fu_198_p3 );
    sensitive << ( xor_ln786_9_fu_220_p2 );

    SC_METHOD(thread_xor_ln340_18_fu_232_p2);
    sensitive << ( p_Result_13_fu_212_p3 );
    sensitive << ( p_Result_s_fu_198_p3 );

    SC_METHOD(thread_xor_ln340_19_fu_238_p2);
    sensitive << ( p_Result_s_fu_198_p3 );

    SC_METHOD(thread_xor_ln340_20_fu_378_p2);
    sensitive << ( p_Result_15_fu_358_p3 );
    sensitive << ( p_Result_14_fu_344_p3 );

    SC_METHOD(thread_xor_ln340_21_fu_384_p2);
    sensitive << ( p_Result_14_fu_344_p3 );

    SC_METHOD(thread_xor_ln340_22_fu_464_p2);
    sensitive << ( p_Result_17_fu_444_p3 );
    sensitive << ( p_Result_16_fu_432_p3 );

    SC_METHOD(thread_xor_ln340_fu_470_p2);
    sensitive << ( p_Result_16_fu_432_p3 );

    SC_METHOD(thread_xor_ln786_10_fu_366_p2);
    sensitive << ( p_Result_15_fu_358_p3 );

    SC_METHOD(thread_xor_ln786_9_fu_220_p2);
    sensitive << ( p_Result_13_fu_212_p3 );

    SC_METHOD(thread_xor_ln786_fu_452_p2);
    sensitive << ( p_Result_17_fu_444_p3 );

    SC_METHOD(thread_zext_ln43_1_fu_106_p1);
    sensitive << ( x_1_V );

    SC_METHOD(thread_zext_ln43_2_fu_110_p1);
    sensitive << ( x_2_V );

    SC_METHOD(thread_zext_ln43_3_fu_114_p1);
    sensitive << ( x_3_V );

    SC_METHOD(thread_zext_ln43_4_fu_118_p1);
    sensitive << ( x_4_V );

    SC_METHOD(thread_zext_ln43_5_fu_122_p1);
    sensitive << ( x_5_V );

    SC_METHOD(thread_zext_ln43_6_fu_126_p1);
    sensitive << ( x_6_V );

    SC_METHOD(thread_zext_ln43_7_fu_130_p1);
    sensitive << ( x_7_V );

    SC_METHOD(thread_zext_ln43_fu_102_p1);
    sensitive << ( x_0_V );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_ce );
    sensitive << ( ap_CS_fsm_state2 );

    ap_CS_fsm = "01";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, x_0_V, "(port)x_0_V");
    sc_trace(mVcdFile, x_1_V, "(port)x_1_V");
    sc_trace(mVcdFile, x_2_V, "(port)x_2_V");
    sc_trace(mVcdFile, x_3_V, "(port)x_3_V");
    sc_trace(mVcdFile, x_4_V, "(port)x_4_V");
    sc_trace(mVcdFile, x_5_V, "(port)x_5_V");
    sc_trace(mVcdFile, x_6_V, "(port)x_6_V");
    sc_trace(mVcdFile, x_7_V, "(port)x_7_V");
    sc_trace(mVcdFile, x_V_offset, "(port)x_V_offset");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
    sc_trace(mVcdFile, ap_ce, "(port)ap_ce");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, p_Val2_20_fu_266_p3, "p_Val2_20_fu_266_p3");
    sc_trace(mVcdFile, p_Val2_20_reg_506, "p_Val2_20_reg_506");
    sc_trace(mVcdFile, p_Val2_21_fu_412_p3, "p_Val2_21_fu_412_p3");
    sc_trace(mVcdFile, p_Val2_21_reg_512, "p_Val2_21_reg_512");
    sc_trace(mVcdFile, zext_ln43_fu_102_p1, "zext_ln43_fu_102_p1");
    sc_trace(mVcdFile, zext_ln43_1_fu_106_p1, "zext_ln43_1_fu_106_p1");
    sc_trace(mVcdFile, zext_ln43_2_fu_110_p1, "zext_ln43_2_fu_110_p1");
    sc_trace(mVcdFile, zext_ln43_3_fu_114_p1, "zext_ln43_3_fu_114_p1");
    sc_trace(mVcdFile, zext_ln43_4_fu_118_p1, "zext_ln43_4_fu_118_p1");
    sc_trace(mVcdFile, zext_ln43_5_fu_122_p1, "zext_ln43_5_fu_122_p1");
    sc_trace(mVcdFile, zext_ln43_6_fu_126_p1, "zext_ln43_6_fu_126_p1");
    sc_trace(mVcdFile, zext_ln43_7_fu_130_p1, "zext_ln43_7_fu_130_p1");
    sc_trace(mVcdFile, empty_fu_98_p1, "empty_fu_98_p1");
    sc_trace(mVcdFile, p_Val2_14_fu_162_p9, "p_Val2_14_fu_162_p9");
    sc_trace(mVcdFile, p_Val2_s_fu_134_p10, "p_Val2_s_fu_134_p10");
    sc_trace(mVcdFile, p_Val2_14_fu_162_p10, "p_Val2_14_fu_162_p10");
    sc_trace(mVcdFile, rhs_V_1_fu_188_p1, "rhs_V_1_fu_188_p1");
    sc_trace(mVcdFile, lhs_V_1_fu_184_p1, "lhs_V_1_fu_184_p1");
    sc_trace(mVcdFile, ret_V_fu_192_p2, "ret_V_fu_192_p2");
    sc_trace(mVcdFile, p_Val2_16_fu_206_p2, "p_Val2_16_fu_206_p2");
    sc_trace(mVcdFile, p_Result_13_fu_212_p3, "p_Result_13_fu_212_p3");
    sc_trace(mVcdFile, p_Result_s_fu_198_p3, "p_Result_s_fu_198_p3");
    sc_trace(mVcdFile, xor_ln786_9_fu_220_p2, "xor_ln786_9_fu_220_p2");
    sc_trace(mVcdFile, xor_ln340_19_fu_238_p2, "xor_ln340_19_fu_238_p2");
    sc_trace(mVcdFile, xor_ln340_18_fu_232_p2, "xor_ln340_18_fu_232_p2");
    sc_trace(mVcdFile, underflow_fu_226_p2, "underflow_fu_226_p2");
    sc_trace(mVcdFile, or_ln340_9_fu_244_p2, "or_ln340_9_fu_244_p2");
    sc_trace(mVcdFile, select_ln340_18_fu_250_p3, "select_ln340_18_fu_250_p3");
    sc_trace(mVcdFile, select_ln388_9_fu_258_p3, "select_ln388_9_fu_258_p3");
    sc_trace(mVcdFile, p_Val2_17_fu_280_p9, "p_Val2_17_fu_280_p9");
    sc_trace(mVcdFile, p_Val2_1_fu_308_p9, "p_Val2_1_fu_308_p9");
    sc_trace(mVcdFile, p_Val2_17_fu_280_p10, "p_Val2_17_fu_280_p10");
    sc_trace(mVcdFile, p_Val2_1_fu_308_p10, "p_Val2_1_fu_308_p10");
    sc_trace(mVcdFile, rhs_V_2_fu_334_p1, "rhs_V_2_fu_334_p1");
    sc_trace(mVcdFile, lhs_V_2_fu_330_p1, "lhs_V_2_fu_330_p1");
    sc_trace(mVcdFile, ret_V_1_fu_338_p2, "ret_V_1_fu_338_p2");
    sc_trace(mVcdFile, p_Val2_19_fu_352_p2, "p_Val2_19_fu_352_p2");
    sc_trace(mVcdFile, p_Result_15_fu_358_p3, "p_Result_15_fu_358_p3");
    sc_trace(mVcdFile, p_Result_14_fu_344_p3, "p_Result_14_fu_344_p3");
    sc_trace(mVcdFile, xor_ln786_10_fu_366_p2, "xor_ln786_10_fu_366_p2");
    sc_trace(mVcdFile, xor_ln340_21_fu_384_p2, "xor_ln340_21_fu_384_p2");
    sc_trace(mVcdFile, xor_ln340_20_fu_378_p2, "xor_ln340_20_fu_378_p2");
    sc_trace(mVcdFile, underflow_1_fu_372_p2, "underflow_1_fu_372_p2");
    sc_trace(mVcdFile, or_ln340_10_fu_390_p2, "or_ln340_10_fu_390_p2");
    sc_trace(mVcdFile, select_ln340_20_fu_396_p3, "select_ln340_20_fu_396_p3");
    sc_trace(mVcdFile, select_ln388_10_fu_404_p3, "select_ln388_10_fu_404_p3");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, lhs_V_fu_420_p1, "lhs_V_fu_420_p1");
    sc_trace(mVcdFile, rhs_V_fu_423_p1, "rhs_V_fu_423_p1");
    sc_trace(mVcdFile, ret_V_2_fu_426_p2, "ret_V_2_fu_426_p2");
    sc_trace(mVcdFile, p_Val2_23_fu_440_p2, "p_Val2_23_fu_440_p2");
    sc_trace(mVcdFile, p_Result_17_fu_444_p3, "p_Result_17_fu_444_p3");
    sc_trace(mVcdFile, p_Result_16_fu_432_p3, "p_Result_16_fu_432_p3");
    sc_trace(mVcdFile, xor_ln786_fu_452_p2, "xor_ln786_fu_452_p2");
    sc_trace(mVcdFile, xor_ln340_fu_470_p2, "xor_ln340_fu_470_p2");
    sc_trace(mVcdFile, xor_ln340_22_fu_464_p2, "xor_ln340_22_fu_464_p2");
    sc_trace(mVcdFile, underflow_2_fu_458_p2, "underflow_2_fu_458_p2");
    sc_trace(mVcdFile, or_ln340_fu_476_p2, "or_ln340_fu_476_p2");
    sc_trace(mVcdFile, select_ln340_fu_482_p3, "select_ln340_fu_482_p3");
    sc_trace(mVcdFile, select_ln388_fu_490_p3, "select_ln388_fu_490_p3");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::~reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete myproject_mux_83_18_1_1_U165;
    delete myproject_mux_83_18_1_1_U166;
    delete myproject_mux_83_18_1_1_U167;
    delete myproject_mux_83_18_1_1_U168;
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        p_Val2_20_reg_506 = p_Val2_20_fu_266_p3.read();
        p_Val2_21_reg_512 = p_Val2_21_fu_412_p3.read();
    }
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_ap_return() {
    ap_return = (!or_ln340_fu_476_p2.read()[0].is_01())? sc_lv<18>(): ((or_ln340_fu_476_p2.read()[0].to_bool())? select_ln340_fu_482_p3.read(): select_ln388_fu_490_p3.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_empty_fu_98_p1() {
    empty_fu_98_p1 = x_V_offset.read().range(3-1, 0);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_lhs_V_1_fu_184_p1() {
    lhs_V_1_fu_184_p1 = esl_sext<19,18>(p_Val2_s_fu_134_p10.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_lhs_V_2_fu_330_p1() {
    lhs_V_2_fu_330_p1 = esl_sext<19,18>(p_Val2_17_fu_280_p10.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_lhs_V_fu_420_p1() {
    lhs_V_fu_420_p1 = esl_sext<19,18>(p_Val2_20_reg_506.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_or_ln340_10_fu_390_p2() {
    or_ln340_10_fu_390_p2 = (p_Result_15_fu_358_p3.read() | xor_ln340_21_fu_384_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_or_ln340_9_fu_244_p2() {
    or_ln340_9_fu_244_p2 = (p_Result_13_fu_212_p3.read() | xor_ln340_19_fu_238_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_or_ln340_fu_476_p2() {
    or_ln340_fu_476_p2 = (p_Result_17_fu_444_p3.read() | xor_ln340_fu_470_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Result_13_fu_212_p3() {
    p_Result_13_fu_212_p3 = p_Val2_16_fu_206_p2.read().range(17, 17);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Result_14_fu_344_p3() {
    p_Result_14_fu_344_p3 = ret_V_1_fu_338_p2.read().range(18, 18);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Result_15_fu_358_p3() {
    p_Result_15_fu_358_p3 = p_Val2_19_fu_352_p2.read().range(17, 17);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Result_16_fu_432_p3() {
    p_Result_16_fu_432_p3 = ret_V_2_fu_426_p2.read().range(18, 18);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Result_17_fu_444_p3() {
    p_Result_17_fu_444_p3 = p_Val2_23_fu_440_p2.read().range(17, 17);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Result_s_fu_198_p3() {
    p_Result_s_fu_198_p3 = ret_V_fu_192_p2.read().range(18, 18);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Val2_14_fu_162_p9() {
    p_Val2_14_fu_162_p9 = (!ap_const_lv3_1.is_01() || !empty_fu_98_p1.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(empty_fu_98_p1.read()));
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Val2_16_fu_206_p2() {
    p_Val2_16_fu_206_p2 = (!p_Val2_s_fu_134_p10.read().is_01() || !p_Val2_14_fu_162_p10.read().is_01())? sc_lv<18>(): (sc_bigint<18>(p_Val2_s_fu_134_p10.read()) + sc_bigint<18>(p_Val2_14_fu_162_p10.read()));
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Val2_17_fu_280_p9() {
    p_Val2_17_fu_280_p9 = (!ap_const_lv3_2.is_01() || !empty_fu_98_p1.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_2) + sc_biguint<3>(empty_fu_98_p1.read()));
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Val2_19_fu_352_p2() {
    p_Val2_19_fu_352_p2 = (!p_Val2_17_fu_280_p10.read().is_01() || !p_Val2_1_fu_308_p10.read().is_01())? sc_lv<18>(): (sc_bigint<18>(p_Val2_17_fu_280_p10.read()) + sc_bigint<18>(p_Val2_1_fu_308_p10.read()));
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Val2_1_fu_308_p9() {
    p_Val2_1_fu_308_p9 = (!ap_const_lv3_3.is_01() || !empty_fu_98_p1.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_3) + sc_biguint<3>(empty_fu_98_p1.read()));
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Val2_20_fu_266_p3() {
    p_Val2_20_fu_266_p3 = (!or_ln340_9_fu_244_p2.read()[0].is_01())? sc_lv<18>(): ((or_ln340_9_fu_244_p2.read()[0].to_bool())? select_ln340_18_fu_250_p3.read(): select_ln388_9_fu_258_p3.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Val2_21_fu_412_p3() {
    p_Val2_21_fu_412_p3 = (!or_ln340_10_fu_390_p2.read()[0].is_01())? sc_lv<18>(): ((or_ln340_10_fu_390_p2.read()[0].to_bool())? select_ln340_20_fu_396_p3.read(): select_ln388_10_fu_404_p3.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Val2_23_fu_440_p2() {
    p_Val2_23_fu_440_p2 = (!p_Val2_21_reg_512.read().is_01() || !p_Val2_20_reg_506.read().is_01())? sc_lv<18>(): (sc_bigint<18>(p_Val2_21_reg_512.read()) + sc_bigint<18>(p_Val2_20_reg_506.read()));
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_ret_V_1_fu_338_p2() {
    ret_V_1_fu_338_p2 = (!rhs_V_2_fu_334_p1.read().is_01() || !lhs_V_2_fu_330_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(rhs_V_2_fu_334_p1.read()) + sc_bigint<19>(lhs_V_2_fu_330_p1.read()));
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_ret_V_2_fu_426_p2() {
    ret_V_2_fu_426_p2 = (!lhs_V_fu_420_p1.read().is_01() || !rhs_V_fu_423_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(lhs_V_fu_420_p1.read()) + sc_bigint<19>(rhs_V_fu_423_p1.read()));
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_ret_V_fu_192_p2() {
    ret_V_fu_192_p2 = (!rhs_V_1_fu_188_p1.read().is_01() || !lhs_V_1_fu_184_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(rhs_V_1_fu_188_p1.read()) + sc_bigint<19>(lhs_V_1_fu_184_p1.read()));
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_rhs_V_1_fu_188_p1() {
    rhs_V_1_fu_188_p1 = esl_sext<19,18>(p_Val2_14_fu_162_p10.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_rhs_V_2_fu_334_p1() {
    rhs_V_2_fu_334_p1 = esl_sext<19,18>(p_Val2_1_fu_308_p10.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_rhs_V_fu_423_p1() {
    rhs_V_fu_423_p1 = esl_sext<19,18>(p_Val2_21_reg_512.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_select_ln340_18_fu_250_p3() {
    select_ln340_18_fu_250_p3 = (!xor_ln340_18_fu_232_p2.read()[0].is_01())? sc_lv<18>(): ((xor_ln340_18_fu_232_p2.read()[0].to_bool())? ap_const_lv18_1FFFF: p_Val2_16_fu_206_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_select_ln340_20_fu_396_p3() {
    select_ln340_20_fu_396_p3 = (!xor_ln340_20_fu_378_p2.read()[0].is_01())? sc_lv<18>(): ((xor_ln340_20_fu_378_p2.read()[0].to_bool())? ap_const_lv18_1FFFF: p_Val2_19_fu_352_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_select_ln340_fu_482_p3() {
    select_ln340_fu_482_p3 = (!xor_ln340_22_fu_464_p2.read()[0].is_01())? sc_lv<18>(): ((xor_ln340_22_fu_464_p2.read()[0].to_bool())? ap_const_lv18_1FFFF: p_Val2_23_fu_440_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_select_ln388_10_fu_404_p3() {
    select_ln388_10_fu_404_p3 = (!underflow_1_fu_372_p2.read()[0].is_01())? sc_lv<18>(): ((underflow_1_fu_372_p2.read()[0].to_bool())? ap_const_lv18_20000: p_Val2_19_fu_352_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_select_ln388_9_fu_258_p3() {
    select_ln388_9_fu_258_p3 = (!underflow_fu_226_p2.read()[0].is_01())? sc_lv<18>(): ((underflow_fu_226_p2.read()[0].to_bool())? ap_const_lv18_20000: p_Val2_16_fu_206_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_select_ln388_fu_490_p3() {
    select_ln388_fu_490_p3 = (!underflow_2_fu_458_p2.read()[0].is_01())? sc_lv<18>(): ((underflow_2_fu_458_p2.read()[0].to_bool())? ap_const_lv18_20000: p_Val2_23_fu_440_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_underflow_1_fu_372_p2() {
    underflow_1_fu_372_p2 = (p_Result_14_fu_344_p3.read() & xor_ln786_10_fu_366_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_underflow_2_fu_458_p2() {
    underflow_2_fu_458_p2 = (p_Result_16_fu_432_p3.read() & xor_ln786_fu_452_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_underflow_fu_226_p2() {
    underflow_fu_226_p2 = (p_Result_s_fu_198_p3.read() & xor_ln786_9_fu_220_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_xor_ln340_18_fu_232_p2() {
    xor_ln340_18_fu_232_p2 = (p_Result_s_fu_198_p3.read() ^ p_Result_13_fu_212_p3.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_xor_ln340_19_fu_238_p2() {
    xor_ln340_19_fu_238_p2 = (p_Result_s_fu_198_p3.read() ^ ap_const_lv1_1);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_xor_ln340_20_fu_378_p2() {
    xor_ln340_20_fu_378_p2 = (p_Result_14_fu_344_p3.read() ^ p_Result_15_fu_358_p3.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_xor_ln340_21_fu_384_p2() {
    xor_ln340_21_fu_384_p2 = (p_Result_14_fu_344_p3.read() ^ ap_const_lv1_1);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_xor_ln340_22_fu_464_p2() {
    xor_ln340_22_fu_464_p2 = (p_Result_16_fu_432_p3.read() ^ p_Result_17_fu_444_p3.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_xor_ln340_fu_470_p2() {
    xor_ln340_fu_470_p2 = (p_Result_16_fu_432_p3.read() ^ ap_const_lv1_1);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_xor_ln786_10_fu_366_p2() {
    xor_ln786_10_fu_366_p2 = (p_Result_15_fu_358_p3.read() ^ ap_const_lv1_1);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_xor_ln786_9_fu_220_p2() {
    xor_ln786_9_fu_220_p2 = (p_Result_13_fu_212_p3.read() ^ ap_const_lv1_1);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_xor_ln786_fu_452_p2() {
    xor_ln786_fu_452_p2 = (p_Result_17_fu_444_p3.read() ^ ap_const_lv1_1);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_zext_ln43_1_fu_106_p1() {
    zext_ln43_1_fu_106_p1 = esl_zext<18,17>(x_1_V.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_zext_ln43_2_fu_110_p1() {
    zext_ln43_2_fu_110_p1 = esl_zext<18,17>(x_2_V.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_zext_ln43_3_fu_114_p1() {
    zext_ln43_3_fu_114_p1 = esl_zext<18,17>(x_3_V.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_zext_ln43_4_fu_118_p1() {
    zext_ln43_4_fu_118_p1 = esl_zext<18,17>(x_4_V.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_zext_ln43_5_fu_122_p1() {
    zext_ln43_5_fu_122_p1 = esl_zext<18,17>(x_5_V.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_zext_ln43_6_fu_126_p1() {
    zext_ln43_6_fu_126_p1 = esl_zext<18,17>(x_6_V.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_zext_ln43_7_fu_130_p1() {
    zext_ln43_7_fu_130_p1 = esl_zext<18,17>(x_7_V.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_zext_ln43_fu_102_p1() {
    zext_ln43_fu_102_p1 = esl_zext<18,17>(x_0_V.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        default : 
            ap_NS_fsm = "XX";
            break;
    }
}

}
