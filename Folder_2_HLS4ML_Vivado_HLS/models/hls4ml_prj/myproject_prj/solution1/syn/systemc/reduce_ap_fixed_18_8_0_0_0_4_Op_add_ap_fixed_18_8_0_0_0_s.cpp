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
const sc_lv<3> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_ST_fsm_state1 = "1";
const sc_lv<3> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_ST_fsm_state2 = "10";
const sc_lv<3> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_ST_fsm_state3 = "100";
const sc_lv<32> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<3> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv3_1 = "1";
const sc_lv<3> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv3_2 = "10";
const sc_lv<3> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv3_3 = "11";
const sc_lv<32> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv32_2 = "10";
const sc_lv<32> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv32_12 = "10010";
const sc_lv<32> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv32_11 = "10001";
const sc_lv<1> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv1_1 = "1";
const sc_lv<18> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv18_1FFFF = "11111111111111111";
const sc_lv<18> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv18_20000 = "100000000000000000";
const sc_lv<32> reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_lv32_1 = "1";
const bool reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::ap_const_boolean_1 = true;

reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s(sc_module_name name) : sc_module(name), mVcdFile(0) {
    myproject_mux_104_18_3_1_U4844 = new myproject_mux_104_18_3_1<1,3,18,18,18,18,18,18,18,18,18,18,4,18>("myproject_mux_104_18_3_1_U4844");
    myproject_mux_104_18_3_1_U4844->clk(ap_clk);
    myproject_mux_104_18_3_1_U4844->reset(ap_rst);
    myproject_mux_104_18_3_1_U4844->din0(zext_ln43_fu_122_p1);
    myproject_mux_104_18_3_1_U4844->din1(zext_ln43_2_fu_126_p1);
    myproject_mux_104_18_3_1_U4844->din2(zext_ln43_3_fu_130_p1);
    myproject_mux_104_18_3_1_U4844->din3(zext_ln43_4_fu_134_p1);
    myproject_mux_104_18_3_1_U4844->din4(zext_ln43_5_fu_138_p1);
    myproject_mux_104_18_3_1_U4844->din5(zext_ln43_6_fu_142_p1);
    myproject_mux_104_18_3_1_U4844->din6(zext_ln43_7_fu_146_p1);
    myproject_mux_104_18_3_1_U4844->din7(zext_ln43_8_fu_150_p1);
    myproject_mux_104_18_3_1_U4844->din8(zext_ln43_9_fu_154_p1);
    myproject_mux_104_18_3_1_U4844->din9(zext_ln43_10_fu_158_p1);
    myproject_mux_104_18_3_1_U4844->din10(grp_fu_162_p11);
    myproject_mux_104_18_3_1_U4844->ce(grp_fu_162_ce);
    myproject_mux_104_18_3_1_U4844->dout(grp_fu_162_p12);
    myproject_mux_104_18_3_1_U4845 = new myproject_mux_104_18_3_1<1,3,18,18,18,18,18,18,18,18,18,18,4,18>("myproject_mux_104_18_3_1_U4845");
    myproject_mux_104_18_3_1_U4845->clk(ap_clk);
    myproject_mux_104_18_3_1_U4845->reset(ap_rst);
    myproject_mux_104_18_3_1_U4845->din0(zext_ln43_fu_122_p1);
    myproject_mux_104_18_3_1_U4845->din1(zext_ln43_2_fu_126_p1);
    myproject_mux_104_18_3_1_U4845->din2(zext_ln43_3_fu_130_p1);
    myproject_mux_104_18_3_1_U4845->din3(zext_ln43_4_fu_134_p1);
    myproject_mux_104_18_3_1_U4845->din4(zext_ln43_5_fu_138_p1);
    myproject_mux_104_18_3_1_U4845->din5(zext_ln43_6_fu_142_p1);
    myproject_mux_104_18_3_1_U4845->din6(zext_ln43_7_fu_146_p1);
    myproject_mux_104_18_3_1_U4845->din7(zext_ln43_8_fu_150_p1);
    myproject_mux_104_18_3_1_U4845->din8(zext_ln43_9_fu_154_p1);
    myproject_mux_104_18_3_1_U4845->din9(zext_ln43_10_fu_158_p1);
    myproject_mux_104_18_3_1_U4845->din10(grp_fu_198_p11);
    myproject_mux_104_18_3_1_U4845->ce(grp_fu_198_ce);
    myproject_mux_104_18_3_1_U4845->dout(grp_fu_198_p12);
    myproject_mux_104_18_3_1_U4846 = new myproject_mux_104_18_3_1<1,3,18,18,18,18,18,18,18,18,18,18,4,18>("myproject_mux_104_18_3_1_U4846");
    myproject_mux_104_18_3_1_U4846->clk(ap_clk);
    myproject_mux_104_18_3_1_U4846->reset(ap_rst);
    myproject_mux_104_18_3_1_U4846->din0(zext_ln43_fu_122_p1);
    myproject_mux_104_18_3_1_U4846->din1(zext_ln43_2_fu_126_p1);
    myproject_mux_104_18_3_1_U4846->din2(zext_ln43_3_fu_130_p1);
    myproject_mux_104_18_3_1_U4846->din3(zext_ln43_4_fu_134_p1);
    myproject_mux_104_18_3_1_U4846->din4(zext_ln43_5_fu_138_p1);
    myproject_mux_104_18_3_1_U4846->din5(zext_ln43_6_fu_142_p1);
    myproject_mux_104_18_3_1_U4846->din6(zext_ln43_7_fu_146_p1);
    myproject_mux_104_18_3_1_U4846->din7(zext_ln43_8_fu_150_p1);
    myproject_mux_104_18_3_1_U4846->din8(zext_ln43_9_fu_154_p1);
    myproject_mux_104_18_3_1_U4846->din9(zext_ln43_10_fu_158_p1);
    myproject_mux_104_18_3_1_U4846->din10(grp_fu_234_p11);
    myproject_mux_104_18_3_1_U4846->ce(grp_fu_234_ce);
    myproject_mux_104_18_3_1_U4846->dout(grp_fu_234_p12);
    myproject_mux_104_18_3_1_U4847 = new myproject_mux_104_18_3_1<1,3,18,18,18,18,18,18,18,18,18,18,4,18>("myproject_mux_104_18_3_1_U4847");
    myproject_mux_104_18_3_1_U4847->clk(ap_clk);
    myproject_mux_104_18_3_1_U4847->reset(ap_rst);
    myproject_mux_104_18_3_1_U4847->din0(zext_ln43_fu_122_p1);
    myproject_mux_104_18_3_1_U4847->din1(zext_ln43_2_fu_126_p1);
    myproject_mux_104_18_3_1_U4847->din2(zext_ln43_3_fu_130_p1);
    myproject_mux_104_18_3_1_U4847->din3(zext_ln43_4_fu_134_p1);
    myproject_mux_104_18_3_1_U4847->din4(zext_ln43_5_fu_138_p1);
    myproject_mux_104_18_3_1_U4847->din5(zext_ln43_6_fu_142_p1);
    myproject_mux_104_18_3_1_U4847->din6(zext_ln43_7_fu_146_p1);
    myproject_mux_104_18_3_1_U4847->din7(zext_ln43_8_fu_150_p1);
    myproject_mux_104_18_3_1_U4847->din8(zext_ln43_9_fu_154_p1);
    myproject_mux_104_18_3_1_U4847->din9(zext_ln43_10_fu_158_p1);
    myproject_mux_104_18_3_1_U4847->din10(grp_fu_270_p11);
    myproject_mux_104_18_3_1_U4847->ce(grp_fu_270_ce);
    myproject_mux_104_18_3_1_U4847->dout(grp_fu_270_p12);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln43_1_fu_260_p2);
    sensitive << ( empty_fu_114_p1 );

    SC_METHOD(thread_add_ln43_fu_188_p2);
    sensitive << ( empty_fu_114_p1 );

    SC_METHOD(thread_add_ln45_fu_224_p2);
    sensitive << ( empty_fu_114_p1 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_ce );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_ce );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_ce );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( or_ln340_fu_536_p2 );
    sensitive << ( select_ln340_fu_542_p3 );
    sensitive << ( select_ln388_fu_550_p3 );

    SC_METHOD(thread_empty_fu_114_p1);
    sensitive << ( x_V_offset );

    SC_METHOD(thread_grp_fu_162_ce);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_grp_fu_162_p11);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( x_V_offset );

    SC_METHOD(thread_grp_fu_198_ce);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_grp_fu_198_p11);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( add_ln43_fu_188_p2 );

    SC_METHOD(thread_grp_fu_234_ce);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_grp_fu_234_p11);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( add_ln45_fu_224_p2 );

    SC_METHOD(thread_grp_fu_270_ce);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_grp_fu_270_p11);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( add_ln43_1_fu_260_p2 );

    SC_METHOD(thread_lhs_V_2_fu_296_p1);
    sensitive << ( grp_fu_162_p12 );

    SC_METHOD(thread_lhs_V_3_fu_386_p1);
    sensitive << ( grp_fu_234_p12 );

    SC_METHOD(thread_lhs_V_fu_476_p1);
    sensitive << ( p_Val2_38_fu_378_p3 );

    SC_METHOD(thread_or_ln340_12_fu_356_p2);
    sensitive << ( p_Result_22_fu_324_p3 );
    sensitive << ( xor_ln340_25_fu_350_p2 );

    SC_METHOD(thread_or_ln340_13_fu_446_p2);
    sensitive << ( p_Result_24_fu_414_p3 );
    sensitive << ( xor_ln340_27_fu_440_p2 );

    SC_METHOD(thread_or_ln340_fu_536_p2);
    sensitive << ( p_Result_26_fu_504_p3 );
    sensitive << ( xor_ln340_fu_530_p2 );

    SC_METHOD(thread_p_Result_22_fu_324_p3);
    sensitive << ( p_Val2_34_fu_318_p2 );

    SC_METHOD(thread_p_Result_23_fu_400_p3);
    sensitive << ( ret_V_2_fu_394_p2 );

    SC_METHOD(thread_p_Result_24_fu_414_p3);
    sensitive << ( p_Val2_37_fu_408_p2 );

    SC_METHOD(thread_p_Result_25_fu_490_p3);
    sensitive << ( ret_V_3_fu_484_p2 );

    SC_METHOD(thread_p_Result_26_fu_504_p3);
    sensitive << ( p_Val2_41_fu_498_p2 );

    SC_METHOD(thread_p_Result_s_fu_310_p3);
    sensitive << ( ret_V_fu_304_p2 );

    SC_METHOD(thread_p_Val2_34_fu_318_p2);
    sensitive << ( grp_fu_162_p12 );
    sensitive << ( grp_fu_198_p12 );

    SC_METHOD(thread_p_Val2_37_fu_408_p2);
    sensitive << ( grp_fu_234_p12 );
    sensitive << ( grp_fu_270_p12 );

    SC_METHOD(thread_p_Val2_38_fu_378_p3);
    sensitive << ( or_ln340_12_fu_356_p2 );
    sensitive << ( select_ln340_24_fu_362_p3 );
    sensitive << ( select_ln388_12_fu_370_p3 );

    SC_METHOD(thread_p_Val2_39_fu_468_p3);
    sensitive << ( or_ln340_13_fu_446_p2 );
    sensitive << ( select_ln340_26_fu_452_p3 );
    sensitive << ( select_ln388_13_fu_460_p3 );

    SC_METHOD(thread_p_Val2_41_fu_498_p2);
    sensitive << ( p_Val2_38_fu_378_p3 );
    sensitive << ( p_Val2_39_fu_468_p3 );

    SC_METHOD(thread_ret_V_2_fu_394_p2);
    sensitive << ( rhs_V_3_fu_390_p1 );
    sensitive << ( lhs_V_3_fu_386_p1 );

    SC_METHOD(thread_ret_V_3_fu_484_p2);
    sensitive << ( lhs_V_fu_476_p1 );
    sensitive << ( rhs_V_fu_480_p1 );

    SC_METHOD(thread_ret_V_fu_304_p2);
    sensitive << ( rhs_V_2_fu_300_p1 );
    sensitive << ( lhs_V_2_fu_296_p1 );

    SC_METHOD(thread_rhs_V_2_fu_300_p1);
    sensitive << ( grp_fu_198_p12 );

    SC_METHOD(thread_rhs_V_3_fu_390_p1);
    sensitive << ( grp_fu_270_p12 );

    SC_METHOD(thread_rhs_V_fu_480_p1);
    sensitive << ( p_Val2_39_fu_468_p3 );

    SC_METHOD(thread_select_ln340_24_fu_362_p3);
    sensitive << ( p_Val2_34_fu_318_p2 );
    sensitive << ( xor_ln340_24_fu_344_p2 );

    SC_METHOD(thread_select_ln340_26_fu_452_p3);
    sensitive << ( p_Val2_37_fu_408_p2 );
    sensitive << ( xor_ln340_26_fu_434_p2 );

    SC_METHOD(thread_select_ln340_fu_542_p3);
    sensitive << ( p_Val2_41_fu_498_p2 );
    sensitive << ( xor_ln340_28_fu_524_p2 );

    SC_METHOD(thread_select_ln388_12_fu_370_p3);
    sensitive << ( p_Val2_34_fu_318_p2 );
    sensitive << ( underflow_fu_338_p2 );

    SC_METHOD(thread_select_ln388_13_fu_460_p3);
    sensitive << ( p_Val2_37_fu_408_p2 );
    sensitive << ( underflow_2_fu_428_p2 );

    SC_METHOD(thread_select_ln388_fu_550_p3);
    sensitive << ( p_Val2_41_fu_498_p2 );
    sensitive << ( underflow_3_fu_518_p2 );

    SC_METHOD(thread_underflow_2_fu_428_p2);
    sensitive << ( p_Result_23_fu_400_p3 );
    sensitive << ( xor_ln786_13_fu_422_p2 );

    SC_METHOD(thread_underflow_3_fu_518_p2);
    sensitive << ( p_Result_25_fu_490_p3 );
    sensitive << ( xor_ln786_fu_512_p2 );

    SC_METHOD(thread_underflow_fu_338_p2);
    sensitive << ( p_Result_s_fu_310_p3 );
    sensitive << ( xor_ln786_12_fu_332_p2 );

    SC_METHOD(thread_xor_ln340_24_fu_344_p2);
    sensitive << ( p_Result_22_fu_324_p3 );
    sensitive << ( p_Result_s_fu_310_p3 );

    SC_METHOD(thread_xor_ln340_25_fu_350_p2);
    sensitive << ( p_Result_s_fu_310_p3 );

    SC_METHOD(thread_xor_ln340_26_fu_434_p2);
    sensitive << ( p_Result_24_fu_414_p3 );
    sensitive << ( p_Result_23_fu_400_p3 );

    SC_METHOD(thread_xor_ln340_27_fu_440_p2);
    sensitive << ( p_Result_23_fu_400_p3 );

    SC_METHOD(thread_xor_ln340_28_fu_524_p2);
    sensitive << ( p_Result_26_fu_504_p3 );
    sensitive << ( p_Result_25_fu_490_p3 );

    SC_METHOD(thread_xor_ln340_fu_530_p2);
    sensitive << ( p_Result_25_fu_490_p3 );

    SC_METHOD(thread_xor_ln786_12_fu_332_p2);
    sensitive << ( p_Result_22_fu_324_p3 );

    SC_METHOD(thread_xor_ln786_13_fu_422_p2);
    sensitive << ( p_Result_24_fu_414_p3 );

    SC_METHOD(thread_xor_ln786_fu_512_p2);
    sensitive << ( p_Result_26_fu_504_p3 );

    SC_METHOD(thread_zext_ln43_10_fu_158_p1);
    sensitive << ( x_9_V );

    SC_METHOD(thread_zext_ln43_2_fu_126_p1);
    sensitive << ( x_1_V );

    SC_METHOD(thread_zext_ln43_3_fu_130_p1);
    sensitive << ( x_2_V );

    SC_METHOD(thread_zext_ln43_4_fu_134_p1);
    sensitive << ( x_3_V );

    SC_METHOD(thread_zext_ln43_5_fu_138_p1);
    sensitive << ( x_4_V );

    SC_METHOD(thread_zext_ln43_6_fu_142_p1);
    sensitive << ( x_5_V );

    SC_METHOD(thread_zext_ln43_7_fu_146_p1);
    sensitive << ( x_6_V );

    SC_METHOD(thread_zext_ln43_8_fu_150_p1);
    sensitive << ( x_7_V );

    SC_METHOD(thread_zext_ln43_9_fu_154_p1);
    sensitive << ( x_8_V );

    SC_METHOD(thread_zext_ln43_fu_122_p1);
    sensitive << ( x_0_V );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_ce );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state2 );

    ap_CS_fsm = "001";
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
    sc_trace(mVcdFile, x_8_V, "(port)x_8_V");
    sc_trace(mVcdFile, x_9_V, "(port)x_9_V");
    sc_trace(mVcdFile, x_V_offset, "(port)x_V_offset");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
    sc_trace(mVcdFile, ap_ce, "(port)ap_ce");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, zext_ln43_fu_122_p1, "zext_ln43_fu_122_p1");
    sc_trace(mVcdFile, zext_ln43_2_fu_126_p1, "zext_ln43_2_fu_126_p1");
    sc_trace(mVcdFile, zext_ln43_3_fu_130_p1, "zext_ln43_3_fu_130_p1");
    sc_trace(mVcdFile, zext_ln43_4_fu_134_p1, "zext_ln43_4_fu_134_p1");
    sc_trace(mVcdFile, zext_ln43_5_fu_138_p1, "zext_ln43_5_fu_138_p1");
    sc_trace(mVcdFile, zext_ln43_6_fu_142_p1, "zext_ln43_6_fu_142_p1");
    sc_trace(mVcdFile, zext_ln43_7_fu_146_p1, "zext_ln43_7_fu_146_p1");
    sc_trace(mVcdFile, zext_ln43_8_fu_150_p1, "zext_ln43_8_fu_150_p1");
    sc_trace(mVcdFile, zext_ln43_9_fu_154_p1, "zext_ln43_9_fu_154_p1");
    sc_trace(mVcdFile, zext_ln43_10_fu_158_p1, "zext_ln43_10_fu_158_p1");
    sc_trace(mVcdFile, grp_fu_162_p11, "grp_fu_162_p11");
    sc_trace(mVcdFile, empty_fu_114_p1, "empty_fu_114_p1");
    sc_trace(mVcdFile, add_ln43_fu_188_p2, "add_ln43_fu_188_p2");
    sc_trace(mVcdFile, grp_fu_198_p11, "grp_fu_198_p11");
    sc_trace(mVcdFile, add_ln45_fu_224_p2, "add_ln45_fu_224_p2");
    sc_trace(mVcdFile, grp_fu_234_p11, "grp_fu_234_p11");
    sc_trace(mVcdFile, add_ln43_1_fu_260_p2, "add_ln43_1_fu_260_p2");
    sc_trace(mVcdFile, grp_fu_270_p11, "grp_fu_270_p11");
    sc_trace(mVcdFile, grp_fu_162_p12, "grp_fu_162_p12");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, grp_fu_198_p12, "grp_fu_198_p12");
    sc_trace(mVcdFile, rhs_V_2_fu_300_p1, "rhs_V_2_fu_300_p1");
    sc_trace(mVcdFile, lhs_V_2_fu_296_p1, "lhs_V_2_fu_296_p1");
    sc_trace(mVcdFile, ret_V_fu_304_p2, "ret_V_fu_304_p2");
    sc_trace(mVcdFile, p_Val2_34_fu_318_p2, "p_Val2_34_fu_318_p2");
    sc_trace(mVcdFile, p_Result_22_fu_324_p3, "p_Result_22_fu_324_p3");
    sc_trace(mVcdFile, p_Result_s_fu_310_p3, "p_Result_s_fu_310_p3");
    sc_trace(mVcdFile, xor_ln786_12_fu_332_p2, "xor_ln786_12_fu_332_p2");
    sc_trace(mVcdFile, xor_ln340_25_fu_350_p2, "xor_ln340_25_fu_350_p2");
    sc_trace(mVcdFile, xor_ln340_24_fu_344_p2, "xor_ln340_24_fu_344_p2");
    sc_trace(mVcdFile, underflow_fu_338_p2, "underflow_fu_338_p2");
    sc_trace(mVcdFile, or_ln340_12_fu_356_p2, "or_ln340_12_fu_356_p2");
    sc_trace(mVcdFile, select_ln340_24_fu_362_p3, "select_ln340_24_fu_362_p3");
    sc_trace(mVcdFile, select_ln388_12_fu_370_p3, "select_ln388_12_fu_370_p3");
    sc_trace(mVcdFile, grp_fu_234_p12, "grp_fu_234_p12");
    sc_trace(mVcdFile, grp_fu_270_p12, "grp_fu_270_p12");
    sc_trace(mVcdFile, rhs_V_3_fu_390_p1, "rhs_V_3_fu_390_p1");
    sc_trace(mVcdFile, lhs_V_3_fu_386_p1, "lhs_V_3_fu_386_p1");
    sc_trace(mVcdFile, ret_V_2_fu_394_p2, "ret_V_2_fu_394_p2");
    sc_trace(mVcdFile, p_Val2_37_fu_408_p2, "p_Val2_37_fu_408_p2");
    sc_trace(mVcdFile, p_Result_24_fu_414_p3, "p_Result_24_fu_414_p3");
    sc_trace(mVcdFile, p_Result_23_fu_400_p3, "p_Result_23_fu_400_p3");
    sc_trace(mVcdFile, xor_ln786_13_fu_422_p2, "xor_ln786_13_fu_422_p2");
    sc_trace(mVcdFile, xor_ln340_27_fu_440_p2, "xor_ln340_27_fu_440_p2");
    sc_trace(mVcdFile, xor_ln340_26_fu_434_p2, "xor_ln340_26_fu_434_p2");
    sc_trace(mVcdFile, underflow_2_fu_428_p2, "underflow_2_fu_428_p2");
    sc_trace(mVcdFile, or_ln340_13_fu_446_p2, "or_ln340_13_fu_446_p2");
    sc_trace(mVcdFile, select_ln340_26_fu_452_p3, "select_ln340_26_fu_452_p3");
    sc_trace(mVcdFile, select_ln388_13_fu_460_p3, "select_ln388_13_fu_460_p3");
    sc_trace(mVcdFile, p_Val2_38_fu_378_p3, "p_Val2_38_fu_378_p3");
    sc_trace(mVcdFile, p_Val2_39_fu_468_p3, "p_Val2_39_fu_468_p3");
    sc_trace(mVcdFile, lhs_V_fu_476_p1, "lhs_V_fu_476_p1");
    sc_trace(mVcdFile, rhs_V_fu_480_p1, "rhs_V_fu_480_p1");
    sc_trace(mVcdFile, ret_V_3_fu_484_p2, "ret_V_3_fu_484_p2");
    sc_trace(mVcdFile, p_Val2_41_fu_498_p2, "p_Val2_41_fu_498_p2");
    sc_trace(mVcdFile, p_Result_26_fu_504_p3, "p_Result_26_fu_504_p3");
    sc_trace(mVcdFile, p_Result_25_fu_490_p3, "p_Result_25_fu_490_p3");
    sc_trace(mVcdFile, xor_ln786_fu_512_p2, "xor_ln786_fu_512_p2");
    sc_trace(mVcdFile, xor_ln340_fu_530_p2, "xor_ln340_fu_530_p2");
    sc_trace(mVcdFile, xor_ln340_28_fu_524_p2, "xor_ln340_28_fu_524_p2");
    sc_trace(mVcdFile, underflow_3_fu_518_p2, "underflow_3_fu_518_p2");
    sc_trace(mVcdFile, or_ln340_fu_536_p2, "or_ln340_fu_536_p2");
    sc_trace(mVcdFile, select_ln340_fu_542_p3, "select_ln340_fu_542_p3");
    sc_trace(mVcdFile, select_ln388_fu_550_p3, "select_ln388_fu_550_p3");
    sc_trace(mVcdFile, grp_fu_162_ce, "grp_fu_162_ce");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, grp_fu_198_ce, "grp_fu_198_ce");
    sc_trace(mVcdFile, grp_fu_234_ce, "grp_fu_234_ce");
    sc_trace(mVcdFile, grp_fu_270_ce, "grp_fu_270_ce");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::~reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete myproject_mux_104_18_3_1_U4844;
    delete myproject_mux_104_18_3_1_U4845;
    delete myproject_mux_104_18_3_1_U4846;
    delete myproject_mux_104_18_3_1_U4847;
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_add_ln43_1_fu_260_p2() {
    add_ln43_1_fu_260_p2 = (!ap_const_lv3_3.is_01() || !empty_fu_114_p1.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_3) + sc_biguint<3>(empty_fu_114_p1.read()));
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_add_ln43_fu_188_p2() {
    add_ln43_fu_188_p2 = (!ap_const_lv3_1.is_01() || !empty_fu_114_p1.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(empty_fu_114_p1.read()));
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_add_ln45_fu_224_p2() {
    add_ln45_fu_224_p2 = (!ap_const_lv3_2.is_01() || !empty_fu_114_p1.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_2) + sc_biguint<3>(empty_fu_114_p1.read()));
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_ap_return() {
    ap_return = (!or_ln340_fu_536_p2.read()[0].is_01())? sc_lv<18>(): ((or_ln340_fu_536_p2.read()[0].to_bool())? select_ln340_fu_542_p3.read(): select_ln388_fu_550_p3.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_empty_fu_114_p1() {
    empty_fu_114_p1 = x_V_offset.read().range(3-1, 0);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_grp_fu_162_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0))) {
        grp_fu_162_ce = ap_const_logic_0;
    } else {
        grp_fu_162_ce = ap_const_logic_1;
    }
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_grp_fu_162_p11() {
    grp_fu_162_p11 = x_V_offset.read().range(4-1, 0);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_grp_fu_198_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0))) {
        grp_fu_198_ce = ap_const_logic_0;
    } else {
        grp_fu_198_ce = ap_const_logic_1;
    }
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_grp_fu_198_p11() {
    grp_fu_198_p11 = esl_zext<4,3>(add_ln43_fu_188_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_grp_fu_234_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0))) {
        grp_fu_234_ce = ap_const_logic_0;
    } else {
        grp_fu_234_ce = ap_const_logic_1;
    }
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_grp_fu_234_p11() {
    grp_fu_234_p11 = esl_zext<4,3>(add_ln45_fu_224_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_grp_fu_270_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0))) {
        grp_fu_270_ce = ap_const_logic_0;
    } else {
        grp_fu_270_ce = ap_const_logic_1;
    }
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_grp_fu_270_p11() {
    grp_fu_270_p11 = esl_zext<4,3>(add_ln43_1_fu_260_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_lhs_V_2_fu_296_p1() {
    lhs_V_2_fu_296_p1 = esl_sext<19,18>(grp_fu_162_p12.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_lhs_V_3_fu_386_p1() {
    lhs_V_3_fu_386_p1 = esl_sext<19,18>(grp_fu_234_p12.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_lhs_V_fu_476_p1() {
    lhs_V_fu_476_p1 = esl_sext<19,18>(p_Val2_38_fu_378_p3.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_or_ln340_12_fu_356_p2() {
    or_ln340_12_fu_356_p2 = (p_Result_22_fu_324_p3.read() | xor_ln340_25_fu_350_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_or_ln340_13_fu_446_p2() {
    or_ln340_13_fu_446_p2 = (p_Result_24_fu_414_p3.read() | xor_ln340_27_fu_440_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_or_ln340_fu_536_p2() {
    or_ln340_fu_536_p2 = (p_Result_26_fu_504_p3.read() | xor_ln340_fu_530_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Result_22_fu_324_p3() {
    p_Result_22_fu_324_p3 = p_Val2_34_fu_318_p2.read().range(17, 17);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Result_23_fu_400_p3() {
    p_Result_23_fu_400_p3 = ret_V_2_fu_394_p2.read().range(18, 18);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Result_24_fu_414_p3() {
    p_Result_24_fu_414_p3 = p_Val2_37_fu_408_p2.read().range(17, 17);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Result_25_fu_490_p3() {
    p_Result_25_fu_490_p3 = ret_V_3_fu_484_p2.read().range(18, 18);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Result_26_fu_504_p3() {
    p_Result_26_fu_504_p3 = p_Val2_41_fu_498_p2.read().range(17, 17);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Result_s_fu_310_p3() {
    p_Result_s_fu_310_p3 = ret_V_fu_304_p2.read().range(18, 18);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Val2_34_fu_318_p2() {
    p_Val2_34_fu_318_p2 = (!grp_fu_162_p12.read().is_01() || !grp_fu_198_p12.read().is_01())? sc_lv<18>(): (sc_bigint<18>(grp_fu_162_p12.read()) + sc_bigint<18>(grp_fu_198_p12.read()));
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Val2_37_fu_408_p2() {
    p_Val2_37_fu_408_p2 = (!grp_fu_234_p12.read().is_01() || !grp_fu_270_p12.read().is_01())? sc_lv<18>(): (sc_bigint<18>(grp_fu_234_p12.read()) + sc_bigint<18>(grp_fu_270_p12.read()));
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Val2_38_fu_378_p3() {
    p_Val2_38_fu_378_p3 = (!or_ln340_12_fu_356_p2.read()[0].is_01())? sc_lv<18>(): ((or_ln340_12_fu_356_p2.read()[0].to_bool())? select_ln340_24_fu_362_p3.read(): select_ln388_12_fu_370_p3.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Val2_39_fu_468_p3() {
    p_Val2_39_fu_468_p3 = (!or_ln340_13_fu_446_p2.read()[0].is_01())? sc_lv<18>(): ((or_ln340_13_fu_446_p2.read()[0].to_bool())? select_ln340_26_fu_452_p3.read(): select_ln388_13_fu_460_p3.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_p_Val2_41_fu_498_p2() {
    p_Val2_41_fu_498_p2 = (!p_Val2_39_fu_468_p3.read().is_01() || !p_Val2_38_fu_378_p3.read().is_01())? sc_lv<18>(): (sc_bigint<18>(p_Val2_39_fu_468_p3.read()) + sc_bigint<18>(p_Val2_38_fu_378_p3.read()));
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_ret_V_2_fu_394_p2() {
    ret_V_2_fu_394_p2 = (!rhs_V_3_fu_390_p1.read().is_01() || !lhs_V_3_fu_386_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(rhs_V_3_fu_390_p1.read()) + sc_bigint<19>(lhs_V_3_fu_386_p1.read()));
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_ret_V_3_fu_484_p2() {
    ret_V_3_fu_484_p2 = (!lhs_V_fu_476_p1.read().is_01() || !rhs_V_fu_480_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(lhs_V_fu_476_p1.read()) + sc_bigint<19>(rhs_V_fu_480_p1.read()));
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_ret_V_fu_304_p2() {
    ret_V_fu_304_p2 = (!rhs_V_2_fu_300_p1.read().is_01() || !lhs_V_2_fu_296_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(rhs_V_2_fu_300_p1.read()) + sc_bigint<19>(lhs_V_2_fu_296_p1.read()));
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_rhs_V_2_fu_300_p1() {
    rhs_V_2_fu_300_p1 = esl_sext<19,18>(grp_fu_198_p12.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_rhs_V_3_fu_390_p1() {
    rhs_V_3_fu_390_p1 = esl_sext<19,18>(grp_fu_270_p12.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_rhs_V_fu_480_p1() {
    rhs_V_fu_480_p1 = esl_sext<19,18>(p_Val2_39_fu_468_p3.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_select_ln340_24_fu_362_p3() {
    select_ln340_24_fu_362_p3 = (!xor_ln340_24_fu_344_p2.read()[0].is_01())? sc_lv<18>(): ((xor_ln340_24_fu_344_p2.read()[0].to_bool())? ap_const_lv18_1FFFF: p_Val2_34_fu_318_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_select_ln340_26_fu_452_p3() {
    select_ln340_26_fu_452_p3 = (!xor_ln340_26_fu_434_p2.read()[0].is_01())? sc_lv<18>(): ((xor_ln340_26_fu_434_p2.read()[0].to_bool())? ap_const_lv18_1FFFF: p_Val2_37_fu_408_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_select_ln340_fu_542_p3() {
    select_ln340_fu_542_p3 = (!xor_ln340_28_fu_524_p2.read()[0].is_01())? sc_lv<18>(): ((xor_ln340_28_fu_524_p2.read()[0].to_bool())? ap_const_lv18_1FFFF: p_Val2_41_fu_498_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_select_ln388_12_fu_370_p3() {
    select_ln388_12_fu_370_p3 = (!underflow_fu_338_p2.read()[0].is_01())? sc_lv<18>(): ((underflow_fu_338_p2.read()[0].to_bool())? ap_const_lv18_20000: p_Val2_34_fu_318_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_select_ln388_13_fu_460_p3() {
    select_ln388_13_fu_460_p3 = (!underflow_2_fu_428_p2.read()[0].is_01())? sc_lv<18>(): ((underflow_2_fu_428_p2.read()[0].to_bool())? ap_const_lv18_20000: p_Val2_37_fu_408_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_select_ln388_fu_550_p3() {
    select_ln388_fu_550_p3 = (!underflow_3_fu_518_p2.read()[0].is_01())? sc_lv<18>(): ((underflow_3_fu_518_p2.read()[0].to_bool())? ap_const_lv18_20000: p_Val2_41_fu_498_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_underflow_2_fu_428_p2() {
    underflow_2_fu_428_p2 = (p_Result_23_fu_400_p3.read() & xor_ln786_13_fu_422_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_underflow_3_fu_518_p2() {
    underflow_3_fu_518_p2 = (p_Result_25_fu_490_p3.read() & xor_ln786_fu_512_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_underflow_fu_338_p2() {
    underflow_fu_338_p2 = (p_Result_s_fu_310_p3.read() & xor_ln786_12_fu_332_p2.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_xor_ln340_24_fu_344_p2() {
    xor_ln340_24_fu_344_p2 = (p_Result_s_fu_310_p3.read() ^ p_Result_22_fu_324_p3.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_xor_ln340_25_fu_350_p2() {
    xor_ln340_25_fu_350_p2 = (p_Result_s_fu_310_p3.read() ^ ap_const_lv1_1);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_xor_ln340_26_fu_434_p2() {
    xor_ln340_26_fu_434_p2 = (p_Result_23_fu_400_p3.read() ^ p_Result_24_fu_414_p3.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_xor_ln340_27_fu_440_p2() {
    xor_ln340_27_fu_440_p2 = (p_Result_23_fu_400_p3.read() ^ ap_const_lv1_1);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_xor_ln340_28_fu_524_p2() {
    xor_ln340_28_fu_524_p2 = (p_Result_25_fu_490_p3.read() ^ p_Result_26_fu_504_p3.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_xor_ln340_fu_530_p2() {
    xor_ln340_fu_530_p2 = (p_Result_25_fu_490_p3.read() ^ ap_const_lv1_1);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_xor_ln786_12_fu_332_p2() {
    xor_ln786_12_fu_332_p2 = (p_Result_22_fu_324_p3.read() ^ ap_const_lv1_1);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_xor_ln786_13_fu_422_p2() {
    xor_ln786_13_fu_422_p2 = (p_Result_24_fu_414_p3.read() ^ ap_const_lv1_1);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_xor_ln786_fu_512_p2() {
    xor_ln786_fu_512_p2 = (p_Result_26_fu_504_p3.read() ^ ap_const_lv1_1);
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_zext_ln43_10_fu_158_p1() {
    zext_ln43_10_fu_158_p1 = esl_zext<18,17>(x_9_V.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_zext_ln43_2_fu_126_p1() {
    zext_ln43_2_fu_126_p1 = esl_zext<18,17>(x_1_V.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_zext_ln43_3_fu_130_p1() {
    zext_ln43_3_fu_130_p1 = esl_zext<18,17>(x_2_V.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_zext_ln43_4_fu_134_p1() {
    zext_ln43_4_fu_134_p1 = esl_zext<18,17>(x_3_V.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_zext_ln43_5_fu_138_p1() {
    zext_ln43_5_fu_138_p1 = esl_zext<18,17>(x_4_V.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_zext_ln43_6_fu_142_p1() {
    zext_ln43_6_fu_142_p1 = esl_zext<18,17>(x_5_V.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_zext_ln43_7_fu_146_p1() {
    zext_ln43_7_fu_146_p1 = esl_zext<18,17>(x_6_V.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_zext_ln43_8_fu_150_p1() {
    zext_ln43_8_fu_150_p1 = esl_zext<18,17>(x_7_V.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_zext_ln43_9_fu_154_p1() {
    zext_ln43_9_fu_154_p1 = esl_zext<18,17>(x_8_V.read());
}

void reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s::thread_zext_ln43_fu_122_p1() {
    zext_ln43_fu_122_p1 = esl_zext<18,17>(x_0_V.read());
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
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}
