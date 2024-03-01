#include "pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_add_ln241_fu_5628_p2() {
    add_ln241_fu_5628_p2 = (!ap_phi_mux_indvar_flatten_phi_fu_5020_p4.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ap_phi_mux_indvar_flatten_phi_fu_5020_p4.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_and_ln191_1_fu_9116_p2() {
    and_ln191_1_fu_9116_p2 = (icmp_ln191_2_fu_9094_p2.read() & icmp_ln191_3_fu_9104_p2.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_and_ln191_2_fu_9122_p2() {
    and_ln191_2_fu_9122_p2 = (and_ln191_1_fu_9116_p2.read() & and_ln191_fu_9110_p2.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_and_ln191_fu_9110_p2() {
    and_ln191_fu_9110_p2 = (icmp_ln191_fu_9074_p2.read() & icmp_ln191_1_fu_9084_p2.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[2];
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[3];
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_block_pp0_stage0_01001() {
    ap_block_pp0_stage0_01001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && esl_seteq<1,1,1>(and_ln191_2_reg_49847_pp0_iter4_reg.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op7187.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && esl_seteq<1,1,1>(and_ln191_2_reg_49847_pp0_iter4_reg.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op7187.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && esl_seteq<1,1,1>(and_ln191_2_reg_49847_pp0_iter4_reg.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op7187.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_block_pp0_stage1() {
    ap_block_pp0_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op982.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op982.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_block_state10_pp0_stage0_iter4() {
    ap_block_state10_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_block_state11_pp0_stage1_iter4() {
    ap_block_state11_pp0_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_block_state12_pp0_stage0_iter5() {
    ap_block_state12_pp0_stage0_iter5 = (esl_seteq<1,1,1>(and_ln191_2_reg_49847_pp0_iter4_reg.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op7187.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_block_state3_pp0_stage1_iter0() {
    ap_block_state3_pp0_stage1_iter0 = (esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op982.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_block_state4_pp0_stage0_iter1() {
    ap_block_state4_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_block_state5_pp0_stage1_iter1() {
    ap_block_state5_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_block_state6_pp0_stage0_iter2() {
    ap_block_state6_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_block_state7_pp0_stage1_iter2() {
    ap_block_state7_pp0_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_block_state8_pp0_stage0_iter3() {
    ap_block_state8_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_block_state9_pp0_stage1_iter3() {
    ap_block_state9_pp0_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_condition_12074() {
    ap_condition_12074 = (esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_reg_49851.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln216_reg_49855.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_condition_12075() {
    ap_condition_12075 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_reg_49851.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln216_reg_49855.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_condition_3339() {
    ap_condition_3339 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_fu_5622_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_fu_9128_p2.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_condition_40489() {
    ap_condition_40489 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln212_reg_49851.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_condition_40492() {
    ap_condition_40492 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_fu_5622_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_fu_9128_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln216_fu_9158_p2.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_condition_7726() {
    ap_condition_7726 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln241_fu_5622_p2.read())) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_phi_mux_indvar_flatten_phi_fu_5020_p4() {
    if ((esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        ap_phi_mux_indvar_flatten_phi_fu_5020_p4 = add_ln241_reg_49812.read();
    } else {
        ap_phi_mux_indvar_flatten_phi_fu_5020_p4 = indvar_flatten_reg_5016.read();
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_phi_reg_pp0_iter0_storemerge_i_i_reg_5027() {
    ap_phi_reg_pp0_iter0_storemerge_i_i_reg_5027 = ap_const_lv32_0;
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_ready() {
    ap_ready = internal_ap_ready.read();
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_ap_sig_allocacmp_sY_load() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_reg_49851.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        ap_sig_allocacmp_sY_load = ap_phi_reg_pp0_iter1_storemerge_i_i_reg_5027.read();
    } else {
        ap_sig_allocacmp_sY_load = sY.read();
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_0_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_0_V_blk_n = data_V_data_0_V_empty_n.read();
    } else {
        data_V_data_0_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_0_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_0_V_read = ap_const_logic_1;
    } else {
        data_V_data_0_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_10_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_10_V_blk_n = data_V_data_10_V_empty_n.read();
    } else {
        data_V_data_10_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_10_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_10_V_read = ap_const_logic_1;
    } else {
        data_V_data_10_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_11_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_11_V_blk_n = data_V_data_11_V_empty_n.read();
    } else {
        data_V_data_11_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_11_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_11_V_read = ap_const_logic_1;
    } else {
        data_V_data_11_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_12_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_12_V_blk_n = data_V_data_12_V_empty_n.read();
    } else {
        data_V_data_12_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_12_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_12_V_read = ap_const_logic_1;
    } else {
        data_V_data_12_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_13_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_13_V_blk_n = data_V_data_13_V_empty_n.read();
    } else {
        data_V_data_13_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_13_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_13_V_read = ap_const_logic_1;
    } else {
        data_V_data_13_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_14_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_14_V_blk_n = data_V_data_14_V_empty_n.read();
    } else {
        data_V_data_14_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_14_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_14_V_read = ap_const_logic_1;
    } else {
        data_V_data_14_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_15_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_15_V_blk_n = data_V_data_15_V_empty_n.read();
    } else {
        data_V_data_15_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_15_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_15_V_read = ap_const_logic_1;
    } else {
        data_V_data_15_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_16_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_16_V_blk_n = data_V_data_16_V_empty_n.read();
    } else {
        data_V_data_16_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_16_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_16_V_read = ap_const_logic_1;
    } else {
        data_V_data_16_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_17_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_17_V_blk_n = data_V_data_17_V_empty_n.read();
    } else {
        data_V_data_17_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_17_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_17_V_read = ap_const_logic_1;
    } else {
        data_V_data_17_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_18_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_18_V_blk_n = data_V_data_18_V_empty_n.read();
    } else {
        data_V_data_18_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_18_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_18_V_read = ap_const_logic_1;
    } else {
        data_V_data_18_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_19_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_19_V_blk_n = data_V_data_19_V_empty_n.read();
    } else {
        data_V_data_19_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_19_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_19_V_read = ap_const_logic_1;
    } else {
        data_V_data_19_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_1_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_1_V_blk_n = data_V_data_1_V_empty_n.read();
    } else {
        data_V_data_1_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_1_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_1_V_read = ap_const_logic_1;
    } else {
        data_V_data_1_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_20_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_20_V_blk_n = data_V_data_20_V_empty_n.read();
    } else {
        data_V_data_20_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_20_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_20_V_read = ap_const_logic_1;
    } else {
        data_V_data_20_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_21_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_21_V_blk_n = data_V_data_21_V_empty_n.read();
    } else {
        data_V_data_21_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_21_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_21_V_read = ap_const_logic_1;
    } else {
        data_V_data_21_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_22_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_22_V_blk_n = data_V_data_22_V_empty_n.read();
    } else {
        data_V_data_22_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_22_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_22_V_read = ap_const_logic_1;
    } else {
        data_V_data_22_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_23_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_23_V_blk_n = data_V_data_23_V_empty_n.read();
    } else {
        data_V_data_23_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_23_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_23_V_read = ap_const_logic_1;
    } else {
        data_V_data_23_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_24_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_24_V_blk_n = data_V_data_24_V_empty_n.read();
    } else {
        data_V_data_24_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_24_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_24_V_read = ap_const_logic_1;
    } else {
        data_V_data_24_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_25_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_25_V_blk_n = data_V_data_25_V_empty_n.read();
    } else {
        data_V_data_25_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_25_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_25_V_read = ap_const_logic_1;
    } else {
        data_V_data_25_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_26_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_26_V_blk_n = data_V_data_26_V_empty_n.read();
    } else {
        data_V_data_26_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_26_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_26_V_read = ap_const_logic_1;
    } else {
        data_V_data_26_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_27_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_27_V_blk_n = data_V_data_27_V_empty_n.read();
    } else {
        data_V_data_27_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_27_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_27_V_read = ap_const_logic_1;
    } else {
        data_V_data_27_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_28_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_28_V_blk_n = data_V_data_28_V_empty_n.read();
    } else {
        data_V_data_28_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_28_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_28_V_read = ap_const_logic_1;
    } else {
        data_V_data_28_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_29_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_29_V_blk_n = data_V_data_29_V_empty_n.read();
    } else {
        data_V_data_29_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_29_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_29_V_read = ap_const_logic_1;
    } else {
        data_V_data_29_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_2_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_2_V_blk_n = data_V_data_2_V_empty_n.read();
    } else {
        data_V_data_2_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_2_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_2_V_read = ap_const_logic_1;
    } else {
        data_V_data_2_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_30_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_30_V_blk_n = data_V_data_30_V_empty_n.read();
    } else {
        data_V_data_30_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_30_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_30_V_read = ap_const_logic_1;
    } else {
        data_V_data_30_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_31_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_31_V_blk_n = data_V_data_31_V_empty_n.read();
    } else {
        data_V_data_31_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_31_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_31_V_read = ap_const_logic_1;
    } else {
        data_V_data_31_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_32_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_32_V_blk_n = data_V_data_32_V_empty_n.read();
    } else {
        data_V_data_32_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_32_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_32_V_read = ap_const_logic_1;
    } else {
        data_V_data_32_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_33_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_33_V_blk_n = data_V_data_33_V_empty_n.read();
    } else {
        data_V_data_33_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_33_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_33_V_read = ap_const_logic_1;
    } else {
        data_V_data_33_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_34_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_34_V_blk_n = data_V_data_34_V_empty_n.read();
    } else {
        data_V_data_34_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_34_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_34_V_read = ap_const_logic_1;
    } else {
        data_V_data_34_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_35_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_35_V_blk_n = data_V_data_35_V_empty_n.read();
    } else {
        data_V_data_35_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_35_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_35_V_read = ap_const_logic_1;
    } else {
        data_V_data_35_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_36_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_36_V_blk_n = data_V_data_36_V_empty_n.read();
    } else {
        data_V_data_36_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_36_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_36_V_read = ap_const_logic_1;
    } else {
        data_V_data_36_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_37_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_37_V_blk_n = data_V_data_37_V_empty_n.read();
    } else {
        data_V_data_37_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_37_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_37_V_read = ap_const_logic_1;
    } else {
        data_V_data_37_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_38_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_38_V_blk_n = data_V_data_38_V_empty_n.read();
    } else {
        data_V_data_38_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_38_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_38_V_read = ap_const_logic_1;
    } else {
        data_V_data_38_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_39_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_39_V_blk_n = data_V_data_39_V_empty_n.read();
    } else {
        data_V_data_39_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_39_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_39_V_read = ap_const_logic_1;
    } else {
        data_V_data_39_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_3_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_3_V_blk_n = data_V_data_3_V_empty_n.read();
    } else {
        data_V_data_3_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_3_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_3_V_read = ap_const_logic_1;
    } else {
        data_V_data_3_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_40_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_40_V_blk_n = data_V_data_40_V_empty_n.read();
    } else {
        data_V_data_40_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_40_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_40_V_read = ap_const_logic_1;
    } else {
        data_V_data_40_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_41_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_41_V_blk_n = data_V_data_41_V_empty_n.read();
    } else {
        data_V_data_41_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_41_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_41_V_read = ap_const_logic_1;
    } else {
        data_V_data_41_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_42_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_42_V_blk_n = data_V_data_42_V_empty_n.read();
    } else {
        data_V_data_42_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_42_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_42_V_read = ap_const_logic_1;
    } else {
        data_V_data_42_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_43_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_43_V_blk_n = data_V_data_43_V_empty_n.read();
    } else {
        data_V_data_43_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_43_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_43_V_read = ap_const_logic_1;
    } else {
        data_V_data_43_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_44_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_44_V_blk_n = data_V_data_44_V_empty_n.read();
    } else {
        data_V_data_44_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_44_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_44_V_read = ap_const_logic_1;
    } else {
        data_V_data_44_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_45_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_45_V_blk_n = data_V_data_45_V_empty_n.read();
    } else {
        data_V_data_45_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_45_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_45_V_read = ap_const_logic_1;
    } else {
        data_V_data_45_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_46_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_46_V_blk_n = data_V_data_46_V_empty_n.read();
    } else {
        data_V_data_46_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_46_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_46_V_read = ap_const_logic_1;
    } else {
        data_V_data_46_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_47_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_47_V_blk_n = data_V_data_47_V_empty_n.read();
    } else {
        data_V_data_47_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_47_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_47_V_read = ap_const_logic_1;
    } else {
        data_V_data_47_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_48_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_48_V_blk_n = data_V_data_48_V_empty_n.read();
    } else {
        data_V_data_48_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_48_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_48_V_read = ap_const_logic_1;
    } else {
        data_V_data_48_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_49_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_49_V_blk_n = data_V_data_49_V_empty_n.read();
    } else {
        data_V_data_49_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_49_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_49_V_read = ap_const_logic_1;
    } else {
        data_V_data_49_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_4_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_4_V_blk_n = data_V_data_4_V_empty_n.read();
    } else {
        data_V_data_4_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_4_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_4_V_read = ap_const_logic_1;
    } else {
        data_V_data_4_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_50_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_50_V_blk_n = data_V_data_50_V_empty_n.read();
    } else {
        data_V_data_50_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_50_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_50_V_read = ap_const_logic_1;
    } else {
        data_V_data_50_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_51_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_51_V_blk_n = data_V_data_51_V_empty_n.read();
    } else {
        data_V_data_51_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_51_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_51_V_read = ap_const_logic_1;
    } else {
        data_V_data_51_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_52_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_52_V_blk_n = data_V_data_52_V_empty_n.read();
    } else {
        data_V_data_52_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_52_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_52_V_read = ap_const_logic_1;
    } else {
        data_V_data_52_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_53_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_53_V_blk_n = data_V_data_53_V_empty_n.read();
    } else {
        data_V_data_53_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_53_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_53_V_read = ap_const_logic_1;
    } else {
        data_V_data_53_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_54_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_54_V_blk_n = data_V_data_54_V_empty_n.read();
    } else {
        data_V_data_54_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_54_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_54_V_read = ap_const_logic_1;
    } else {
        data_V_data_54_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_55_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_55_V_blk_n = data_V_data_55_V_empty_n.read();
    } else {
        data_V_data_55_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_55_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_55_V_read = ap_const_logic_1;
    } else {
        data_V_data_55_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_56_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_56_V_blk_n = data_V_data_56_V_empty_n.read();
    } else {
        data_V_data_56_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_56_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_56_V_read = ap_const_logic_1;
    } else {
        data_V_data_56_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_57_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_57_V_blk_n = data_V_data_57_V_empty_n.read();
    } else {
        data_V_data_57_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_57_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_57_V_read = ap_const_logic_1;
    } else {
        data_V_data_57_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_58_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_58_V_blk_n = data_V_data_58_V_empty_n.read();
    } else {
        data_V_data_58_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_58_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_58_V_read = ap_const_logic_1;
    } else {
        data_V_data_58_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_59_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_59_V_blk_n = data_V_data_59_V_empty_n.read();
    } else {
        data_V_data_59_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_59_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_59_V_read = ap_const_logic_1;
    } else {
        data_V_data_59_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_5_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_5_V_blk_n = data_V_data_5_V_empty_n.read();
    } else {
        data_V_data_5_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_5_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_5_V_read = ap_const_logic_1;
    } else {
        data_V_data_5_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_60_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_60_V_blk_n = data_V_data_60_V_empty_n.read();
    } else {
        data_V_data_60_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_60_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_60_V_read = ap_const_logic_1;
    } else {
        data_V_data_60_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_61_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_61_V_blk_n = data_V_data_61_V_empty_n.read();
    } else {
        data_V_data_61_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_61_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_61_V_read = ap_const_logic_1;
    } else {
        data_V_data_61_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_62_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_62_V_blk_n = data_V_data_62_V_empty_n.read();
    } else {
        data_V_data_62_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_62_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_62_V_read = ap_const_logic_1;
    } else {
        data_V_data_62_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_63_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_63_V_blk_n = data_V_data_63_V_empty_n.read();
    } else {
        data_V_data_63_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_63_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_63_V_read = ap_const_logic_1;
    } else {
        data_V_data_63_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_6_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_6_V_blk_n = data_V_data_6_V_empty_n.read();
    } else {
        data_V_data_6_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_6_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_6_V_read = ap_const_logic_1;
    } else {
        data_V_data_6_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_7_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_7_V_blk_n = data_V_data_7_V_empty_n.read();
    } else {
        data_V_data_7_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_7_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_7_V_read = ap_const_logic_1;
    } else {
        data_V_data_7_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_8_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_8_V_blk_n = data_V_data_8_V_empty_n.read();
    } else {
        data_V_data_8_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_8_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_8_V_read = ap_const_logic_1;
    } else {
        data_V_data_8_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_9_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0))) {
        data_V_data_9_V_blk_n = data_V_data_9_V_empty_n.read();
    } else {
        data_V_data_9_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_data_V_data_9_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_49808.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()))) {
        data_V_data_9_V_read = ap_const_logic_1;
    } else {
        data_V_data_9_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_16628_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_16628_ce = ap_const_logic_1;
    } else {
        grp_fu_16628_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_16628_p17() {
    grp_fu_16628_p17 = esl_zext<4,2>(select_ln65_11_fu_16616_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_16728_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_16728_ce = ap_const_logic_1;
    } else {
        grp_fu_16728_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_16728_p17() {
    grp_fu_16728_p17 = esl_zext<4,3>(select_ln65_16_fu_16716_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_16824_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_16824_ce = ap_const_logic_1;
    } else {
        grp_fu_16824_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_16824_p17() {
    grp_fu_16824_p17 = (!icmp_ln1496_9_fu_16810_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_9_fu_16810_p2.read()[0].to_bool())? select_ln65_20_fu_16794_p3.read(): select_ln65_18_fu_16772_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_16924_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_16924_ce = ap_const_logic_1;
    } else {
        grp_fu_16924_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_16924_p17() {
    grp_fu_16924_p17 = esl_sext<4,3>(select_ln65_27_fu_16912_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_17036_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_17036_ce = ap_const_logic_1;
    } else {
        grp_fu_17036_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_17036_p17() {
    grp_fu_17036_p17 = esl_zext<4,2>(select_ln65_33_fu_17024_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_17136_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_17136_ce = ap_const_logic_1;
    } else {
        grp_fu_17136_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_17136_p17() {
    grp_fu_17136_p17 = esl_zext<4,3>(select_ln65_38_fu_17124_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_17232_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_17232_ce = ap_const_logic_1;
    } else {
        grp_fu_17232_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_17232_p17() {
    grp_fu_17232_p17 = (!icmp_ln1496_73_fu_17218_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_73_fu_17218_p2.read()[0].to_bool())? select_ln65_42_fu_17202_p3.read(): select_ln65_40_fu_17180_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_17332_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_17332_ce = ap_const_logic_1;
    } else {
        grp_fu_17332_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_17332_p17() {
    grp_fu_17332_p17 = esl_sext<4,3>(select_ln65_49_fu_17320_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_17444_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_17444_ce = ap_const_logic_1;
    } else {
        grp_fu_17444_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_17444_p17() {
    grp_fu_17444_p17 = esl_zext<4,2>(select_ln65_55_fu_17432_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_17544_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_17544_ce = ap_const_logic_1;
    } else {
        grp_fu_17544_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_17544_p17() {
    grp_fu_17544_p17 = esl_zext<4,3>(select_ln65_60_fu_17532_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_17640_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_17640_ce = ap_const_logic_1;
    } else {
        grp_fu_17640_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_17640_p17() {
    grp_fu_17640_p17 = (!icmp_ln1496_88_fu_17626_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_88_fu_17626_p2.read()[0].to_bool())? select_ln65_64_fu_17610_p3.read(): select_ln65_62_fu_17588_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_17740_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_17740_ce = ap_const_logic_1;
    } else {
        grp_fu_17740_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_17740_p17() {
    grp_fu_17740_p17 = esl_sext<4,3>(select_ln65_71_fu_17728_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_17852_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_17852_ce = ap_const_logic_1;
    } else {
        grp_fu_17852_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_17852_p17() {
    grp_fu_17852_p17 = esl_zext<4,2>(select_ln65_77_fu_17840_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_17952_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_17952_ce = ap_const_logic_1;
    } else {
        grp_fu_17952_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_17952_p17() {
    grp_fu_17952_p17 = esl_zext<4,3>(select_ln65_82_fu_17940_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_18048_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_18048_ce = ap_const_logic_1;
    } else {
        grp_fu_18048_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_18048_p17() {
    grp_fu_18048_p17 = (!icmp_ln1496_103_fu_18034_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_103_fu_18034_p2.read()[0].to_bool())? select_ln65_86_fu_18018_p3.read(): select_ln65_84_fu_17996_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_18148_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_18148_ce = ap_const_logic_1;
    } else {
        grp_fu_18148_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_18148_p17() {
    grp_fu_18148_p17 = esl_sext<4,3>(select_ln65_93_fu_18136_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_18260_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_18260_ce = ap_const_logic_1;
    } else {
        grp_fu_18260_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_18260_p17() {
    grp_fu_18260_p17 = esl_zext<4,2>(select_ln65_99_fu_18248_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_18360_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_18360_ce = ap_const_logic_1;
    } else {
        grp_fu_18360_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_18360_p17() {
    grp_fu_18360_p17 = esl_zext<4,3>(select_ln65_104_fu_18348_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_18456_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_18456_ce = ap_const_logic_1;
    } else {
        grp_fu_18456_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_18456_p17() {
    grp_fu_18456_p17 = (!icmp_ln1496_118_fu_18442_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_118_fu_18442_p2.read()[0].to_bool())? select_ln65_108_fu_18426_p3.read(): select_ln65_106_fu_18404_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_18556_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_18556_ce = ap_const_logic_1;
    } else {
        grp_fu_18556_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_18556_p17() {
    grp_fu_18556_p17 = esl_sext<4,3>(select_ln65_115_fu_18544_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_18668_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_18668_ce = ap_const_logic_1;
    } else {
        grp_fu_18668_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_18668_p17() {
    grp_fu_18668_p17 = esl_zext<4,2>(select_ln65_121_fu_18656_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_18768_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_18768_ce = ap_const_logic_1;
    } else {
        grp_fu_18768_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_18768_p17() {
    grp_fu_18768_p17 = esl_zext<4,3>(select_ln65_126_fu_18756_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_18864_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_18864_ce = ap_const_logic_1;
    } else {
        grp_fu_18864_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_18864_p17() {
    grp_fu_18864_p17 = (!icmp_ln1496_133_fu_18850_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_133_fu_18850_p2.read()[0].to_bool())? select_ln65_130_fu_18834_p3.read(): select_ln65_128_fu_18812_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_18964_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_18964_ce = ap_const_logic_1;
    } else {
        grp_fu_18964_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_18964_p17() {
    grp_fu_18964_p17 = esl_sext<4,3>(select_ln65_137_fu_18952_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_19076_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_19076_ce = ap_const_logic_1;
    } else {
        grp_fu_19076_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_19076_p17() {
    grp_fu_19076_p17 = esl_zext<4,2>(select_ln65_143_fu_19064_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_19176_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_19176_ce = ap_const_logic_1;
    } else {
        grp_fu_19176_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_19176_p17() {
    grp_fu_19176_p17 = esl_zext<4,3>(select_ln65_148_fu_19164_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_19272_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_19272_ce = ap_const_logic_1;
    } else {
        grp_fu_19272_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_19272_p17() {
    grp_fu_19272_p17 = (!icmp_ln1496_148_fu_19258_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_148_fu_19258_p2.read()[0].to_bool())? select_ln65_152_fu_19242_p3.read(): select_ln65_150_fu_19220_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_19372_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_19372_ce = ap_const_logic_1;
    } else {
        grp_fu_19372_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_19372_p17() {
    grp_fu_19372_p17 = esl_sext<4,3>(select_ln65_159_fu_19360_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_19484_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_19484_ce = ap_const_logic_1;
    } else {
        grp_fu_19484_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_19484_p17() {
    grp_fu_19484_p17 = esl_zext<4,2>(select_ln65_165_fu_19472_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_19584_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_19584_ce = ap_const_logic_1;
    } else {
        grp_fu_19584_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_19584_p17() {
    grp_fu_19584_p17 = esl_zext<4,3>(select_ln65_170_fu_19572_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_19680_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_19680_ce = ap_const_logic_1;
    } else {
        grp_fu_19680_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_19680_p17() {
    grp_fu_19680_p17 = (!icmp_ln1496_163_fu_19666_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_163_fu_19666_p2.read()[0].to_bool())? select_ln65_174_fu_19650_p3.read(): select_ln65_172_fu_19628_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_19780_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_19780_ce = ap_const_logic_1;
    } else {
        grp_fu_19780_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_19780_p17() {
    grp_fu_19780_p17 = esl_sext<4,3>(select_ln65_181_fu_19768_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_19892_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_19892_ce = ap_const_logic_1;
    } else {
        grp_fu_19892_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_19892_p17() {
    grp_fu_19892_p17 = esl_zext<4,2>(select_ln65_187_fu_19880_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_19992_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_19992_ce = ap_const_logic_1;
    } else {
        grp_fu_19992_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_19992_p17() {
    grp_fu_19992_p17 = esl_zext<4,3>(select_ln65_192_fu_19980_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_20088_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_20088_ce = ap_const_logic_1;
    } else {
        grp_fu_20088_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_20088_p17() {
    grp_fu_20088_p17 = (!icmp_ln1496_178_fu_20074_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_178_fu_20074_p2.read()[0].to_bool())? select_ln65_196_fu_20058_p3.read(): select_ln65_194_fu_20036_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_20188_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_20188_ce = ap_const_logic_1;
    } else {
        grp_fu_20188_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_20188_p17() {
    grp_fu_20188_p17 = esl_sext<4,3>(select_ln65_203_fu_20176_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_20300_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_20300_ce = ap_const_logic_1;
    } else {
        grp_fu_20300_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_20300_p17() {
    grp_fu_20300_p17 = esl_zext<4,2>(select_ln65_209_fu_20288_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_20400_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_20400_ce = ap_const_logic_1;
    } else {
        grp_fu_20400_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_20400_p17() {
    grp_fu_20400_p17 = esl_zext<4,3>(select_ln65_214_fu_20388_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_20496_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_20496_ce = ap_const_logic_1;
    } else {
        grp_fu_20496_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_20496_p17() {
    grp_fu_20496_p17 = (!icmp_ln1496_193_fu_20482_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_193_fu_20482_p2.read()[0].to_bool())? select_ln65_218_fu_20466_p3.read(): select_ln65_216_fu_20444_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_20596_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_20596_ce = ap_const_logic_1;
    } else {
        grp_fu_20596_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_20596_p17() {
    grp_fu_20596_p17 = esl_sext<4,3>(select_ln65_225_fu_20584_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_20708_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_20708_ce = ap_const_logic_1;
    } else {
        grp_fu_20708_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_20708_p17() {
    grp_fu_20708_p17 = esl_zext<4,2>(select_ln65_231_fu_20696_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_20808_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_20808_ce = ap_const_logic_1;
    } else {
        grp_fu_20808_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_20808_p17() {
    grp_fu_20808_p17 = esl_zext<4,3>(select_ln65_236_fu_20796_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_20904_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_20904_ce = ap_const_logic_1;
    } else {
        grp_fu_20904_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_20904_p17() {
    grp_fu_20904_p17 = (!icmp_ln1496_208_fu_20890_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_208_fu_20890_p2.read()[0].to_bool())? select_ln65_240_fu_20874_p3.read(): select_ln65_238_fu_20852_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_21004_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_21004_ce = ap_const_logic_1;
    } else {
        grp_fu_21004_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_21004_p17() {
    grp_fu_21004_p17 = esl_sext<4,3>(select_ln65_247_fu_20992_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_21116_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_21116_ce = ap_const_logic_1;
    } else {
        grp_fu_21116_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_21116_p17() {
    grp_fu_21116_p17 = esl_zext<4,2>(select_ln65_253_fu_21104_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_21216_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_21216_ce = ap_const_logic_1;
    } else {
        grp_fu_21216_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_21216_p17() {
    grp_fu_21216_p17 = esl_zext<4,3>(select_ln65_258_fu_21204_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_21312_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_21312_ce = ap_const_logic_1;
    } else {
        grp_fu_21312_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_21312_p17() {
    grp_fu_21312_p17 = (!icmp_ln1496_223_fu_21298_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_223_fu_21298_p2.read()[0].to_bool())? select_ln65_262_fu_21282_p3.read(): select_ln65_260_fu_21260_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_21412_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_21412_ce = ap_const_logic_1;
    } else {
        grp_fu_21412_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_21412_p17() {
    grp_fu_21412_p17 = esl_sext<4,3>(select_ln65_269_fu_21400_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_21524_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_21524_ce = ap_const_logic_1;
    } else {
        grp_fu_21524_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_21524_p17() {
    grp_fu_21524_p17 = esl_zext<4,2>(select_ln65_275_fu_21512_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_21624_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_21624_ce = ap_const_logic_1;
    } else {
        grp_fu_21624_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_21624_p17() {
    grp_fu_21624_p17 = esl_zext<4,3>(select_ln65_280_fu_21612_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_21720_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_21720_ce = ap_const_logic_1;
    } else {
        grp_fu_21720_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_21720_p17() {
    grp_fu_21720_p17 = (!icmp_ln1496_238_fu_21706_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_238_fu_21706_p2.read()[0].to_bool())? select_ln65_284_fu_21690_p3.read(): select_ln65_282_fu_21668_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_21820_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_21820_ce = ap_const_logic_1;
    } else {
        grp_fu_21820_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_21820_p17() {
    grp_fu_21820_p17 = esl_sext<4,3>(select_ln65_291_fu_21808_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_21932_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_21932_ce = ap_const_logic_1;
    } else {
        grp_fu_21932_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_21932_p17() {
    grp_fu_21932_p17 = esl_zext<4,2>(select_ln65_297_fu_21920_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_22032_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_22032_ce = ap_const_logic_1;
    } else {
        grp_fu_22032_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_22032_p17() {
    grp_fu_22032_p17 = esl_zext<4,3>(select_ln65_302_fu_22020_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_22128_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_22128_ce = ap_const_logic_1;
    } else {
        grp_fu_22128_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_22128_p17() {
    grp_fu_22128_p17 = (!icmp_ln1496_253_fu_22114_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_253_fu_22114_p2.read()[0].to_bool())? select_ln65_306_fu_22098_p3.read(): select_ln65_304_fu_22076_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_22228_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_22228_ce = ap_const_logic_1;
    } else {
        grp_fu_22228_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_22228_p17() {
    grp_fu_22228_p17 = esl_sext<4,3>(select_ln65_313_fu_22216_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_22340_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_22340_ce = ap_const_logic_1;
    } else {
        grp_fu_22340_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_22340_p17() {
    grp_fu_22340_p17 = esl_zext<4,2>(select_ln65_319_fu_22328_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_22440_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_22440_ce = ap_const_logic_1;
    } else {
        grp_fu_22440_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_22440_p17() {
    grp_fu_22440_p17 = esl_zext<4,3>(select_ln65_324_fu_22428_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_22536_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_22536_ce = ap_const_logic_1;
    } else {
        grp_fu_22536_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_22536_p17() {
    grp_fu_22536_p17 = (!icmp_ln1496_268_fu_22522_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_268_fu_22522_p2.read()[0].to_bool())? select_ln65_328_fu_22506_p3.read(): select_ln65_326_fu_22484_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_22636_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_22636_ce = ap_const_logic_1;
    } else {
        grp_fu_22636_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_22636_p17() {
    grp_fu_22636_p17 = esl_sext<4,3>(select_ln65_335_fu_22624_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_22748_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_22748_ce = ap_const_logic_1;
    } else {
        grp_fu_22748_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_22748_p17() {
    grp_fu_22748_p17 = esl_zext<4,2>(select_ln65_341_fu_22736_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_22848_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_22848_ce = ap_const_logic_1;
    } else {
        grp_fu_22848_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_22848_p17() {
    grp_fu_22848_p17 = esl_zext<4,3>(select_ln65_346_fu_22836_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_22944_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_22944_ce = ap_const_logic_1;
    } else {
        grp_fu_22944_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_22944_p17() {
    grp_fu_22944_p17 = (!icmp_ln1496_282_fu_22930_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_282_fu_22930_p2.read()[0].to_bool())? select_ln65_350_fu_22914_p3.read(): select_ln65_348_fu_22892_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_23044_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_23044_ce = ap_const_logic_1;
    } else {
        grp_fu_23044_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_23044_p17() {
    grp_fu_23044_p17 = esl_sext<4,3>(select_ln65_357_fu_23032_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_23156_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_23156_ce = ap_const_logic_1;
    } else {
        grp_fu_23156_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_23156_p17() {
    grp_fu_23156_p17 = esl_zext<4,2>(select_ln65_363_fu_23144_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_23256_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_23256_ce = ap_const_logic_1;
    } else {
        grp_fu_23256_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_23256_p17() {
    grp_fu_23256_p17 = esl_zext<4,3>(select_ln65_368_fu_23244_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_23352_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_23352_ce = ap_const_logic_1;
    } else {
        grp_fu_23352_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_23352_p17() {
    grp_fu_23352_p17 = (!icmp_ln1496_296_fu_23338_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_296_fu_23338_p2.read()[0].to_bool())? select_ln65_372_fu_23322_p3.read(): select_ln65_370_fu_23300_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_23452_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_23452_ce = ap_const_logic_1;
    } else {
        grp_fu_23452_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_23452_p17() {
    grp_fu_23452_p17 = esl_sext<4,3>(select_ln65_379_fu_23440_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_23564_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_23564_ce = ap_const_logic_1;
    } else {
        grp_fu_23564_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_23564_p17() {
    grp_fu_23564_p17 = esl_zext<4,2>(select_ln65_385_fu_23552_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_23664_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_23664_ce = ap_const_logic_1;
    } else {
        grp_fu_23664_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_23664_p17() {
    grp_fu_23664_p17 = esl_zext<4,3>(select_ln65_390_fu_23652_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_23760_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_23760_ce = ap_const_logic_1;
    } else {
        grp_fu_23760_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_23760_p17() {
    grp_fu_23760_p17 = (!icmp_ln1496_310_fu_23746_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_310_fu_23746_p2.read()[0].to_bool())? select_ln65_394_fu_23730_p3.read(): select_ln65_392_fu_23708_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_23860_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_23860_ce = ap_const_logic_1;
    } else {
        grp_fu_23860_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_23860_p17() {
    grp_fu_23860_p17 = esl_sext<4,3>(select_ln65_401_fu_23848_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_23972_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_23972_ce = ap_const_logic_1;
    } else {
        grp_fu_23972_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_23972_p17() {
    grp_fu_23972_p17 = esl_zext<4,2>(select_ln65_407_fu_23960_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_24072_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_24072_ce = ap_const_logic_1;
    } else {
        grp_fu_24072_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_24072_p17() {
    grp_fu_24072_p17 = esl_zext<4,3>(select_ln65_412_fu_24060_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_24168_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_24168_ce = ap_const_logic_1;
    } else {
        grp_fu_24168_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_24168_p17() {
    grp_fu_24168_p17 = (!icmp_ln1496_324_fu_24154_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_324_fu_24154_p2.read()[0].to_bool())? select_ln65_416_fu_24138_p3.read(): select_ln65_414_fu_24116_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_24268_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_24268_ce = ap_const_logic_1;
    } else {
        grp_fu_24268_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_24268_p17() {
    grp_fu_24268_p17 = esl_sext<4,3>(select_ln65_423_fu_24256_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_24380_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_24380_ce = ap_const_logic_1;
    } else {
        grp_fu_24380_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_24380_p17() {
    grp_fu_24380_p17 = esl_zext<4,2>(select_ln65_429_fu_24368_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_24480_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_24480_ce = ap_const_logic_1;
    } else {
        grp_fu_24480_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_24480_p17() {
    grp_fu_24480_p17 = esl_zext<4,3>(select_ln65_434_fu_24468_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_24576_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_24576_ce = ap_const_logic_1;
    } else {
        grp_fu_24576_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_24576_p17() {
    grp_fu_24576_p17 = (!icmp_ln1496_338_fu_24562_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_338_fu_24562_p2.read()[0].to_bool())? select_ln65_438_fu_24546_p3.read(): select_ln65_436_fu_24524_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_24676_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_24676_ce = ap_const_logic_1;
    } else {
        grp_fu_24676_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_24676_p17() {
    grp_fu_24676_p17 = esl_sext<4,3>(select_ln65_445_fu_24664_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_24788_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_24788_ce = ap_const_logic_1;
    } else {
        grp_fu_24788_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_24788_p17() {
    grp_fu_24788_p17 = esl_zext<4,2>(select_ln65_451_fu_24776_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_24888_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_24888_ce = ap_const_logic_1;
    } else {
        grp_fu_24888_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_24888_p17() {
    grp_fu_24888_p17 = esl_zext<4,3>(select_ln65_456_fu_24876_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_24984_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_24984_ce = ap_const_logic_1;
    } else {
        grp_fu_24984_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_24984_p17() {
    grp_fu_24984_p17 = (!icmp_ln1496_352_fu_24970_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_352_fu_24970_p2.read()[0].to_bool())? select_ln65_460_fu_24954_p3.read(): select_ln65_458_fu_24932_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_25084_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_25084_ce = ap_const_logic_1;
    } else {
        grp_fu_25084_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_25084_p17() {
    grp_fu_25084_p17 = esl_sext<4,3>(select_ln65_467_fu_25072_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_25196_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_25196_ce = ap_const_logic_1;
    } else {
        grp_fu_25196_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_25196_p17() {
    grp_fu_25196_p17 = esl_zext<4,2>(select_ln65_473_fu_25184_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_25296_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_25296_ce = ap_const_logic_1;
    } else {
        grp_fu_25296_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_25296_p17() {
    grp_fu_25296_p17 = esl_zext<4,3>(select_ln65_478_fu_25284_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_25392_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_25392_ce = ap_const_logic_1;
    } else {
        grp_fu_25392_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_25392_p17() {
    grp_fu_25392_p17 = (!icmp_ln1496_366_fu_25378_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_366_fu_25378_p2.read()[0].to_bool())? select_ln65_482_fu_25362_p3.read(): select_ln65_480_fu_25340_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_25492_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_25492_ce = ap_const_logic_1;
    } else {
        grp_fu_25492_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_25492_p17() {
    grp_fu_25492_p17 = esl_sext<4,3>(select_ln65_489_fu_25480_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_25604_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_25604_ce = ap_const_logic_1;
    } else {
        grp_fu_25604_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_25604_p17() {
    grp_fu_25604_p17 = esl_zext<4,2>(select_ln65_495_fu_25592_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_25704_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_25704_ce = ap_const_logic_1;
    } else {
        grp_fu_25704_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_25704_p17() {
    grp_fu_25704_p17 = esl_zext<4,3>(select_ln65_500_fu_25692_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_25800_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_25800_ce = ap_const_logic_1;
    } else {
        grp_fu_25800_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_25800_p17() {
    grp_fu_25800_p17 = (!icmp_ln1496_380_fu_25786_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_380_fu_25786_p2.read()[0].to_bool())? select_ln65_504_fu_25770_p3.read(): select_ln65_502_fu_25748_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_25900_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_25900_ce = ap_const_logic_1;
    } else {
        grp_fu_25900_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_25900_p17() {
    grp_fu_25900_p17 = esl_sext<4,3>(select_ln65_511_fu_25888_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_26012_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_26012_ce = ap_const_logic_1;
    } else {
        grp_fu_26012_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_26012_p17() {
    grp_fu_26012_p17 = esl_zext<4,2>(select_ln65_517_fu_26000_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_26112_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_26112_ce = ap_const_logic_1;
    } else {
        grp_fu_26112_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_26112_p17() {
    grp_fu_26112_p17 = esl_zext<4,3>(select_ln65_522_fu_26100_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_26208_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_26208_ce = ap_const_logic_1;
    } else {
        grp_fu_26208_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_26208_p17() {
    grp_fu_26208_p17 = (!icmp_ln1496_394_fu_26194_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_394_fu_26194_p2.read()[0].to_bool())? select_ln65_526_fu_26178_p3.read(): select_ln65_524_fu_26156_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_26308_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_26308_ce = ap_const_logic_1;
    } else {
        grp_fu_26308_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_26308_p17() {
    grp_fu_26308_p17 = esl_sext<4,3>(select_ln65_533_fu_26296_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_26420_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_26420_ce = ap_const_logic_1;
    } else {
        grp_fu_26420_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_26420_p17() {
    grp_fu_26420_p17 = esl_zext<4,2>(select_ln65_539_fu_26408_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_26520_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_26520_ce = ap_const_logic_1;
    } else {
        grp_fu_26520_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_26520_p17() {
    grp_fu_26520_p17 = esl_zext<4,3>(select_ln65_544_fu_26508_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_26616_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_26616_ce = ap_const_logic_1;
    } else {
        grp_fu_26616_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_26616_p17() {
    grp_fu_26616_p17 = (!icmp_ln1496_408_fu_26602_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_408_fu_26602_p2.read()[0].to_bool())? select_ln65_548_fu_26586_p3.read(): select_ln65_546_fu_26564_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_26716_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_26716_ce = ap_const_logic_1;
    } else {
        grp_fu_26716_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_26716_p17() {
    grp_fu_26716_p17 = esl_sext<4,3>(select_ln65_555_fu_26704_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_26828_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_26828_ce = ap_const_logic_1;
    } else {
        grp_fu_26828_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_26828_p17() {
    grp_fu_26828_p17 = esl_zext<4,2>(select_ln65_561_fu_26816_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_26928_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_26928_ce = ap_const_logic_1;
    } else {
        grp_fu_26928_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_26928_p17() {
    grp_fu_26928_p17 = esl_zext<4,3>(select_ln65_566_fu_26916_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_27024_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_27024_ce = ap_const_logic_1;
    } else {
        grp_fu_27024_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_27024_p17() {
    grp_fu_27024_p17 = (!icmp_ln1496_422_fu_27010_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_422_fu_27010_p2.read()[0].to_bool())? select_ln65_570_fu_26994_p3.read(): select_ln65_568_fu_26972_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_27124_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_27124_ce = ap_const_logic_1;
    } else {
        grp_fu_27124_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_27124_p17() {
    grp_fu_27124_p17 = esl_sext<4,3>(select_ln65_577_fu_27112_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_27236_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_27236_ce = ap_const_logic_1;
    } else {
        grp_fu_27236_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_27236_p17() {
    grp_fu_27236_p17 = esl_zext<4,2>(select_ln65_583_fu_27224_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_27336_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_27336_ce = ap_const_logic_1;
    } else {
        grp_fu_27336_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_27336_p17() {
    grp_fu_27336_p17 = esl_zext<4,3>(select_ln65_588_fu_27324_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_27432_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_27432_ce = ap_const_logic_1;
    } else {
        grp_fu_27432_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_27432_p17() {
    grp_fu_27432_p17 = (!icmp_ln1496_436_fu_27418_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_436_fu_27418_p2.read()[0].to_bool())? select_ln65_592_fu_27402_p3.read(): select_ln65_590_fu_27380_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_27532_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_27532_ce = ap_const_logic_1;
    } else {
        grp_fu_27532_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_27532_p17() {
    grp_fu_27532_p17 = esl_sext<4,3>(select_ln65_599_fu_27520_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_27644_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_27644_ce = ap_const_logic_1;
    } else {
        grp_fu_27644_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_27644_p17() {
    grp_fu_27644_p17 = esl_zext<4,2>(select_ln65_605_fu_27632_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_27744_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_27744_ce = ap_const_logic_1;
    } else {
        grp_fu_27744_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_27744_p17() {
    grp_fu_27744_p17 = esl_zext<4,3>(select_ln65_610_fu_27732_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_27840_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_27840_ce = ap_const_logic_1;
    } else {
        grp_fu_27840_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_27840_p17() {
    grp_fu_27840_p17 = (!icmp_ln1496_450_fu_27826_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_450_fu_27826_p2.read()[0].to_bool())? select_ln65_614_fu_27810_p3.read(): select_ln65_612_fu_27788_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_27940_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_27940_ce = ap_const_logic_1;
    } else {
        grp_fu_27940_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_27940_p17() {
    grp_fu_27940_p17 = esl_sext<4,3>(select_ln65_621_fu_27928_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_28052_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_28052_ce = ap_const_logic_1;
    } else {
        grp_fu_28052_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_28052_p17() {
    grp_fu_28052_p17 = esl_zext<4,2>(select_ln65_627_fu_28040_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_28152_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_28152_ce = ap_const_logic_1;
    } else {
        grp_fu_28152_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_28152_p17() {
    grp_fu_28152_p17 = esl_zext<4,3>(select_ln65_632_fu_28140_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_28248_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_28248_ce = ap_const_logic_1;
    } else {
        grp_fu_28248_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_28248_p17() {
    grp_fu_28248_p17 = (!icmp_ln1496_464_fu_28234_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_464_fu_28234_p2.read()[0].to_bool())? select_ln65_636_fu_28218_p3.read(): select_ln65_634_fu_28196_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_28348_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_28348_ce = ap_const_logic_1;
    } else {
        grp_fu_28348_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_28348_p17() {
    grp_fu_28348_p17 = esl_sext<4,3>(select_ln65_643_fu_28336_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_28460_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_28460_ce = ap_const_logic_1;
    } else {
        grp_fu_28460_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_28460_p17() {
    grp_fu_28460_p17 = esl_zext<4,2>(select_ln65_649_fu_28448_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_28560_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_28560_ce = ap_const_logic_1;
    } else {
        grp_fu_28560_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_28560_p17() {
    grp_fu_28560_p17 = esl_zext<4,3>(select_ln65_654_fu_28548_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_28656_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_28656_ce = ap_const_logic_1;
    } else {
        grp_fu_28656_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_28656_p17() {
    grp_fu_28656_p17 = (!icmp_ln1496_478_fu_28642_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_478_fu_28642_p2.read()[0].to_bool())? select_ln65_658_fu_28626_p3.read(): select_ln65_656_fu_28604_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_28756_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_28756_ce = ap_const_logic_1;
    } else {
        grp_fu_28756_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_28756_p17() {
    grp_fu_28756_p17 = esl_sext<4,3>(select_ln65_665_fu_28744_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_28868_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_28868_ce = ap_const_logic_1;
    } else {
        grp_fu_28868_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_28868_p17() {
    grp_fu_28868_p17 = esl_zext<4,2>(select_ln65_671_fu_28856_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_28968_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_28968_ce = ap_const_logic_1;
    } else {
        grp_fu_28968_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_28968_p17() {
    grp_fu_28968_p17 = esl_zext<4,3>(select_ln65_676_fu_28956_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_29064_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_29064_ce = ap_const_logic_1;
    } else {
        grp_fu_29064_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_29064_p17() {
    grp_fu_29064_p17 = (!icmp_ln1496_492_fu_29050_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_492_fu_29050_p2.read()[0].to_bool())? select_ln65_680_fu_29034_p3.read(): select_ln65_678_fu_29012_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_29164_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_29164_ce = ap_const_logic_1;
    } else {
        grp_fu_29164_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_29164_p17() {
    grp_fu_29164_p17 = esl_sext<4,3>(select_ln65_687_fu_29152_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_29276_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_29276_ce = ap_const_logic_1;
    } else {
        grp_fu_29276_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_29276_p17() {
    grp_fu_29276_p17 = esl_zext<4,2>(select_ln65_693_fu_29264_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_29376_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_29376_ce = ap_const_logic_1;
    } else {
        grp_fu_29376_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_29376_p17() {
    grp_fu_29376_p17 = esl_zext<4,3>(select_ln65_698_fu_29364_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_29472_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_29472_ce = ap_const_logic_1;
    } else {
        grp_fu_29472_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_29472_p17() {
    grp_fu_29472_p17 = (!icmp_ln1496_506_fu_29458_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_506_fu_29458_p2.read()[0].to_bool())? select_ln65_702_fu_29442_p3.read(): select_ln65_700_fu_29420_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_29572_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_29572_ce = ap_const_logic_1;
    } else {
        grp_fu_29572_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_29572_p17() {
    grp_fu_29572_p17 = esl_sext<4,3>(select_ln65_709_fu_29560_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_29684_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_29684_ce = ap_const_logic_1;
    } else {
        grp_fu_29684_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_29684_p17() {
    grp_fu_29684_p17 = esl_zext<4,2>(select_ln65_715_fu_29672_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_29784_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_29784_ce = ap_const_logic_1;
    } else {
        grp_fu_29784_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_29784_p17() {
    grp_fu_29784_p17 = esl_zext<4,3>(select_ln65_720_fu_29772_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_29880_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_29880_ce = ap_const_logic_1;
    } else {
        grp_fu_29880_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_29880_p17() {
    grp_fu_29880_p17 = (!icmp_ln1496_520_fu_29866_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_520_fu_29866_p2.read()[0].to_bool())? select_ln65_724_fu_29850_p3.read(): select_ln65_722_fu_29828_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_29980_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_29980_ce = ap_const_logic_1;
    } else {
        grp_fu_29980_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_29980_p17() {
    grp_fu_29980_p17 = esl_sext<4,3>(select_ln65_731_fu_29968_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_30092_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_30092_ce = ap_const_logic_1;
    } else {
        grp_fu_30092_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_30092_p17() {
    grp_fu_30092_p17 = esl_zext<4,2>(select_ln65_737_fu_30080_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_30192_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_30192_ce = ap_const_logic_1;
    } else {
        grp_fu_30192_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_30192_p17() {
    grp_fu_30192_p17 = esl_zext<4,3>(select_ln65_742_fu_30180_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_30288_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_30288_ce = ap_const_logic_1;
    } else {
        grp_fu_30288_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_30288_p17() {
    grp_fu_30288_p17 = (!icmp_ln1496_534_fu_30274_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_534_fu_30274_p2.read()[0].to_bool())? select_ln65_746_fu_30258_p3.read(): select_ln65_744_fu_30236_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_30388_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_30388_ce = ap_const_logic_1;
    } else {
        grp_fu_30388_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_30388_p17() {
    grp_fu_30388_p17 = esl_sext<4,3>(select_ln65_753_fu_30376_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_30500_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_30500_ce = ap_const_logic_1;
    } else {
        grp_fu_30500_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_30500_p17() {
    grp_fu_30500_p17 = esl_zext<4,2>(select_ln65_759_fu_30488_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_30600_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_30600_ce = ap_const_logic_1;
    } else {
        grp_fu_30600_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_30600_p17() {
    grp_fu_30600_p17 = esl_zext<4,3>(select_ln65_764_fu_30588_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_30696_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_30696_ce = ap_const_logic_1;
    } else {
        grp_fu_30696_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_30696_p17() {
    grp_fu_30696_p17 = (!icmp_ln1496_548_fu_30682_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_548_fu_30682_p2.read()[0].to_bool())? select_ln65_768_fu_30666_p3.read(): select_ln65_766_fu_30644_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_30796_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_30796_ce = ap_const_logic_1;
    } else {
        grp_fu_30796_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_30796_p17() {
    grp_fu_30796_p17 = esl_sext<4,3>(select_ln65_775_fu_30784_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_30908_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_30908_ce = ap_const_logic_1;
    } else {
        grp_fu_30908_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_30908_p17() {
    grp_fu_30908_p17 = esl_zext<4,2>(select_ln65_781_fu_30896_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_31008_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_31008_ce = ap_const_logic_1;
    } else {
        grp_fu_31008_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_31008_p17() {
    grp_fu_31008_p17 = esl_zext<4,3>(select_ln65_786_fu_30996_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_31104_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_31104_ce = ap_const_logic_1;
    } else {
        grp_fu_31104_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_31104_p17() {
    grp_fu_31104_p17 = (!icmp_ln1496_562_fu_31090_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_562_fu_31090_p2.read()[0].to_bool())? select_ln65_790_fu_31074_p3.read(): select_ln65_788_fu_31052_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_31204_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_31204_ce = ap_const_logic_1;
    } else {
        grp_fu_31204_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_31204_p17() {
    grp_fu_31204_p17 = esl_sext<4,3>(select_ln65_797_fu_31192_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_31316_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_31316_ce = ap_const_logic_1;
    } else {
        grp_fu_31316_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_31316_p17() {
    grp_fu_31316_p17 = esl_zext<4,2>(select_ln65_803_fu_31304_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_31416_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_31416_ce = ap_const_logic_1;
    } else {
        grp_fu_31416_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_31416_p17() {
    grp_fu_31416_p17 = esl_zext<4,3>(select_ln65_808_fu_31404_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_31512_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_31512_ce = ap_const_logic_1;
    } else {
        grp_fu_31512_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_31512_p17() {
    grp_fu_31512_p17 = (!icmp_ln1496_576_fu_31498_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_576_fu_31498_p2.read()[0].to_bool())? select_ln65_812_fu_31482_p3.read(): select_ln65_810_fu_31460_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_31612_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_31612_ce = ap_const_logic_1;
    } else {
        grp_fu_31612_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_31612_p17() {
    grp_fu_31612_p17 = esl_sext<4,3>(select_ln65_819_fu_31600_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_31724_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_31724_ce = ap_const_logic_1;
    } else {
        grp_fu_31724_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_31724_p17() {
    grp_fu_31724_p17 = esl_zext<4,2>(select_ln65_825_fu_31712_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_31824_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_31824_ce = ap_const_logic_1;
    } else {
        grp_fu_31824_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_31824_p17() {
    grp_fu_31824_p17 = esl_zext<4,3>(select_ln65_830_fu_31812_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_31920_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_31920_ce = ap_const_logic_1;
    } else {
        grp_fu_31920_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_31920_p17() {
    grp_fu_31920_p17 = (!icmp_ln1496_590_fu_31906_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_590_fu_31906_p2.read()[0].to_bool())? select_ln65_834_fu_31890_p3.read(): select_ln65_832_fu_31868_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_32020_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_32020_ce = ap_const_logic_1;
    } else {
        grp_fu_32020_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_32020_p17() {
    grp_fu_32020_p17 = esl_sext<4,3>(select_ln65_841_fu_32008_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_32132_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_32132_ce = ap_const_logic_1;
    } else {
        grp_fu_32132_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_32132_p17() {
    grp_fu_32132_p17 = esl_zext<4,2>(select_ln65_847_fu_32120_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_32232_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_32232_ce = ap_const_logic_1;
    } else {
        grp_fu_32232_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_32232_p17() {
    grp_fu_32232_p17 = esl_zext<4,3>(select_ln65_852_fu_32220_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_32328_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_32328_ce = ap_const_logic_1;
    } else {
        grp_fu_32328_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_32328_p17() {
    grp_fu_32328_p17 = (!icmp_ln1496_604_fu_32314_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_604_fu_32314_p2.read()[0].to_bool())? select_ln65_856_fu_32298_p3.read(): select_ln65_854_fu_32276_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_32428_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_32428_ce = ap_const_logic_1;
    } else {
        grp_fu_32428_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_32428_p17() {
    grp_fu_32428_p17 = esl_sext<4,3>(select_ln65_863_fu_32416_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_32540_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_32540_ce = ap_const_logic_1;
    } else {
        grp_fu_32540_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_32540_p17() {
    grp_fu_32540_p17 = esl_zext<4,2>(select_ln65_869_fu_32528_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_32640_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_32640_ce = ap_const_logic_1;
    } else {
        grp_fu_32640_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_32640_p17() {
    grp_fu_32640_p17 = esl_zext<4,3>(select_ln65_874_fu_32628_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_32736_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_32736_ce = ap_const_logic_1;
    } else {
        grp_fu_32736_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_32736_p17() {
    grp_fu_32736_p17 = (!icmp_ln1496_618_fu_32722_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_618_fu_32722_p2.read()[0].to_bool())? select_ln65_878_fu_32706_p3.read(): select_ln65_876_fu_32684_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_32836_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_32836_ce = ap_const_logic_1;
    } else {
        grp_fu_32836_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_32836_p17() {
    grp_fu_32836_p17 = esl_sext<4,3>(select_ln65_885_fu_32824_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_32948_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_32948_ce = ap_const_logic_1;
    } else {
        grp_fu_32948_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_32948_p17() {
    grp_fu_32948_p17 = esl_zext<4,2>(select_ln65_891_fu_32936_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_33048_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_33048_ce = ap_const_logic_1;
    } else {
        grp_fu_33048_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_33048_p17() {
    grp_fu_33048_p17 = esl_zext<4,3>(select_ln65_896_fu_33036_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_33144_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_33144_ce = ap_const_logic_1;
    } else {
        grp_fu_33144_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_33144_p17() {
    grp_fu_33144_p17 = (!icmp_ln1496_632_fu_33130_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_632_fu_33130_p2.read()[0].to_bool())? select_ln65_900_fu_33114_p3.read(): select_ln65_898_fu_33092_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_33244_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_33244_ce = ap_const_logic_1;
    } else {
        grp_fu_33244_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_33244_p17() {
    grp_fu_33244_p17 = esl_sext<4,3>(select_ln65_907_fu_33232_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_33356_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_33356_ce = ap_const_logic_1;
    } else {
        grp_fu_33356_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_33356_p17() {
    grp_fu_33356_p17 = esl_zext<4,2>(select_ln65_913_fu_33344_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_33456_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_33456_ce = ap_const_logic_1;
    } else {
        grp_fu_33456_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_33456_p17() {
    grp_fu_33456_p17 = esl_zext<4,3>(select_ln65_918_fu_33444_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_33552_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_33552_ce = ap_const_logic_1;
    } else {
        grp_fu_33552_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_33552_p17() {
    grp_fu_33552_p17 = (!icmp_ln1496_646_fu_33538_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_646_fu_33538_p2.read()[0].to_bool())? select_ln65_922_fu_33522_p3.read(): select_ln65_920_fu_33500_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_33652_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_33652_ce = ap_const_logic_1;
    } else {
        grp_fu_33652_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_33652_p17() {
    grp_fu_33652_p17 = esl_sext<4,3>(select_ln65_929_fu_33640_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_33764_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_33764_ce = ap_const_logic_1;
    } else {
        grp_fu_33764_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_33764_p17() {
    grp_fu_33764_p17 = esl_zext<4,2>(select_ln65_935_fu_33752_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_33864_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_33864_ce = ap_const_logic_1;
    } else {
        grp_fu_33864_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_33864_p17() {
    grp_fu_33864_p17 = esl_zext<4,3>(select_ln65_940_fu_33852_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_33960_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_33960_ce = ap_const_logic_1;
    } else {
        grp_fu_33960_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_33960_p17() {
    grp_fu_33960_p17 = (!icmp_ln1496_660_fu_33946_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_660_fu_33946_p2.read()[0].to_bool())? select_ln65_944_fu_33930_p3.read(): select_ln65_942_fu_33908_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_34060_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_34060_ce = ap_const_logic_1;
    } else {
        grp_fu_34060_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_34060_p17() {
    grp_fu_34060_p17 = esl_sext<4,3>(select_ln65_951_fu_34048_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_34172_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_34172_ce = ap_const_logic_1;
    } else {
        grp_fu_34172_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_34172_p17() {
    grp_fu_34172_p17 = esl_zext<4,2>(select_ln65_957_fu_34160_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_34272_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_34272_ce = ap_const_logic_1;
    } else {
        grp_fu_34272_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_34272_p17() {
    grp_fu_34272_p17 = esl_zext<4,3>(select_ln65_962_fu_34260_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_34368_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_34368_ce = ap_const_logic_1;
    } else {
        grp_fu_34368_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_34368_p17() {
    grp_fu_34368_p17 = (!icmp_ln1496_674_fu_34354_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_674_fu_34354_p2.read()[0].to_bool())? select_ln65_966_fu_34338_p3.read(): select_ln65_964_fu_34316_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_34468_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_34468_ce = ap_const_logic_1;
    } else {
        grp_fu_34468_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_34468_p17() {
    grp_fu_34468_p17 = esl_sext<4,3>(select_ln65_973_fu_34456_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_34580_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_34580_ce = ap_const_logic_1;
    } else {
        grp_fu_34580_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_34580_p17() {
    grp_fu_34580_p17 = esl_zext<4,2>(select_ln65_979_fu_34568_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_34680_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_34680_ce = ap_const_logic_1;
    } else {
        grp_fu_34680_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_34680_p17() {
    grp_fu_34680_p17 = esl_zext<4,3>(select_ln65_984_fu_34668_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_34776_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_34776_ce = ap_const_logic_1;
    } else {
        grp_fu_34776_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_34776_p17() {
    grp_fu_34776_p17 = (!icmp_ln1496_688_fu_34762_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_688_fu_34762_p2.read()[0].to_bool())? select_ln65_988_fu_34746_p3.read(): select_ln65_986_fu_34724_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_34876_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_34876_ce = ap_const_logic_1;
    } else {
        grp_fu_34876_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_34876_p17() {
    grp_fu_34876_p17 = esl_sext<4,3>(select_ln65_995_fu_34864_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_34988_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_34988_ce = ap_const_logic_1;
    } else {
        grp_fu_34988_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_34988_p17() {
    grp_fu_34988_p17 = esl_zext<4,2>(select_ln65_1001_fu_34976_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_35088_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_35088_ce = ap_const_logic_1;
    } else {
        grp_fu_35088_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_35088_p17() {
    grp_fu_35088_p17 = esl_zext<4,3>(select_ln65_1006_fu_35076_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_35184_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_35184_ce = ap_const_logic_1;
    } else {
        grp_fu_35184_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_35184_p17() {
    grp_fu_35184_p17 = (!icmp_ln1496_702_fu_35170_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_702_fu_35170_p2.read()[0].to_bool())? select_ln65_1010_fu_35154_p3.read(): select_ln65_1008_fu_35132_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_35284_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_35284_ce = ap_const_logic_1;
    } else {
        grp_fu_35284_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_35284_p17() {
    grp_fu_35284_p17 = esl_sext<4,3>(select_ln65_1017_fu_35272_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_35396_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_35396_ce = ap_const_logic_1;
    } else {
        grp_fu_35396_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_35396_p17() {
    grp_fu_35396_p17 = esl_zext<4,2>(select_ln65_1023_fu_35384_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_35496_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_35496_ce = ap_const_logic_1;
    } else {
        grp_fu_35496_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_35496_p17() {
    grp_fu_35496_p17 = esl_zext<4,3>(select_ln65_1028_fu_35484_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_35592_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_35592_ce = ap_const_logic_1;
    } else {
        grp_fu_35592_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_35592_p17() {
    grp_fu_35592_p17 = (!icmp_ln1496_716_fu_35578_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_716_fu_35578_p2.read()[0].to_bool())? select_ln65_1032_fu_35562_p3.read(): select_ln65_1030_fu_35540_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_35692_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_35692_ce = ap_const_logic_1;
    } else {
        grp_fu_35692_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_35692_p17() {
    grp_fu_35692_p17 = esl_sext<4,3>(select_ln65_1039_fu_35680_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_35804_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_35804_ce = ap_const_logic_1;
    } else {
        grp_fu_35804_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_35804_p17() {
    grp_fu_35804_p17 = esl_zext<4,2>(select_ln65_1045_fu_35792_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_35904_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_35904_ce = ap_const_logic_1;
    } else {
        grp_fu_35904_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_35904_p17() {
    grp_fu_35904_p17 = esl_zext<4,3>(select_ln65_1050_fu_35892_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_36000_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_36000_ce = ap_const_logic_1;
    } else {
        grp_fu_36000_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_36000_p17() {
    grp_fu_36000_p17 = (!icmp_ln1496_730_fu_35986_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_730_fu_35986_p2.read()[0].to_bool())? select_ln65_1054_fu_35970_p3.read(): select_ln65_1052_fu_35948_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_36100_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_36100_ce = ap_const_logic_1;
    } else {
        grp_fu_36100_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_36100_p17() {
    grp_fu_36100_p17 = esl_sext<4,3>(select_ln65_1061_fu_36088_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_36212_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_36212_ce = ap_const_logic_1;
    } else {
        grp_fu_36212_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_36212_p17() {
    grp_fu_36212_p17 = esl_zext<4,2>(select_ln65_1067_fu_36200_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_36312_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_36312_ce = ap_const_logic_1;
    } else {
        grp_fu_36312_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_36312_p17() {
    grp_fu_36312_p17 = esl_zext<4,3>(select_ln65_1072_fu_36300_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_36408_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_36408_ce = ap_const_logic_1;
    } else {
        grp_fu_36408_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_36408_p17() {
    grp_fu_36408_p17 = (!icmp_ln1496_744_fu_36394_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_744_fu_36394_p2.read()[0].to_bool())? select_ln65_1076_fu_36378_p3.read(): select_ln65_1074_fu_36356_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_36508_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_36508_ce = ap_const_logic_1;
    } else {
        grp_fu_36508_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_36508_p17() {
    grp_fu_36508_p17 = esl_sext<4,3>(select_ln65_1083_fu_36496_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_36620_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_36620_ce = ap_const_logic_1;
    } else {
        grp_fu_36620_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_36620_p17() {
    grp_fu_36620_p17 = esl_zext<4,2>(select_ln65_1089_fu_36608_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_36720_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_36720_ce = ap_const_logic_1;
    } else {
        grp_fu_36720_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_36720_p17() {
    grp_fu_36720_p17 = esl_zext<4,3>(select_ln65_1094_fu_36708_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_36816_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_36816_ce = ap_const_logic_1;
    } else {
        grp_fu_36816_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_36816_p17() {
    grp_fu_36816_p17 = (!icmp_ln1496_758_fu_36802_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_758_fu_36802_p2.read()[0].to_bool())? select_ln65_1098_fu_36786_p3.read(): select_ln65_1096_fu_36764_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_36916_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_36916_ce = ap_const_logic_1;
    } else {
        grp_fu_36916_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_36916_p17() {
    grp_fu_36916_p17 = esl_sext<4,3>(select_ln65_1105_fu_36904_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_37028_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_37028_ce = ap_const_logic_1;
    } else {
        grp_fu_37028_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_37028_p17() {
    grp_fu_37028_p17 = esl_zext<4,2>(select_ln65_1111_fu_37016_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_37128_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_37128_ce = ap_const_logic_1;
    } else {
        grp_fu_37128_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_37128_p17() {
    grp_fu_37128_p17 = esl_zext<4,3>(select_ln65_1116_fu_37116_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_37224_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_37224_ce = ap_const_logic_1;
    } else {
        grp_fu_37224_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_37224_p17() {
    grp_fu_37224_p17 = (!icmp_ln1496_772_fu_37210_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_772_fu_37210_p2.read()[0].to_bool())? select_ln65_1120_fu_37194_p3.read(): select_ln65_1118_fu_37172_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_37324_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_37324_ce = ap_const_logic_1;
    } else {
        grp_fu_37324_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_37324_p17() {
    grp_fu_37324_p17 = esl_sext<4,3>(select_ln65_1127_fu_37312_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_37436_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_37436_ce = ap_const_logic_1;
    } else {
        grp_fu_37436_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_37436_p17() {
    grp_fu_37436_p17 = esl_zext<4,2>(select_ln65_1133_fu_37424_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_37536_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_37536_ce = ap_const_logic_1;
    } else {
        grp_fu_37536_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_37536_p17() {
    grp_fu_37536_p17 = esl_zext<4,3>(select_ln65_1138_fu_37524_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_37632_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_37632_ce = ap_const_logic_1;
    } else {
        grp_fu_37632_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_37632_p17() {
    grp_fu_37632_p17 = (!icmp_ln1496_786_fu_37618_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_786_fu_37618_p2.read()[0].to_bool())? select_ln65_1142_fu_37602_p3.read(): select_ln65_1140_fu_37580_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_37732_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_37732_ce = ap_const_logic_1;
    } else {
        grp_fu_37732_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_37732_p17() {
    grp_fu_37732_p17 = esl_sext<4,3>(select_ln65_1149_fu_37720_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_37844_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_37844_ce = ap_const_logic_1;
    } else {
        grp_fu_37844_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_37844_p17() {
    grp_fu_37844_p17 = esl_zext<4,2>(select_ln65_1155_fu_37832_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_37944_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_37944_ce = ap_const_logic_1;
    } else {
        grp_fu_37944_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_37944_p17() {
    grp_fu_37944_p17 = esl_zext<4,3>(select_ln65_1160_fu_37932_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_38040_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_38040_ce = ap_const_logic_1;
    } else {
        grp_fu_38040_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_38040_p17() {
    grp_fu_38040_p17 = (!icmp_ln1496_800_fu_38026_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_800_fu_38026_p2.read()[0].to_bool())? select_ln65_1164_fu_38010_p3.read(): select_ln65_1162_fu_37988_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_38140_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_38140_ce = ap_const_logic_1;
    } else {
        grp_fu_38140_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_38140_p17() {
    grp_fu_38140_p17 = esl_sext<4,3>(select_ln65_1171_fu_38128_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_38252_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_38252_ce = ap_const_logic_1;
    } else {
        grp_fu_38252_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_38252_p17() {
    grp_fu_38252_p17 = esl_zext<4,2>(select_ln65_1177_fu_38240_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_38352_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_38352_ce = ap_const_logic_1;
    } else {
        grp_fu_38352_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_38352_p17() {
    grp_fu_38352_p17 = esl_zext<4,3>(select_ln65_1182_fu_38340_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_38448_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_38448_ce = ap_const_logic_1;
    } else {
        grp_fu_38448_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_38448_p17() {
    grp_fu_38448_p17 = (!icmp_ln1496_814_fu_38434_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_814_fu_38434_p2.read()[0].to_bool())? select_ln65_1186_fu_38418_p3.read(): select_ln65_1184_fu_38396_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_38548_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_38548_ce = ap_const_logic_1;
    } else {
        grp_fu_38548_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_38548_p17() {
    grp_fu_38548_p17 = esl_sext<4,3>(select_ln65_1193_fu_38536_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_38660_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_38660_ce = ap_const_logic_1;
    } else {
        grp_fu_38660_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_38660_p17() {
    grp_fu_38660_p17 = esl_zext<4,2>(select_ln65_1199_fu_38648_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_38760_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_38760_ce = ap_const_logic_1;
    } else {
        grp_fu_38760_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_38760_p17() {
    grp_fu_38760_p17 = esl_zext<4,3>(select_ln65_1204_fu_38748_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_38856_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_38856_ce = ap_const_logic_1;
    } else {
        grp_fu_38856_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_38856_p17() {
    grp_fu_38856_p17 = (!icmp_ln1496_828_fu_38842_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_828_fu_38842_p2.read()[0].to_bool())? select_ln65_1208_fu_38826_p3.read(): select_ln65_1206_fu_38804_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_38956_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_38956_ce = ap_const_logic_1;
    } else {
        grp_fu_38956_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_38956_p17() {
    grp_fu_38956_p17 = esl_sext<4,3>(select_ln65_1215_fu_38944_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_39068_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_39068_ce = ap_const_logic_1;
    } else {
        grp_fu_39068_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_39068_p17() {
    grp_fu_39068_p17 = esl_zext<4,2>(select_ln65_1221_fu_39056_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_39168_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_39168_ce = ap_const_logic_1;
    } else {
        grp_fu_39168_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_39168_p17() {
    grp_fu_39168_p17 = esl_zext<4,3>(select_ln65_1226_fu_39156_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_39264_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_39264_ce = ap_const_logic_1;
    } else {
        grp_fu_39264_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_39264_p17() {
    grp_fu_39264_p17 = (!icmp_ln1496_842_fu_39250_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_842_fu_39250_p2.read()[0].to_bool())? select_ln65_1230_fu_39234_p3.read(): select_ln65_1228_fu_39212_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_39364_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_39364_ce = ap_const_logic_1;
    } else {
        grp_fu_39364_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_39364_p17() {
    grp_fu_39364_p17 = esl_sext<4,3>(select_ln65_1237_fu_39352_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_39476_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_39476_ce = ap_const_logic_1;
    } else {
        grp_fu_39476_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_39476_p17() {
    grp_fu_39476_p17 = esl_zext<4,2>(select_ln65_1243_fu_39464_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_39576_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_39576_ce = ap_const_logic_1;
    } else {
        grp_fu_39576_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_39576_p17() {
    grp_fu_39576_p17 = esl_zext<4,3>(select_ln65_1248_fu_39564_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_39672_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_39672_ce = ap_const_logic_1;
    } else {
        grp_fu_39672_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_39672_p17() {
    grp_fu_39672_p17 = (!icmp_ln1496_856_fu_39658_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_856_fu_39658_p2.read()[0].to_bool())? select_ln65_1252_fu_39642_p3.read(): select_ln65_1250_fu_39620_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_39772_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_39772_ce = ap_const_logic_1;
    } else {
        grp_fu_39772_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_39772_p17() {
    grp_fu_39772_p17 = esl_sext<4,3>(select_ln65_1259_fu_39760_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_39884_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_39884_ce = ap_const_logic_1;
    } else {
        grp_fu_39884_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_39884_p17() {
    grp_fu_39884_p17 = esl_zext<4,2>(select_ln65_1264_fu_39872_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_39984_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_39984_ce = ap_const_logic_1;
    } else {
        grp_fu_39984_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_39984_p17() {
    grp_fu_39984_p17 = esl_zext<4,3>(select_ln65_1269_fu_39972_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_40080_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_40080_ce = ap_const_logic_1;
    } else {
        grp_fu_40080_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_40080_p17() {
    grp_fu_40080_p17 = (!icmp_ln1496_870_fu_40066_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_870_fu_40066_p2.read()[0].to_bool())? select_ln65_1273_fu_40050_p3.read(): select_ln65_1271_fu_40028_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_40180_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_40180_ce = ap_const_logic_1;
    } else {
        grp_fu_40180_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_40180_p17() {
    grp_fu_40180_p17 = esl_sext<4,3>(select_ln65_1280_fu_40168_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_40292_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_40292_ce = ap_const_logic_1;
    } else {
        grp_fu_40292_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_40292_p17() {
    grp_fu_40292_p17 = esl_zext<4,2>(select_ln65_1285_fu_40280_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_40392_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_40392_ce = ap_const_logic_1;
    } else {
        grp_fu_40392_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_40392_p17() {
    grp_fu_40392_p17 = esl_zext<4,3>(select_ln65_1290_fu_40380_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_40488_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_40488_ce = ap_const_logic_1;
    } else {
        grp_fu_40488_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_40488_p17() {
    grp_fu_40488_p17 = (!icmp_ln1496_884_fu_40474_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_884_fu_40474_p2.read()[0].to_bool())? select_ln65_1294_fu_40458_p3.read(): select_ln65_1292_fu_40436_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_40588_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_40588_ce = ap_const_logic_1;
    } else {
        grp_fu_40588_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_40588_p17() {
    grp_fu_40588_p17 = esl_sext<4,3>(select_ln65_1301_fu_40576_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_40700_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_40700_ce = ap_const_logic_1;
    } else {
        grp_fu_40700_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_40700_p17() {
    grp_fu_40700_p17 = esl_zext<4,2>(select_ln65_1306_fu_40688_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_40800_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_40800_ce = ap_const_logic_1;
    } else {
        grp_fu_40800_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_40800_p17() {
    grp_fu_40800_p17 = esl_zext<4,3>(select_ln65_1311_fu_40788_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_40896_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_40896_ce = ap_const_logic_1;
    } else {
        grp_fu_40896_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_40896_p17() {
    grp_fu_40896_p17 = (!icmp_ln1496_898_fu_40882_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_898_fu_40882_p2.read()[0].to_bool())? select_ln65_1315_fu_40866_p3.read(): select_ln65_1313_fu_40844_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_40996_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_40996_ce = ap_const_logic_1;
    } else {
        grp_fu_40996_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_40996_p17() {
    grp_fu_40996_p17 = esl_sext<4,3>(select_ln65_1322_fu_40984_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_41108_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_41108_ce = ap_const_logic_1;
    } else {
        grp_fu_41108_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_41108_p17() {
    grp_fu_41108_p17 = esl_zext<4,2>(select_ln65_1327_fu_41096_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_41208_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_41208_ce = ap_const_logic_1;
    } else {
        grp_fu_41208_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_41208_p17() {
    grp_fu_41208_p17 = esl_zext<4,3>(select_ln65_1332_fu_41196_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_41304_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_41304_ce = ap_const_logic_1;
    } else {
        grp_fu_41304_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_41304_p17() {
    grp_fu_41304_p17 = (!icmp_ln1496_912_fu_41290_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_912_fu_41290_p2.read()[0].to_bool())? select_ln65_1336_fu_41274_p3.read(): select_ln65_1334_fu_41252_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_41404_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_41404_ce = ap_const_logic_1;
    } else {
        grp_fu_41404_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_41404_p17() {
    grp_fu_41404_p17 = esl_sext<4,3>(select_ln65_1343_fu_41392_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_41516_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_41516_ce = ap_const_logic_1;
    } else {
        grp_fu_41516_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_41516_p17() {
    grp_fu_41516_p17 = esl_zext<4,2>(select_ln65_1348_fu_41504_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_41616_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_41616_ce = ap_const_logic_1;
    } else {
        grp_fu_41616_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_41616_p17() {
    grp_fu_41616_p17 = esl_zext<4,3>(select_ln65_1353_fu_41604_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_41712_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_41712_ce = ap_const_logic_1;
    } else {
        grp_fu_41712_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_41712_p17() {
    grp_fu_41712_p17 = (!icmp_ln1496_926_fu_41698_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_926_fu_41698_p2.read()[0].to_bool())? select_ln65_1357_fu_41682_p3.read(): select_ln65_1355_fu_41660_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_41812_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_41812_ce = ap_const_logic_1;
    } else {
        grp_fu_41812_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_41812_p17() {
    grp_fu_41812_p17 = esl_sext<4,3>(select_ln65_1364_fu_41800_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_41924_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_41924_ce = ap_const_logic_1;
    } else {
        grp_fu_41924_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_41924_p17() {
    grp_fu_41924_p17 = esl_zext<4,2>(select_ln65_1369_fu_41912_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42024_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_42024_ce = ap_const_logic_1;
    } else {
        grp_fu_42024_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42024_p17() {
    grp_fu_42024_p17 = esl_zext<4,3>(select_ln65_1374_fu_42012_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42120_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_42120_ce = ap_const_logic_1;
    } else {
        grp_fu_42120_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42120_p17() {
    grp_fu_42120_p17 = (!icmp_ln1496_940_fu_42106_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_940_fu_42106_p2.read()[0].to_bool())? select_ln65_1378_fu_42090_p3.read(): select_ln65_1376_fu_42068_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42220_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_42220_ce = ap_const_logic_1;
    } else {
        grp_fu_42220_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42220_p17() {
    grp_fu_42220_p17 = esl_sext<4,3>(select_ln65_1385_fu_42208_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42332_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_42332_ce = ap_const_logic_1;
    } else {
        grp_fu_42332_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42332_p17() {
    grp_fu_42332_p17 = esl_zext<4,2>(select_ln65_1390_fu_42320_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42432_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_42432_ce = ap_const_logic_1;
    } else {
        grp_fu_42432_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42432_p17() {
    grp_fu_42432_p17 = esl_zext<4,3>(select_ln65_1395_fu_42420_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42528_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_42528_ce = ap_const_logic_1;
    } else {
        grp_fu_42528_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42528_p17() {
    grp_fu_42528_p17 = (!icmp_ln1496_954_fu_42514_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_954_fu_42514_p2.read()[0].to_bool())? select_ln65_1399_fu_42498_p3.read(): select_ln65_1397_fu_42476_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42628_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_42628_ce = ap_const_logic_1;
    } else {
        grp_fu_42628_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42628_p17() {
    grp_fu_42628_p17 = esl_sext<4,3>(select_ln65_1406_fu_42616_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42724_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_42724_ce = ap_const_logic_1;
    } else {
        grp_fu_42724_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42724_p17() {
    grp_fu_42724_p17 = esl_zext<4,3>(select_ln65_17_fu_42713_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42758_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_42758_ce = ap_const_logic_1;
    } else {
        grp_fu_42758_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42758_p17() {
    grp_fu_42758_p17 = (!icmp_ln1496_13_fu_42746_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_13_fu_42746_p2.read()[0].to_bool())? sext_ln65_reg_58384_pp0_iter1_reg.read(): select_ln65_22_reg_58378_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42800_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_42800_ce = ap_const_logic_1;
    } else {
        grp_fu_42800_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42800_p17() {
    grp_fu_42800_p17 = esl_zext<4,3>(select_ln65_39_fu_42789_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42834_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_42834_ce = ap_const_logic_1;
    } else {
        grp_fu_42834_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42834_p17() {
    grp_fu_42834_p17 = (!icmp_ln1496_77_fu_42822_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_77_fu_42822_p2.read()[0].to_bool())? sext_ln65_1_reg_58465_pp0_iter1_reg.read(): select_ln65_44_reg_58459_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42876_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_42876_ce = ap_const_logic_1;
    } else {
        grp_fu_42876_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42876_p17() {
    grp_fu_42876_p17 = esl_zext<4,3>(select_ln65_61_fu_42865_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42910_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_42910_ce = ap_const_logic_1;
    } else {
        grp_fu_42910_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42910_p17() {
    grp_fu_42910_p17 = (!icmp_ln1496_92_fu_42898_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_92_fu_42898_p2.read()[0].to_bool())? sext_ln65_2_reg_58546_pp0_iter1_reg.read(): select_ln65_66_reg_58540_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42952_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_42952_ce = ap_const_logic_1;
    } else {
        grp_fu_42952_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42952_p17() {
    grp_fu_42952_p17 = esl_zext<4,3>(select_ln65_83_fu_42941_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42986_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_42986_ce = ap_const_logic_1;
    } else {
        grp_fu_42986_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_42986_p17() {
    grp_fu_42986_p17 = (!icmp_ln1496_107_fu_42974_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_107_fu_42974_p2.read()[0].to_bool())? sext_ln65_3_reg_58627_pp0_iter1_reg.read(): select_ln65_88_reg_58621_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43028_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43028_ce = ap_const_logic_1;
    } else {
        grp_fu_43028_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43028_p17() {
    grp_fu_43028_p17 = esl_zext<4,3>(select_ln65_105_fu_43017_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43062_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43062_ce = ap_const_logic_1;
    } else {
        grp_fu_43062_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43062_p17() {
    grp_fu_43062_p17 = (!icmp_ln1496_122_fu_43050_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_122_fu_43050_p2.read()[0].to_bool())? sext_ln65_4_reg_58708_pp0_iter1_reg.read(): select_ln65_110_reg_58702_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43104_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43104_ce = ap_const_logic_1;
    } else {
        grp_fu_43104_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43104_p17() {
    grp_fu_43104_p17 = esl_zext<4,3>(select_ln65_127_fu_43093_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43138_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43138_ce = ap_const_logic_1;
    } else {
        grp_fu_43138_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43138_p17() {
    grp_fu_43138_p17 = (!icmp_ln1496_137_fu_43126_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_137_fu_43126_p2.read()[0].to_bool())? sext_ln65_5_reg_58789_pp0_iter1_reg.read(): select_ln65_132_reg_58783_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43180_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43180_ce = ap_const_logic_1;
    } else {
        grp_fu_43180_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43180_p17() {
    grp_fu_43180_p17 = esl_zext<4,3>(select_ln65_149_fu_43169_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43214_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43214_ce = ap_const_logic_1;
    } else {
        grp_fu_43214_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43214_p17() {
    grp_fu_43214_p17 = (!icmp_ln1496_152_fu_43202_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_152_fu_43202_p2.read()[0].to_bool())? sext_ln65_6_reg_58870_pp0_iter1_reg.read(): select_ln65_154_reg_58864_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43256_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43256_ce = ap_const_logic_1;
    } else {
        grp_fu_43256_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43256_p17() {
    grp_fu_43256_p17 = esl_zext<4,3>(select_ln65_171_fu_43245_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43290_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43290_ce = ap_const_logic_1;
    } else {
        grp_fu_43290_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43290_p17() {
    grp_fu_43290_p17 = (!icmp_ln1496_167_fu_43278_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_167_fu_43278_p2.read()[0].to_bool())? sext_ln65_7_reg_58951_pp0_iter1_reg.read(): select_ln65_176_reg_58945_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43332_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43332_ce = ap_const_logic_1;
    } else {
        grp_fu_43332_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43332_p17() {
    grp_fu_43332_p17 = esl_zext<4,3>(select_ln65_193_fu_43321_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43366_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43366_ce = ap_const_logic_1;
    } else {
        grp_fu_43366_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43366_p17() {
    grp_fu_43366_p17 = (!icmp_ln1496_182_fu_43354_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_182_fu_43354_p2.read()[0].to_bool())? sext_ln65_8_reg_59032_pp0_iter1_reg.read(): select_ln65_198_reg_59026_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43408_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43408_ce = ap_const_logic_1;
    } else {
        grp_fu_43408_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43408_p17() {
    grp_fu_43408_p17 = esl_zext<4,3>(select_ln65_215_fu_43397_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43442_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43442_ce = ap_const_logic_1;
    } else {
        grp_fu_43442_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43442_p17() {
    grp_fu_43442_p17 = (!icmp_ln1496_197_fu_43430_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_197_fu_43430_p2.read()[0].to_bool())? sext_ln65_9_reg_59113_pp0_iter1_reg.read(): select_ln65_220_reg_59107_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43484_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43484_ce = ap_const_logic_1;
    } else {
        grp_fu_43484_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43484_p17() {
    grp_fu_43484_p17 = esl_zext<4,3>(select_ln65_237_fu_43473_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43518_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43518_ce = ap_const_logic_1;
    } else {
        grp_fu_43518_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43518_p17() {
    grp_fu_43518_p17 = (!icmp_ln1496_212_fu_43506_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_212_fu_43506_p2.read()[0].to_bool())? sext_ln65_10_reg_59194_pp0_iter1_reg.read(): select_ln65_242_reg_59188_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43560_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43560_ce = ap_const_logic_1;
    } else {
        grp_fu_43560_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43560_p17() {
    grp_fu_43560_p17 = esl_zext<4,3>(select_ln65_259_fu_43549_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43594_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43594_ce = ap_const_logic_1;
    } else {
        grp_fu_43594_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43594_p17() {
    grp_fu_43594_p17 = (!icmp_ln1496_227_fu_43582_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_227_fu_43582_p2.read()[0].to_bool())? sext_ln65_11_reg_59275_pp0_iter1_reg.read(): select_ln65_264_reg_59269_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43636_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43636_ce = ap_const_logic_1;
    } else {
        grp_fu_43636_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43636_p17() {
    grp_fu_43636_p17 = esl_zext<4,3>(select_ln65_281_fu_43625_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43670_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43670_ce = ap_const_logic_1;
    } else {
        grp_fu_43670_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43670_p17() {
    grp_fu_43670_p17 = (!icmp_ln1496_242_fu_43658_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_242_fu_43658_p2.read()[0].to_bool())? sext_ln65_12_reg_59356_pp0_iter1_reg.read(): select_ln65_286_reg_59350_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43712_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43712_ce = ap_const_logic_1;
    } else {
        grp_fu_43712_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43712_p17() {
    grp_fu_43712_p17 = esl_zext<4,3>(select_ln65_303_fu_43701_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43746_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43746_ce = ap_const_logic_1;
    } else {
        grp_fu_43746_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43746_p17() {
    grp_fu_43746_p17 = (!icmp_ln1496_257_fu_43734_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_257_fu_43734_p2.read()[0].to_bool())? sext_ln65_13_reg_59437_pp0_iter1_reg.read(): select_ln65_308_reg_59431_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43788_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43788_ce = ap_const_logic_1;
    } else {
        grp_fu_43788_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43788_p17() {
    grp_fu_43788_p17 = esl_zext<4,3>(select_ln65_325_fu_43777_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43822_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43822_ce = ap_const_logic_1;
    } else {
        grp_fu_43822_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43822_p17() {
    grp_fu_43822_p17 = (!icmp_ln1496_272_fu_43810_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_272_fu_43810_p2.read()[0].to_bool())? sext_ln65_14_reg_59518_pp0_iter1_reg.read(): select_ln65_330_reg_59512_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43864_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43864_ce = ap_const_logic_1;
    } else {
        grp_fu_43864_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43864_p17() {
    grp_fu_43864_p17 = esl_zext<4,3>(select_ln65_347_fu_43853_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43898_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43898_ce = ap_const_logic_1;
    } else {
        grp_fu_43898_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43898_p17() {
    grp_fu_43898_p17 = (!icmp_ln1496_286_fu_43886_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_286_fu_43886_p2.read()[0].to_bool())? sext_ln65_15_reg_59599_pp0_iter1_reg.read(): select_ln65_352_reg_59593_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43940_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43940_ce = ap_const_logic_1;
    } else {
        grp_fu_43940_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43940_p17() {
    grp_fu_43940_p17 = esl_zext<4,3>(select_ln65_369_fu_43929_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43974_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_43974_ce = ap_const_logic_1;
    } else {
        grp_fu_43974_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_43974_p17() {
    grp_fu_43974_p17 = (!icmp_ln1496_300_fu_43962_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_300_fu_43962_p2.read()[0].to_bool())? sext_ln65_16_reg_59680_pp0_iter1_reg.read(): select_ln65_374_reg_59674_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44016_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44016_ce = ap_const_logic_1;
    } else {
        grp_fu_44016_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44016_p17() {
    grp_fu_44016_p17 = esl_zext<4,3>(select_ln65_391_fu_44005_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44050_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44050_ce = ap_const_logic_1;
    } else {
        grp_fu_44050_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44050_p17() {
    grp_fu_44050_p17 = (!icmp_ln1496_314_fu_44038_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_314_fu_44038_p2.read()[0].to_bool())? sext_ln65_17_reg_59761_pp0_iter1_reg.read(): select_ln65_396_reg_59755_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44092_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44092_ce = ap_const_logic_1;
    } else {
        grp_fu_44092_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44092_p17() {
    grp_fu_44092_p17 = esl_zext<4,3>(select_ln65_413_fu_44081_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44126_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44126_ce = ap_const_logic_1;
    } else {
        grp_fu_44126_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44126_p17() {
    grp_fu_44126_p17 = (!icmp_ln1496_328_fu_44114_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_328_fu_44114_p2.read()[0].to_bool())? sext_ln65_18_reg_59835_pp0_iter1_reg.read(): select_ln65_418_reg_59829_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44168_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44168_ce = ap_const_logic_1;
    } else {
        grp_fu_44168_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44168_p17() {
    grp_fu_44168_p17 = esl_zext<4,3>(select_ln65_435_fu_44157_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44202_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44202_ce = ap_const_logic_1;
    } else {
        grp_fu_44202_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44202_p17() {
    grp_fu_44202_p17 = (!icmp_ln1496_342_fu_44190_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_342_fu_44190_p2.read()[0].to_bool())? sext_ln65_19_reg_59909_pp0_iter1_reg.read(): select_ln65_440_reg_59903_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44244_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44244_ce = ap_const_logic_1;
    } else {
        grp_fu_44244_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44244_p17() {
    grp_fu_44244_p17 = esl_zext<4,3>(select_ln65_457_fu_44233_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44278_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44278_ce = ap_const_logic_1;
    } else {
        grp_fu_44278_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44278_p17() {
    grp_fu_44278_p17 = (!icmp_ln1496_356_fu_44266_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_356_fu_44266_p2.read()[0].to_bool())? sext_ln65_20_reg_59983_pp0_iter1_reg.read(): select_ln65_462_reg_59977_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44320_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44320_ce = ap_const_logic_1;
    } else {
        grp_fu_44320_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44320_p17() {
    grp_fu_44320_p17 = esl_zext<4,3>(select_ln65_479_fu_44309_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44354_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44354_ce = ap_const_logic_1;
    } else {
        grp_fu_44354_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44354_p17() {
    grp_fu_44354_p17 = (!icmp_ln1496_370_fu_44342_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_370_fu_44342_p2.read()[0].to_bool())? sext_ln65_21_reg_60057_pp0_iter1_reg.read(): select_ln65_484_reg_60051_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44396_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44396_ce = ap_const_logic_1;
    } else {
        grp_fu_44396_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44396_p17() {
    grp_fu_44396_p17 = esl_zext<4,3>(select_ln65_501_fu_44385_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44430_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44430_ce = ap_const_logic_1;
    } else {
        grp_fu_44430_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44430_p17() {
    grp_fu_44430_p17 = (!icmp_ln1496_384_fu_44418_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_384_fu_44418_p2.read()[0].to_bool())? sext_ln65_22_reg_60131_pp0_iter1_reg.read(): select_ln65_506_reg_60125_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44472_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44472_ce = ap_const_logic_1;
    } else {
        grp_fu_44472_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44472_p17() {
    grp_fu_44472_p17 = esl_zext<4,3>(select_ln65_523_fu_44461_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44506_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44506_ce = ap_const_logic_1;
    } else {
        grp_fu_44506_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44506_p17() {
    grp_fu_44506_p17 = (!icmp_ln1496_398_fu_44494_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_398_fu_44494_p2.read()[0].to_bool())? sext_ln65_23_reg_60205_pp0_iter1_reg.read(): select_ln65_528_reg_60199_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44548_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44548_ce = ap_const_logic_1;
    } else {
        grp_fu_44548_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44548_p17() {
    grp_fu_44548_p17 = esl_zext<4,3>(select_ln65_545_fu_44537_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44582_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44582_ce = ap_const_logic_1;
    } else {
        grp_fu_44582_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44582_p17() {
    grp_fu_44582_p17 = (!icmp_ln1496_412_fu_44570_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_412_fu_44570_p2.read()[0].to_bool())? sext_ln65_24_reg_60279_pp0_iter1_reg.read(): select_ln65_550_reg_60273_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44624_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44624_ce = ap_const_logic_1;
    } else {
        grp_fu_44624_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44624_p17() {
    grp_fu_44624_p17 = esl_zext<4,3>(select_ln65_567_fu_44613_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44658_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44658_ce = ap_const_logic_1;
    } else {
        grp_fu_44658_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44658_p17() {
    grp_fu_44658_p17 = (!icmp_ln1496_426_fu_44646_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_426_fu_44646_p2.read()[0].to_bool())? sext_ln65_25_reg_60353_pp0_iter1_reg.read(): select_ln65_572_reg_60347_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44700_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44700_ce = ap_const_logic_1;
    } else {
        grp_fu_44700_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44700_p17() {
    grp_fu_44700_p17 = esl_zext<4,3>(select_ln65_589_fu_44689_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44734_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44734_ce = ap_const_logic_1;
    } else {
        grp_fu_44734_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44734_p17() {
    grp_fu_44734_p17 = (!icmp_ln1496_440_fu_44722_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_440_fu_44722_p2.read()[0].to_bool())? sext_ln65_26_reg_60427_pp0_iter1_reg.read(): select_ln65_594_reg_60421_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44776_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44776_ce = ap_const_logic_1;
    } else {
        grp_fu_44776_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44776_p17() {
    grp_fu_44776_p17 = esl_zext<4,3>(select_ln65_611_fu_44765_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44810_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44810_ce = ap_const_logic_1;
    } else {
        grp_fu_44810_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44810_p17() {
    grp_fu_44810_p17 = (!icmp_ln1496_454_fu_44798_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_454_fu_44798_p2.read()[0].to_bool())? sext_ln65_27_reg_60501_pp0_iter1_reg.read(): select_ln65_616_reg_60495_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44852_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44852_ce = ap_const_logic_1;
    } else {
        grp_fu_44852_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44852_p17() {
    grp_fu_44852_p17 = esl_zext<4,3>(select_ln65_633_fu_44841_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44886_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44886_ce = ap_const_logic_1;
    } else {
        grp_fu_44886_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44886_p17() {
    grp_fu_44886_p17 = (!icmp_ln1496_468_fu_44874_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_468_fu_44874_p2.read()[0].to_bool())? sext_ln65_28_reg_60575_pp0_iter1_reg.read(): select_ln65_638_reg_60569_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44928_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44928_ce = ap_const_logic_1;
    } else {
        grp_fu_44928_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44928_p17() {
    grp_fu_44928_p17 = esl_zext<4,3>(select_ln65_655_fu_44917_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44962_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_44962_ce = ap_const_logic_1;
    } else {
        grp_fu_44962_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_44962_p17() {
    grp_fu_44962_p17 = (!icmp_ln1496_482_fu_44950_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_482_fu_44950_p2.read()[0].to_bool())? sext_ln65_29_reg_60649_pp0_iter1_reg.read(): select_ln65_660_reg_60643_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45004_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45004_ce = ap_const_logic_1;
    } else {
        grp_fu_45004_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45004_p17() {
    grp_fu_45004_p17 = esl_zext<4,3>(select_ln65_677_fu_44993_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45038_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45038_ce = ap_const_logic_1;
    } else {
        grp_fu_45038_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45038_p17() {
    grp_fu_45038_p17 = (!icmp_ln1496_496_fu_45026_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_496_fu_45026_p2.read()[0].to_bool())? sext_ln65_30_reg_60723_pp0_iter1_reg.read(): select_ln65_682_reg_60717_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45080_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45080_ce = ap_const_logic_1;
    } else {
        grp_fu_45080_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45080_p17() {
    grp_fu_45080_p17 = esl_zext<4,3>(select_ln65_699_fu_45069_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45114_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45114_ce = ap_const_logic_1;
    } else {
        grp_fu_45114_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45114_p17() {
    grp_fu_45114_p17 = (!icmp_ln1496_510_fu_45102_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_510_fu_45102_p2.read()[0].to_bool())? sext_ln65_31_reg_60797_pp0_iter1_reg.read(): select_ln65_704_reg_60791_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45156_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45156_ce = ap_const_logic_1;
    } else {
        grp_fu_45156_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45156_p17() {
    grp_fu_45156_p17 = esl_zext<4,3>(select_ln65_721_fu_45145_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45190_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45190_ce = ap_const_logic_1;
    } else {
        grp_fu_45190_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45190_p17() {
    grp_fu_45190_p17 = (!icmp_ln1496_524_fu_45178_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_524_fu_45178_p2.read()[0].to_bool())? sext_ln65_32_reg_60871_pp0_iter1_reg.read(): select_ln65_726_reg_60865_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45232_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45232_ce = ap_const_logic_1;
    } else {
        grp_fu_45232_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45232_p17() {
    grp_fu_45232_p17 = esl_zext<4,3>(select_ln65_743_fu_45221_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45266_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45266_ce = ap_const_logic_1;
    } else {
        grp_fu_45266_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45266_p17() {
    grp_fu_45266_p17 = (!icmp_ln1496_538_fu_45254_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_538_fu_45254_p2.read()[0].to_bool())? sext_ln65_33_reg_60945_pp0_iter1_reg.read(): select_ln65_748_reg_60939_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45308_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45308_ce = ap_const_logic_1;
    } else {
        grp_fu_45308_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45308_p17() {
    grp_fu_45308_p17 = esl_zext<4,3>(select_ln65_765_fu_45297_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45342_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45342_ce = ap_const_logic_1;
    } else {
        grp_fu_45342_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45342_p17() {
    grp_fu_45342_p17 = (!icmp_ln1496_552_fu_45330_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_552_fu_45330_p2.read()[0].to_bool())? sext_ln65_34_reg_61019_pp0_iter1_reg.read(): select_ln65_770_reg_61013_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45384_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45384_ce = ap_const_logic_1;
    } else {
        grp_fu_45384_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45384_p17() {
    grp_fu_45384_p17 = esl_zext<4,3>(select_ln65_787_fu_45373_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45418_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45418_ce = ap_const_logic_1;
    } else {
        grp_fu_45418_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45418_p17() {
    grp_fu_45418_p17 = (!icmp_ln1496_566_fu_45406_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_566_fu_45406_p2.read()[0].to_bool())? sext_ln65_35_reg_61093_pp0_iter1_reg.read(): select_ln65_792_reg_61087_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45460_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45460_ce = ap_const_logic_1;
    } else {
        grp_fu_45460_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45460_p17() {
    grp_fu_45460_p17 = esl_zext<4,3>(select_ln65_809_fu_45449_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45494_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45494_ce = ap_const_logic_1;
    } else {
        grp_fu_45494_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45494_p17() {
    grp_fu_45494_p17 = (!icmp_ln1496_580_fu_45482_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_580_fu_45482_p2.read()[0].to_bool())? sext_ln65_36_reg_61167_pp0_iter1_reg.read(): select_ln65_814_reg_61161_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45536_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45536_ce = ap_const_logic_1;
    } else {
        grp_fu_45536_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45536_p17() {
    grp_fu_45536_p17 = esl_zext<4,3>(select_ln65_831_fu_45525_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45570_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45570_ce = ap_const_logic_1;
    } else {
        grp_fu_45570_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45570_p17() {
    grp_fu_45570_p17 = (!icmp_ln1496_594_fu_45558_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_594_fu_45558_p2.read()[0].to_bool())? sext_ln65_37_reg_61241_pp0_iter1_reg.read(): select_ln65_836_reg_61235_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45612_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45612_ce = ap_const_logic_1;
    } else {
        grp_fu_45612_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45612_p17() {
    grp_fu_45612_p17 = esl_zext<4,3>(select_ln65_853_fu_45601_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45646_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45646_ce = ap_const_logic_1;
    } else {
        grp_fu_45646_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45646_p17() {
    grp_fu_45646_p17 = (!icmp_ln1496_608_fu_45634_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_608_fu_45634_p2.read()[0].to_bool())? sext_ln65_38_reg_61315_pp0_iter1_reg.read(): select_ln65_858_reg_61309_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45688_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45688_ce = ap_const_logic_1;
    } else {
        grp_fu_45688_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45688_p17() {
    grp_fu_45688_p17 = esl_zext<4,3>(select_ln65_875_fu_45677_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45722_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45722_ce = ap_const_logic_1;
    } else {
        grp_fu_45722_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45722_p17() {
    grp_fu_45722_p17 = (!icmp_ln1496_622_fu_45710_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_622_fu_45710_p2.read()[0].to_bool())? sext_ln65_39_reg_61389_pp0_iter1_reg.read(): select_ln65_880_reg_61383_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45764_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45764_ce = ap_const_logic_1;
    } else {
        grp_fu_45764_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45764_p17() {
    grp_fu_45764_p17 = esl_zext<4,3>(select_ln65_897_fu_45753_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45798_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45798_ce = ap_const_logic_1;
    } else {
        grp_fu_45798_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45798_p17() {
    grp_fu_45798_p17 = (!icmp_ln1496_636_fu_45786_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_636_fu_45786_p2.read()[0].to_bool())? sext_ln65_40_reg_61463_pp0_iter1_reg.read(): select_ln65_902_reg_61457_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45840_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45840_ce = ap_const_logic_1;
    } else {
        grp_fu_45840_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45840_p17() {
    grp_fu_45840_p17 = esl_zext<4,3>(select_ln65_919_fu_45829_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45874_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45874_ce = ap_const_logic_1;
    } else {
        grp_fu_45874_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45874_p17() {
    grp_fu_45874_p17 = (!icmp_ln1496_650_fu_45862_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_650_fu_45862_p2.read()[0].to_bool())? sext_ln65_41_reg_61537_pp0_iter1_reg.read(): select_ln65_924_reg_61531_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45916_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45916_ce = ap_const_logic_1;
    } else {
        grp_fu_45916_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45916_p17() {
    grp_fu_45916_p17 = esl_zext<4,3>(select_ln65_941_fu_45905_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45950_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45950_ce = ap_const_logic_1;
    } else {
        grp_fu_45950_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45950_p17() {
    grp_fu_45950_p17 = (!icmp_ln1496_664_fu_45938_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_664_fu_45938_p2.read()[0].to_bool())? sext_ln65_42_reg_61611_pp0_iter1_reg.read(): select_ln65_946_reg_61605_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45992_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_45992_ce = ap_const_logic_1;
    } else {
        grp_fu_45992_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_45992_p17() {
    grp_fu_45992_p17 = esl_zext<4,3>(select_ln65_963_fu_45981_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46026_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46026_ce = ap_const_logic_1;
    } else {
        grp_fu_46026_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46026_p17() {
    grp_fu_46026_p17 = (!icmp_ln1496_678_fu_46014_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_678_fu_46014_p2.read()[0].to_bool())? sext_ln65_43_reg_61685_pp0_iter1_reg.read(): select_ln65_968_reg_61679_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46068_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46068_ce = ap_const_logic_1;
    } else {
        grp_fu_46068_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46068_p17() {
    grp_fu_46068_p17 = esl_zext<4,3>(select_ln65_985_fu_46057_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46102_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46102_ce = ap_const_logic_1;
    } else {
        grp_fu_46102_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46102_p17() {
    grp_fu_46102_p17 = (!icmp_ln1496_692_fu_46090_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_692_fu_46090_p2.read()[0].to_bool())? sext_ln65_44_reg_61759_pp0_iter1_reg.read(): select_ln65_990_reg_61753_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46144_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46144_ce = ap_const_logic_1;
    } else {
        grp_fu_46144_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46144_p17() {
    grp_fu_46144_p17 = esl_zext<4,3>(select_ln65_1007_fu_46133_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46178_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46178_ce = ap_const_logic_1;
    } else {
        grp_fu_46178_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46178_p17() {
    grp_fu_46178_p17 = (!icmp_ln1496_706_fu_46166_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_706_fu_46166_p2.read()[0].to_bool())? sext_ln65_45_reg_61833_pp0_iter1_reg.read(): select_ln65_1012_reg_61827_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46220_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46220_ce = ap_const_logic_1;
    } else {
        grp_fu_46220_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46220_p17() {
    grp_fu_46220_p17 = esl_zext<4,3>(select_ln65_1029_fu_46209_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46254_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46254_ce = ap_const_logic_1;
    } else {
        grp_fu_46254_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46254_p17() {
    grp_fu_46254_p17 = (!icmp_ln1496_720_fu_46242_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_720_fu_46242_p2.read()[0].to_bool())? sext_ln65_46_reg_61907_pp0_iter1_reg.read(): select_ln65_1034_reg_61901_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46296_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46296_ce = ap_const_logic_1;
    } else {
        grp_fu_46296_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46296_p17() {
    grp_fu_46296_p17 = esl_zext<4,3>(select_ln65_1051_fu_46285_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46330_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46330_ce = ap_const_logic_1;
    } else {
        grp_fu_46330_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46330_p17() {
    grp_fu_46330_p17 = (!icmp_ln1496_734_fu_46318_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_734_fu_46318_p2.read()[0].to_bool())? sext_ln65_47_reg_61981_pp0_iter1_reg.read(): select_ln65_1056_reg_61975_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46372_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46372_ce = ap_const_logic_1;
    } else {
        grp_fu_46372_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46372_p17() {
    grp_fu_46372_p17 = esl_zext<4,3>(select_ln65_1073_fu_46361_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46406_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46406_ce = ap_const_logic_1;
    } else {
        grp_fu_46406_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46406_p17() {
    grp_fu_46406_p17 = (!icmp_ln1496_748_fu_46394_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_748_fu_46394_p2.read()[0].to_bool())? sext_ln65_48_reg_62055_pp0_iter1_reg.read(): select_ln65_1078_reg_62049_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46448_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46448_ce = ap_const_logic_1;
    } else {
        grp_fu_46448_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46448_p17() {
    grp_fu_46448_p17 = esl_zext<4,3>(select_ln65_1095_fu_46437_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46482_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46482_ce = ap_const_logic_1;
    } else {
        grp_fu_46482_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46482_p17() {
    grp_fu_46482_p17 = (!icmp_ln1496_762_fu_46470_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_762_fu_46470_p2.read()[0].to_bool())? sext_ln65_49_reg_62129_pp0_iter1_reg.read(): select_ln65_1100_reg_62123_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46524_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46524_ce = ap_const_logic_1;
    } else {
        grp_fu_46524_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46524_p17() {
    grp_fu_46524_p17 = esl_zext<4,3>(select_ln65_1117_fu_46513_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46558_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46558_ce = ap_const_logic_1;
    } else {
        grp_fu_46558_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46558_p17() {
    grp_fu_46558_p17 = (!icmp_ln1496_776_fu_46546_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_776_fu_46546_p2.read()[0].to_bool())? sext_ln65_50_reg_62203_pp0_iter1_reg.read(): select_ln65_1122_reg_62197_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46600_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46600_ce = ap_const_logic_1;
    } else {
        grp_fu_46600_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46600_p17() {
    grp_fu_46600_p17 = esl_zext<4,3>(select_ln65_1139_fu_46589_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46634_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46634_ce = ap_const_logic_1;
    } else {
        grp_fu_46634_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46634_p17() {
    grp_fu_46634_p17 = (!icmp_ln1496_790_fu_46622_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_790_fu_46622_p2.read()[0].to_bool())? sext_ln65_51_reg_62277_pp0_iter1_reg.read(): select_ln65_1144_reg_62271_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46676_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46676_ce = ap_const_logic_1;
    } else {
        grp_fu_46676_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46676_p17() {
    grp_fu_46676_p17 = esl_zext<4,3>(select_ln65_1161_fu_46665_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46710_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46710_ce = ap_const_logic_1;
    } else {
        grp_fu_46710_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46710_p17() {
    grp_fu_46710_p17 = (!icmp_ln1496_804_fu_46698_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_804_fu_46698_p2.read()[0].to_bool())? sext_ln65_52_reg_62351_pp0_iter1_reg.read(): select_ln65_1166_reg_62345_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46752_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46752_ce = ap_const_logic_1;
    } else {
        grp_fu_46752_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46752_p17() {
    grp_fu_46752_p17 = esl_zext<4,3>(select_ln65_1183_fu_46741_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46786_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46786_ce = ap_const_logic_1;
    } else {
        grp_fu_46786_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46786_p17() {
    grp_fu_46786_p17 = (!icmp_ln1496_818_fu_46774_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_818_fu_46774_p2.read()[0].to_bool())? sext_ln65_53_reg_62425_pp0_iter1_reg.read(): select_ln65_1188_reg_62419_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46828_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46828_ce = ap_const_logic_1;
    } else {
        grp_fu_46828_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46828_p17() {
    grp_fu_46828_p17 = esl_zext<4,3>(select_ln65_1205_fu_46817_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46862_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46862_ce = ap_const_logic_1;
    } else {
        grp_fu_46862_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46862_p17() {
    grp_fu_46862_p17 = (!icmp_ln1496_832_fu_46850_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_832_fu_46850_p2.read()[0].to_bool())? sext_ln65_54_reg_62499_pp0_iter1_reg.read(): select_ln65_1210_reg_62493_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46904_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46904_ce = ap_const_logic_1;
    } else {
        grp_fu_46904_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46904_p17() {
    grp_fu_46904_p17 = esl_zext<4,3>(select_ln65_1227_fu_46893_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46938_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46938_ce = ap_const_logic_1;
    } else {
        grp_fu_46938_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46938_p17() {
    grp_fu_46938_p17 = (!icmp_ln1496_846_fu_46926_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_846_fu_46926_p2.read()[0].to_bool())? sext_ln65_55_reg_62573_pp0_iter1_reg.read(): select_ln65_1232_reg_62567_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46980_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_46980_ce = ap_const_logic_1;
    } else {
        grp_fu_46980_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_46980_p17() {
    grp_fu_46980_p17 = esl_zext<4,3>(select_ln65_1249_fu_46969_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47014_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47014_ce = ap_const_logic_1;
    } else {
        grp_fu_47014_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47014_p17() {
    grp_fu_47014_p17 = (!icmp_ln1496_860_fu_47002_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_860_fu_47002_p2.read()[0].to_bool())? sext_ln65_56_reg_62647_pp0_iter1_reg.read(): select_ln65_1254_reg_62641_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47056_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47056_ce = ap_const_logic_1;
    } else {
        grp_fu_47056_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47056_p17() {
    grp_fu_47056_p17 = esl_zext<4,3>(select_ln65_1270_fu_47045_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47090_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47090_ce = ap_const_logic_1;
    } else {
        grp_fu_47090_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47090_p17() {
    grp_fu_47090_p17 = (!icmp_ln1496_874_fu_47078_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_874_fu_47078_p2.read()[0].to_bool())? sext_ln65_57_reg_62721_pp0_iter1_reg.read(): select_ln65_1275_reg_62715_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47132_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47132_ce = ap_const_logic_1;
    } else {
        grp_fu_47132_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47132_p17() {
    grp_fu_47132_p17 = esl_zext<4,3>(select_ln65_1291_fu_47121_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47166_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47166_ce = ap_const_logic_1;
    } else {
        grp_fu_47166_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47166_p17() {
    grp_fu_47166_p17 = (!icmp_ln1496_888_fu_47154_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_888_fu_47154_p2.read()[0].to_bool())? sext_ln65_58_reg_62795_pp0_iter1_reg.read(): select_ln65_1296_reg_62789_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47208_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47208_ce = ap_const_logic_1;
    } else {
        grp_fu_47208_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47208_p17() {
    grp_fu_47208_p17 = esl_zext<4,3>(select_ln65_1312_fu_47197_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47242_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47242_ce = ap_const_logic_1;
    } else {
        grp_fu_47242_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47242_p17() {
    grp_fu_47242_p17 = (!icmp_ln1496_902_fu_47230_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_902_fu_47230_p2.read()[0].to_bool())? sext_ln65_59_reg_62869_pp0_iter1_reg.read(): select_ln65_1317_reg_62863_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47284_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47284_ce = ap_const_logic_1;
    } else {
        grp_fu_47284_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47284_p17() {
    grp_fu_47284_p17 = esl_zext<4,3>(select_ln65_1333_fu_47273_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47318_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47318_ce = ap_const_logic_1;
    } else {
        grp_fu_47318_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47318_p17() {
    grp_fu_47318_p17 = (!icmp_ln1496_916_fu_47306_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_916_fu_47306_p2.read()[0].to_bool())? sext_ln65_60_reg_62943_pp0_iter1_reg.read(): select_ln65_1338_reg_62937_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47360_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47360_ce = ap_const_logic_1;
    } else {
        grp_fu_47360_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47360_p17() {
    grp_fu_47360_p17 = esl_zext<4,3>(select_ln65_1354_fu_47349_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47394_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47394_ce = ap_const_logic_1;
    } else {
        grp_fu_47394_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47394_p17() {
    grp_fu_47394_p17 = (!icmp_ln1496_930_fu_47382_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_930_fu_47382_p2.read()[0].to_bool())? sext_ln65_61_reg_63017_pp0_iter1_reg.read(): select_ln65_1359_reg_63011_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47436_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47436_ce = ap_const_logic_1;
    } else {
        grp_fu_47436_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47436_p17() {
    grp_fu_47436_p17 = esl_zext<4,3>(select_ln65_1375_fu_47425_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47470_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47470_ce = ap_const_logic_1;
    } else {
        grp_fu_47470_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47470_p17() {
    grp_fu_47470_p17 = (!icmp_ln1496_944_fu_47458_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_944_fu_47458_p2.read()[0].to_bool())? sext_ln65_62_reg_63091_pp0_iter1_reg.read(): select_ln65_1380_reg_63085_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47512_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47512_ce = ap_const_logic_1;
    } else {
        grp_fu_47512_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47512_p17() {
    grp_fu_47512_p17 = esl_zext<4,3>(select_ln65_1396_fu_47501_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47546_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47546_ce = ap_const_logic_1;
    } else {
        grp_fu_47546_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47546_p17() {
    grp_fu_47546_p17 = (!icmp_ln1496_958_fu_47534_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_958_fu_47534_p2.read()[0].to_bool())? sext_ln65_63_reg_63165_pp0_iter1_reg.read(): select_ln65_1401_reg_63159_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47580_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47580_ce = ap_const_logic_1;
    } else {
        grp_fu_47580_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47580_p17() {
    grp_fu_47580_p17 = (!icmp_ln1496_14_fu_47568_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_14_fu_47568_p2.read()[0].to_bool())? select_ln65_28_reg_63182_pp0_iter3_reg.read(): zext_ln65_2_reg_63176_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47615_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47615_ce = ap_const_logic_1;
    } else {
        grp_fu_47615_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47615_p17() {
    grp_fu_47615_p17 = (!icmp_ln1496_78_fu_47603_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_78_fu_47603_p2.read()[0].to_bool())? select_ln65_50_reg_63194_pp0_iter3_reg.read(): zext_ln65_5_reg_63188_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47650_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47650_ce = ap_const_logic_1;
    } else {
        grp_fu_47650_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47650_p17() {
    grp_fu_47650_p17 = (!icmp_ln1496_93_fu_47638_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_93_fu_47638_p2.read()[0].to_bool())? select_ln65_72_reg_63206_pp0_iter3_reg.read(): zext_ln65_8_reg_63200_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47685_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47685_ce = ap_const_logic_1;
    } else {
        grp_fu_47685_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47685_p17() {
    grp_fu_47685_p17 = (!icmp_ln1496_108_fu_47673_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_108_fu_47673_p2.read()[0].to_bool())? select_ln65_94_reg_63218_pp0_iter3_reg.read(): zext_ln65_11_reg_63212_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47720_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47720_ce = ap_const_logic_1;
    } else {
        grp_fu_47720_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47720_p17() {
    grp_fu_47720_p17 = (!icmp_ln1496_123_fu_47708_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_123_fu_47708_p2.read()[0].to_bool())? select_ln65_116_reg_63230_pp0_iter3_reg.read(): zext_ln65_14_reg_63224_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47755_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47755_ce = ap_const_logic_1;
    } else {
        grp_fu_47755_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47755_p17() {
    grp_fu_47755_p17 = (!icmp_ln1496_138_fu_47743_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_138_fu_47743_p2.read()[0].to_bool())? select_ln65_138_reg_63242_pp0_iter3_reg.read(): zext_ln65_17_reg_63236_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47790_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47790_ce = ap_const_logic_1;
    } else {
        grp_fu_47790_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47790_p17() {
    grp_fu_47790_p17 = (!icmp_ln1496_153_fu_47778_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_153_fu_47778_p2.read()[0].to_bool())? select_ln65_160_reg_63254_pp0_iter3_reg.read(): zext_ln65_20_reg_63248_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47825_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47825_ce = ap_const_logic_1;
    } else {
        grp_fu_47825_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47825_p17() {
    grp_fu_47825_p17 = (!icmp_ln1496_168_fu_47813_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_168_fu_47813_p2.read()[0].to_bool())? select_ln65_182_reg_63266_pp0_iter3_reg.read(): zext_ln65_23_reg_63260_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47860_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47860_ce = ap_const_logic_1;
    } else {
        grp_fu_47860_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47860_p17() {
    grp_fu_47860_p17 = (!icmp_ln1496_183_fu_47848_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_183_fu_47848_p2.read()[0].to_bool())? select_ln65_204_reg_63278_pp0_iter3_reg.read(): zext_ln65_26_reg_63272_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47895_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47895_ce = ap_const_logic_1;
    } else {
        grp_fu_47895_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47895_p17() {
    grp_fu_47895_p17 = (!icmp_ln1496_198_fu_47883_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_198_fu_47883_p2.read()[0].to_bool())? select_ln65_226_reg_63290_pp0_iter3_reg.read(): zext_ln65_29_reg_63284_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47930_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47930_ce = ap_const_logic_1;
    } else {
        grp_fu_47930_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47930_p17() {
    grp_fu_47930_p17 = (!icmp_ln1496_213_fu_47918_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_213_fu_47918_p2.read()[0].to_bool())? select_ln65_248_reg_63302_pp0_iter3_reg.read(): zext_ln65_32_reg_63296_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47965_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_47965_ce = ap_const_logic_1;
    } else {
        grp_fu_47965_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_47965_p17() {
    grp_fu_47965_p17 = (!icmp_ln1496_228_fu_47953_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_228_fu_47953_p2.read()[0].to_bool())? select_ln65_270_reg_63314_pp0_iter3_reg.read(): zext_ln65_35_reg_63308_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48000_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48000_ce = ap_const_logic_1;
    } else {
        grp_fu_48000_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48000_p17() {
    grp_fu_48000_p17 = (!icmp_ln1496_243_fu_47988_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_243_fu_47988_p2.read()[0].to_bool())? select_ln65_292_reg_63326_pp0_iter3_reg.read(): zext_ln65_38_reg_63320_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48035_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48035_ce = ap_const_logic_1;
    } else {
        grp_fu_48035_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48035_p17() {
    grp_fu_48035_p17 = (!icmp_ln1496_258_fu_48023_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_258_fu_48023_p2.read()[0].to_bool())? select_ln65_314_reg_63338_pp0_iter3_reg.read(): zext_ln65_41_reg_63332_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48070_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48070_ce = ap_const_logic_1;
    } else {
        grp_fu_48070_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48070_p17() {
    grp_fu_48070_p17 = (!icmp_ln1496_273_fu_48058_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_273_fu_48058_p2.read()[0].to_bool())? select_ln65_336_reg_63350_pp0_iter3_reg.read(): zext_ln65_44_reg_63344_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48105_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48105_ce = ap_const_logic_1;
    } else {
        grp_fu_48105_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48105_p17() {
    grp_fu_48105_p17 = (!icmp_ln1496_287_fu_48093_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_287_fu_48093_p2.read()[0].to_bool())? select_ln65_358_reg_63362_pp0_iter3_reg.read(): zext_ln65_47_reg_63356_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48140_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48140_ce = ap_const_logic_1;
    } else {
        grp_fu_48140_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48140_p17() {
    grp_fu_48140_p17 = (!icmp_ln1496_301_fu_48128_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_301_fu_48128_p2.read()[0].to_bool())? select_ln65_380_reg_63374_pp0_iter3_reg.read(): zext_ln65_50_reg_63368_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48175_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48175_ce = ap_const_logic_1;
    } else {
        grp_fu_48175_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48175_p17() {
    grp_fu_48175_p17 = (!icmp_ln1496_315_fu_48163_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_315_fu_48163_p2.read()[0].to_bool())? select_ln65_402_reg_63386_pp0_iter3_reg.read(): zext_ln65_53_reg_63380_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48210_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48210_ce = ap_const_logic_1;
    } else {
        grp_fu_48210_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48210_p17() {
    grp_fu_48210_p17 = (!icmp_ln1496_329_fu_48198_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_329_fu_48198_p2.read()[0].to_bool())? select_ln65_424_reg_63398_pp0_iter3_reg.read(): zext_ln65_56_reg_63392_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48245_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48245_ce = ap_const_logic_1;
    } else {
        grp_fu_48245_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48245_p17() {
    grp_fu_48245_p17 = (!icmp_ln1496_343_fu_48233_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_343_fu_48233_p2.read()[0].to_bool())? select_ln65_446_reg_63410_pp0_iter3_reg.read(): zext_ln65_59_reg_63404_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48280_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48280_ce = ap_const_logic_1;
    } else {
        grp_fu_48280_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48280_p17() {
    grp_fu_48280_p17 = (!icmp_ln1496_357_fu_48268_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_357_fu_48268_p2.read()[0].to_bool())? select_ln65_468_reg_63422_pp0_iter3_reg.read(): zext_ln65_62_reg_63416_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48315_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48315_ce = ap_const_logic_1;
    } else {
        grp_fu_48315_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48315_p17() {
    grp_fu_48315_p17 = (!icmp_ln1496_371_fu_48303_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_371_fu_48303_p2.read()[0].to_bool())? select_ln65_490_reg_63434_pp0_iter3_reg.read(): zext_ln65_65_reg_63428_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48350_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48350_ce = ap_const_logic_1;
    } else {
        grp_fu_48350_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48350_p17() {
    grp_fu_48350_p17 = (!icmp_ln1496_385_fu_48338_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_385_fu_48338_p2.read()[0].to_bool())? select_ln65_512_reg_63446_pp0_iter3_reg.read(): zext_ln65_68_reg_63440_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48385_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48385_ce = ap_const_logic_1;
    } else {
        grp_fu_48385_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48385_p17() {
    grp_fu_48385_p17 = (!icmp_ln1496_399_fu_48373_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_399_fu_48373_p2.read()[0].to_bool())? select_ln65_534_reg_63458_pp0_iter3_reg.read(): zext_ln65_71_reg_63452_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48420_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48420_ce = ap_const_logic_1;
    } else {
        grp_fu_48420_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48420_p17() {
    grp_fu_48420_p17 = (!icmp_ln1496_413_fu_48408_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_413_fu_48408_p2.read()[0].to_bool())? select_ln65_556_reg_63470_pp0_iter3_reg.read(): zext_ln65_74_reg_63464_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48455_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48455_ce = ap_const_logic_1;
    } else {
        grp_fu_48455_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48455_p17() {
    grp_fu_48455_p17 = (!icmp_ln1496_427_fu_48443_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_427_fu_48443_p2.read()[0].to_bool())? select_ln65_578_reg_63482_pp0_iter3_reg.read(): zext_ln65_77_reg_63476_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48490_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48490_ce = ap_const_logic_1;
    } else {
        grp_fu_48490_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48490_p17() {
    grp_fu_48490_p17 = (!icmp_ln1496_441_fu_48478_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_441_fu_48478_p2.read()[0].to_bool())? select_ln65_600_reg_63494_pp0_iter3_reg.read(): zext_ln65_80_reg_63488_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48525_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48525_ce = ap_const_logic_1;
    } else {
        grp_fu_48525_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48525_p17() {
    grp_fu_48525_p17 = (!icmp_ln1496_455_fu_48513_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_455_fu_48513_p2.read()[0].to_bool())? select_ln65_622_reg_63506_pp0_iter3_reg.read(): zext_ln65_83_reg_63500_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48560_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48560_ce = ap_const_logic_1;
    } else {
        grp_fu_48560_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48560_p17() {
    grp_fu_48560_p17 = (!icmp_ln1496_469_fu_48548_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_469_fu_48548_p2.read()[0].to_bool())? select_ln65_644_reg_63518_pp0_iter3_reg.read(): zext_ln65_86_reg_63512_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48595_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48595_ce = ap_const_logic_1;
    } else {
        grp_fu_48595_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48595_p17() {
    grp_fu_48595_p17 = (!icmp_ln1496_483_fu_48583_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_483_fu_48583_p2.read()[0].to_bool())? select_ln65_666_reg_63530_pp0_iter3_reg.read(): zext_ln65_89_reg_63524_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48630_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48630_ce = ap_const_logic_1;
    } else {
        grp_fu_48630_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48630_p17() {
    grp_fu_48630_p17 = (!icmp_ln1496_497_fu_48618_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_497_fu_48618_p2.read()[0].to_bool())? select_ln65_688_reg_63542_pp0_iter3_reg.read(): zext_ln65_92_reg_63536_pp0_iter3_reg.read());
}

}

