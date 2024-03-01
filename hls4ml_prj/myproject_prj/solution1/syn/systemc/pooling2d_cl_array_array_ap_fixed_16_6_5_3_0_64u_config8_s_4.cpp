#include "pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48665_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48665_ce = ap_const_logic_1;
    } else {
        grp_fu_48665_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48665_p17() {
    grp_fu_48665_p17 = (!icmp_ln1496_511_fu_48653_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_511_fu_48653_p2.read()[0].to_bool())? select_ln65_710_reg_63554_pp0_iter3_reg.read(): zext_ln65_95_reg_63548_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48700_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48700_ce = ap_const_logic_1;
    } else {
        grp_fu_48700_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48700_p17() {
    grp_fu_48700_p17 = (!icmp_ln1496_525_fu_48688_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_525_fu_48688_p2.read()[0].to_bool())? select_ln65_732_reg_63566_pp0_iter3_reg.read(): zext_ln65_98_reg_63560_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48735_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48735_ce = ap_const_logic_1;
    } else {
        grp_fu_48735_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48735_p17() {
    grp_fu_48735_p17 = (!icmp_ln1496_539_fu_48723_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_539_fu_48723_p2.read()[0].to_bool())? select_ln65_754_reg_63578_pp0_iter3_reg.read(): zext_ln65_101_reg_63572_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48770_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48770_ce = ap_const_logic_1;
    } else {
        grp_fu_48770_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48770_p17() {
    grp_fu_48770_p17 = (!icmp_ln1496_553_fu_48758_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_553_fu_48758_p2.read()[0].to_bool())? select_ln65_776_reg_63590_pp0_iter3_reg.read(): zext_ln65_104_reg_63584_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48805_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48805_ce = ap_const_logic_1;
    } else {
        grp_fu_48805_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48805_p17() {
    grp_fu_48805_p17 = (!icmp_ln1496_567_fu_48793_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_567_fu_48793_p2.read()[0].to_bool())? select_ln65_798_reg_63602_pp0_iter3_reg.read(): zext_ln65_107_reg_63596_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48840_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48840_ce = ap_const_logic_1;
    } else {
        grp_fu_48840_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48840_p17() {
    grp_fu_48840_p17 = (!icmp_ln1496_581_fu_48828_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_581_fu_48828_p2.read()[0].to_bool())? select_ln65_820_reg_63614_pp0_iter3_reg.read(): zext_ln65_110_reg_63608_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48875_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48875_ce = ap_const_logic_1;
    } else {
        grp_fu_48875_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48875_p17() {
    grp_fu_48875_p17 = (!icmp_ln1496_595_fu_48863_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_595_fu_48863_p2.read()[0].to_bool())? select_ln65_842_reg_63626_pp0_iter3_reg.read(): zext_ln65_113_reg_63620_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48910_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48910_ce = ap_const_logic_1;
    } else {
        grp_fu_48910_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48910_p17() {
    grp_fu_48910_p17 = (!icmp_ln1496_609_fu_48898_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_609_fu_48898_p2.read()[0].to_bool())? select_ln65_864_reg_63638_pp0_iter3_reg.read(): zext_ln65_116_reg_63632_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48945_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48945_ce = ap_const_logic_1;
    } else {
        grp_fu_48945_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48945_p17() {
    grp_fu_48945_p17 = (!icmp_ln1496_623_fu_48933_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_623_fu_48933_p2.read()[0].to_bool())? select_ln65_886_reg_63650_pp0_iter3_reg.read(): zext_ln65_119_reg_63644_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48980_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_48980_ce = ap_const_logic_1;
    } else {
        grp_fu_48980_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_48980_p17() {
    grp_fu_48980_p17 = (!icmp_ln1496_637_fu_48968_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_637_fu_48968_p2.read()[0].to_bool())? select_ln65_908_reg_63662_pp0_iter3_reg.read(): zext_ln65_122_reg_63656_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49015_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49015_ce = ap_const_logic_1;
    } else {
        grp_fu_49015_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49015_p17() {
    grp_fu_49015_p17 = (!icmp_ln1496_651_fu_49003_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_651_fu_49003_p2.read()[0].to_bool())? select_ln65_930_reg_63674_pp0_iter3_reg.read(): zext_ln65_125_reg_63668_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49050_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49050_ce = ap_const_logic_1;
    } else {
        grp_fu_49050_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49050_p17() {
    grp_fu_49050_p17 = (!icmp_ln1496_665_fu_49038_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_665_fu_49038_p2.read()[0].to_bool())? select_ln65_952_reg_63686_pp0_iter3_reg.read(): zext_ln65_128_reg_63680_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49085_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49085_ce = ap_const_logic_1;
    } else {
        grp_fu_49085_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49085_p17() {
    grp_fu_49085_p17 = (!icmp_ln1496_679_fu_49073_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_679_fu_49073_p2.read()[0].to_bool())? select_ln65_974_reg_63698_pp0_iter3_reg.read(): zext_ln65_131_reg_63692_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49120_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49120_ce = ap_const_logic_1;
    } else {
        grp_fu_49120_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49120_p17() {
    grp_fu_49120_p17 = (!icmp_ln1496_693_fu_49108_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_693_fu_49108_p2.read()[0].to_bool())? select_ln65_996_reg_63710_pp0_iter3_reg.read(): zext_ln65_134_reg_63704_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49155_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49155_ce = ap_const_logic_1;
    } else {
        grp_fu_49155_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49155_p17() {
    grp_fu_49155_p17 = (!icmp_ln1496_707_fu_49143_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_707_fu_49143_p2.read()[0].to_bool())? select_ln65_1018_reg_63722_pp0_iter3_reg.read(): zext_ln65_137_reg_63716_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49190_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49190_ce = ap_const_logic_1;
    } else {
        grp_fu_49190_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49190_p17() {
    grp_fu_49190_p17 = (!icmp_ln1496_721_fu_49178_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_721_fu_49178_p2.read()[0].to_bool())? select_ln65_1040_reg_63734_pp0_iter3_reg.read(): zext_ln65_140_reg_63728_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49225_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49225_ce = ap_const_logic_1;
    } else {
        grp_fu_49225_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49225_p17() {
    grp_fu_49225_p17 = (!icmp_ln1496_735_fu_49213_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_735_fu_49213_p2.read()[0].to_bool())? select_ln65_1062_reg_63746_pp0_iter3_reg.read(): zext_ln65_143_reg_63740_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49260_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49260_ce = ap_const_logic_1;
    } else {
        grp_fu_49260_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49260_p17() {
    grp_fu_49260_p17 = (!icmp_ln1496_749_fu_49248_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_749_fu_49248_p2.read()[0].to_bool())? select_ln65_1084_reg_63758_pp0_iter3_reg.read(): zext_ln65_146_reg_63752_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49295_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49295_ce = ap_const_logic_1;
    } else {
        grp_fu_49295_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49295_p17() {
    grp_fu_49295_p17 = (!icmp_ln1496_763_fu_49283_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_763_fu_49283_p2.read()[0].to_bool())? select_ln65_1106_reg_63770_pp0_iter3_reg.read(): zext_ln65_149_reg_63764_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49330_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49330_ce = ap_const_logic_1;
    } else {
        grp_fu_49330_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49330_p17() {
    grp_fu_49330_p17 = (!icmp_ln1496_777_fu_49318_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_777_fu_49318_p2.read()[0].to_bool())? select_ln65_1128_reg_63782_pp0_iter3_reg.read(): zext_ln65_152_reg_63776_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49365_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49365_ce = ap_const_logic_1;
    } else {
        grp_fu_49365_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49365_p17() {
    grp_fu_49365_p17 = (!icmp_ln1496_791_fu_49353_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_791_fu_49353_p2.read()[0].to_bool())? select_ln65_1150_reg_63794_pp0_iter3_reg.read(): zext_ln65_155_reg_63788_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49400_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49400_ce = ap_const_logic_1;
    } else {
        grp_fu_49400_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49400_p17() {
    grp_fu_49400_p17 = (!icmp_ln1496_805_fu_49388_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_805_fu_49388_p2.read()[0].to_bool())? select_ln65_1172_reg_63806_pp0_iter3_reg.read(): zext_ln65_158_reg_63800_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49435_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49435_ce = ap_const_logic_1;
    } else {
        grp_fu_49435_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49435_p17() {
    grp_fu_49435_p17 = (!icmp_ln1496_819_fu_49423_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_819_fu_49423_p2.read()[0].to_bool())? select_ln65_1194_reg_63818_pp0_iter3_reg.read(): zext_ln65_161_reg_63812_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49470_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49470_ce = ap_const_logic_1;
    } else {
        grp_fu_49470_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49470_p17() {
    grp_fu_49470_p17 = (!icmp_ln1496_833_fu_49458_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_833_fu_49458_p2.read()[0].to_bool())? select_ln65_1216_reg_63830_pp0_iter3_reg.read(): zext_ln65_164_reg_63824_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49505_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49505_ce = ap_const_logic_1;
    } else {
        grp_fu_49505_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49505_p17() {
    grp_fu_49505_p17 = (!icmp_ln1496_847_fu_49493_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_847_fu_49493_p2.read()[0].to_bool())? select_ln65_1238_reg_63842_pp0_iter3_reg.read(): zext_ln65_167_reg_63836_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49540_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49540_ce = ap_const_logic_1;
    } else {
        grp_fu_49540_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49540_p17() {
    grp_fu_49540_p17 = (!icmp_ln1496_861_fu_49528_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_861_fu_49528_p2.read()[0].to_bool())? select_ln65_1260_reg_63854_pp0_iter3_reg.read(): zext_ln65_170_reg_63848_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49575_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49575_ce = ap_const_logic_1;
    } else {
        grp_fu_49575_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49575_p17() {
    grp_fu_49575_p17 = (!icmp_ln1496_875_fu_49563_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_875_fu_49563_p2.read()[0].to_bool())? select_ln65_1281_reg_63866_pp0_iter3_reg.read(): zext_ln65_173_reg_63860_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49610_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49610_ce = ap_const_logic_1;
    } else {
        grp_fu_49610_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49610_p17() {
    grp_fu_49610_p17 = (!icmp_ln1496_889_fu_49598_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_889_fu_49598_p2.read()[0].to_bool())? select_ln65_1302_reg_63878_pp0_iter3_reg.read(): zext_ln65_176_reg_63872_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49645_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49645_ce = ap_const_logic_1;
    } else {
        grp_fu_49645_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49645_p17() {
    grp_fu_49645_p17 = (!icmp_ln1496_903_fu_49633_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_903_fu_49633_p2.read()[0].to_bool())? select_ln65_1323_reg_63890_pp0_iter3_reg.read(): zext_ln65_179_reg_63884_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49680_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49680_ce = ap_const_logic_1;
    } else {
        grp_fu_49680_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49680_p17() {
    grp_fu_49680_p17 = (!icmp_ln1496_917_fu_49668_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_917_fu_49668_p2.read()[0].to_bool())? select_ln65_1344_reg_63902_pp0_iter3_reg.read(): zext_ln65_182_reg_63896_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49715_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49715_ce = ap_const_logic_1;
    } else {
        grp_fu_49715_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49715_p17() {
    grp_fu_49715_p17 = (!icmp_ln1496_931_fu_49703_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_931_fu_49703_p2.read()[0].to_bool())? select_ln65_1365_reg_63914_pp0_iter3_reg.read(): zext_ln65_185_reg_63908_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49750_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49750_ce = ap_const_logic_1;
    } else {
        grp_fu_49750_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49750_p17() {
    grp_fu_49750_p17 = (!icmp_ln1496_945_fu_49738_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_945_fu_49738_p2.read()[0].to_bool())? select_ln65_1386_reg_63926_pp0_iter3_reg.read(): zext_ln65_188_reg_63920_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49785_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_49785_ce = ap_const_logic_1;
    } else {
        grp_fu_49785_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_49785_p17() {
    grp_fu_49785_p17 = (!icmp_ln1496_959_fu_49773_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_959_fu_49773_p2.read()[0].to_bool())? select_ln65_1407_reg_63938_pp0_iter3_reg.read(): zext_ln65_191_reg_63932_pp0_iter3_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_9134_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_9134_ce = ap_const_logic_1;
    } else {
        grp_fu_9134_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_9140_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_9140_ce = ap_const_logic_1;
    } else {
        grp_fu_9140_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_9164_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_9164_ce = ap_const_logic_1;
    } else {
        grp_fu_9164_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_grp_fu_9170_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage1_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read())))) {
        grp_fu_9170_ce = ap_const_logic_1;
    } else {
        grp_fu_9170_ce = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_100_fu_42935_p2() {
    icmp_ln1496_100_fu_42935_p2 = (!grp_fu_17852_p18.read().is_01() || !grp_fu_17952_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_17852_p18.read()) < sc_bigint<16>(grp_fu_17952_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_101_fu_17990_p2() {
    icmp_ln1496_101_fu_17990_p2 = (!kernel_data_V_4_515.read().is_01() || !kernel_data_V_4_579.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_515.read()) < sc_bigint<16>(kernel_data_V_4_579.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_102_fu_18012_p2() {
    icmp_ln1496_102_fu_18012_p2 = (!kernel_data_V_4_707.read().is_01() || !line_buffer_Array_V_4_0_3_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_707.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_3_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_103_fu_18034_p2() {
    icmp_ln1496_103_fu_18034_p2 = (!select_ln65_85_fu_18004_p3.read().is_01() || !select_ln65_87_fu_18026_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_85_fu_18004_p3.read()) < sc_bigint<16>(select_ln65_87_fu_18026_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_104_fu_18086_p2() {
    icmp_ln1496_104_fu_18086_p2 = (!kernel_data_V_4_771.read().is_01() || !kernel_data_V_4_899.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_771.read()) < sc_bigint<16>(kernel_data_V_4_899.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_105_fu_18108_p2() {
    icmp_ln1496_105_fu_18108_p2 = (!kernel_data_V_4_963.read().is_01() || !data_V_data_3_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_963.read()) < sc_bigint<16>(data_V_data_3_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_106_fu_18130_p2() {
    icmp_ln1496_106_fu_18130_p2 = (!select_ln65_90_fu_18100_p3.read().is_01() || !select_ln65_92_fu_18122_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_90_fu_18100_p3.read()) < sc_bigint<16>(select_ln65_92_fu_18122_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_107_fu_42974_p2() {
    icmp_ln1496_107_fu_42974_p2 = (!grp_fu_18048_p18.read().is_01() || !grp_fu_18148_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_18048_p18.read()) < sc_bigint<16>(grp_fu_18148_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_108_fu_47673_p2() {
    icmp_ln1496_108_fu_47673_p2 = (!grp_fu_42952_p18.read().is_01() || !grp_fu_42986_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_42952_p18.read()) < sc_bigint<16>(grp_fu_42986_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_109_fu_18202_p2() {
    icmp_ln1496_109_fu_18202_p2 = (!kernel_data_V_4_4.read().is_01() || !kernel_data_V_4_68.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_4.read()) < sc_bigint<16>(kernel_data_V_4_68.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_10_fu_16862_p2() {
    icmp_ln1496_10_fu_16862_p2 = (!kernel_data_V_4_768.read().is_01() || !kernel_data_V_4_896.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_768.read()) < sc_bigint<16>(kernel_data_V_4_896.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_110_fu_18220_p2() {
    icmp_ln1496_110_fu_18220_p2 = (!kernel_data_V_4_196.read().is_01() || !line_buffer_Array_V_4_2_4_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_196.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_4_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_111_fu_18242_p2() {
    icmp_ln1496_111_fu_18242_p2 = (!select_ln65_96_fu_18212_p3.read().is_01() || !select_ln65_98_fu_18234_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_96_fu_18212_p3.read()) < sc_bigint<16>(select_ln65_98_fu_18234_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_112_fu_18298_p2() {
    icmp_ln1496_112_fu_18298_p2 = (!kernel_data_V_4_260.read().is_01() || !kernel_data_V_4_324.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_260.read()) < sc_bigint<16>(kernel_data_V_4_324.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_113_fu_18320_p2() {
    icmp_ln1496_113_fu_18320_p2 = (!kernel_data_V_4_452.read().is_01() || !line_buffer_Array_V_4_1_4_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_452.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_4_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_114_fu_18342_p2() {
    icmp_ln1496_114_fu_18342_p2 = (!select_ln65_101_fu_18312_p3.read().is_01() || !select_ln65_103_fu_18334_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_101_fu_18312_p3.read()) < sc_bigint<16>(select_ln65_103_fu_18334_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_115_fu_43011_p2() {
    icmp_ln1496_115_fu_43011_p2 = (!grp_fu_18260_p18.read().is_01() || !grp_fu_18360_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_18260_p18.read()) < sc_bigint<16>(grp_fu_18360_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_116_fu_18398_p2() {
    icmp_ln1496_116_fu_18398_p2 = (!kernel_data_V_4_516.read().is_01() || !kernel_data_V_4_580.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_516.read()) < sc_bigint<16>(kernel_data_V_4_580.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_117_fu_18420_p2() {
    icmp_ln1496_117_fu_18420_p2 = (!kernel_data_V_4_708.read().is_01() || !line_buffer_Array_V_4_0_4_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_708.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_4_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_118_fu_18442_p2() {
    icmp_ln1496_118_fu_18442_p2 = (!select_ln65_107_fu_18412_p3.read().is_01() || !select_ln65_109_fu_18434_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_107_fu_18412_p3.read()) < sc_bigint<16>(select_ln65_109_fu_18434_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_119_fu_18494_p2() {
    icmp_ln1496_119_fu_18494_p2 = (!kernel_data_V_4_772.read().is_01() || !kernel_data_V_4_900.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_772.read()) < sc_bigint<16>(kernel_data_V_4_900.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_11_fu_16884_p2() {
    icmp_ln1496_11_fu_16884_p2 = (!kernel_data_V_4_960.read().is_01() || !data_V_data_0_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_960.read()) < sc_bigint<16>(data_V_data_0_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_120_fu_18516_p2() {
    icmp_ln1496_120_fu_18516_p2 = (!kernel_data_V_4_964.read().is_01() || !data_V_data_4_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_964.read()) < sc_bigint<16>(data_V_data_4_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_121_fu_18538_p2() {
    icmp_ln1496_121_fu_18538_p2 = (!select_ln65_112_fu_18508_p3.read().is_01() || !select_ln65_114_fu_18530_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_112_fu_18508_p3.read()) < sc_bigint<16>(select_ln65_114_fu_18530_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_122_fu_43050_p2() {
    icmp_ln1496_122_fu_43050_p2 = (!grp_fu_18456_p18.read().is_01() || !grp_fu_18556_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_18456_p18.read()) < sc_bigint<16>(grp_fu_18556_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_123_fu_47708_p2() {
    icmp_ln1496_123_fu_47708_p2 = (!grp_fu_43028_p18.read().is_01() || !grp_fu_43062_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_43028_p18.read()) < sc_bigint<16>(grp_fu_43062_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_124_fu_18610_p2() {
    icmp_ln1496_124_fu_18610_p2 = (!kernel_data_V_4_5.read().is_01() || !kernel_data_V_4_69.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_5.read()) < sc_bigint<16>(kernel_data_V_4_69.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_125_fu_18628_p2() {
    icmp_ln1496_125_fu_18628_p2 = (!kernel_data_V_4_197.read().is_01() || !line_buffer_Array_V_4_2_5_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_197.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_5_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_126_fu_18650_p2() {
    icmp_ln1496_126_fu_18650_p2 = (!select_ln65_118_fu_18620_p3.read().is_01() || !select_ln65_120_fu_18642_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_118_fu_18620_p3.read()) < sc_bigint<16>(select_ln65_120_fu_18642_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_127_fu_18706_p2() {
    icmp_ln1496_127_fu_18706_p2 = (!kernel_data_V_4_261.read().is_01() || !kernel_data_V_4_325.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_261.read()) < sc_bigint<16>(kernel_data_V_4_325.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_128_fu_18728_p2() {
    icmp_ln1496_128_fu_18728_p2 = (!kernel_data_V_4_453.read().is_01() || !line_buffer_Array_V_4_1_5_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_453.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_5_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_129_fu_18750_p2() {
    icmp_ln1496_129_fu_18750_p2 = (!select_ln65_123_fu_18720_p3.read().is_01() || !select_ln65_125_fu_18742_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_123_fu_18720_p3.read()) < sc_bigint<16>(select_ln65_125_fu_18742_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_12_fu_16906_p2() {
    icmp_ln1496_12_fu_16906_p2 = (!select_ln65_24_fu_16876_p3.read().is_01() || !select_ln65_26_fu_16898_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_24_fu_16876_p3.read()) < sc_bigint<16>(select_ln65_26_fu_16898_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_130_fu_43087_p2() {
    icmp_ln1496_130_fu_43087_p2 = (!grp_fu_18668_p18.read().is_01() || !grp_fu_18768_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_18668_p18.read()) < sc_bigint<16>(grp_fu_18768_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_131_fu_18806_p2() {
    icmp_ln1496_131_fu_18806_p2 = (!kernel_data_V_4_517.read().is_01() || !kernel_data_V_4_581.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_517.read()) < sc_bigint<16>(kernel_data_V_4_581.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_132_fu_18828_p2() {
    icmp_ln1496_132_fu_18828_p2 = (!kernel_data_V_4_709.read().is_01() || !line_buffer_Array_V_4_0_5_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_709.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_5_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_133_fu_18850_p2() {
    icmp_ln1496_133_fu_18850_p2 = (!select_ln65_129_fu_18820_p3.read().is_01() || !select_ln65_131_fu_18842_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_129_fu_18820_p3.read()) < sc_bigint<16>(select_ln65_131_fu_18842_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_134_fu_18902_p2() {
    icmp_ln1496_134_fu_18902_p2 = (!kernel_data_V_4_773.read().is_01() || !kernel_data_V_4_901.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_773.read()) < sc_bigint<16>(kernel_data_V_4_901.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_135_fu_18924_p2() {
    icmp_ln1496_135_fu_18924_p2 = (!kernel_data_V_4_965.read().is_01() || !data_V_data_5_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_965.read()) < sc_bigint<16>(data_V_data_5_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_136_fu_18946_p2() {
    icmp_ln1496_136_fu_18946_p2 = (!select_ln65_134_fu_18916_p3.read().is_01() || !select_ln65_136_fu_18938_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_134_fu_18916_p3.read()) < sc_bigint<16>(select_ln65_136_fu_18938_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_137_fu_43126_p2() {
    icmp_ln1496_137_fu_43126_p2 = (!grp_fu_18864_p18.read().is_01() || !grp_fu_18964_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_18864_p18.read()) < sc_bigint<16>(grp_fu_18964_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_138_fu_47743_p2() {
    icmp_ln1496_138_fu_47743_p2 = (!grp_fu_43104_p18.read().is_01() || !grp_fu_43138_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_43104_p18.read()) < sc_bigint<16>(grp_fu_43138_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_139_fu_19018_p2() {
    icmp_ln1496_139_fu_19018_p2 = (!kernel_data_V_4_6.read().is_01() || !kernel_data_V_4_70.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_6.read()) < sc_bigint<16>(kernel_data_V_4_70.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_13_fu_42746_p2() {
    icmp_ln1496_13_fu_42746_p2 = (!grp_fu_16824_p18.read().is_01() || !grp_fu_16924_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_16824_p18.read()) < sc_bigint<16>(grp_fu_16924_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_140_fu_19036_p2() {
    icmp_ln1496_140_fu_19036_p2 = (!kernel_data_V_4_198.read().is_01() || !line_buffer_Array_V_4_2_6_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_198.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_6_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_141_fu_19058_p2() {
    icmp_ln1496_141_fu_19058_p2 = (!select_ln65_140_fu_19028_p3.read().is_01() || !select_ln65_142_fu_19050_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_140_fu_19028_p3.read()) < sc_bigint<16>(select_ln65_142_fu_19050_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_142_fu_19114_p2() {
    icmp_ln1496_142_fu_19114_p2 = (!kernel_data_V_4_262.read().is_01() || !kernel_data_V_4_326.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_262.read()) < sc_bigint<16>(kernel_data_V_4_326.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_143_fu_19136_p2() {
    icmp_ln1496_143_fu_19136_p2 = (!kernel_data_V_4_454.read().is_01() || !line_buffer_Array_V_4_1_6_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_454.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_6_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_144_fu_19158_p2() {
    icmp_ln1496_144_fu_19158_p2 = (!select_ln65_145_fu_19128_p3.read().is_01() || !select_ln65_147_fu_19150_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_145_fu_19128_p3.read()) < sc_bigint<16>(select_ln65_147_fu_19150_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_145_fu_43163_p2() {
    icmp_ln1496_145_fu_43163_p2 = (!grp_fu_19076_p18.read().is_01() || !grp_fu_19176_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_19076_p18.read()) < sc_bigint<16>(grp_fu_19176_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_146_fu_19214_p2() {
    icmp_ln1496_146_fu_19214_p2 = (!kernel_data_V_4_518.read().is_01() || !kernel_data_V_4_582.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_518.read()) < sc_bigint<16>(kernel_data_V_4_582.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_147_fu_19236_p2() {
    icmp_ln1496_147_fu_19236_p2 = (!kernel_data_V_4_710.read().is_01() || !line_buffer_Array_V_4_0_6_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_710.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_6_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_148_fu_19258_p2() {
    icmp_ln1496_148_fu_19258_p2 = (!select_ln65_151_fu_19228_p3.read().is_01() || !select_ln65_153_fu_19250_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_151_fu_19228_p3.read()) < sc_bigint<16>(select_ln65_153_fu_19250_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_149_fu_19310_p2() {
    icmp_ln1496_149_fu_19310_p2 = (!kernel_data_V_4_774.read().is_01() || !kernel_data_V_4_902.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_774.read()) < sc_bigint<16>(kernel_data_V_4_902.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_14_fu_47568_p2() {
    icmp_ln1496_14_fu_47568_p2 = (!grp_fu_42724_p18.read().is_01() || !grp_fu_42758_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_42724_p18.read()) < sc_bigint<16>(grp_fu_42758_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_150_fu_19332_p2() {
    icmp_ln1496_150_fu_19332_p2 = (!kernel_data_V_4_966.read().is_01() || !data_V_data_6_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_966.read()) < sc_bigint<16>(data_V_data_6_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_151_fu_19354_p2() {
    icmp_ln1496_151_fu_19354_p2 = (!select_ln65_156_fu_19324_p3.read().is_01() || !select_ln65_158_fu_19346_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_156_fu_19324_p3.read()) < sc_bigint<16>(select_ln65_158_fu_19346_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_152_fu_43202_p2() {
    icmp_ln1496_152_fu_43202_p2 = (!grp_fu_19272_p18.read().is_01() || !grp_fu_19372_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_19272_p18.read()) < sc_bigint<16>(grp_fu_19372_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_153_fu_47778_p2() {
    icmp_ln1496_153_fu_47778_p2 = (!grp_fu_43180_p18.read().is_01() || !grp_fu_43214_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_43180_p18.read()) < sc_bigint<16>(grp_fu_43214_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_154_fu_19426_p2() {
    icmp_ln1496_154_fu_19426_p2 = (!kernel_data_V_4_7.read().is_01() || !kernel_data_V_4_71.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_7.read()) < sc_bigint<16>(kernel_data_V_4_71.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_155_fu_19444_p2() {
    icmp_ln1496_155_fu_19444_p2 = (!kernel_data_V_4_199.read().is_01() || !line_buffer_Array_V_4_2_7_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_199.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_7_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_156_fu_19466_p2() {
    icmp_ln1496_156_fu_19466_p2 = (!select_ln65_162_fu_19436_p3.read().is_01() || !select_ln65_164_fu_19458_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_162_fu_19436_p3.read()) < sc_bigint<16>(select_ln65_164_fu_19458_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_157_fu_19522_p2() {
    icmp_ln1496_157_fu_19522_p2 = (!kernel_data_V_4_263.read().is_01() || !kernel_data_V_4_327.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_263.read()) < sc_bigint<16>(kernel_data_V_4_327.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_158_fu_19544_p2() {
    icmp_ln1496_158_fu_19544_p2 = (!kernel_data_V_4_455.read().is_01() || !line_buffer_Array_V_4_1_7_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_455.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_7_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_159_fu_19566_p2() {
    icmp_ln1496_159_fu_19566_p2 = (!select_ln65_167_fu_19536_p3.read().is_01() || !select_ln65_169_fu_19558_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_167_fu_19536_p3.read()) < sc_bigint<16>(select_ln65_169_fu_19558_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_15_fu_22690_p2() {
    icmp_ln1496_15_fu_22690_p2 = (!kernel_data_V_4_15.read().is_01() || !kernel_data_V_4_79.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_15.read()) < sc_bigint<16>(kernel_data_V_4_79.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_160_fu_43239_p2() {
    icmp_ln1496_160_fu_43239_p2 = (!grp_fu_19484_p18.read().is_01() || !grp_fu_19584_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_19484_p18.read()) < sc_bigint<16>(grp_fu_19584_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_161_fu_19622_p2() {
    icmp_ln1496_161_fu_19622_p2 = (!kernel_data_V_4_519.read().is_01() || !kernel_data_V_4_583.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_519.read()) < sc_bigint<16>(kernel_data_V_4_583.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_162_fu_19644_p2() {
    icmp_ln1496_162_fu_19644_p2 = (!kernel_data_V_4_711.read().is_01() || !line_buffer_Array_V_4_0_7_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_711.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_7_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_163_fu_19666_p2() {
    icmp_ln1496_163_fu_19666_p2 = (!select_ln65_173_fu_19636_p3.read().is_01() || !select_ln65_175_fu_19658_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_173_fu_19636_p3.read()) < sc_bigint<16>(select_ln65_175_fu_19658_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_164_fu_19718_p2() {
    icmp_ln1496_164_fu_19718_p2 = (!kernel_data_V_4_775.read().is_01() || !kernel_data_V_4_903.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_775.read()) < sc_bigint<16>(kernel_data_V_4_903.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_165_fu_19740_p2() {
    icmp_ln1496_165_fu_19740_p2 = (!kernel_data_V_4_967.read().is_01() || !data_V_data_7_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_967.read()) < sc_bigint<16>(data_V_data_7_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_166_fu_19762_p2() {
    icmp_ln1496_166_fu_19762_p2 = (!select_ln65_178_fu_19732_p3.read().is_01() || !select_ln65_180_fu_19754_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_178_fu_19732_p3.read()) < sc_bigint<16>(select_ln65_180_fu_19754_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_167_fu_43278_p2() {
    icmp_ln1496_167_fu_43278_p2 = (!grp_fu_19680_p18.read().is_01() || !grp_fu_19780_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_19680_p18.read()) < sc_bigint<16>(grp_fu_19780_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_168_fu_47813_p2() {
    icmp_ln1496_168_fu_47813_p2 = (!grp_fu_43256_p18.read().is_01() || !grp_fu_43290_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_43256_p18.read()) < sc_bigint<16>(grp_fu_43290_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_169_fu_19834_p2() {
    icmp_ln1496_169_fu_19834_p2 = (!kernel_data_V_4_8.read().is_01() || !kernel_data_V_4_72.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_8.read()) < sc_bigint<16>(kernel_data_V_4_72.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_16_fu_23098_p2() {
    icmp_ln1496_16_fu_23098_p2 = (!kernel_data_V_4_16.read().is_01() || !kernel_data_V_4_80.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_16.read()) < sc_bigint<16>(kernel_data_V_4_80.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_170_fu_19852_p2() {
    icmp_ln1496_170_fu_19852_p2 = (!kernel_data_V_4_200.read().is_01() || !line_buffer_Array_V_4_2_8_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_200.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_8_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_171_fu_19874_p2() {
    icmp_ln1496_171_fu_19874_p2 = (!select_ln65_184_fu_19844_p3.read().is_01() || !select_ln65_186_fu_19866_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_184_fu_19844_p3.read()) < sc_bigint<16>(select_ln65_186_fu_19866_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_172_fu_19930_p2() {
    icmp_ln1496_172_fu_19930_p2 = (!kernel_data_V_4_264.read().is_01() || !kernel_data_V_4_328.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_264.read()) < sc_bigint<16>(kernel_data_V_4_328.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_173_fu_19952_p2() {
    icmp_ln1496_173_fu_19952_p2 = (!kernel_data_V_4_456.read().is_01() || !line_buffer_Array_V_4_1_8_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_456.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_8_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_174_fu_19974_p2() {
    icmp_ln1496_174_fu_19974_p2 = (!select_ln65_189_fu_19944_p3.read().is_01() || !select_ln65_191_fu_19966_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_189_fu_19944_p3.read()) < sc_bigint<16>(select_ln65_191_fu_19966_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_175_fu_43315_p2() {
    icmp_ln1496_175_fu_43315_p2 = (!grp_fu_19892_p18.read().is_01() || !grp_fu_19992_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_19892_p18.read()) < sc_bigint<16>(grp_fu_19992_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_176_fu_20030_p2() {
    icmp_ln1496_176_fu_20030_p2 = (!kernel_data_V_4_520.read().is_01() || !kernel_data_V_4_584.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_520.read()) < sc_bigint<16>(kernel_data_V_4_584.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_177_fu_20052_p2() {
    icmp_ln1496_177_fu_20052_p2 = (!kernel_data_V_4_712.read().is_01() || !line_buffer_Array_V_4_0_8_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_712.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_8_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_178_fu_20074_p2() {
    icmp_ln1496_178_fu_20074_p2 = (!select_ln65_195_fu_20044_p3.read().is_01() || !select_ln65_197_fu_20066_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_195_fu_20044_p3.read()) < sc_bigint<16>(select_ln65_197_fu_20066_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_179_fu_20126_p2() {
    icmp_ln1496_179_fu_20126_p2 = (!kernel_data_V_4_776.read().is_01() || !kernel_data_V_4_904.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_776.read()) < sc_bigint<16>(kernel_data_V_4_904.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_17_fu_23506_p2() {
    icmp_ln1496_17_fu_23506_p2 = (!kernel_data_V_4_17.read().is_01() || !kernel_data_V_4_81.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_17.read()) < sc_bigint<16>(kernel_data_V_4_81.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_180_fu_20148_p2() {
    icmp_ln1496_180_fu_20148_p2 = (!kernel_data_V_4_968.read().is_01() || !data_V_data_8_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_968.read()) < sc_bigint<16>(data_V_data_8_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_181_fu_20170_p2() {
    icmp_ln1496_181_fu_20170_p2 = (!select_ln65_200_fu_20140_p3.read().is_01() || !select_ln65_202_fu_20162_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_200_fu_20140_p3.read()) < sc_bigint<16>(select_ln65_202_fu_20162_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_182_fu_43354_p2() {
    icmp_ln1496_182_fu_43354_p2 = (!grp_fu_20088_p18.read().is_01() || !grp_fu_20188_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_20088_p18.read()) < sc_bigint<16>(grp_fu_20188_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_183_fu_47848_p2() {
    icmp_ln1496_183_fu_47848_p2 = (!grp_fu_43332_p18.read().is_01() || !grp_fu_43366_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_43332_p18.read()) < sc_bigint<16>(grp_fu_43366_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_184_fu_20242_p2() {
    icmp_ln1496_184_fu_20242_p2 = (!kernel_data_V_4_9.read().is_01() || !kernel_data_V_4_73.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_9.read()) < sc_bigint<16>(kernel_data_V_4_73.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_185_fu_20260_p2() {
    icmp_ln1496_185_fu_20260_p2 = (!kernel_data_V_4_201.read().is_01() || !line_buffer_Array_V_4_2_9_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_201.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_9_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_186_fu_20282_p2() {
    icmp_ln1496_186_fu_20282_p2 = (!select_ln65_206_fu_20252_p3.read().is_01() || !select_ln65_208_fu_20274_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_206_fu_20252_p3.read()) < sc_bigint<16>(select_ln65_208_fu_20274_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_187_fu_20338_p2() {
    icmp_ln1496_187_fu_20338_p2 = (!kernel_data_V_4_265.read().is_01() || !kernel_data_V_4_329.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_265.read()) < sc_bigint<16>(kernel_data_V_4_329.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_188_fu_20360_p2() {
    icmp_ln1496_188_fu_20360_p2 = (!kernel_data_V_4_457.read().is_01() || !line_buffer_Array_V_4_1_9_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_457.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_9_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_189_fu_20382_p2() {
    icmp_ln1496_189_fu_20382_p2 = (!select_ln65_211_fu_20352_p3.read().is_01() || !select_ln65_213_fu_20374_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_211_fu_20352_p3.read()) < sc_bigint<16>(select_ln65_213_fu_20374_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_18_fu_23914_p2() {
    icmp_ln1496_18_fu_23914_p2 = (!kernel_data_V_4_18.read().is_01() || !kernel_data_V_4_82.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_18.read()) < sc_bigint<16>(kernel_data_V_4_82.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_190_fu_43391_p2() {
    icmp_ln1496_190_fu_43391_p2 = (!grp_fu_20300_p18.read().is_01() || !grp_fu_20400_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_20300_p18.read()) < sc_bigint<16>(grp_fu_20400_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_191_fu_20438_p2() {
    icmp_ln1496_191_fu_20438_p2 = (!kernel_data_V_4_521.read().is_01() || !kernel_data_V_4_585.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_521.read()) < sc_bigint<16>(kernel_data_V_4_585.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_192_fu_20460_p2() {
    icmp_ln1496_192_fu_20460_p2 = (!kernel_data_V_4_713.read().is_01() || !line_buffer_Array_V_4_0_9_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_713.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_9_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_193_fu_20482_p2() {
    icmp_ln1496_193_fu_20482_p2 = (!select_ln65_217_fu_20452_p3.read().is_01() || !select_ln65_219_fu_20474_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_217_fu_20452_p3.read()) < sc_bigint<16>(select_ln65_219_fu_20474_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_194_fu_20534_p2() {
    icmp_ln1496_194_fu_20534_p2 = (!kernel_data_V_4_777.read().is_01() || !kernel_data_V_4_905.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_777.read()) < sc_bigint<16>(kernel_data_V_4_905.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_195_fu_20556_p2() {
    icmp_ln1496_195_fu_20556_p2 = (!kernel_data_V_4_969.read().is_01() || !data_V_data_9_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_969.read()) < sc_bigint<16>(data_V_data_9_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_196_fu_20578_p2() {
    icmp_ln1496_196_fu_20578_p2 = (!select_ln65_222_fu_20548_p3.read().is_01() || !select_ln65_224_fu_20570_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_222_fu_20548_p3.read()) < sc_bigint<16>(select_ln65_224_fu_20570_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_197_fu_43430_p2() {
    icmp_ln1496_197_fu_43430_p2 = (!grp_fu_20496_p18.read().is_01() || !grp_fu_20596_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_20496_p18.read()) < sc_bigint<16>(grp_fu_20596_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_198_fu_47883_p2() {
    icmp_ln1496_198_fu_47883_p2 = (!grp_fu_43408_p18.read().is_01() || !grp_fu_43442_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_43408_p18.read()) < sc_bigint<16>(grp_fu_43442_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_199_fu_20650_p2() {
    icmp_ln1496_199_fu_20650_p2 = (!kernel_data_V_4_10.read().is_01() || !kernel_data_V_4_74.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_10.read()) < sc_bigint<16>(kernel_data_V_4_74.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_19_fu_24322_p2() {
    icmp_ln1496_19_fu_24322_p2 = (!kernel_data_V_4_19.read().is_01() || !kernel_data_V_4_83.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_19.read()) < sc_bigint<16>(kernel_data_V_4_83.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_1_fu_16588_p2() {
    icmp_ln1496_1_fu_16588_p2 = (!kernel_data_V_4_192.read().is_01() || !line_buffer_Array_V_4_2_0_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_192.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_0_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_200_fu_20668_p2() {
    icmp_ln1496_200_fu_20668_p2 = (!kernel_data_V_4_202.read().is_01() || !line_buffer_Array_V_4_2_10_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_202.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_10_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_201_fu_20690_p2() {
    icmp_ln1496_201_fu_20690_p2 = (!select_ln65_228_fu_20660_p3.read().is_01() || !select_ln65_230_fu_20682_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_228_fu_20660_p3.read()) < sc_bigint<16>(select_ln65_230_fu_20682_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_202_fu_20746_p2() {
    icmp_ln1496_202_fu_20746_p2 = (!kernel_data_V_4_266.read().is_01() || !kernel_data_V_4_330.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_266.read()) < sc_bigint<16>(kernel_data_V_4_330.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_203_fu_20768_p2() {
    icmp_ln1496_203_fu_20768_p2 = (!kernel_data_V_4_458.read().is_01() || !line_buffer_Array_V_4_1_10_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_458.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_10_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_204_fu_20790_p2() {
    icmp_ln1496_204_fu_20790_p2 = (!select_ln65_233_fu_20760_p3.read().is_01() || !select_ln65_235_fu_20782_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_233_fu_20760_p3.read()) < sc_bigint<16>(select_ln65_235_fu_20782_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_205_fu_43467_p2() {
    icmp_ln1496_205_fu_43467_p2 = (!grp_fu_20708_p18.read().is_01() || !grp_fu_20808_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_20708_p18.read()) < sc_bigint<16>(grp_fu_20808_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_206_fu_20846_p2() {
    icmp_ln1496_206_fu_20846_p2 = (!kernel_data_V_4_522.read().is_01() || !kernel_data_V_4_586.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_522.read()) < sc_bigint<16>(kernel_data_V_4_586.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_207_fu_20868_p2() {
    icmp_ln1496_207_fu_20868_p2 = (!kernel_data_V_4_714.read().is_01() || !line_buffer_Array_V_4_0_10_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_714.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_10_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_208_fu_20890_p2() {
    icmp_ln1496_208_fu_20890_p2 = (!select_ln65_239_fu_20860_p3.read().is_01() || !select_ln65_241_fu_20882_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_239_fu_20860_p3.read()) < sc_bigint<16>(select_ln65_241_fu_20882_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_209_fu_20942_p2() {
    icmp_ln1496_209_fu_20942_p2 = (!kernel_data_V_4_778.read().is_01() || !kernel_data_V_4_906.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_778.read()) < sc_bigint<16>(kernel_data_V_4_906.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_20_fu_24730_p2() {
    icmp_ln1496_20_fu_24730_p2 = (!kernel_data_V_4_20.read().is_01() || !kernel_data_V_4_84.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_20.read()) < sc_bigint<16>(kernel_data_V_4_84.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_210_fu_20964_p2() {
    icmp_ln1496_210_fu_20964_p2 = (!kernel_data_V_4_970.read().is_01() || !data_V_data_10_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_970.read()) < sc_bigint<16>(data_V_data_10_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_211_fu_20986_p2() {
    icmp_ln1496_211_fu_20986_p2 = (!select_ln65_244_fu_20956_p3.read().is_01() || !select_ln65_246_fu_20978_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_244_fu_20956_p3.read()) < sc_bigint<16>(select_ln65_246_fu_20978_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_212_fu_43506_p2() {
    icmp_ln1496_212_fu_43506_p2 = (!grp_fu_20904_p18.read().is_01() || !grp_fu_21004_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_20904_p18.read()) < sc_bigint<16>(grp_fu_21004_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_213_fu_47918_p2() {
    icmp_ln1496_213_fu_47918_p2 = (!grp_fu_43484_p18.read().is_01() || !grp_fu_43518_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_43484_p18.read()) < sc_bigint<16>(grp_fu_43518_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_214_fu_21058_p2() {
    icmp_ln1496_214_fu_21058_p2 = (!kernel_data_V_4_11.read().is_01() || !kernel_data_V_4_75.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_11.read()) < sc_bigint<16>(kernel_data_V_4_75.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_215_fu_21076_p2() {
    icmp_ln1496_215_fu_21076_p2 = (!kernel_data_V_4_203.read().is_01() || !line_buffer_Array_V_4_2_11_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_203.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_11_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_216_fu_21098_p2() {
    icmp_ln1496_216_fu_21098_p2 = (!select_ln65_250_fu_21068_p3.read().is_01() || !select_ln65_252_fu_21090_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_250_fu_21068_p3.read()) < sc_bigint<16>(select_ln65_252_fu_21090_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_217_fu_21154_p2() {
    icmp_ln1496_217_fu_21154_p2 = (!kernel_data_V_4_267.read().is_01() || !kernel_data_V_4_331.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_267.read()) < sc_bigint<16>(kernel_data_V_4_331.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_218_fu_21176_p2() {
    icmp_ln1496_218_fu_21176_p2 = (!kernel_data_V_4_459.read().is_01() || !line_buffer_Array_V_4_1_11_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_459.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_11_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_219_fu_21198_p2() {
    icmp_ln1496_219_fu_21198_p2 = (!select_ln65_255_fu_21168_p3.read().is_01() || !select_ln65_257_fu_21190_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_255_fu_21168_p3.read()) < sc_bigint<16>(select_ln65_257_fu_21190_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_21_fu_25138_p2() {
    icmp_ln1496_21_fu_25138_p2 = (!kernel_data_V_4_21.read().is_01() || !kernel_data_V_4_85.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_21.read()) < sc_bigint<16>(kernel_data_V_4_85.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_220_fu_43543_p2() {
    icmp_ln1496_220_fu_43543_p2 = (!grp_fu_21116_p18.read().is_01() || !grp_fu_21216_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_21116_p18.read()) < sc_bigint<16>(grp_fu_21216_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_221_fu_21254_p2() {
    icmp_ln1496_221_fu_21254_p2 = (!kernel_data_V_4_523.read().is_01() || !kernel_data_V_4_587.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_523.read()) < sc_bigint<16>(kernel_data_V_4_587.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_222_fu_21276_p2() {
    icmp_ln1496_222_fu_21276_p2 = (!kernel_data_V_4_715.read().is_01() || !line_buffer_Array_V_4_0_11_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_715.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_11_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_223_fu_21298_p2() {
    icmp_ln1496_223_fu_21298_p2 = (!select_ln65_261_fu_21268_p3.read().is_01() || !select_ln65_263_fu_21290_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_261_fu_21268_p3.read()) < sc_bigint<16>(select_ln65_263_fu_21290_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_224_fu_21350_p2() {
    icmp_ln1496_224_fu_21350_p2 = (!kernel_data_V_4_779.read().is_01() || !kernel_data_V_4_907.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_779.read()) < sc_bigint<16>(kernel_data_V_4_907.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_225_fu_21372_p2() {
    icmp_ln1496_225_fu_21372_p2 = (!kernel_data_V_4_971.read().is_01() || !data_V_data_11_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_971.read()) < sc_bigint<16>(data_V_data_11_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_226_fu_21394_p2() {
    icmp_ln1496_226_fu_21394_p2 = (!select_ln65_266_fu_21364_p3.read().is_01() || !select_ln65_268_fu_21386_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_266_fu_21364_p3.read()) < sc_bigint<16>(select_ln65_268_fu_21386_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_227_fu_43582_p2() {
    icmp_ln1496_227_fu_43582_p2 = (!grp_fu_21312_p18.read().is_01() || !grp_fu_21412_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_21312_p18.read()) < sc_bigint<16>(grp_fu_21412_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_228_fu_47953_p2() {
    icmp_ln1496_228_fu_47953_p2 = (!grp_fu_43560_p18.read().is_01() || !grp_fu_43594_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_43560_p18.read()) < sc_bigint<16>(grp_fu_43594_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_229_fu_21466_p2() {
    icmp_ln1496_229_fu_21466_p2 = (!kernel_data_V_4_12.read().is_01() || !kernel_data_V_4_76.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_12.read()) < sc_bigint<16>(kernel_data_V_4_76.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_22_fu_25546_p2() {
    icmp_ln1496_22_fu_25546_p2 = (!kernel_data_V_4_22.read().is_01() || !kernel_data_V_4_86.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_22.read()) < sc_bigint<16>(kernel_data_V_4_86.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_230_fu_21484_p2() {
    icmp_ln1496_230_fu_21484_p2 = (!kernel_data_V_4_204.read().is_01() || !line_buffer_Array_V_4_2_12_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_204.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_12_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_231_fu_21506_p2() {
    icmp_ln1496_231_fu_21506_p2 = (!select_ln65_272_fu_21476_p3.read().is_01() || !select_ln65_274_fu_21498_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_272_fu_21476_p3.read()) < sc_bigint<16>(select_ln65_274_fu_21498_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_232_fu_21562_p2() {
    icmp_ln1496_232_fu_21562_p2 = (!kernel_data_V_4_268.read().is_01() || !kernel_data_V_4_332.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_268.read()) < sc_bigint<16>(kernel_data_V_4_332.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_233_fu_21584_p2() {
    icmp_ln1496_233_fu_21584_p2 = (!kernel_data_V_4_460.read().is_01() || !line_buffer_Array_V_4_1_12_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_460.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_12_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_234_fu_21606_p2() {
    icmp_ln1496_234_fu_21606_p2 = (!select_ln65_277_fu_21576_p3.read().is_01() || !select_ln65_279_fu_21598_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_277_fu_21576_p3.read()) < sc_bigint<16>(select_ln65_279_fu_21598_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_235_fu_43619_p2() {
    icmp_ln1496_235_fu_43619_p2 = (!grp_fu_21524_p18.read().is_01() || !grp_fu_21624_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_21524_p18.read()) < sc_bigint<16>(grp_fu_21624_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_236_fu_21662_p2() {
    icmp_ln1496_236_fu_21662_p2 = (!kernel_data_V_4_524.read().is_01() || !kernel_data_V_4_588.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_524.read()) < sc_bigint<16>(kernel_data_V_4_588.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_237_fu_21684_p2() {
    icmp_ln1496_237_fu_21684_p2 = (!kernel_data_V_4_716.read().is_01() || !line_buffer_Array_V_4_0_12_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_716.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_12_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_238_fu_21706_p2() {
    icmp_ln1496_238_fu_21706_p2 = (!select_ln65_283_fu_21676_p3.read().is_01() || !select_ln65_285_fu_21698_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_283_fu_21676_p3.read()) < sc_bigint<16>(select_ln65_285_fu_21698_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_239_fu_21758_p2() {
    icmp_ln1496_239_fu_21758_p2 = (!kernel_data_V_4_780.read().is_01() || !kernel_data_V_4_908.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_780.read()) < sc_bigint<16>(kernel_data_V_4_908.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_23_fu_25954_p2() {
    icmp_ln1496_23_fu_25954_p2 = (!kernel_data_V_4_23.read().is_01() || !kernel_data_V_4_87.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_23.read()) < sc_bigint<16>(kernel_data_V_4_87.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_240_fu_21780_p2() {
    icmp_ln1496_240_fu_21780_p2 = (!kernel_data_V_4_972.read().is_01() || !data_V_data_12_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_972.read()) < sc_bigint<16>(data_V_data_12_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_241_fu_21802_p2() {
    icmp_ln1496_241_fu_21802_p2 = (!select_ln65_288_fu_21772_p3.read().is_01() || !select_ln65_290_fu_21794_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_288_fu_21772_p3.read()) < sc_bigint<16>(select_ln65_290_fu_21794_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_242_fu_43658_p2() {
    icmp_ln1496_242_fu_43658_p2 = (!grp_fu_21720_p18.read().is_01() || !grp_fu_21820_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_21720_p18.read()) < sc_bigint<16>(grp_fu_21820_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_243_fu_47988_p2() {
    icmp_ln1496_243_fu_47988_p2 = (!grp_fu_43636_p18.read().is_01() || !grp_fu_43670_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_43636_p18.read()) < sc_bigint<16>(grp_fu_43670_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_244_fu_21874_p2() {
    icmp_ln1496_244_fu_21874_p2 = (!kernel_data_V_4_13.read().is_01() || !kernel_data_V_4_77.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_13.read()) < sc_bigint<16>(kernel_data_V_4_77.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_245_fu_21892_p2() {
    icmp_ln1496_245_fu_21892_p2 = (!kernel_data_V_4_205.read().is_01() || !line_buffer_Array_V_4_2_13_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_205.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_13_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_246_fu_21914_p2() {
    icmp_ln1496_246_fu_21914_p2 = (!select_ln65_294_fu_21884_p3.read().is_01() || !select_ln65_296_fu_21906_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_294_fu_21884_p3.read()) < sc_bigint<16>(select_ln65_296_fu_21906_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_247_fu_21970_p2() {
    icmp_ln1496_247_fu_21970_p2 = (!kernel_data_V_4_269.read().is_01() || !kernel_data_V_4_333.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_269.read()) < sc_bigint<16>(kernel_data_V_4_333.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_248_fu_21992_p2() {
    icmp_ln1496_248_fu_21992_p2 = (!kernel_data_V_4_461.read().is_01() || !line_buffer_Array_V_4_1_13_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_461.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_13_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_249_fu_22014_p2() {
    icmp_ln1496_249_fu_22014_p2 = (!select_ln65_299_fu_21984_p3.read().is_01() || !select_ln65_301_fu_22006_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_299_fu_21984_p3.read()) < sc_bigint<16>(select_ln65_301_fu_22006_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_24_fu_26362_p2() {
    icmp_ln1496_24_fu_26362_p2 = (!kernel_data_V_4_24.read().is_01() || !kernel_data_V_4_88.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_24.read()) < sc_bigint<16>(kernel_data_V_4_88.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_250_fu_43695_p2() {
    icmp_ln1496_250_fu_43695_p2 = (!grp_fu_21932_p18.read().is_01() || !grp_fu_22032_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_21932_p18.read()) < sc_bigint<16>(grp_fu_22032_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_251_fu_22070_p2() {
    icmp_ln1496_251_fu_22070_p2 = (!kernel_data_V_4_525.read().is_01() || !kernel_data_V_4_589.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_525.read()) < sc_bigint<16>(kernel_data_V_4_589.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_252_fu_22092_p2() {
    icmp_ln1496_252_fu_22092_p2 = (!kernel_data_V_4_717.read().is_01() || !line_buffer_Array_V_4_0_13_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_717.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_13_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_253_fu_22114_p2() {
    icmp_ln1496_253_fu_22114_p2 = (!select_ln65_305_fu_22084_p3.read().is_01() || !select_ln65_307_fu_22106_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_305_fu_22084_p3.read()) < sc_bigint<16>(select_ln65_307_fu_22106_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_254_fu_22166_p2() {
    icmp_ln1496_254_fu_22166_p2 = (!kernel_data_V_4_781.read().is_01() || !kernel_data_V_4_909.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_781.read()) < sc_bigint<16>(kernel_data_V_4_909.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_255_fu_22188_p2() {
    icmp_ln1496_255_fu_22188_p2 = (!kernel_data_V_4_973.read().is_01() || !data_V_data_13_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_973.read()) < sc_bigint<16>(data_V_data_13_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_256_fu_22210_p2() {
    icmp_ln1496_256_fu_22210_p2 = (!select_ln65_310_fu_22180_p3.read().is_01() || !select_ln65_312_fu_22202_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_310_fu_22180_p3.read()) < sc_bigint<16>(select_ln65_312_fu_22202_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_257_fu_43734_p2() {
    icmp_ln1496_257_fu_43734_p2 = (!grp_fu_22128_p18.read().is_01() || !grp_fu_22228_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_22128_p18.read()) < sc_bigint<16>(grp_fu_22228_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_258_fu_48023_p2() {
    icmp_ln1496_258_fu_48023_p2 = (!grp_fu_43712_p18.read().is_01() || !grp_fu_43746_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_43712_p18.read()) < sc_bigint<16>(grp_fu_43746_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_259_fu_22282_p2() {
    icmp_ln1496_259_fu_22282_p2 = (!kernel_data_V_4_14.read().is_01() || !kernel_data_V_4_78.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_14.read()) < sc_bigint<16>(kernel_data_V_4_78.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_25_fu_26770_p2() {
    icmp_ln1496_25_fu_26770_p2 = (!kernel_data_V_4_25.read().is_01() || !kernel_data_V_4_89.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_25.read()) < sc_bigint<16>(kernel_data_V_4_89.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_260_fu_22300_p2() {
    icmp_ln1496_260_fu_22300_p2 = (!kernel_data_V_4_206.read().is_01() || !line_buffer_Array_V_4_2_14_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_206.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_14_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_261_fu_22322_p2() {
    icmp_ln1496_261_fu_22322_p2 = (!select_ln65_316_fu_22292_p3.read().is_01() || !select_ln65_318_fu_22314_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_316_fu_22292_p3.read()) < sc_bigint<16>(select_ln65_318_fu_22314_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_262_fu_22378_p2() {
    icmp_ln1496_262_fu_22378_p2 = (!kernel_data_V_4_270.read().is_01() || !kernel_data_V_4_334.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_270.read()) < sc_bigint<16>(kernel_data_V_4_334.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_263_fu_22400_p2() {
    icmp_ln1496_263_fu_22400_p2 = (!kernel_data_V_4_462.read().is_01() || !line_buffer_Array_V_4_1_14_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_462.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_14_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_264_fu_22422_p2() {
    icmp_ln1496_264_fu_22422_p2 = (!select_ln65_321_fu_22392_p3.read().is_01() || !select_ln65_323_fu_22414_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_321_fu_22392_p3.read()) < sc_bigint<16>(select_ln65_323_fu_22414_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_265_fu_43771_p2() {
    icmp_ln1496_265_fu_43771_p2 = (!grp_fu_22340_p18.read().is_01() || !grp_fu_22440_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_22340_p18.read()) < sc_bigint<16>(grp_fu_22440_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_266_fu_22478_p2() {
    icmp_ln1496_266_fu_22478_p2 = (!kernel_data_V_4_526.read().is_01() || !kernel_data_V_4_590.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_526.read()) < sc_bigint<16>(kernel_data_V_4_590.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_267_fu_22500_p2() {
    icmp_ln1496_267_fu_22500_p2 = (!kernel_data_V_4_718.read().is_01() || !line_buffer_Array_V_4_0_14_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_718.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_14_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_268_fu_22522_p2() {
    icmp_ln1496_268_fu_22522_p2 = (!select_ln65_327_fu_22492_p3.read().is_01() || !select_ln65_329_fu_22514_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_327_fu_22492_p3.read()) < sc_bigint<16>(select_ln65_329_fu_22514_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_269_fu_22574_p2() {
    icmp_ln1496_269_fu_22574_p2 = (!kernel_data_V_4_782.read().is_01() || !kernel_data_V_4_910.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_782.read()) < sc_bigint<16>(kernel_data_V_4_910.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_26_fu_27178_p2() {
    icmp_ln1496_26_fu_27178_p2 = (!kernel_data_V_4_26.read().is_01() || !kernel_data_V_4_90.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_26.read()) < sc_bigint<16>(kernel_data_V_4_90.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_270_fu_22596_p2() {
    icmp_ln1496_270_fu_22596_p2 = (!kernel_data_V_4_974.read().is_01() || !data_V_data_14_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_974.read()) < sc_bigint<16>(data_V_data_14_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_271_fu_22618_p2() {
    icmp_ln1496_271_fu_22618_p2 = (!select_ln65_332_fu_22588_p3.read().is_01() || !select_ln65_334_fu_22610_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_332_fu_22588_p3.read()) < sc_bigint<16>(select_ln65_334_fu_22610_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_272_fu_43810_p2() {
    icmp_ln1496_272_fu_43810_p2 = (!grp_fu_22536_p18.read().is_01() || !grp_fu_22636_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_22536_p18.read()) < sc_bigint<16>(grp_fu_22636_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_273_fu_48058_p2() {
    icmp_ln1496_273_fu_48058_p2 = (!grp_fu_43788_p18.read().is_01() || !grp_fu_43822_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_43788_p18.read()) < sc_bigint<16>(grp_fu_43822_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_274_fu_22708_p2() {
    icmp_ln1496_274_fu_22708_p2 = (!kernel_data_V_4_207.read().is_01() || !line_buffer_Array_V_4_2_15_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_207.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_15_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_275_fu_22730_p2() {
    icmp_ln1496_275_fu_22730_p2 = (!select_ln65_338_fu_22700_p3.read().is_01() || !select_ln65_340_fu_22722_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_338_fu_22700_p3.read()) < sc_bigint<16>(select_ln65_340_fu_22722_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_276_fu_22786_p2() {
    icmp_ln1496_276_fu_22786_p2 = (!kernel_data_V_4_271.read().is_01() || !kernel_data_V_4_335.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_271.read()) < sc_bigint<16>(kernel_data_V_4_335.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_277_fu_22808_p2() {
    icmp_ln1496_277_fu_22808_p2 = (!kernel_data_V_4_463.read().is_01() || !line_buffer_Array_V_4_1_15_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_463.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_15_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_278_fu_22830_p2() {
    icmp_ln1496_278_fu_22830_p2 = (!select_ln65_343_fu_22800_p3.read().is_01() || !select_ln65_345_fu_22822_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_343_fu_22800_p3.read()) < sc_bigint<16>(select_ln65_345_fu_22822_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_279_fu_43847_p2() {
    icmp_ln1496_279_fu_43847_p2 = (!grp_fu_22748_p18.read().is_01() || !grp_fu_22848_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_22748_p18.read()) < sc_bigint<16>(grp_fu_22848_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_27_fu_27586_p2() {
    icmp_ln1496_27_fu_27586_p2 = (!kernel_data_V_4_27.read().is_01() || !kernel_data_V_4_91.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_27.read()) < sc_bigint<16>(kernel_data_V_4_91.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_280_fu_22886_p2() {
    icmp_ln1496_280_fu_22886_p2 = (!kernel_data_V_4_527.read().is_01() || !kernel_data_V_4_591.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_527.read()) < sc_bigint<16>(kernel_data_V_4_591.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_281_fu_22908_p2() {
    icmp_ln1496_281_fu_22908_p2 = (!kernel_data_V_4_719.read().is_01() || !line_buffer_Array_V_4_0_15_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_719.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_15_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_282_fu_22930_p2() {
    icmp_ln1496_282_fu_22930_p2 = (!select_ln65_349_fu_22900_p3.read().is_01() || !select_ln65_351_fu_22922_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_349_fu_22900_p3.read()) < sc_bigint<16>(select_ln65_351_fu_22922_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_283_fu_22982_p2() {
    icmp_ln1496_283_fu_22982_p2 = (!kernel_data_V_4_783.read().is_01() || !kernel_data_V_4_911.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_783.read()) < sc_bigint<16>(kernel_data_V_4_911.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_284_fu_23004_p2() {
    icmp_ln1496_284_fu_23004_p2 = (!kernel_data_V_4_975.read().is_01() || !data_V_data_15_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_975.read()) < sc_bigint<16>(data_V_data_15_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_285_fu_23026_p2() {
    icmp_ln1496_285_fu_23026_p2 = (!select_ln65_354_fu_22996_p3.read().is_01() || !select_ln65_356_fu_23018_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_354_fu_22996_p3.read()) < sc_bigint<16>(select_ln65_356_fu_23018_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_286_fu_43886_p2() {
    icmp_ln1496_286_fu_43886_p2 = (!grp_fu_22944_p18.read().is_01() || !grp_fu_23044_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_22944_p18.read()) < sc_bigint<16>(grp_fu_23044_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_287_fu_48093_p2() {
    icmp_ln1496_287_fu_48093_p2 = (!grp_fu_43864_p18.read().is_01() || !grp_fu_43898_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_43864_p18.read()) < sc_bigint<16>(grp_fu_43898_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_288_fu_23116_p2() {
    icmp_ln1496_288_fu_23116_p2 = (!kernel_data_V_4_208.read().is_01() || !line_buffer_Array_V_4_2_16_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_208.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_16_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_289_fu_23138_p2() {
    icmp_ln1496_289_fu_23138_p2 = (!select_ln65_360_fu_23108_p3.read().is_01() || !select_ln65_362_fu_23130_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_360_fu_23108_p3.read()) < sc_bigint<16>(select_ln65_362_fu_23130_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_28_fu_27994_p2() {
    icmp_ln1496_28_fu_27994_p2 = (!kernel_data_V_4_28.read().is_01() || !kernel_data_V_4_92.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_28.read()) < sc_bigint<16>(kernel_data_V_4_92.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_290_fu_23194_p2() {
    icmp_ln1496_290_fu_23194_p2 = (!kernel_data_V_4_272.read().is_01() || !kernel_data_V_4_336.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_272.read()) < sc_bigint<16>(kernel_data_V_4_336.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_291_fu_23216_p2() {
    icmp_ln1496_291_fu_23216_p2 = (!kernel_data_V_4_464.read().is_01() || !line_buffer_Array_V_4_1_16_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_464.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_16_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_292_fu_23238_p2() {
    icmp_ln1496_292_fu_23238_p2 = (!select_ln65_365_fu_23208_p3.read().is_01() || !select_ln65_367_fu_23230_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_365_fu_23208_p3.read()) < sc_bigint<16>(select_ln65_367_fu_23230_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_293_fu_43923_p2() {
    icmp_ln1496_293_fu_43923_p2 = (!grp_fu_23156_p18.read().is_01() || !grp_fu_23256_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_23156_p18.read()) < sc_bigint<16>(grp_fu_23256_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_294_fu_23294_p2() {
    icmp_ln1496_294_fu_23294_p2 = (!kernel_data_V_4_528.read().is_01() || !kernel_data_V_4_592.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_528.read()) < sc_bigint<16>(kernel_data_V_4_592.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_295_fu_23316_p2() {
    icmp_ln1496_295_fu_23316_p2 = (!kernel_data_V_4_720.read().is_01() || !line_buffer_Array_V_4_0_16_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_720.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_16_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_296_fu_23338_p2() {
    icmp_ln1496_296_fu_23338_p2 = (!select_ln65_371_fu_23308_p3.read().is_01() || !select_ln65_373_fu_23330_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_371_fu_23308_p3.read()) < sc_bigint<16>(select_ln65_373_fu_23330_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_297_fu_23390_p2() {
    icmp_ln1496_297_fu_23390_p2 = (!kernel_data_V_4_784.read().is_01() || !kernel_data_V_4_912.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_784.read()) < sc_bigint<16>(kernel_data_V_4_912.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_298_fu_23412_p2() {
    icmp_ln1496_298_fu_23412_p2 = (!kernel_data_V_4_976.read().is_01() || !data_V_data_16_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_976.read()) < sc_bigint<16>(data_V_data_16_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_299_fu_23434_p2() {
    icmp_ln1496_299_fu_23434_p2 = (!select_ln65_376_fu_23404_p3.read().is_01() || !select_ln65_378_fu_23426_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_376_fu_23404_p3.read()) < sc_bigint<16>(select_ln65_378_fu_23426_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_29_fu_28402_p2() {
    icmp_ln1496_29_fu_28402_p2 = (!kernel_data_V_4_29.read().is_01() || !kernel_data_V_4_93.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_29.read()) < sc_bigint<16>(kernel_data_V_4_93.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_2_fu_16610_p2() {
    icmp_ln1496_2_fu_16610_p2 = (!select_ln65_fu_16580_p3.read().is_01() || !select_ln65_10_fu_16602_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_fu_16580_p3.read()) < sc_bigint<16>(select_ln65_10_fu_16602_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_300_fu_43962_p2() {
    icmp_ln1496_300_fu_43962_p2 = (!grp_fu_23352_p18.read().is_01() || !grp_fu_23452_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_23352_p18.read()) < sc_bigint<16>(grp_fu_23452_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_301_fu_48128_p2() {
    icmp_ln1496_301_fu_48128_p2 = (!grp_fu_43940_p18.read().is_01() || !grp_fu_43974_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_43940_p18.read()) < sc_bigint<16>(grp_fu_43974_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_302_fu_23524_p2() {
    icmp_ln1496_302_fu_23524_p2 = (!kernel_data_V_4_209.read().is_01() || !line_buffer_Array_V_4_2_17_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_209.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_17_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_303_fu_23546_p2() {
    icmp_ln1496_303_fu_23546_p2 = (!select_ln65_382_fu_23516_p3.read().is_01() || !select_ln65_384_fu_23538_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_382_fu_23516_p3.read()) < sc_bigint<16>(select_ln65_384_fu_23538_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_304_fu_23602_p2() {
    icmp_ln1496_304_fu_23602_p2 = (!kernel_data_V_4_273.read().is_01() || !kernel_data_V_4_337.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_273.read()) < sc_bigint<16>(kernel_data_V_4_337.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_305_fu_23624_p2() {
    icmp_ln1496_305_fu_23624_p2 = (!kernel_data_V_4_465.read().is_01() || !line_buffer_Array_V_4_1_17_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_465.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_17_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_306_fu_23646_p2() {
    icmp_ln1496_306_fu_23646_p2 = (!select_ln65_387_fu_23616_p3.read().is_01() || !select_ln65_389_fu_23638_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_387_fu_23616_p3.read()) < sc_bigint<16>(select_ln65_389_fu_23638_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_307_fu_43999_p2() {
    icmp_ln1496_307_fu_43999_p2 = (!grp_fu_23564_p18.read().is_01() || !grp_fu_23664_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_23564_p18.read()) < sc_bigint<16>(grp_fu_23664_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_308_fu_23702_p2() {
    icmp_ln1496_308_fu_23702_p2 = (!kernel_data_V_4_529.read().is_01() || !kernel_data_V_4_593.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_529.read()) < sc_bigint<16>(kernel_data_V_4_593.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_309_fu_23724_p2() {
    icmp_ln1496_309_fu_23724_p2 = (!kernel_data_V_4_721.read().is_01() || !line_buffer_Array_V_4_0_17_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_721.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_17_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_30_fu_28810_p2() {
    icmp_ln1496_30_fu_28810_p2 = (!kernel_data_V_4_30.read().is_01() || !kernel_data_V_4_94.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_30.read()) < sc_bigint<16>(kernel_data_V_4_94.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_310_fu_23746_p2() {
    icmp_ln1496_310_fu_23746_p2 = (!select_ln65_393_fu_23716_p3.read().is_01() || !select_ln65_395_fu_23738_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_393_fu_23716_p3.read()) < sc_bigint<16>(select_ln65_395_fu_23738_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_311_fu_23798_p2() {
    icmp_ln1496_311_fu_23798_p2 = (!kernel_data_V_4_785.read().is_01() || !kernel_data_V_4_913.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_785.read()) < sc_bigint<16>(kernel_data_V_4_913.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_312_fu_23820_p2() {
    icmp_ln1496_312_fu_23820_p2 = (!kernel_data_V_4_977.read().is_01() || !data_V_data_17_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_977.read()) < sc_bigint<16>(data_V_data_17_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_313_fu_23842_p2() {
    icmp_ln1496_313_fu_23842_p2 = (!select_ln65_398_fu_23812_p3.read().is_01() || !select_ln65_400_fu_23834_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_398_fu_23812_p3.read()) < sc_bigint<16>(select_ln65_400_fu_23834_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_314_fu_44038_p2() {
    icmp_ln1496_314_fu_44038_p2 = (!grp_fu_23760_p18.read().is_01() || !grp_fu_23860_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_23760_p18.read()) < sc_bigint<16>(grp_fu_23860_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_315_fu_48163_p2() {
    icmp_ln1496_315_fu_48163_p2 = (!grp_fu_44016_p18.read().is_01() || !grp_fu_44050_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_44016_p18.read()) < sc_bigint<16>(grp_fu_44050_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_316_fu_23932_p2() {
    icmp_ln1496_316_fu_23932_p2 = (!kernel_data_V_4_210.read().is_01() || !line_buffer_Array_V_4_2_18_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_210.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_18_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_317_fu_23954_p2() {
    icmp_ln1496_317_fu_23954_p2 = (!select_ln65_404_fu_23924_p3.read().is_01() || !select_ln65_406_fu_23946_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_404_fu_23924_p3.read()) < sc_bigint<16>(select_ln65_406_fu_23946_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_318_fu_24010_p2() {
    icmp_ln1496_318_fu_24010_p2 = (!kernel_data_V_4_274.read().is_01() || !kernel_data_V_4_338.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_274.read()) < sc_bigint<16>(kernel_data_V_4_338.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_319_fu_24032_p2() {
    icmp_ln1496_319_fu_24032_p2 = (!kernel_data_V_4_466.read().is_01() || !line_buffer_Array_V_4_1_18_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_466.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_18_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_31_fu_29218_p2() {
    icmp_ln1496_31_fu_29218_p2 = (!kernel_data_V_4_31.read().is_01() || !kernel_data_V_4_95.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_31.read()) < sc_bigint<16>(kernel_data_V_4_95.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_320_fu_24054_p2() {
    icmp_ln1496_320_fu_24054_p2 = (!select_ln65_409_fu_24024_p3.read().is_01() || !select_ln65_411_fu_24046_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_409_fu_24024_p3.read()) < sc_bigint<16>(select_ln65_411_fu_24046_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_321_fu_44075_p2() {
    icmp_ln1496_321_fu_44075_p2 = (!grp_fu_23972_p18.read().is_01() || !grp_fu_24072_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_23972_p18.read()) < sc_bigint<16>(grp_fu_24072_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_322_fu_24110_p2() {
    icmp_ln1496_322_fu_24110_p2 = (!kernel_data_V_4_530.read().is_01() || !kernel_data_V_4_658.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_530.read()) < sc_bigint<16>(kernel_data_V_4_658.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_323_fu_24132_p2() {
    icmp_ln1496_323_fu_24132_p2 = (!kernel_data_V_4_722.read().is_01() || !line_buffer_Array_V_4_0_18_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_722.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_18_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_324_fu_24154_p2() {
    icmp_ln1496_324_fu_24154_p2 = (!select_ln65_415_fu_24124_p3.read().is_01() || !select_ln65_417_fu_24146_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_415_fu_24124_p3.read()) < sc_bigint<16>(select_ln65_417_fu_24146_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_325_fu_24206_p2() {
    icmp_ln1496_325_fu_24206_p2 = (!kernel_data_V_4_786.read().is_01() || !kernel_data_V_4_914.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_786.read()) < sc_bigint<16>(kernel_data_V_4_914.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_326_fu_24228_p2() {
    icmp_ln1496_326_fu_24228_p2 = (!kernel_data_V_4_978.read().is_01() || !data_V_data_18_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_978.read()) < sc_bigint<16>(data_V_data_18_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_327_fu_24250_p2() {
    icmp_ln1496_327_fu_24250_p2 = (!select_ln65_420_fu_24220_p3.read().is_01() || !select_ln65_422_fu_24242_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_420_fu_24220_p3.read()) < sc_bigint<16>(select_ln65_422_fu_24242_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_328_fu_44114_p2() {
    icmp_ln1496_328_fu_44114_p2 = (!grp_fu_24168_p18.read().is_01() || !grp_fu_24268_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_24168_p18.read()) < sc_bigint<16>(grp_fu_24268_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_329_fu_48198_p2() {
    icmp_ln1496_329_fu_48198_p2 = (!grp_fu_44092_p18.read().is_01() || !grp_fu_44126_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_44092_p18.read()) < sc_bigint<16>(grp_fu_44126_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_32_fu_29626_p2() {
    icmp_ln1496_32_fu_29626_p2 = (!kernel_data_V_4_32.read().is_01() || !kernel_data_V_4_96.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_32.read()) < sc_bigint<16>(kernel_data_V_4_96.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_330_fu_24340_p2() {
    icmp_ln1496_330_fu_24340_p2 = (!kernel_data_V_4_211.read().is_01() || !line_buffer_Array_V_4_2_19_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_211.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_19_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_331_fu_24362_p2() {
    icmp_ln1496_331_fu_24362_p2 = (!select_ln65_426_fu_24332_p3.read().is_01() || !select_ln65_428_fu_24354_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_426_fu_24332_p3.read()) < sc_bigint<16>(select_ln65_428_fu_24354_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_332_fu_24418_p2() {
    icmp_ln1496_332_fu_24418_p2 = (!kernel_data_V_4_275.read().is_01() || !kernel_data_V_4_339.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_275.read()) < sc_bigint<16>(kernel_data_V_4_339.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_333_fu_24440_p2() {
    icmp_ln1496_333_fu_24440_p2 = (!kernel_data_V_4_467.read().is_01() || !line_buffer_Array_V_4_1_19_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_467.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_19_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_334_fu_24462_p2() {
    icmp_ln1496_334_fu_24462_p2 = (!select_ln65_431_fu_24432_p3.read().is_01() || !select_ln65_433_fu_24454_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_431_fu_24432_p3.read()) < sc_bigint<16>(select_ln65_433_fu_24454_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_335_fu_44151_p2() {
    icmp_ln1496_335_fu_44151_p2 = (!grp_fu_24380_p18.read().is_01() || !grp_fu_24480_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_24380_p18.read()) < sc_bigint<16>(grp_fu_24480_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_336_fu_24518_p2() {
    icmp_ln1496_336_fu_24518_p2 = (!kernel_data_V_4_531.read().is_01() || !kernel_data_V_4_659.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_531.read()) < sc_bigint<16>(kernel_data_V_4_659.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_337_fu_24540_p2() {
    icmp_ln1496_337_fu_24540_p2 = (!kernel_data_V_4_723.read().is_01() || !line_buffer_Array_V_4_0_19_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_723.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_19_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_338_fu_24562_p2() {
    icmp_ln1496_338_fu_24562_p2 = (!select_ln65_437_fu_24532_p3.read().is_01() || !select_ln65_439_fu_24554_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_437_fu_24532_p3.read()) < sc_bigint<16>(select_ln65_439_fu_24554_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_339_fu_24614_p2() {
    icmp_ln1496_339_fu_24614_p2 = (!kernel_data_V_4_787.read().is_01() || !kernel_data_V_4_915.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_787.read()) < sc_bigint<16>(kernel_data_V_4_915.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_33_fu_30034_p2() {
    icmp_ln1496_33_fu_30034_p2 = (!kernel_data_V_4_33.read().is_01() || !kernel_data_V_4_97.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_33.read()) < sc_bigint<16>(kernel_data_V_4_97.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_340_fu_24636_p2() {
    icmp_ln1496_340_fu_24636_p2 = (!kernel_data_V_4_979.read().is_01() || !data_V_data_19_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_979.read()) < sc_bigint<16>(data_V_data_19_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_341_fu_24658_p2() {
    icmp_ln1496_341_fu_24658_p2 = (!select_ln65_442_fu_24628_p3.read().is_01() || !select_ln65_444_fu_24650_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_442_fu_24628_p3.read()) < sc_bigint<16>(select_ln65_444_fu_24650_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_342_fu_44190_p2() {
    icmp_ln1496_342_fu_44190_p2 = (!grp_fu_24576_p18.read().is_01() || !grp_fu_24676_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_24576_p18.read()) < sc_bigint<16>(grp_fu_24676_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_343_fu_48233_p2() {
    icmp_ln1496_343_fu_48233_p2 = (!grp_fu_44168_p18.read().is_01() || !grp_fu_44202_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_44168_p18.read()) < sc_bigint<16>(grp_fu_44202_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_344_fu_24748_p2() {
    icmp_ln1496_344_fu_24748_p2 = (!kernel_data_V_4_212.read().is_01() || !line_buffer_Array_V_4_2_20_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_212.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_20_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_345_fu_24770_p2() {
    icmp_ln1496_345_fu_24770_p2 = (!select_ln65_448_fu_24740_p3.read().is_01() || !select_ln65_450_fu_24762_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_448_fu_24740_p3.read()) < sc_bigint<16>(select_ln65_450_fu_24762_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_346_fu_24826_p2() {
    icmp_ln1496_346_fu_24826_p2 = (!kernel_data_V_4_276.read().is_01() || !kernel_data_V_4_340.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_276.read()) < sc_bigint<16>(kernel_data_V_4_340.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_347_fu_24848_p2() {
    icmp_ln1496_347_fu_24848_p2 = (!kernel_data_V_4_468.read().is_01() || !line_buffer_Array_V_4_1_20_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_468.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_20_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_348_fu_24870_p2() {
    icmp_ln1496_348_fu_24870_p2 = (!select_ln65_453_fu_24840_p3.read().is_01() || !select_ln65_455_fu_24862_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_453_fu_24840_p3.read()) < sc_bigint<16>(select_ln65_455_fu_24862_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_349_fu_44227_p2() {
    icmp_ln1496_349_fu_44227_p2 = (!grp_fu_24788_p18.read().is_01() || !grp_fu_24888_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_24788_p18.read()) < sc_bigint<16>(grp_fu_24888_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_34_fu_30442_p2() {
    icmp_ln1496_34_fu_30442_p2 = (!kernel_data_V_4_34.read().is_01() || !kernel_data_V_4_98.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_34.read()) < sc_bigint<16>(kernel_data_V_4_98.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_350_fu_24926_p2() {
    icmp_ln1496_350_fu_24926_p2 = (!kernel_data_V_4_532.read().is_01() || !kernel_data_V_4_660.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_532.read()) < sc_bigint<16>(kernel_data_V_4_660.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_351_fu_24948_p2() {
    icmp_ln1496_351_fu_24948_p2 = (!kernel_data_V_4_724.read().is_01() || !line_buffer_Array_V_4_0_20_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_724.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_20_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_352_fu_24970_p2() {
    icmp_ln1496_352_fu_24970_p2 = (!select_ln65_459_fu_24940_p3.read().is_01() || !select_ln65_461_fu_24962_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_459_fu_24940_p3.read()) < sc_bigint<16>(select_ln65_461_fu_24962_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_353_fu_25022_p2() {
    icmp_ln1496_353_fu_25022_p2 = (!kernel_data_V_4_788.read().is_01() || !kernel_data_V_4_916.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_788.read()) < sc_bigint<16>(kernel_data_V_4_916.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_354_fu_25044_p2() {
    icmp_ln1496_354_fu_25044_p2 = (!kernel_data_V_4_980.read().is_01() || !data_V_data_20_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_980.read()) < sc_bigint<16>(data_V_data_20_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_355_fu_25066_p2() {
    icmp_ln1496_355_fu_25066_p2 = (!select_ln65_464_fu_25036_p3.read().is_01() || !select_ln65_466_fu_25058_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_464_fu_25036_p3.read()) < sc_bigint<16>(select_ln65_466_fu_25058_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_356_fu_44266_p2() {
    icmp_ln1496_356_fu_44266_p2 = (!grp_fu_24984_p18.read().is_01() || !grp_fu_25084_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_24984_p18.read()) < sc_bigint<16>(grp_fu_25084_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_357_fu_48268_p2() {
    icmp_ln1496_357_fu_48268_p2 = (!grp_fu_44244_p18.read().is_01() || !grp_fu_44278_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_44244_p18.read()) < sc_bigint<16>(grp_fu_44278_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_358_fu_25156_p2() {
    icmp_ln1496_358_fu_25156_p2 = (!kernel_data_V_4_213.read().is_01() || !line_buffer_Array_V_4_2_21_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_213.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_21_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_359_fu_25178_p2() {
    icmp_ln1496_359_fu_25178_p2 = (!select_ln65_470_fu_25148_p3.read().is_01() || !select_ln65_472_fu_25170_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_470_fu_25148_p3.read()) < sc_bigint<16>(select_ln65_472_fu_25170_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_35_fu_30850_p2() {
    icmp_ln1496_35_fu_30850_p2 = (!kernel_data_V_4_35.read().is_01() || !kernel_data_V_4_99.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_35.read()) < sc_bigint<16>(kernel_data_V_4_99.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_360_fu_25234_p2() {
    icmp_ln1496_360_fu_25234_p2 = (!kernel_data_V_4_277.read().is_01() || !kernel_data_V_4_341.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_277.read()) < sc_bigint<16>(kernel_data_V_4_341.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_361_fu_25256_p2() {
    icmp_ln1496_361_fu_25256_p2 = (!kernel_data_V_4_469.read().is_01() || !line_buffer_Array_V_4_1_21_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_469.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_21_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_362_fu_25278_p2() {
    icmp_ln1496_362_fu_25278_p2 = (!select_ln65_475_fu_25248_p3.read().is_01() || !select_ln65_477_fu_25270_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_475_fu_25248_p3.read()) < sc_bigint<16>(select_ln65_477_fu_25270_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_363_fu_44303_p2() {
    icmp_ln1496_363_fu_44303_p2 = (!grp_fu_25196_p18.read().is_01() || !grp_fu_25296_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_25196_p18.read()) < sc_bigint<16>(grp_fu_25296_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_364_fu_25334_p2() {
    icmp_ln1496_364_fu_25334_p2 = (!kernel_data_V_4_533.read().is_01() || !kernel_data_V_4_661.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_533.read()) < sc_bigint<16>(kernel_data_V_4_661.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_365_fu_25356_p2() {
    icmp_ln1496_365_fu_25356_p2 = (!kernel_data_V_4_725.read().is_01() || !line_buffer_Array_V_4_0_21_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_725.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_21_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_366_fu_25378_p2() {
    icmp_ln1496_366_fu_25378_p2 = (!select_ln65_481_fu_25348_p3.read().is_01() || !select_ln65_483_fu_25370_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_481_fu_25348_p3.read()) < sc_bigint<16>(select_ln65_483_fu_25370_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_367_fu_25430_p2() {
    icmp_ln1496_367_fu_25430_p2 = (!kernel_data_V_4_789.read().is_01() || !kernel_data_V_4_917.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_789.read()) < sc_bigint<16>(kernel_data_V_4_917.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_368_fu_25452_p2() {
    icmp_ln1496_368_fu_25452_p2 = (!kernel_data_V_4_981.read().is_01() || !data_V_data_21_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_981.read()) < sc_bigint<16>(data_V_data_21_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_369_fu_25474_p2() {
    icmp_ln1496_369_fu_25474_p2 = (!select_ln65_486_fu_25444_p3.read().is_01() || !select_ln65_488_fu_25466_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_486_fu_25444_p3.read()) < sc_bigint<16>(select_ln65_488_fu_25466_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_36_fu_31258_p2() {
    icmp_ln1496_36_fu_31258_p2 = (!kernel_data_V_4_36.read().is_01() || !kernel_data_V_4_100.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_36.read()) < sc_bigint<16>(kernel_data_V_4_100.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_370_fu_44342_p2() {
    icmp_ln1496_370_fu_44342_p2 = (!grp_fu_25392_p18.read().is_01() || !grp_fu_25492_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_25392_p18.read()) < sc_bigint<16>(grp_fu_25492_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_371_fu_48303_p2() {
    icmp_ln1496_371_fu_48303_p2 = (!grp_fu_44320_p18.read().is_01() || !grp_fu_44354_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_44320_p18.read()) < sc_bigint<16>(grp_fu_44354_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_372_fu_25564_p2() {
    icmp_ln1496_372_fu_25564_p2 = (!kernel_data_V_4_214.read().is_01() || !line_buffer_Array_V_4_2_22_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_214.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_22_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_373_fu_25586_p2() {
    icmp_ln1496_373_fu_25586_p2 = (!select_ln65_492_fu_25556_p3.read().is_01() || !select_ln65_494_fu_25578_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_492_fu_25556_p3.read()) < sc_bigint<16>(select_ln65_494_fu_25578_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_374_fu_25642_p2() {
    icmp_ln1496_374_fu_25642_p2 = (!kernel_data_V_4_278.read().is_01() || !kernel_data_V_4_342.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_278.read()) < sc_bigint<16>(kernel_data_V_4_342.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_375_fu_25664_p2() {
    icmp_ln1496_375_fu_25664_p2 = (!kernel_data_V_4_470.read().is_01() || !line_buffer_Array_V_4_1_22_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_470.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_22_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_376_fu_25686_p2() {
    icmp_ln1496_376_fu_25686_p2 = (!select_ln65_497_fu_25656_p3.read().is_01() || !select_ln65_499_fu_25678_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_497_fu_25656_p3.read()) < sc_bigint<16>(select_ln65_499_fu_25678_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_377_fu_44379_p2() {
    icmp_ln1496_377_fu_44379_p2 = (!grp_fu_25604_p18.read().is_01() || !grp_fu_25704_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_25604_p18.read()) < sc_bigint<16>(grp_fu_25704_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_378_fu_25742_p2() {
    icmp_ln1496_378_fu_25742_p2 = (!kernel_data_V_4_534.read().is_01() || !kernel_data_V_4_662.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_534.read()) < sc_bigint<16>(kernel_data_V_4_662.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_379_fu_25764_p2() {
    icmp_ln1496_379_fu_25764_p2 = (!kernel_data_V_4_726.read().is_01() || !line_buffer_Array_V_4_0_22_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_726.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_22_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_37_fu_31666_p2() {
    icmp_ln1496_37_fu_31666_p2 = (!kernel_data_V_4_37.read().is_01() || !kernel_data_V_4_101.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_37.read()) < sc_bigint<16>(kernel_data_V_4_101.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_380_fu_25786_p2() {
    icmp_ln1496_380_fu_25786_p2 = (!select_ln65_503_fu_25756_p3.read().is_01() || !select_ln65_505_fu_25778_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_503_fu_25756_p3.read()) < sc_bigint<16>(select_ln65_505_fu_25778_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_381_fu_25838_p2() {
    icmp_ln1496_381_fu_25838_p2 = (!kernel_data_V_4_790.read().is_01() || !kernel_data_V_4_918.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_790.read()) < sc_bigint<16>(kernel_data_V_4_918.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_382_fu_25860_p2() {
    icmp_ln1496_382_fu_25860_p2 = (!kernel_data_V_4_982.read().is_01() || !data_V_data_22_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_982.read()) < sc_bigint<16>(data_V_data_22_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_383_fu_25882_p2() {
    icmp_ln1496_383_fu_25882_p2 = (!select_ln65_508_fu_25852_p3.read().is_01() || !select_ln65_510_fu_25874_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_508_fu_25852_p3.read()) < sc_bigint<16>(select_ln65_510_fu_25874_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_384_fu_44418_p2() {
    icmp_ln1496_384_fu_44418_p2 = (!grp_fu_25800_p18.read().is_01() || !grp_fu_25900_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_25800_p18.read()) < sc_bigint<16>(grp_fu_25900_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_385_fu_48338_p2() {
    icmp_ln1496_385_fu_48338_p2 = (!grp_fu_44396_p18.read().is_01() || !grp_fu_44430_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_44396_p18.read()) < sc_bigint<16>(grp_fu_44430_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_386_fu_25972_p2() {
    icmp_ln1496_386_fu_25972_p2 = (!kernel_data_V_4_215.read().is_01() || !line_buffer_Array_V_4_2_23_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_215.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_23_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_387_fu_25994_p2() {
    icmp_ln1496_387_fu_25994_p2 = (!select_ln65_514_fu_25964_p3.read().is_01() || !select_ln65_516_fu_25986_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_514_fu_25964_p3.read()) < sc_bigint<16>(select_ln65_516_fu_25986_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_388_fu_26050_p2() {
    icmp_ln1496_388_fu_26050_p2 = (!kernel_data_V_4_279.read().is_01() || !kernel_data_V_4_343.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_279.read()) < sc_bigint<16>(kernel_data_V_4_343.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_389_fu_26072_p2() {
    icmp_ln1496_389_fu_26072_p2 = (!kernel_data_V_4_471.read().is_01() || !line_buffer_Array_V_4_1_23_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_471.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_23_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_38_fu_32074_p2() {
    icmp_ln1496_38_fu_32074_p2 = (!kernel_data_V_4_38.read().is_01() || !kernel_data_V_4_102.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_38.read()) < sc_bigint<16>(kernel_data_V_4_102.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_390_fu_26094_p2() {
    icmp_ln1496_390_fu_26094_p2 = (!select_ln65_519_fu_26064_p3.read().is_01() || !select_ln65_521_fu_26086_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_519_fu_26064_p3.read()) < sc_bigint<16>(select_ln65_521_fu_26086_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_391_fu_44455_p2() {
    icmp_ln1496_391_fu_44455_p2 = (!grp_fu_26012_p18.read().is_01() || !grp_fu_26112_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_26012_p18.read()) < sc_bigint<16>(grp_fu_26112_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_392_fu_26150_p2() {
    icmp_ln1496_392_fu_26150_p2 = (!kernel_data_V_4_535.read().is_01() || !kernel_data_V_4_663.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_535.read()) < sc_bigint<16>(kernel_data_V_4_663.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_393_fu_26172_p2() {
    icmp_ln1496_393_fu_26172_p2 = (!kernel_data_V_4_727.read().is_01() || !line_buffer_Array_V_4_0_23_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_727.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_23_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_394_fu_26194_p2() {
    icmp_ln1496_394_fu_26194_p2 = (!select_ln65_525_fu_26164_p3.read().is_01() || !select_ln65_527_fu_26186_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_525_fu_26164_p3.read()) < sc_bigint<16>(select_ln65_527_fu_26186_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_395_fu_26246_p2() {
    icmp_ln1496_395_fu_26246_p2 = (!kernel_data_V_4_791.read().is_01() || !kernel_data_V_4_919.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_791.read()) < sc_bigint<16>(kernel_data_V_4_919.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_396_fu_26268_p2() {
    icmp_ln1496_396_fu_26268_p2 = (!kernel_data_V_4_983.read().is_01() || !data_V_data_23_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_983.read()) < sc_bigint<16>(data_V_data_23_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_397_fu_26290_p2() {
    icmp_ln1496_397_fu_26290_p2 = (!select_ln65_530_fu_26260_p3.read().is_01() || !select_ln65_532_fu_26282_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_530_fu_26260_p3.read()) < sc_bigint<16>(select_ln65_532_fu_26282_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_398_fu_44494_p2() {
    icmp_ln1496_398_fu_44494_p2 = (!grp_fu_26208_p18.read().is_01() || !grp_fu_26308_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_26208_p18.read()) < sc_bigint<16>(grp_fu_26308_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_399_fu_48373_p2() {
    icmp_ln1496_399_fu_48373_p2 = (!grp_fu_44472_p18.read().is_01() || !grp_fu_44506_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_44472_p18.read()) < sc_bigint<16>(grp_fu_44506_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_39_fu_32482_p2() {
    icmp_ln1496_39_fu_32482_p2 = (!kernel_data_V_4_39.read().is_01() || !kernel_data_V_4_103.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_39.read()) < sc_bigint<16>(kernel_data_V_4_103.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_3_fu_16666_p2() {
    icmp_ln1496_3_fu_16666_p2 = (!kernel_data_V_4_256.read().is_01() || !kernel_data_V_4_320.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_256.read()) < sc_bigint<16>(kernel_data_V_4_320.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_400_fu_26380_p2() {
    icmp_ln1496_400_fu_26380_p2 = (!kernel_data_V_4_216.read().is_01() || !line_buffer_Array_V_4_2_24_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_216.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_24_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_401_fu_26402_p2() {
    icmp_ln1496_401_fu_26402_p2 = (!select_ln65_536_fu_26372_p3.read().is_01() || !select_ln65_538_fu_26394_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_536_fu_26372_p3.read()) < sc_bigint<16>(select_ln65_538_fu_26394_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_402_fu_26458_p2() {
    icmp_ln1496_402_fu_26458_p2 = (!kernel_data_V_4_280.read().is_01() || !kernel_data_V_4_344.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_280.read()) < sc_bigint<16>(kernel_data_V_4_344.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_403_fu_26480_p2() {
    icmp_ln1496_403_fu_26480_p2 = (!kernel_data_V_4_472.read().is_01() || !line_buffer_Array_V_4_1_24_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_472.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_24_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_404_fu_26502_p2() {
    icmp_ln1496_404_fu_26502_p2 = (!select_ln65_541_fu_26472_p3.read().is_01() || !select_ln65_543_fu_26494_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_541_fu_26472_p3.read()) < sc_bigint<16>(select_ln65_543_fu_26494_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_405_fu_44531_p2() {
    icmp_ln1496_405_fu_44531_p2 = (!grp_fu_26420_p18.read().is_01() || !grp_fu_26520_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_26420_p18.read()) < sc_bigint<16>(grp_fu_26520_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_406_fu_26558_p2() {
    icmp_ln1496_406_fu_26558_p2 = (!kernel_data_V_4_536.read().is_01() || !kernel_data_V_4_664.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_536.read()) < sc_bigint<16>(kernel_data_V_4_664.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_407_fu_26580_p2() {
    icmp_ln1496_407_fu_26580_p2 = (!kernel_data_V_4_728.read().is_01() || !line_buffer_Array_V_4_0_24_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_728.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_24_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_408_fu_26602_p2() {
    icmp_ln1496_408_fu_26602_p2 = (!select_ln65_547_fu_26572_p3.read().is_01() || !select_ln65_549_fu_26594_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_547_fu_26572_p3.read()) < sc_bigint<16>(select_ln65_549_fu_26594_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_409_fu_26654_p2() {
    icmp_ln1496_409_fu_26654_p2 = (!kernel_data_V_4_792.read().is_01() || !kernel_data_V_4_920.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_792.read()) < sc_bigint<16>(kernel_data_V_4_920.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_40_fu_32890_p2() {
    icmp_ln1496_40_fu_32890_p2 = (!kernel_data_V_4_40.read().is_01() || !kernel_data_V_4_104.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_40.read()) < sc_bigint<16>(kernel_data_V_4_104.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_410_fu_26676_p2() {
    icmp_ln1496_410_fu_26676_p2 = (!kernel_data_V_4_984.read().is_01() || !data_V_data_24_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_984.read()) < sc_bigint<16>(data_V_data_24_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_411_fu_26698_p2() {
    icmp_ln1496_411_fu_26698_p2 = (!select_ln65_552_fu_26668_p3.read().is_01() || !select_ln65_554_fu_26690_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_552_fu_26668_p3.read()) < sc_bigint<16>(select_ln65_554_fu_26690_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_412_fu_44570_p2() {
    icmp_ln1496_412_fu_44570_p2 = (!grp_fu_26616_p18.read().is_01() || !grp_fu_26716_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_26616_p18.read()) < sc_bigint<16>(grp_fu_26716_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_413_fu_48408_p2() {
    icmp_ln1496_413_fu_48408_p2 = (!grp_fu_44548_p18.read().is_01() || !grp_fu_44582_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_44548_p18.read()) < sc_bigint<16>(grp_fu_44582_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_414_fu_26788_p2() {
    icmp_ln1496_414_fu_26788_p2 = (!kernel_data_V_4_217.read().is_01() || !line_buffer_Array_V_4_2_25_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_217.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_25_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_415_fu_26810_p2() {
    icmp_ln1496_415_fu_26810_p2 = (!select_ln65_558_fu_26780_p3.read().is_01() || !select_ln65_560_fu_26802_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_558_fu_26780_p3.read()) < sc_bigint<16>(select_ln65_560_fu_26802_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_416_fu_26866_p2() {
    icmp_ln1496_416_fu_26866_p2 = (!kernel_data_V_4_281.read().is_01() || !kernel_data_V_4_345.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_281.read()) < sc_bigint<16>(kernel_data_V_4_345.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_417_fu_26888_p2() {
    icmp_ln1496_417_fu_26888_p2 = (!kernel_data_V_4_473.read().is_01() || !line_buffer_Array_V_4_1_25_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_473.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_25_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_418_fu_26910_p2() {
    icmp_ln1496_418_fu_26910_p2 = (!select_ln65_563_fu_26880_p3.read().is_01() || !select_ln65_565_fu_26902_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_563_fu_26880_p3.read()) < sc_bigint<16>(select_ln65_565_fu_26902_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_419_fu_44607_p2() {
    icmp_ln1496_419_fu_44607_p2 = (!grp_fu_26828_p18.read().is_01() || !grp_fu_26928_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_26828_p18.read()) < sc_bigint<16>(grp_fu_26928_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_41_fu_33298_p2() {
    icmp_ln1496_41_fu_33298_p2 = (!kernel_data_V_4_41.read().is_01() || !kernel_data_V_4_105.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_41.read()) < sc_bigint<16>(kernel_data_V_4_105.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_420_fu_26966_p2() {
    icmp_ln1496_420_fu_26966_p2 = (!kernel_data_V_4_537.read().is_01() || !kernel_data_V_4_665.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_537.read()) < sc_bigint<16>(kernel_data_V_4_665.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_421_fu_26988_p2() {
    icmp_ln1496_421_fu_26988_p2 = (!kernel_data_V_4_729.read().is_01() || !line_buffer_Array_V_4_0_25_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_729.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_25_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_422_fu_27010_p2() {
    icmp_ln1496_422_fu_27010_p2 = (!select_ln65_569_fu_26980_p3.read().is_01() || !select_ln65_571_fu_27002_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_569_fu_26980_p3.read()) < sc_bigint<16>(select_ln65_571_fu_27002_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_423_fu_27062_p2() {
    icmp_ln1496_423_fu_27062_p2 = (!kernel_data_V_4_793.read().is_01() || !kernel_data_V_4_921.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_793.read()) < sc_bigint<16>(kernel_data_V_4_921.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_424_fu_27084_p2() {
    icmp_ln1496_424_fu_27084_p2 = (!kernel_data_V_4_985.read().is_01() || !data_V_data_25_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_985.read()) < sc_bigint<16>(data_V_data_25_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_425_fu_27106_p2() {
    icmp_ln1496_425_fu_27106_p2 = (!select_ln65_574_fu_27076_p3.read().is_01() || !select_ln65_576_fu_27098_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_574_fu_27076_p3.read()) < sc_bigint<16>(select_ln65_576_fu_27098_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_426_fu_44646_p2() {
    icmp_ln1496_426_fu_44646_p2 = (!grp_fu_27024_p18.read().is_01() || !grp_fu_27124_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_27024_p18.read()) < sc_bigint<16>(grp_fu_27124_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_427_fu_48443_p2() {
    icmp_ln1496_427_fu_48443_p2 = (!grp_fu_44624_p18.read().is_01() || !grp_fu_44658_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_44624_p18.read()) < sc_bigint<16>(grp_fu_44658_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_428_fu_27196_p2() {
    icmp_ln1496_428_fu_27196_p2 = (!kernel_data_V_4_218.read().is_01() || !line_buffer_Array_V_4_2_26_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_218.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_26_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_429_fu_27218_p2() {
    icmp_ln1496_429_fu_27218_p2 = (!select_ln65_580_fu_27188_p3.read().is_01() || !select_ln65_582_fu_27210_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_580_fu_27188_p3.read()) < sc_bigint<16>(select_ln65_582_fu_27210_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_42_fu_33706_p2() {
    icmp_ln1496_42_fu_33706_p2 = (!kernel_data_V_4_42.read().is_01() || !kernel_data_V_4_106.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_42.read()) < sc_bigint<16>(kernel_data_V_4_106.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_430_fu_27274_p2() {
    icmp_ln1496_430_fu_27274_p2 = (!kernel_data_V_4_282.read().is_01() || !kernel_data_V_4_346.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_282.read()) < sc_bigint<16>(kernel_data_V_4_346.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_431_fu_27296_p2() {
    icmp_ln1496_431_fu_27296_p2 = (!kernel_data_V_4_474.read().is_01() || !line_buffer_Array_V_4_1_26_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_474.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_26_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_432_fu_27318_p2() {
    icmp_ln1496_432_fu_27318_p2 = (!select_ln65_585_fu_27288_p3.read().is_01() || !select_ln65_587_fu_27310_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_585_fu_27288_p3.read()) < sc_bigint<16>(select_ln65_587_fu_27310_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_433_fu_44683_p2() {
    icmp_ln1496_433_fu_44683_p2 = (!grp_fu_27236_p18.read().is_01() || !grp_fu_27336_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_27236_p18.read()) < sc_bigint<16>(grp_fu_27336_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_434_fu_27374_p2() {
    icmp_ln1496_434_fu_27374_p2 = (!kernel_data_V_4_538.read().is_01() || !kernel_data_V_4_666.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_538.read()) < sc_bigint<16>(kernel_data_V_4_666.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_435_fu_27396_p2() {
    icmp_ln1496_435_fu_27396_p2 = (!kernel_data_V_4_730.read().is_01() || !line_buffer_Array_V_4_0_26_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_730.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_26_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_436_fu_27418_p2() {
    icmp_ln1496_436_fu_27418_p2 = (!select_ln65_591_fu_27388_p3.read().is_01() || !select_ln65_593_fu_27410_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_591_fu_27388_p3.read()) < sc_bigint<16>(select_ln65_593_fu_27410_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_437_fu_27470_p2() {
    icmp_ln1496_437_fu_27470_p2 = (!kernel_data_V_4_794.read().is_01() || !kernel_data_V_4_922.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_794.read()) < sc_bigint<16>(kernel_data_V_4_922.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_438_fu_27492_p2() {
    icmp_ln1496_438_fu_27492_p2 = (!kernel_data_V_4_986.read().is_01() || !data_V_data_26_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_986.read()) < sc_bigint<16>(data_V_data_26_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_439_fu_27514_p2() {
    icmp_ln1496_439_fu_27514_p2 = (!select_ln65_596_fu_27484_p3.read().is_01() || !select_ln65_598_fu_27506_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_596_fu_27484_p3.read()) < sc_bigint<16>(select_ln65_598_fu_27506_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_43_fu_34114_p2() {
    icmp_ln1496_43_fu_34114_p2 = (!kernel_data_V_4_43.read().is_01() || !kernel_data_V_4_107.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_43.read()) < sc_bigint<16>(kernel_data_V_4_107.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_440_fu_44722_p2() {
    icmp_ln1496_440_fu_44722_p2 = (!grp_fu_27432_p18.read().is_01() || !grp_fu_27532_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_27432_p18.read()) < sc_bigint<16>(grp_fu_27532_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_441_fu_48478_p2() {
    icmp_ln1496_441_fu_48478_p2 = (!grp_fu_44700_p18.read().is_01() || !grp_fu_44734_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_44700_p18.read()) < sc_bigint<16>(grp_fu_44734_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_442_fu_27604_p2() {
    icmp_ln1496_442_fu_27604_p2 = (!kernel_data_V_4_219.read().is_01() || !line_buffer_Array_V_4_2_27_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_219.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_27_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_443_fu_27626_p2() {
    icmp_ln1496_443_fu_27626_p2 = (!select_ln65_602_fu_27596_p3.read().is_01() || !select_ln65_604_fu_27618_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_602_fu_27596_p3.read()) < sc_bigint<16>(select_ln65_604_fu_27618_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_444_fu_27682_p2() {
    icmp_ln1496_444_fu_27682_p2 = (!kernel_data_V_4_283.read().is_01() || !kernel_data_V_4_347.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_283.read()) < sc_bigint<16>(kernel_data_V_4_347.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_445_fu_27704_p2() {
    icmp_ln1496_445_fu_27704_p2 = (!kernel_data_V_4_475.read().is_01() || !line_buffer_Array_V_4_1_27_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_475.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_27_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_446_fu_27726_p2() {
    icmp_ln1496_446_fu_27726_p2 = (!select_ln65_607_fu_27696_p3.read().is_01() || !select_ln65_609_fu_27718_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_607_fu_27696_p3.read()) < sc_bigint<16>(select_ln65_609_fu_27718_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_447_fu_44759_p2() {
    icmp_ln1496_447_fu_44759_p2 = (!grp_fu_27644_p18.read().is_01() || !grp_fu_27744_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_27644_p18.read()) < sc_bigint<16>(grp_fu_27744_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_448_fu_27782_p2() {
    icmp_ln1496_448_fu_27782_p2 = (!kernel_data_V_4_539.read().is_01() || !kernel_data_V_4_667.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_539.read()) < sc_bigint<16>(kernel_data_V_4_667.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_449_fu_27804_p2() {
    icmp_ln1496_449_fu_27804_p2 = (!kernel_data_V_4_731.read().is_01() || !line_buffer_Array_V_4_0_27_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_731.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_27_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_44_fu_34522_p2() {
    icmp_ln1496_44_fu_34522_p2 = (!kernel_data_V_4_44.read().is_01() || !kernel_data_V_4_108.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_44.read()) < sc_bigint<16>(kernel_data_V_4_108.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_450_fu_27826_p2() {
    icmp_ln1496_450_fu_27826_p2 = (!select_ln65_613_fu_27796_p3.read().is_01() || !select_ln65_615_fu_27818_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_613_fu_27796_p3.read()) < sc_bigint<16>(select_ln65_615_fu_27818_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_451_fu_27878_p2() {
    icmp_ln1496_451_fu_27878_p2 = (!kernel_data_V_4_795.read().is_01() || !kernel_data_V_4_923.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_795.read()) < sc_bigint<16>(kernel_data_V_4_923.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_452_fu_27900_p2() {
    icmp_ln1496_452_fu_27900_p2 = (!kernel_data_V_4_987.read().is_01() || !data_V_data_27_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_987.read()) < sc_bigint<16>(data_V_data_27_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_453_fu_27922_p2() {
    icmp_ln1496_453_fu_27922_p2 = (!select_ln65_618_fu_27892_p3.read().is_01() || !select_ln65_620_fu_27914_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_618_fu_27892_p3.read()) < sc_bigint<16>(select_ln65_620_fu_27914_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_454_fu_44798_p2() {
    icmp_ln1496_454_fu_44798_p2 = (!grp_fu_27840_p18.read().is_01() || !grp_fu_27940_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_27840_p18.read()) < sc_bigint<16>(grp_fu_27940_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_455_fu_48513_p2() {
    icmp_ln1496_455_fu_48513_p2 = (!grp_fu_44776_p18.read().is_01() || !grp_fu_44810_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_44776_p18.read()) < sc_bigint<16>(grp_fu_44810_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_456_fu_28012_p2() {
    icmp_ln1496_456_fu_28012_p2 = (!kernel_data_V_4_220.read().is_01() || !line_buffer_Array_V_4_2_28_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_220.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_28_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_457_fu_28034_p2() {
    icmp_ln1496_457_fu_28034_p2 = (!select_ln65_624_fu_28004_p3.read().is_01() || !select_ln65_626_fu_28026_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_624_fu_28004_p3.read()) < sc_bigint<16>(select_ln65_626_fu_28026_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_458_fu_28090_p2() {
    icmp_ln1496_458_fu_28090_p2 = (!kernel_data_V_4_284.read().is_01() || !kernel_data_V_4_348.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_284.read()) < sc_bigint<16>(kernel_data_V_4_348.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_459_fu_28112_p2() {
    icmp_ln1496_459_fu_28112_p2 = (!kernel_data_V_4_476.read().is_01() || !line_buffer_Array_V_4_1_28_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_476.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_28_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_45_fu_34930_p2() {
    icmp_ln1496_45_fu_34930_p2 = (!kernel_data_V_4_45.read().is_01() || !kernel_data_V_4_109.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_45.read()) < sc_bigint<16>(kernel_data_V_4_109.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_460_fu_28134_p2() {
    icmp_ln1496_460_fu_28134_p2 = (!select_ln65_629_fu_28104_p3.read().is_01() || !select_ln65_631_fu_28126_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_629_fu_28104_p3.read()) < sc_bigint<16>(select_ln65_631_fu_28126_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_461_fu_44835_p2() {
    icmp_ln1496_461_fu_44835_p2 = (!grp_fu_28052_p18.read().is_01() || !grp_fu_28152_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_28052_p18.read()) < sc_bigint<16>(grp_fu_28152_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_462_fu_28190_p2() {
    icmp_ln1496_462_fu_28190_p2 = (!kernel_data_V_4_540.read().is_01() || !kernel_data_V_4_668.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_540.read()) < sc_bigint<16>(kernel_data_V_4_668.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_463_fu_28212_p2() {
    icmp_ln1496_463_fu_28212_p2 = (!kernel_data_V_4_732.read().is_01() || !line_buffer_Array_V_4_0_28_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_732.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_28_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_464_fu_28234_p2() {
    icmp_ln1496_464_fu_28234_p2 = (!select_ln65_635_fu_28204_p3.read().is_01() || !select_ln65_637_fu_28226_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_635_fu_28204_p3.read()) < sc_bigint<16>(select_ln65_637_fu_28226_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_465_fu_28286_p2() {
    icmp_ln1496_465_fu_28286_p2 = (!kernel_data_V_4_796.read().is_01() || !kernel_data_V_4_924.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_796.read()) < sc_bigint<16>(kernel_data_V_4_924.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_466_fu_28308_p2() {
    icmp_ln1496_466_fu_28308_p2 = (!kernel_data_V_4_988.read().is_01() || !data_V_data_28_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_988.read()) < sc_bigint<16>(data_V_data_28_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_467_fu_28330_p2() {
    icmp_ln1496_467_fu_28330_p2 = (!select_ln65_640_fu_28300_p3.read().is_01() || !select_ln65_642_fu_28322_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_640_fu_28300_p3.read()) < sc_bigint<16>(select_ln65_642_fu_28322_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_468_fu_44874_p2() {
    icmp_ln1496_468_fu_44874_p2 = (!grp_fu_28248_p18.read().is_01() || !grp_fu_28348_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_28248_p18.read()) < sc_bigint<16>(grp_fu_28348_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_469_fu_48548_p2() {
    icmp_ln1496_469_fu_48548_p2 = (!grp_fu_44852_p18.read().is_01() || !grp_fu_44886_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_44852_p18.read()) < sc_bigint<16>(grp_fu_44886_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_46_fu_35338_p2() {
    icmp_ln1496_46_fu_35338_p2 = (!kernel_data_V_4_46.read().is_01() || !kernel_data_V_4_110.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_46.read()) < sc_bigint<16>(kernel_data_V_4_110.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_470_fu_28420_p2() {
    icmp_ln1496_470_fu_28420_p2 = (!kernel_data_V_4_221.read().is_01() || !line_buffer_Array_V_4_2_29_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_221.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_29_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_471_fu_28442_p2() {
    icmp_ln1496_471_fu_28442_p2 = (!select_ln65_646_fu_28412_p3.read().is_01() || !select_ln65_648_fu_28434_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_646_fu_28412_p3.read()) < sc_bigint<16>(select_ln65_648_fu_28434_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_472_fu_28498_p2() {
    icmp_ln1496_472_fu_28498_p2 = (!kernel_data_V_4_285.read().is_01() || !kernel_data_V_4_349.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_285.read()) < sc_bigint<16>(kernel_data_V_4_349.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_473_fu_28520_p2() {
    icmp_ln1496_473_fu_28520_p2 = (!kernel_data_V_4_477.read().is_01() || !line_buffer_Array_V_4_1_29_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_477.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_29_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_474_fu_28542_p2() {
    icmp_ln1496_474_fu_28542_p2 = (!select_ln65_651_fu_28512_p3.read().is_01() || !select_ln65_653_fu_28534_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_651_fu_28512_p3.read()) < sc_bigint<16>(select_ln65_653_fu_28534_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_475_fu_44911_p2() {
    icmp_ln1496_475_fu_44911_p2 = (!grp_fu_28460_p18.read().is_01() || !grp_fu_28560_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_28460_p18.read()) < sc_bigint<16>(grp_fu_28560_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_476_fu_28598_p2() {
    icmp_ln1496_476_fu_28598_p2 = (!kernel_data_V_4_541.read().is_01() || !kernel_data_V_4_669.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_541.read()) < sc_bigint<16>(kernel_data_V_4_669.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_477_fu_28620_p2() {
    icmp_ln1496_477_fu_28620_p2 = (!kernel_data_V_4_733.read().is_01() || !line_buffer_Array_V_4_0_29_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_733.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_29_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_478_fu_28642_p2() {
    icmp_ln1496_478_fu_28642_p2 = (!select_ln65_657_fu_28612_p3.read().is_01() || !select_ln65_659_fu_28634_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_657_fu_28612_p3.read()) < sc_bigint<16>(select_ln65_659_fu_28634_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_479_fu_28694_p2() {
    icmp_ln1496_479_fu_28694_p2 = (!kernel_data_V_4_797.read().is_01() || !kernel_data_V_4_925.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_797.read()) < sc_bigint<16>(kernel_data_V_4_925.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_47_fu_35746_p2() {
    icmp_ln1496_47_fu_35746_p2 = (!kernel_data_V_4_47.read().is_01() || !kernel_data_V_4_111.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_47.read()) < sc_bigint<16>(kernel_data_V_4_111.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_480_fu_28716_p2() {
    icmp_ln1496_480_fu_28716_p2 = (!kernel_data_V_4_989.read().is_01() || !data_V_data_29_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_989.read()) < sc_bigint<16>(data_V_data_29_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_481_fu_28738_p2() {
    icmp_ln1496_481_fu_28738_p2 = (!select_ln65_662_fu_28708_p3.read().is_01() || !select_ln65_664_fu_28730_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_662_fu_28708_p3.read()) < sc_bigint<16>(select_ln65_664_fu_28730_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_482_fu_44950_p2() {
    icmp_ln1496_482_fu_44950_p2 = (!grp_fu_28656_p18.read().is_01() || !grp_fu_28756_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_28656_p18.read()) < sc_bigint<16>(grp_fu_28756_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_483_fu_48583_p2() {
    icmp_ln1496_483_fu_48583_p2 = (!grp_fu_44928_p18.read().is_01() || !grp_fu_44962_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_44928_p18.read()) < sc_bigint<16>(grp_fu_44962_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_484_fu_28828_p2() {
    icmp_ln1496_484_fu_28828_p2 = (!kernel_data_V_4_222.read().is_01() || !line_buffer_Array_V_4_2_30_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_222.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_30_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_485_fu_28850_p2() {
    icmp_ln1496_485_fu_28850_p2 = (!select_ln65_668_fu_28820_p3.read().is_01() || !select_ln65_670_fu_28842_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_668_fu_28820_p3.read()) < sc_bigint<16>(select_ln65_670_fu_28842_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_486_fu_28906_p2() {
    icmp_ln1496_486_fu_28906_p2 = (!kernel_data_V_4_286.read().is_01() || !kernel_data_V_4_350.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_286.read()) < sc_bigint<16>(kernel_data_V_4_350.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_487_fu_28928_p2() {
    icmp_ln1496_487_fu_28928_p2 = (!kernel_data_V_4_478.read().is_01() || !line_buffer_Array_V_4_1_30_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_478.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_30_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_488_fu_28950_p2() {
    icmp_ln1496_488_fu_28950_p2 = (!select_ln65_673_fu_28920_p3.read().is_01() || !select_ln65_675_fu_28942_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_673_fu_28920_p3.read()) < sc_bigint<16>(select_ln65_675_fu_28942_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_489_fu_44987_p2() {
    icmp_ln1496_489_fu_44987_p2 = (!grp_fu_28868_p18.read().is_01() || !grp_fu_28968_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_28868_p18.read()) < sc_bigint<16>(grp_fu_28968_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_48_fu_36154_p2() {
    icmp_ln1496_48_fu_36154_p2 = (!kernel_data_V_4_48.read().is_01() || !kernel_data_V_4_112.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_48.read()) < sc_bigint<16>(kernel_data_V_4_112.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_490_fu_29006_p2() {
    icmp_ln1496_490_fu_29006_p2 = (!kernel_data_V_4_542.read().is_01() || !kernel_data_V_4_670.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_542.read()) < sc_bigint<16>(kernel_data_V_4_670.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_491_fu_29028_p2() {
    icmp_ln1496_491_fu_29028_p2 = (!kernel_data_V_4_734.read().is_01() || !line_buffer_Array_V_4_0_30_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_734.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_30_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_492_fu_29050_p2() {
    icmp_ln1496_492_fu_29050_p2 = (!select_ln65_679_fu_29020_p3.read().is_01() || !select_ln65_681_fu_29042_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_679_fu_29020_p3.read()) < sc_bigint<16>(select_ln65_681_fu_29042_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_493_fu_29102_p2() {
    icmp_ln1496_493_fu_29102_p2 = (!kernel_data_V_4_798.read().is_01() || !kernel_data_V_4_926.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_798.read()) < sc_bigint<16>(kernel_data_V_4_926.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_494_fu_29124_p2() {
    icmp_ln1496_494_fu_29124_p2 = (!kernel_data_V_4_990.read().is_01() || !data_V_data_30_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_990.read()) < sc_bigint<16>(data_V_data_30_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_495_fu_29146_p2() {
    icmp_ln1496_495_fu_29146_p2 = (!select_ln65_684_fu_29116_p3.read().is_01() || !select_ln65_686_fu_29138_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_684_fu_29116_p3.read()) < sc_bigint<16>(select_ln65_686_fu_29138_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_496_fu_45026_p2() {
    icmp_ln1496_496_fu_45026_p2 = (!grp_fu_29064_p18.read().is_01() || !grp_fu_29164_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_29064_p18.read()) < sc_bigint<16>(grp_fu_29164_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_497_fu_48618_p2() {
    icmp_ln1496_497_fu_48618_p2 = (!grp_fu_45004_p18.read().is_01() || !grp_fu_45038_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_45004_p18.read()) < sc_bigint<16>(grp_fu_45038_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_498_fu_29236_p2() {
    icmp_ln1496_498_fu_29236_p2 = (!kernel_data_V_4_223.read().is_01() || !line_buffer_Array_V_4_2_31_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_223.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_31_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_499_fu_29258_p2() {
    icmp_ln1496_499_fu_29258_p2 = (!select_ln65_690_fu_29228_p3.read().is_01() || !select_ln65_692_fu_29250_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_690_fu_29228_p3.read()) < sc_bigint<16>(select_ln65_692_fu_29250_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_49_fu_36562_p2() {
    icmp_ln1496_49_fu_36562_p2 = (!kernel_data_V_4_49.read().is_01() || !kernel_data_V_4_113.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_49.read()) < sc_bigint<16>(kernel_data_V_4_113.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_4_fu_16688_p2() {
    icmp_ln1496_4_fu_16688_p2 = (!kernel_data_V_4_448.read().is_01() || !line_buffer_Array_V_4_1_0_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_448.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_0_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_500_fu_29314_p2() {
    icmp_ln1496_500_fu_29314_p2 = (!kernel_data_V_4_287.read().is_01() || !kernel_data_V_4_351.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_287.read()) < sc_bigint<16>(kernel_data_V_4_351.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_501_fu_29336_p2() {
    icmp_ln1496_501_fu_29336_p2 = (!kernel_data_V_4_479.read().is_01() || !line_buffer_Array_V_4_1_31_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_479.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_31_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_502_fu_29358_p2() {
    icmp_ln1496_502_fu_29358_p2 = (!select_ln65_695_fu_29328_p3.read().is_01() || !select_ln65_697_fu_29350_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_695_fu_29328_p3.read()) < sc_bigint<16>(select_ln65_697_fu_29350_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_503_fu_45063_p2() {
    icmp_ln1496_503_fu_45063_p2 = (!grp_fu_29276_p18.read().is_01() || !grp_fu_29376_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_29276_p18.read()) < sc_bigint<16>(grp_fu_29376_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_504_fu_29414_p2() {
    icmp_ln1496_504_fu_29414_p2 = (!kernel_data_V_4_543.read().is_01() || !kernel_data_V_4_671.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_543.read()) < sc_bigint<16>(kernel_data_V_4_671.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_505_fu_29436_p2() {
    icmp_ln1496_505_fu_29436_p2 = (!kernel_data_V_4_735.read().is_01() || !line_buffer_Array_V_4_0_31_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_735.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_31_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_506_fu_29458_p2() {
    icmp_ln1496_506_fu_29458_p2 = (!select_ln65_701_fu_29428_p3.read().is_01() || !select_ln65_703_fu_29450_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_701_fu_29428_p3.read()) < sc_bigint<16>(select_ln65_703_fu_29450_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_507_fu_29510_p2() {
    icmp_ln1496_507_fu_29510_p2 = (!kernel_data_V_4_799.read().is_01() || !kernel_data_V_4_927.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_799.read()) < sc_bigint<16>(kernel_data_V_4_927.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_508_fu_29532_p2() {
    icmp_ln1496_508_fu_29532_p2 = (!kernel_data_V_4_991.read().is_01() || !data_V_data_31_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_991.read()) < sc_bigint<16>(data_V_data_31_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_509_fu_29554_p2() {
    icmp_ln1496_509_fu_29554_p2 = (!select_ln65_706_fu_29524_p3.read().is_01() || !select_ln65_708_fu_29546_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_706_fu_29524_p3.read()) < sc_bigint<16>(select_ln65_708_fu_29546_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_50_fu_36970_p2() {
    icmp_ln1496_50_fu_36970_p2 = (!kernel_data_V_4_50.read().is_01() || !kernel_data_V_4_114.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_50.read()) < sc_bigint<16>(kernel_data_V_4_114.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_510_fu_45102_p2() {
    icmp_ln1496_510_fu_45102_p2 = (!grp_fu_29472_p18.read().is_01() || !grp_fu_29572_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_29472_p18.read()) < sc_bigint<16>(grp_fu_29572_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_511_fu_48653_p2() {
    icmp_ln1496_511_fu_48653_p2 = (!grp_fu_45080_p18.read().is_01() || !grp_fu_45114_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_45080_p18.read()) < sc_bigint<16>(grp_fu_45114_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_512_fu_29644_p2() {
    icmp_ln1496_512_fu_29644_p2 = (!kernel_data_V_4_224.read().is_01() || !line_buffer_Array_V_4_2_32_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_224.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_32_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_513_fu_29666_p2() {
    icmp_ln1496_513_fu_29666_p2 = (!select_ln65_712_fu_29636_p3.read().is_01() || !select_ln65_714_fu_29658_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_712_fu_29636_p3.read()) < sc_bigint<16>(select_ln65_714_fu_29658_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_514_fu_29722_p2() {
    icmp_ln1496_514_fu_29722_p2 = (!kernel_data_V_4_288.read().is_01() || !kernel_data_V_4_352.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_288.read()) < sc_bigint<16>(kernel_data_V_4_352.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_515_fu_29744_p2() {
    icmp_ln1496_515_fu_29744_p2 = (!kernel_data_V_4_480.read().is_01() || !line_buffer_Array_V_4_1_32_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_480.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_32_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_516_fu_29766_p2() {
    icmp_ln1496_516_fu_29766_p2 = (!select_ln65_717_fu_29736_p3.read().is_01() || !select_ln65_719_fu_29758_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_717_fu_29736_p3.read()) < sc_bigint<16>(select_ln65_719_fu_29758_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_517_fu_45139_p2() {
    icmp_ln1496_517_fu_45139_p2 = (!grp_fu_29684_p18.read().is_01() || !grp_fu_29784_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_29684_p18.read()) < sc_bigint<16>(grp_fu_29784_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_518_fu_29822_p2() {
    icmp_ln1496_518_fu_29822_p2 = (!kernel_data_V_4_544.read().is_01() || !kernel_data_V_4_672.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_544.read()) < sc_bigint<16>(kernel_data_V_4_672.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_519_fu_29844_p2() {
    icmp_ln1496_519_fu_29844_p2 = (!kernel_data_V_4_736.read().is_01() || !line_buffer_Array_V_4_0_32_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_736.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_32_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_51_fu_37378_p2() {
    icmp_ln1496_51_fu_37378_p2 = (!kernel_data_V_4_51.read().is_01() || !kernel_data_V_4_115.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_51.read()) < sc_bigint<16>(kernel_data_V_4_115.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_520_fu_29866_p2() {
    icmp_ln1496_520_fu_29866_p2 = (!select_ln65_723_fu_29836_p3.read().is_01() || !select_ln65_725_fu_29858_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_723_fu_29836_p3.read()) < sc_bigint<16>(select_ln65_725_fu_29858_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_521_fu_29918_p2() {
    icmp_ln1496_521_fu_29918_p2 = (!kernel_data_V_4_800.read().is_01() || !kernel_data_V_4_928.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_800.read()) < sc_bigint<16>(kernel_data_V_4_928.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_522_fu_29940_p2() {
    icmp_ln1496_522_fu_29940_p2 = (!kernel_data_V_4_992.read().is_01() || !data_V_data_32_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_992.read()) < sc_bigint<16>(data_V_data_32_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_523_fu_29962_p2() {
    icmp_ln1496_523_fu_29962_p2 = (!select_ln65_728_fu_29932_p3.read().is_01() || !select_ln65_730_fu_29954_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_728_fu_29932_p3.read()) < sc_bigint<16>(select_ln65_730_fu_29954_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_524_fu_45178_p2() {
    icmp_ln1496_524_fu_45178_p2 = (!grp_fu_29880_p18.read().is_01() || !grp_fu_29980_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_29880_p18.read()) < sc_bigint<16>(grp_fu_29980_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_525_fu_48688_p2() {
    icmp_ln1496_525_fu_48688_p2 = (!grp_fu_45156_p18.read().is_01() || !grp_fu_45190_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_45156_p18.read()) < sc_bigint<16>(grp_fu_45190_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_526_fu_30052_p2() {
    icmp_ln1496_526_fu_30052_p2 = (!kernel_data_V_4_225.read().is_01() || !line_buffer_Array_V_4_2_33_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_225.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_33_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_527_fu_30074_p2() {
    icmp_ln1496_527_fu_30074_p2 = (!select_ln65_734_fu_30044_p3.read().is_01() || !select_ln65_736_fu_30066_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_734_fu_30044_p3.read()) < sc_bigint<16>(select_ln65_736_fu_30066_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_528_fu_30130_p2() {
    icmp_ln1496_528_fu_30130_p2 = (!kernel_data_V_4_289.read().is_01() || !kernel_data_V_4_353.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_289.read()) < sc_bigint<16>(kernel_data_V_4_353.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_529_fu_30152_p2() {
    icmp_ln1496_529_fu_30152_p2 = (!kernel_data_V_4_481.read().is_01() || !line_buffer_Array_V_4_1_33_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_481.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_33_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_52_fu_37786_p2() {
    icmp_ln1496_52_fu_37786_p2 = (!kernel_data_V_4_52.read().is_01() || !kernel_data_V_4_116.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_52.read()) < sc_bigint<16>(kernel_data_V_4_116.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_530_fu_30174_p2() {
    icmp_ln1496_530_fu_30174_p2 = (!select_ln65_739_fu_30144_p3.read().is_01() || !select_ln65_741_fu_30166_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_739_fu_30144_p3.read()) < sc_bigint<16>(select_ln65_741_fu_30166_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_531_fu_45215_p2() {
    icmp_ln1496_531_fu_45215_p2 = (!grp_fu_30092_p18.read().is_01() || !grp_fu_30192_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_30092_p18.read()) < sc_bigint<16>(grp_fu_30192_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_532_fu_30230_p2() {
    icmp_ln1496_532_fu_30230_p2 = (!kernel_data_V_4_545.read().is_01() || !kernel_data_V_4_673.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_545.read()) < sc_bigint<16>(kernel_data_V_4_673.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_533_fu_30252_p2() {
    icmp_ln1496_533_fu_30252_p2 = (!kernel_data_V_4_737.read().is_01() || !line_buffer_Array_V_4_0_33_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_737.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_33_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_534_fu_30274_p2() {
    icmp_ln1496_534_fu_30274_p2 = (!select_ln65_745_fu_30244_p3.read().is_01() || !select_ln65_747_fu_30266_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_745_fu_30244_p3.read()) < sc_bigint<16>(select_ln65_747_fu_30266_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_535_fu_30326_p2() {
    icmp_ln1496_535_fu_30326_p2 = (!kernel_data_V_4_801.read().is_01() || !kernel_data_V_4_929.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_801.read()) < sc_bigint<16>(kernel_data_V_4_929.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_536_fu_30348_p2() {
    icmp_ln1496_536_fu_30348_p2 = (!kernel_data_V_4_993.read().is_01() || !data_V_data_33_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_993.read()) < sc_bigint<16>(data_V_data_33_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_537_fu_30370_p2() {
    icmp_ln1496_537_fu_30370_p2 = (!select_ln65_750_fu_30340_p3.read().is_01() || !select_ln65_752_fu_30362_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_750_fu_30340_p3.read()) < sc_bigint<16>(select_ln65_752_fu_30362_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_538_fu_45254_p2() {
    icmp_ln1496_538_fu_45254_p2 = (!grp_fu_30288_p18.read().is_01() || !grp_fu_30388_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_30288_p18.read()) < sc_bigint<16>(grp_fu_30388_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_539_fu_48723_p2() {
    icmp_ln1496_539_fu_48723_p2 = (!grp_fu_45232_p18.read().is_01() || !grp_fu_45266_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_45232_p18.read()) < sc_bigint<16>(grp_fu_45266_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_53_fu_38194_p2() {
    icmp_ln1496_53_fu_38194_p2 = (!kernel_data_V_4_53.read().is_01() || !kernel_data_V_4_117.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_53.read()) < sc_bigint<16>(kernel_data_V_4_117.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_540_fu_30460_p2() {
    icmp_ln1496_540_fu_30460_p2 = (!kernel_data_V_4_226.read().is_01() || !line_buffer_Array_V_4_2_34_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_226.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_34_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_541_fu_30482_p2() {
    icmp_ln1496_541_fu_30482_p2 = (!select_ln65_756_fu_30452_p3.read().is_01() || !select_ln65_758_fu_30474_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_756_fu_30452_p3.read()) < sc_bigint<16>(select_ln65_758_fu_30474_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_542_fu_30538_p2() {
    icmp_ln1496_542_fu_30538_p2 = (!kernel_data_V_4_290.read().is_01() || !kernel_data_V_4_354.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_290.read()) < sc_bigint<16>(kernel_data_V_4_354.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_543_fu_30560_p2() {
    icmp_ln1496_543_fu_30560_p2 = (!kernel_data_V_4_482.read().is_01() || !line_buffer_Array_V_4_1_34_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_482.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_34_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_544_fu_30582_p2() {
    icmp_ln1496_544_fu_30582_p2 = (!select_ln65_761_fu_30552_p3.read().is_01() || !select_ln65_763_fu_30574_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_761_fu_30552_p3.read()) < sc_bigint<16>(select_ln65_763_fu_30574_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_545_fu_45291_p2() {
    icmp_ln1496_545_fu_45291_p2 = (!grp_fu_30500_p18.read().is_01() || !grp_fu_30600_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_30500_p18.read()) < sc_bigint<16>(grp_fu_30600_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_546_fu_30638_p2() {
    icmp_ln1496_546_fu_30638_p2 = (!kernel_data_V_4_546.read().is_01() || !kernel_data_V_4_674.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_546.read()) < sc_bigint<16>(kernel_data_V_4_674.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_547_fu_30660_p2() {
    icmp_ln1496_547_fu_30660_p2 = (!kernel_data_V_4_738.read().is_01() || !line_buffer_Array_V_4_0_34_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_738.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_34_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_548_fu_30682_p2() {
    icmp_ln1496_548_fu_30682_p2 = (!select_ln65_767_fu_30652_p3.read().is_01() || !select_ln65_769_fu_30674_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_767_fu_30652_p3.read()) < sc_bigint<16>(select_ln65_769_fu_30674_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_549_fu_30734_p2() {
    icmp_ln1496_549_fu_30734_p2 = (!kernel_data_V_4_802.read().is_01() || !kernel_data_V_4_930.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_802.read()) < sc_bigint<16>(kernel_data_V_4_930.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_54_fu_38602_p2() {
    icmp_ln1496_54_fu_38602_p2 = (!kernel_data_V_4_54.read().is_01() || !kernel_data_V_4_118.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_54.read()) < sc_bigint<16>(kernel_data_V_4_118.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_550_fu_30756_p2() {
    icmp_ln1496_550_fu_30756_p2 = (!kernel_data_V_4_994.read().is_01() || !data_V_data_34_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_994.read()) < sc_bigint<16>(data_V_data_34_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_551_fu_30778_p2() {
    icmp_ln1496_551_fu_30778_p2 = (!select_ln65_772_fu_30748_p3.read().is_01() || !select_ln65_774_fu_30770_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_772_fu_30748_p3.read()) < sc_bigint<16>(select_ln65_774_fu_30770_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_552_fu_45330_p2() {
    icmp_ln1496_552_fu_45330_p2 = (!grp_fu_30696_p18.read().is_01() || !grp_fu_30796_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_30696_p18.read()) < sc_bigint<16>(grp_fu_30796_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_553_fu_48758_p2() {
    icmp_ln1496_553_fu_48758_p2 = (!grp_fu_45308_p18.read().is_01() || !grp_fu_45342_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_45308_p18.read()) < sc_bigint<16>(grp_fu_45342_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_554_fu_30868_p2() {
    icmp_ln1496_554_fu_30868_p2 = (!kernel_data_V_4_227.read().is_01() || !line_buffer_Array_V_4_2_35_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_227.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_35_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_555_fu_30890_p2() {
    icmp_ln1496_555_fu_30890_p2 = (!select_ln65_778_fu_30860_p3.read().is_01() || !select_ln65_780_fu_30882_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_778_fu_30860_p3.read()) < sc_bigint<16>(select_ln65_780_fu_30882_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_556_fu_30946_p2() {
    icmp_ln1496_556_fu_30946_p2 = (!kernel_data_V_4_291.read().is_01() || !kernel_data_V_4_355.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_291.read()) < sc_bigint<16>(kernel_data_V_4_355.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_557_fu_30968_p2() {
    icmp_ln1496_557_fu_30968_p2 = (!kernel_data_V_4_483.read().is_01() || !line_buffer_Array_V_4_1_35_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_483.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_35_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_558_fu_30990_p2() {
    icmp_ln1496_558_fu_30990_p2 = (!select_ln65_783_fu_30960_p3.read().is_01() || !select_ln65_785_fu_30982_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_783_fu_30960_p3.read()) < sc_bigint<16>(select_ln65_785_fu_30982_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_559_fu_45367_p2() {
    icmp_ln1496_559_fu_45367_p2 = (!grp_fu_30908_p18.read().is_01() || !grp_fu_31008_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_30908_p18.read()) < sc_bigint<16>(grp_fu_31008_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_55_fu_39010_p2() {
    icmp_ln1496_55_fu_39010_p2 = (!kernel_data_V_4_55.read().is_01() || !kernel_data_V_4_119.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_55.read()) < sc_bigint<16>(kernel_data_V_4_119.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_560_fu_31046_p2() {
    icmp_ln1496_560_fu_31046_p2 = (!kernel_data_V_4_547.read().is_01() || !kernel_data_V_4_675.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_547.read()) < sc_bigint<16>(kernel_data_V_4_675.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_561_fu_31068_p2() {
    icmp_ln1496_561_fu_31068_p2 = (!kernel_data_V_4_739.read().is_01() || !line_buffer_Array_V_4_0_35_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_739.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_35_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_562_fu_31090_p2() {
    icmp_ln1496_562_fu_31090_p2 = (!select_ln65_789_fu_31060_p3.read().is_01() || !select_ln65_791_fu_31082_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_789_fu_31060_p3.read()) < sc_bigint<16>(select_ln65_791_fu_31082_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_563_fu_31142_p2() {
    icmp_ln1496_563_fu_31142_p2 = (!kernel_data_V_4_803.read().is_01() || !kernel_data_V_4_931.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_803.read()) < sc_bigint<16>(kernel_data_V_4_931.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_564_fu_31164_p2() {
    icmp_ln1496_564_fu_31164_p2 = (!kernel_data_V_4_995.read().is_01() || !data_V_data_35_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_995.read()) < sc_bigint<16>(data_V_data_35_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_565_fu_31186_p2() {
    icmp_ln1496_565_fu_31186_p2 = (!select_ln65_794_fu_31156_p3.read().is_01() || !select_ln65_796_fu_31178_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_794_fu_31156_p3.read()) < sc_bigint<16>(select_ln65_796_fu_31178_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_566_fu_45406_p2() {
    icmp_ln1496_566_fu_45406_p2 = (!grp_fu_31104_p18.read().is_01() || !grp_fu_31204_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_31104_p18.read()) < sc_bigint<16>(grp_fu_31204_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_567_fu_48793_p2() {
    icmp_ln1496_567_fu_48793_p2 = (!grp_fu_45384_p18.read().is_01() || !grp_fu_45418_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_45384_p18.read()) < sc_bigint<16>(grp_fu_45418_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_568_fu_31276_p2() {
    icmp_ln1496_568_fu_31276_p2 = (!kernel_data_V_4_228.read().is_01() || !line_buffer_Array_V_4_2_36_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_228.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_36_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_569_fu_31298_p2() {
    icmp_ln1496_569_fu_31298_p2 = (!select_ln65_800_fu_31268_p3.read().is_01() || !select_ln65_802_fu_31290_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_800_fu_31268_p3.read()) < sc_bigint<16>(select_ln65_802_fu_31290_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_56_fu_39418_p2() {
    icmp_ln1496_56_fu_39418_p2 = (!kernel_data_V_4_56.read().is_01() || !kernel_data_V_4_120.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_56.read()) < sc_bigint<16>(kernel_data_V_4_120.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_570_fu_31354_p2() {
    icmp_ln1496_570_fu_31354_p2 = (!kernel_data_V_4_292.read().is_01() || !kernel_data_V_4_356.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_292.read()) < sc_bigint<16>(kernel_data_V_4_356.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_571_fu_31376_p2() {
    icmp_ln1496_571_fu_31376_p2 = (!kernel_data_V_4_484.read().is_01() || !line_buffer_Array_V_4_1_36_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_484.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_36_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_572_fu_31398_p2() {
    icmp_ln1496_572_fu_31398_p2 = (!select_ln65_805_fu_31368_p3.read().is_01() || !select_ln65_807_fu_31390_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_805_fu_31368_p3.read()) < sc_bigint<16>(select_ln65_807_fu_31390_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_573_fu_45443_p2() {
    icmp_ln1496_573_fu_45443_p2 = (!grp_fu_31316_p18.read().is_01() || !grp_fu_31416_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_31316_p18.read()) < sc_bigint<16>(grp_fu_31416_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_574_fu_31454_p2() {
    icmp_ln1496_574_fu_31454_p2 = (!kernel_data_V_4_548.read().is_01() || !kernel_data_V_4_676.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_548.read()) < sc_bigint<16>(kernel_data_V_4_676.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_575_fu_31476_p2() {
    icmp_ln1496_575_fu_31476_p2 = (!kernel_data_V_4_740.read().is_01() || !line_buffer_Array_V_4_0_36_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_740.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_36_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_576_fu_31498_p2() {
    icmp_ln1496_576_fu_31498_p2 = (!select_ln65_811_fu_31468_p3.read().is_01() || !select_ln65_813_fu_31490_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_811_fu_31468_p3.read()) < sc_bigint<16>(select_ln65_813_fu_31490_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_577_fu_31550_p2() {
    icmp_ln1496_577_fu_31550_p2 = (!kernel_data_V_4_804.read().is_01() || !kernel_data_V_4_932.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_804.read()) < sc_bigint<16>(kernel_data_V_4_932.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_578_fu_31572_p2() {
    icmp_ln1496_578_fu_31572_p2 = (!kernel_data_V_4_996.read().is_01() || !data_V_data_36_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_996.read()) < sc_bigint<16>(data_V_data_36_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_579_fu_31594_p2() {
    icmp_ln1496_579_fu_31594_p2 = (!select_ln65_816_fu_31564_p3.read().is_01() || !select_ln65_818_fu_31586_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_816_fu_31564_p3.read()) < sc_bigint<16>(select_ln65_818_fu_31586_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_57_fu_39826_p2() {
    icmp_ln1496_57_fu_39826_p2 = (!kernel_data_V_4_57.read().is_01() || !kernel_data_V_4_121.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_57.read()) < sc_bigint<16>(kernel_data_V_4_121.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_580_fu_45482_p2() {
    icmp_ln1496_580_fu_45482_p2 = (!grp_fu_31512_p18.read().is_01() || !grp_fu_31612_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_31512_p18.read()) < sc_bigint<16>(grp_fu_31612_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_581_fu_48828_p2() {
    icmp_ln1496_581_fu_48828_p2 = (!grp_fu_45460_p18.read().is_01() || !grp_fu_45494_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_45460_p18.read()) < sc_bigint<16>(grp_fu_45494_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_582_fu_31684_p2() {
    icmp_ln1496_582_fu_31684_p2 = (!kernel_data_V_4_229.read().is_01() || !line_buffer_Array_V_4_2_37_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_229.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_37_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_583_fu_31706_p2() {
    icmp_ln1496_583_fu_31706_p2 = (!select_ln65_822_fu_31676_p3.read().is_01() || !select_ln65_824_fu_31698_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_822_fu_31676_p3.read()) < sc_bigint<16>(select_ln65_824_fu_31698_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_584_fu_31762_p2() {
    icmp_ln1496_584_fu_31762_p2 = (!kernel_data_V_4_293.read().is_01() || !kernel_data_V_4_357.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_293.read()) < sc_bigint<16>(kernel_data_V_4_357.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_585_fu_31784_p2() {
    icmp_ln1496_585_fu_31784_p2 = (!kernel_data_V_4_485.read().is_01() || !line_buffer_Array_V_4_1_37_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_485.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_37_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_586_fu_31806_p2() {
    icmp_ln1496_586_fu_31806_p2 = (!select_ln65_827_fu_31776_p3.read().is_01() || !select_ln65_829_fu_31798_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_827_fu_31776_p3.read()) < sc_bigint<16>(select_ln65_829_fu_31798_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_587_fu_45519_p2() {
    icmp_ln1496_587_fu_45519_p2 = (!grp_fu_31724_p18.read().is_01() || !grp_fu_31824_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_31724_p18.read()) < sc_bigint<16>(grp_fu_31824_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_588_fu_31862_p2() {
    icmp_ln1496_588_fu_31862_p2 = (!kernel_data_V_4_549.read().is_01() || !kernel_data_V_4_677.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_549.read()) < sc_bigint<16>(kernel_data_V_4_677.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_589_fu_31884_p2() {
    icmp_ln1496_589_fu_31884_p2 = (!kernel_data_V_4_741.read().is_01() || !line_buffer_Array_V_4_0_37_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_741.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_37_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_58_fu_40234_p2() {
    icmp_ln1496_58_fu_40234_p2 = (!kernel_data_V_4_58.read().is_01() || !kernel_data_V_4_122.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_58.read()) < sc_bigint<16>(kernel_data_V_4_122.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_590_fu_31906_p2() {
    icmp_ln1496_590_fu_31906_p2 = (!select_ln65_833_fu_31876_p3.read().is_01() || !select_ln65_835_fu_31898_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_833_fu_31876_p3.read()) < sc_bigint<16>(select_ln65_835_fu_31898_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_591_fu_31958_p2() {
    icmp_ln1496_591_fu_31958_p2 = (!kernel_data_V_4_805.read().is_01() || !kernel_data_V_4_933.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_805.read()) < sc_bigint<16>(kernel_data_V_4_933.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_592_fu_31980_p2() {
    icmp_ln1496_592_fu_31980_p2 = (!kernel_data_V_4_997.read().is_01() || !data_V_data_37_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_997.read()) < sc_bigint<16>(data_V_data_37_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_593_fu_32002_p2() {
    icmp_ln1496_593_fu_32002_p2 = (!select_ln65_838_fu_31972_p3.read().is_01() || !select_ln65_840_fu_31994_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_838_fu_31972_p3.read()) < sc_bigint<16>(select_ln65_840_fu_31994_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_594_fu_45558_p2() {
    icmp_ln1496_594_fu_45558_p2 = (!grp_fu_31920_p18.read().is_01() || !grp_fu_32020_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_31920_p18.read()) < sc_bigint<16>(grp_fu_32020_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_595_fu_48863_p2() {
    icmp_ln1496_595_fu_48863_p2 = (!grp_fu_45536_p18.read().is_01() || !grp_fu_45570_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_45536_p18.read()) < sc_bigint<16>(grp_fu_45570_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_596_fu_32092_p2() {
    icmp_ln1496_596_fu_32092_p2 = (!kernel_data_V_4_230.read().is_01() || !line_buffer_Array_V_4_2_38_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_230.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_38_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_597_fu_32114_p2() {
    icmp_ln1496_597_fu_32114_p2 = (!select_ln65_844_fu_32084_p3.read().is_01() || !select_ln65_846_fu_32106_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_844_fu_32084_p3.read()) < sc_bigint<16>(select_ln65_846_fu_32106_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_598_fu_32170_p2() {
    icmp_ln1496_598_fu_32170_p2 = (!kernel_data_V_4_294.read().is_01() || !kernel_data_V_4_358.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_294.read()) < sc_bigint<16>(kernel_data_V_4_358.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_599_fu_32192_p2() {
    icmp_ln1496_599_fu_32192_p2 = (!kernel_data_V_4_486.read().is_01() || !line_buffer_Array_V_4_1_38_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_486.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_38_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_59_fu_40642_p2() {
    icmp_ln1496_59_fu_40642_p2 = (!kernel_data_V_4_59.read().is_01() || !kernel_data_V_4_123.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_59.read()) < sc_bigint<16>(kernel_data_V_4_123.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_5_fu_16710_p2() {
    icmp_ln1496_5_fu_16710_p2 = (!select_ln65_13_fu_16680_p3.read().is_01() || !select_ln65_15_fu_16702_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_13_fu_16680_p3.read()) < sc_bigint<16>(select_ln65_15_fu_16702_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_600_fu_32214_p2() {
    icmp_ln1496_600_fu_32214_p2 = (!select_ln65_849_fu_32184_p3.read().is_01() || !select_ln65_851_fu_32206_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_849_fu_32184_p3.read()) < sc_bigint<16>(select_ln65_851_fu_32206_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_601_fu_45595_p2() {
    icmp_ln1496_601_fu_45595_p2 = (!grp_fu_32132_p18.read().is_01() || !grp_fu_32232_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_32132_p18.read()) < sc_bigint<16>(grp_fu_32232_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_602_fu_32270_p2() {
    icmp_ln1496_602_fu_32270_p2 = (!kernel_data_V_4_550.read().is_01() || !kernel_data_V_4_678.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_550.read()) < sc_bigint<16>(kernel_data_V_4_678.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_603_fu_32292_p2() {
    icmp_ln1496_603_fu_32292_p2 = (!kernel_data_V_4_742.read().is_01() || !line_buffer_Array_V_4_0_38_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_742.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_38_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_604_fu_32314_p2() {
    icmp_ln1496_604_fu_32314_p2 = (!select_ln65_855_fu_32284_p3.read().is_01() || !select_ln65_857_fu_32306_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_855_fu_32284_p3.read()) < sc_bigint<16>(select_ln65_857_fu_32306_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_605_fu_32366_p2() {
    icmp_ln1496_605_fu_32366_p2 = (!kernel_data_V_4_806.read().is_01() || !kernel_data_V_4_934.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_806.read()) < sc_bigint<16>(kernel_data_V_4_934.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_606_fu_32388_p2() {
    icmp_ln1496_606_fu_32388_p2 = (!kernel_data_V_4_998.read().is_01() || !data_V_data_38_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_998.read()) < sc_bigint<16>(data_V_data_38_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_607_fu_32410_p2() {
    icmp_ln1496_607_fu_32410_p2 = (!select_ln65_860_fu_32380_p3.read().is_01() || !select_ln65_862_fu_32402_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_860_fu_32380_p3.read()) < sc_bigint<16>(select_ln65_862_fu_32402_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_608_fu_45634_p2() {
    icmp_ln1496_608_fu_45634_p2 = (!grp_fu_32328_p18.read().is_01() || !grp_fu_32428_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_32328_p18.read()) < sc_bigint<16>(grp_fu_32428_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_609_fu_48898_p2() {
    icmp_ln1496_609_fu_48898_p2 = (!grp_fu_45612_p18.read().is_01() || !grp_fu_45646_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_45612_p18.read()) < sc_bigint<16>(grp_fu_45646_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_60_fu_41050_p2() {
    icmp_ln1496_60_fu_41050_p2 = (!kernel_data_V_4_60.read().is_01() || !kernel_data_V_4_124.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_60.read()) < sc_bigint<16>(kernel_data_V_4_124.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_610_fu_32500_p2() {
    icmp_ln1496_610_fu_32500_p2 = (!kernel_data_V_4_231.read().is_01() || !line_buffer_Array_V_4_2_39_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_231.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_39_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_611_fu_32522_p2() {
    icmp_ln1496_611_fu_32522_p2 = (!select_ln65_866_fu_32492_p3.read().is_01() || !select_ln65_868_fu_32514_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_866_fu_32492_p3.read()) < sc_bigint<16>(select_ln65_868_fu_32514_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_612_fu_32578_p2() {
    icmp_ln1496_612_fu_32578_p2 = (!kernel_data_V_4_295.read().is_01() || !kernel_data_V_4_359.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_295.read()) < sc_bigint<16>(kernel_data_V_4_359.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_613_fu_32600_p2() {
    icmp_ln1496_613_fu_32600_p2 = (!kernel_data_V_4_487.read().is_01() || !line_buffer_Array_V_4_1_39_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_487.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_39_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_614_fu_32622_p2() {
    icmp_ln1496_614_fu_32622_p2 = (!select_ln65_871_fu_32592_p3.read().is_01() || !select_ln65_873_fu_32614_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_871_fu_32592_p3.read()) < sc_bigint<16>(select_ln65_873_fu_32614_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_615_fu_45671_p2() {
    icmp_ln1496_615_fu_45671_p2 = (!grp_fu_32540_p18.read().is_01() || !grp_fu_32640_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_32540_p18.read()) < sc_bigint<16>(grp_fu_32640_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_616_fu_32678_p2() {
    icmp_ln1496_616_fu_32678_p2 = (!kernel_data_V_4_551.read().is_01() || !kernel_data_V_4_679.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_551.read()) < sc_bigint<16>(kernel_data_V_4_679.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_617_fu_32700_p2() {
    icmp_ln1496_617_fu_32700_p2 = (!kernel_data_V_4_743.read().is_01() || !line_buffer_Array_V_4_0_39_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_743.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_39_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_618_fu_32722_p2() {
    icmp_ln1496_618_fu_32722_p2 = (!select_ln65_877_fu_32692_p3.read().is_01() || !select_ln65_879_fu_32714_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_877_fu_32692_p3.read()) < sc_bigint<16>(select_ln65_879_fu_32714_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_619_fu_32774_p2() {
    icmp_ln1496_619_fu_32774_p2 = (!kernel_data_V_4_807.read().is_01() || !kernel_data_V_4_935.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_807.read()) < sc_bigint<16>(kernel_data_V_4_935.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_61_fu_41458_p2() {
    icmp_ln1496_61_fu_41458_p2 = (!kernel_data_V_4_61.read().is_01() || !kernel_data_V_4_125.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_61.read()) < sc_bigint<16>(kernel_data_V_4_125.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_620_fu_32796_p2() {
    icmp_ln1496_620_fu_32796_p2 = (!kernel_data_V_4_999.read().is_01() || !data_V_data_39_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_999.read()) < sc_bigint<16>(data_V_data_39_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_621_fu_32818_p2() {
    icmp_ln1496_621_fu_32818_p2 = (!select_ln65_882_fu_32788_p3.read().is_01() || !select_ln65_884_fu_32810_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_882_fu_32788_p3.read()) < sc_bigint<16>(select_ln65_884_fu_32810_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_622_fu_45710_p2() {
    icmp_ln1496_622_fu_45710_p2 = (!grp_fu_32736_p18.read().is_01() || !grp_fu_32836_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_32736_p18.read()) < sc_bigint<16>(grp_fu_32836_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_623_fu_48933_p2() {
    icmp_ln1496_623_fu_48933_p2 = (!grp_fu_45688_p18.read().is_01() || !grp_fu_45722_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_45688_p18.read()) < sc_bigint<16>(grp_fu_45722_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_624_fu_32908_p2() {
    icmp_ln1496_624_fu_32908_p2 = (!kernel_data_V_4_232.read().is_01() || !line_buffer_Array_V_4_2_40_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_232.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_40_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_625_fu_32930_p2() {
    icmp_ln1496_625_fu_32930_p2 = (!select_ln65_888_fu_32900_p3.read().is_01() || !select_ln65_890_fu_32922_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_888_fu_32900_p3.read()) < sc_bigint<16>(select_ln65_890_fu_32922_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_626_fu_32986_p2() {
    icmp_ln1496_626_fu_32986_p2 = (!kernel_data_V_4_296.read().is_01() || !kernel_data_V_4_360.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_296.read()) < sc_bigint<16>(kernel_data_V_4_360.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_627_fu_33008_p2() {
    icmp_ln1496_627_fu_33008_p2 = (!kernel_data_V_4_488.read().is_01() || !line_buffer_Array_V_4_1_40_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_488.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_40_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_628_fu_33030_p2() {
    icmp_ln1496_628_fu_33030_p2 = (!select_ln65_893_fu_33000_p3.read().is_01() || !select_ln65_895_fu_33022_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_893_fu_33000_p3.read()) < sc_bigint<16>(select_ln65_895_fu_33022_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_629_fu_45747_p2() {
    icmp_ln1496_629_fu_45747_p2 = (!grp_fu_32948_p18.read().is_01() || !grp_fu_33048_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_32948_p18.read()) < sc_bigint<16>(grp_fu_33048_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_62_fu_41866_p2() {
    icmp_ln1496_62_fu_41866_p2 = (!kernel_data_V_4_62.read().is_01() || !kernel_data_V_4_126.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_62.read()) < sc_bigint<16>(kernel_data_V_4_126.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_630_fu_33086_p2() {
    icmp_ln1496_630_fu_33086_p2 = (!kernel_data_V_4_552.read().is_01() || !kernel_data_V_4_680.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_552.read()) < sc_bigint<16>(kernel_data_V_4_680.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_631_fu_33108_p2() {
    icmp_ln1496_631_fu_33108_p2 = (!kernel_data_V_4_744.read().is_01() || !line_buffer_Array_V_4_0_40_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_744.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_40_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_632_fu_33130_p2() {
    icmp_ln1496_632_fu_33130_p2 = (!select_ln65_899_fu_33100_p3.read().is_01() || !select_ln65_901_fu_33122_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_899_fu_33100_p3.read()) < sc_bigint<16>(select_ln65_901_fu_33122_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_633_fu_33182_p2() {
    icmp_ln1496_633_fu_33182_p2 = (!kernel_data_V_4_808.read().is_01() || !kernel_data_V_4_936.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_808.read()) < sc_bigint<16>(kernel_data_V_4_936.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_634_fu_33204_p2() {
    icmp_ln1496_634_fu_33204_p2 = (!kernel_data_V_4_1000.read().is_01() || !data_V_data_40_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1000.read()) < sc_bigint<16>(data_V_data_40_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_635_fu_33226_p2() {
    icmp_ln1496_635_fu_33226_p2 = (!select_ln65_904_fu_33196_p3.read().is_01() || !select_ln65_906_fu_33218_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_904_fu_33196_p3.read()) < sc_bigint<16>(select_ln65_906_fu_33218_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_636_fu_45786_p2() {
    icmp_ln1496_636_fu_45786_p2 = (!grp_fu_33144_p18.read().is_01() || !grp_fu_33244_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_33144_p18.read()) < sc_bigint<16>(grp_fu_33244_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_637_fu_48968_p2() {
    icmp_ln1496_637_fu_48968_p2 = (!grp_fu_45764_p18.read().is_01() || !grp_fu_45798_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_45764_p18.read()) < sc_bigint<16>(grp_fu_45798_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_638_fu_33316_p2() {
    icmp_ln1496_638_fu_33316_p2 = (!kernel_data_V_4_233.read().is_01() || !line_buffer_Array_V_4_2_41_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_233.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_41_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_639_fu_33338_p2() {
    icmp_ln1496_639_fu_33338_p2 = (!select_ln65_910_fu_33308_p3.read().is_01() || !select_ln65_912_fu_33330_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_910_fu_33308_p3.read()) < sc_bigint<16>(select_ln65_912_fu_33330_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_63_fu_42274_p2() {
    icmp_ln1496_63_fu_42274_p2 = (!kernel_data_V_4_63.read().is_01() || !kernel_data_V_4_127.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_63.read()) < sc_bigint<16>(kernel_data_V_4_127.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_640_fu_33394_p2() {
    icmp_ln1496_640_fu_33394_p2 = (!kernel_data_V_4_297.read().is_01() || !kernel_data_V_4_361.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_297.read()) < sc_bigint<16>(kernel_data_V_4_361.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_641_fu_33416_p2() {
    icmp_ln1496_641_fu_33416_p2 = (!kernel_data_V_4_489.read().is_01() || !line_buffer_Array_V_4_1_41_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_489.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_41_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_642_fu_33438_p2() {
    icmp_ln1496_642_fu_33438_p2 = (!select_ln65_915_fu_33408_p3.read().is_01() || !select_ln65_917_fu_33430_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_915_fu_33408_p3.read()) < sc_bigint<16>(select_ln65_917_fu_33430_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_643_fu_45823_p2() {
    icmp_ln1496_643_fu_45823_p2 = (!grp_fu_33356_p18.read().is_01() || !grp_fu_33456_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_33356_p18.read()) < sc_bigint<16>(grp_fu_33456_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_644_fu_33494_p2() {
    icmp_ln1496_644_fu_33494_p2 = (!kernel_data_V_4_553.read().is_01() || !kernel_data_V_4_681.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_553.read()) < sc_bigint<16>(kernel_data_V_4_681.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_645_fu_33516_p2() {
    icmp_ln1496_645_fu_33516_p2 = (!kernel_data_V_4_745.read().is_01() || !line_buffer_Array_V_4_0_41_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_745.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_41_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_646_fu_33538_p2() {
    icmp_ln1496_646_fu_33538_p2 = (!select_ln65_921_fu_33508_p3.read().is_01() || !select_ln65_923_fu_33530_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_921_fu_33508_p3.read()) < sc_bigint<16>(select_ln65_923_fu_33530_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_647_fu_33590_p2() {
    icmp_ln1496_647_fu_33590_p2 = (!kernel_data_V_4_809.read().is_01() || !kernel_data_V_4_937.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_809.read()) < sc_bigint<16>(kernel_data_V_4_937.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_648_fu_33612_p2() {
    icmp_ln1496_648_fu_33612_p2 = (!kernel_data_V_4_1001.read().is_01() || !data_V_data_41_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1001.read()) < sc_bigint<16>(data_V_data_41_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_649_fu_33634_p2() {
    icmp_ln1496_649_fu_33634_p2 = (!select_ln65_926_fu_33604_p3.read().is_01() || !select_ln65_928_fu_33626_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_926_fu_33604_p3.read()) < sc_bigint<16>(select_ln65_928_fu_33626_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_64_fu_16978_p2() {
    icmp_ln1496_64_fu_16978_p2 = (!kernel_data_V_4_1.read().is_01() || !kernel_data_V_4_65.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1.read()) < sc_bigint<16>(kernel_data_V_4_65.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_650_fu_45862_p2() {
    icmp_ln1496_650_fu_45862_p2 = (!grp_fu_33552_p18.read().is_01() || !grp_fu_33652_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_33552_p18.read()) < sc_bigint<16>(grp_fu_33652_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_651_fu_49003_p2() {
    icmp_ln1496_651_fu_49003_p2 = (!grp_fu_45840_p18.read().is_01() || !grp_fu_45874_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_45840_p18.read()) < sc_bigint<16>(grp_fu_45874_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_652_fu_33724_p2() {
    icmp_ln1496_652_fu_33724_p2 = (!kernel_data_V_4_234.read().is_01() || !line_buffer_Array_V_4_2_42_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_234.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_42_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_653_fu_33746_p2() {
    icmp_ln1496_653_fu_33746_p2 = (!select_ln65_932_fu_33716_p3.read().is_01() || !select_ln65_934_fu_33738_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_932_fu_33716_p3.read()) < sc_bigint<16>(select_ln65_934_fu_33738_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_654_fu_33802_p2() {
    icmp_ln1496_654_fu_33802_p2 = (!kernel_data_V_4_298.read().is_01() || !kernel_data_V_4_362.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_298.read()) < sc_bigint<16>(kernel_data_V_4_362.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_655_fu_33824_p2() {
    icmp_ln1496_655_fu_33824_p2 = (!kernel_data_V_4_490.read().is_01() || !line_buffer_Array_V_4_1_42_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_490.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_42_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_656_fu_33846_p2() {
    icmp_ln1496_656_fu_33846_p2 = (!select_ln65_937_fu_33816_p3.read().is_01() || !select_ln65_939_fu_33838_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_937_fu_33816_p3.read()) < sc_bigint<16>(select_ln65_939_fu_33838_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_657_fu_45899_p2() {
    icmp_ln1496_657_fu_45899_p2 = (!grp_fu_33764_p18.read().is_01() || !grp_fu_33864_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_33764_p18.read()) < sc_bigint<16>(grp_fu_33864_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_658_fu_33902_p2() {
    icmp_ln1496_658_fu_33902_p2 = (!kernel_data_V_4_554.read().is_01() || !kernel_data_V_4_682.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_554.read()) < sc_bigint<16>(kernel_data_V_4_682.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_659_fu_33924_p2() {
    icmp_ln1496_659_fu_33924_p2 = (!kernel_data_V_4_746.read().is_01() || !line_buffer_Array_V_4_0_42_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_746.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_42_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_65_fu_16996_p2() {
    icmp_ln1496_65_fu_16996_p2 = (!kernel_data_V_4_193.read().is_01() || !line_buffer_Array_V_4_2_1_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_193.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_1_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_660_fu_33946_p2() {
    icmp_ln1496_660_fu_33946_p2 = (!select_ln65_943_fu_33916_p3.read().is_01() || !select_ln65_945_fu_33938_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_943_fu_33916_p3.read()) < sc_bigint<16>(select_ln65_945_fu_33938_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_661_fu_33998_p2() {
    icmp_ln1496_661_fu_33998_p2 = (!kernel_data_V_4_810.read().is_01() || !kernel_data_V_4_938.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_810.read()) < sc_bigint<16>(kernel_data_V_4_938.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_662_fu_34020_p2() {
    icmp_ln1496_662_fu_34020_p2 = (!kernel_data_V_4_1002.read().is_01() || !data_V_data_42_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1002.read()) < sc_bigint<16>(data_V_data_42_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_663_fu_34042_p2() {
    icmp_ln1496_663_fu_34042_p2 = (!select_ln65_948_fu_34012_p3.read().is_01() || !select_ln65_950_fu_34034_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_948_fu_34012_p3.read()) < sc_bigint<16>(select_ln65_950_fu_34034_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_664_fu_45938_p2() {
    icmp_ln1496_664_fu_45938_p2 = (!grp_fu_33960_p18.read().is_01() || !grp_fu_34060_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_33960_p18.read()) < sc_bigint<16>(grp_fu_34060_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_665_fu_49038_p2() {
    icmp_ln1496_665_fu_49038_p2 = (!grp_fu_45916_p18.read().is_01() || !grp_fu_45950_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_45916_p18.read()) < sc_bigint<16>(grp_fu_45950_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_666_fu_34132_p2() {
    icmp_ln1496_666_fu_34132_p2 = (!kernel_data_V_4_235.read().is_01() || !line_buffer_Array_V_4_2_43_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_235.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_43_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_667_fu_34154_p2() {
    icmp_ln1496_667_fu_34154_p2 = (!select_ln65_954_fu_34124_p3.read().is_01() || !select_ln65_956_fu_34146_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_954_fu_34124_p3.read()) < sc_bigint<16>(select_ln65_956_fu_34146_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_668_fu_34210_p2() {
    icmp_ln1496_668_fu_34210_p2 = (!kernel_data_V_4_299.read().is_01() || !kernel_data_V_4_363.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_299.read()) < sc_bigint<16>(kernel_data_V_4_363.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_669_fu_34232_p2() {
    icmp_ln1496_669_fu_34232_p2 = (!kernel_data_V_4_491.read().is_01() || !line_buffer_Array_V_4_1_43_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_491.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_43_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_66_fu_17018_p2() {
    icmp_ln1496_66_fu_17018_p2 = (!select_ln65_30_fu_16988_p3.read().is_01() || !select_ln65_32_fu_17010_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_30_fu_16988_p3.read()) < sc_bigint<16>(select_ln65_32_fu_17010_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_670_fu_34254_p2() {
    icmp_ln1496_670_fu_34254_p2 = (!select_ln65_959_fu_34224_p3.read().is_01() || !select_ln65_961_fu_34246_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_959_fu_34224_p3.read()) < sc_bigint<16>(select_ln65_961_fu_34246_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_671_fu_45975_p2() {
    icmp_ln1496_671_fu_45975_p2 = (!grp_fu_34172_p18.read().is_01() || !grp_fu_34272_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_34172_p18.read()) < sc_bigint<16>(grp_fu_34272_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_672_fu_34310_p2() {
    icmp_ln1496_672_fu_34310_p2 = (!kernel_data_V_4_555.read().is_01() || !kernel_data_V_4_683.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_555.read()) < sc_bigint<16>(kernel_data_V_4_683.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_673_fu_34332_p2() {
    icmp_ln1496_673_fu_34332_p2 = (!kernel_data_V_4_747.read().is_01() || !line_buffer_Array_V_4_0_43_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_747.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_43_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_674_fu_34354_p2() {
    icmp_ln1496_674_fu_34354_p2 = (!select_ln65_965_fu_34324_p3.read().is_01() || !select_ln65_967_fu_34346_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_965_fu_34324_p3.read()) < sc_bigint<16>(select_ln65_967_fu_34346_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_675_fu_34406_p2() {
    icmp_ln1496_675_fu_34406_p2 = (!kernel_data_V_4_811.read().is_01() || !kernel_data_V_4_939.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_811.read()) < sc_bigint<16>(kernel_data_V_4_939.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_676_fu_34428_p2() {
    icmp_ln1496_676_fu_34428_p2 = (!kernel_data_V_4_1003.read().is_01() || !data_V_data_43_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1003.read()) < sc_bigint<16>(data_V_data_43_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_677_fu_34450_p2() {
    icmp_ln1496_677_fu_34450_p2 = (!select_ln65_970_fu_34420_p3.read().is_01() || !select_ln65_972_fu_34442_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_970_fu_34420_p3.read()) < sc_bigint<16>(select_ln65_972_fu_34442_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_678_fu_46014_p2() {
    icmp_ln1496_678_fu_46014_p2 = (!grp_fu_34368_p18.read().is_01() || !grp_fu_34468_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_34368_p18.read()) < sc_bigint<16>(grp_fu_34468_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_679_fu_49073_p2() {
    icmp_ln1496_679_fu_49073_p2 = (!grp_fu_45992_p18.read().is_01() || !grp_fu_46026_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_45992_p18.read()) < sc_bigint<16>(grp_fu_46026_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_67_fu_17074_p2() {
    icmp_ln1496_67_fu_17074_p2 = (!kernel_data_V_4_257.read().is_01() || !kernel_data_V_4_321.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_257.read()) < sc_bigint<16>(kernel_data_V_4_321.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_680_fu_34540_p2() {
    icmp_ln1496_680_fu_34540_p2 = (!kernel_data_V_4_236.read().is_01() || !line_buffer_Array_V_4_2_44_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_236.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_44_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_681_fu_34562_p2() {
    icmp_ln1496_681_fu_34562_p2 = (!select_ln65_976_fu_34532_p3.read().is_01() || !select_ln65_978_fu_34554_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_976_fu_34532_p3.read()) < sc_bigint<16>(select_ln65_978_fu_34554_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_682_fu_34618_p2() {
    icmp_ln1496_682_fu_34618_p2 = (!kernel_data_V_4_300.read().is_01() || !kernel_data_V_4_364.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_300.read()) < sc_bigint<16>(kernel_data_V_4_364.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_683_fu_34640_p2() {
    icmp_ln1496_683_fu_34640_p2 = (!kernel_data_V_4_492.read().is_01() || !line_buffer_Array_V_4_1_44_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_492.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_44_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_684_fu_34662_p2() {
    icmp_ln1496_684_fu_34662_p2 = (!select_ln65_981_fu_34632_p3.read().is_01() || !select_ln65_983_fu_34654_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_981_fu_34632_p3.read()) < sc_bigint<16>(select_ln65_983_fu_34654_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_685_fu_46051_p2() {
    icmp_ln1496_685_fu_46051_p2 = (!grp_fu_34580_p18.read().is_01() || !grp_fu_34680_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_34580_p18.read()) < sc_bigint<16>(grp_fu_34680_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_686_fu_34718_p2() {
    icmp_ln1496_686_fu_34718_p2 = (!kernel_data_V_4_556.read().is_01() || !kernel_data_V_4_684.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_556.read()) < sc_bigint<16>(kernel_data_V_4_684.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_687_fu_34740_p2() {
    icmp_ln1496_687_fu_34740_p2 = (!kernel_data_V_4_748.read().is_01() || !line_buffer_Array_V_4_0_44_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_748.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_44_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_688_fu_34762_p2() {
    icmp_ln1496_688_fu_34762_p2 = (!select_ln65_987_fu_34732_p3.read().is_01() || !select_ln65_989_fu_34754_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_987_fu_34732_p3.read()) < sc_bigint<16>(select_ln65_989_fu_34754_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_689_fu_34814_p2() {
    icmp_ln1496_689_fu_34814_p2 = (!kernel_data_V_4_812.read().is_01() || !kernel_data_V_4_940.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_812.read()) < sc_bigint<16>(kernel_data_V_4_940.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_68_fu_17096_p2() {
    icmp_ln1496_68_fu_17096_p2 = (!kernel_data_V_4_449.read().is_01() || !line_buffer_Array_V_4_1_1_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_449.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_1_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_690_fu_34836_p2() {
    icmp_ln1496_690_fu_34836_p2 = (!kernel_data_V_4_1004.read().is_01() || !data_V_data_44_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1004.read()) < sc_bigint<16>(data_V_data_44_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_691_fu_34858_p2() {
    icmp_ln1496_691_fu_34858_p2 = (!select_ln65_992_fu_34828_p3.read().is_01() || !select_ln65_994_fu_34850_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_992_fu_34828_p3.read()) < sc_bigint<16>(select_ln65_994_fu_34850_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_692_fu_46090_p2() {
    icmp_ln1496_692_fu_46090_p2 = (!grp_fu_34776_p18.read().is_01() || !grp_fu_34876_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_34776_p18.read()) < sc_bigint<16>(grp_fu_34876_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_693_fu_49108_p2() {
    icmp_ln1496_693_fu_49108_p2 = (!grp_fu_46068_p18.read().is_01() || !grp_fu_46102_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_46068_p18.read()) < sc_bigint<16>(grp_fu_46102_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_694_fu_34948_p2() {
    icmp_ln1496_694_fu_34948_p2 = (!kernel_data_V_4_237.read().is_01() || !line_buffer_Array_V_4_2_45_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_237.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_45_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_695_fu_34970_p2() {
    icmp_ln1496_695_fu_34970_p2 = (!select_ln65_998_fu_34940_p3.read().is_01() || !select_ln65_1000_fu_34962_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_998_fu_34940_p3.read()) < sc_bigint<16>(select_ln65_1000_fu_34962_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_696_fu_35026_p2() {
    icmp_ln1496_696_fu_35026_p2 = (!kernel_data_V_4_301.read().is_01() || !kernel_data_V_4_365.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_301.read()) < sc_bigint<16>(kernel_data_V_4_365.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_697_fu_35048_p2() {
    icmp_ln1496_697_fu_35048_p2 = (!kernel_data_V_4_493.read().is_01() || !line_buffer_Array_V_4_1_45_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_493.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_45_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_698_fu_35070_p2() {
    icmp_ln1496_698_fu_35070_p2 = (!select_ln65_1003_fu_35040_p3.read().is_01() || !select_ln65_1005_fu_35062_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1003_fu_35040_p3.read()) < sc_bigint<16>(select_ln65_1005_fu_35062_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_699_fu_46127_p2() {
    icmp_ln1496_699_fu_46127_p2 = (!grp_fu_34988_p18.read().is_01() || !grp_fu_35088_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_34988_p18.read()) < sc_bigint<16>(grp_fu_35088_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_69_fu_17118_p2() {
    icmp_ln1496_69_fu_17118_p2 = (!select_ln65_35_fu_17088_p3.read().is_01() || !select_ln65_37_fu_17110_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_35_fu_17088_p3.read()) < sc_bigint<16>(select_ln65_37_fu_17110_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_6_fu_42707_p2() {
    icmp_ln1496_6_fu_42707_p2 = (!grp_fu_16628_p18.read().is_01() || !grp_fu_16728_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_16628_p18.read()) < sc_bigint<16>(grp_fu_16728_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_700_fu_35126_p2() {
    icmp_ln1496_700_fu_35126_p2 = (!kernel_data_V_4_557.read().is_01() || !kernel_data_V_4_685.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_557.read()) < sc_bigint<16>(kernel_data_V_4_685.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_701_fu_35148_p2() {
    icmp_ln1496_701_fu_35148_p2 = (!kernel_data_V_4_749.read().is_01() || !line_buffer_Array_V_4_0_45_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_749.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_45_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_702_fu_35170_p2() {
    icmp_ln1496_702_fu_35170_p2 = (!select_ln65_1009_fu_35140_p3.read().is_01() || !select_ln65_1011_fu_35162_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1009_fu_35140_p3.read()) < sc_bigint<16>(select_ln65_1011_fu_35162_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_703_fu_35222_p2() {
    icmp_ln1496_703_fu_35222_p2 = (!kernel_data_V_4_813.read().is_01() || !kernel_data_V_4_941.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_813.read()) < sc_bigint<16>(kernel_data_V_4_941.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_704_fu_35244_p2() {
    icmp_ln1496_704_fu_35244_p2 = (!kernel_data_V_4_1005.read().is_01() || !data_V_data_45_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1005.read()) < sc_bigint<16>(data_V_data_45_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_705_fu_35266_p2() {
    icmp_ln1496_705_fu_35266_p2 = (!select_ln65_1014_fu_35236_p3.read().is_01() || !select_ln65_1016_fu_35258_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1014_fu_35236_p3.read()) < sc_bigint<16>(select_ln65_1016_fu_35258_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_706_fu_46166_p2() {
    icmp_ln1496_706_fu_46166_p2 = (!grp_fu_35184_p18.read().is_01() || !grp_fu_35284_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_35184_p18.read()) < sc_bigint<16>(grp_fu_35284_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_707_fu_49143_p2() {
    icmp_ln1496_707_fu_49143_p2 = (!grp_fu_46144_p18.read().is_01() || !grp_fu_46178_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_46144_p18.read()) < sc_bigint<16>(grp_fu_46178_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_708_fu_35356_p2() {
    icmp_ln1496_708_fu_35356_p2 = (!kernel_data_V_4_238.read().is_01() || !line_buffer_Array_V_4_2_46_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_238.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_46_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_709_fu_35378_p2() {
    icmp_ln1496_709_fu_35378_p2 = (!select_ln65_1020_fu_35348_p3.read().is_01() || !select_ln65_1022_fu_35370_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1020_fu_35348_p3.read()) < sc_bigint<16>(select_ln65_1022_fu_35370_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_70_fu_42783_p2() {
    icmp_ln1496_70_fu_42783_p2 = (!grp_fu_17036_p18.read().is_01() || !grp_fu_17136_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_17036_p18.read()) < sc_bigint<16>(grp_fu_17136_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_710_fu_35434_p2() {
    icmp_ln1496_710_fu_35434_p2 = (!kernel_data_V_4_302.read().is_01() || !kernel_data_V_4_366.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_302.read()) < sc_bigint<16>(kernel_data_V_4_366.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_711_fu_35456_p2() {
    icmp_ln1496_711_fu_35456_p2 = (!kernel_data_V_4_494.read().is_01() || !line_buffer_Array_V_4_1_46_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_494.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_46_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_712_fu_35478_p2() {
    icmp_ln1496_712_fu_35478_p2 = (!select_ln65_1025_fu_35448_p3.read().is_01() || !select_ln65_1027_fu_35470_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1025_fu_35448_p3.read()) < sc_bigint<16>(select_ln65_1027_fu_35470_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_713_fu_46203_p2() {
    icmp_ln1496_713_fu_46203_p2 = (!grp_fu_35396_p18.read().is_01() || !grp_fu_35496_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_35396_p18.read()) < sc_bigint<16>(grp_fu_35496_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_714_fu_35534_p2() {
    icmp_ln1496_714_fu_35534_p2 = (!kernel_data_V_4_558.read().is_01() || !kernel_data_V_4_686.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_558.read()) < sc_bigint<16>(kernel_data_V_4_686.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_715_fu_35556_p2() {
    icmp_ln1496_715_fu_35556_p2 = (!kernel_data_V_4_750.read().is_01() || !line_buffer_Array_V_4_0_46_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_750.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_46_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_716_fu_35578_p2() {
    icmp_ln1496_716_fu_35578_p2 = (!select_ln65_1031_fu_35548_p3.read().is_01() || !select_ln65_1033_fu_35570_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1031_fu_35548_p3.read()) < sc_bigint<16>(select_ln65_1033_fu_35570_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_717_fu_35630_p2() {
    icmp_ln1496_717_fu_35630_p2 = (!kernel_data_V_4_814.read().is_01() || !kernel_data_V_4_942.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_814.read()) < sc_bigint<16>(kernel_data_V_4_942.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_718_fu_35652_p2() {
    icmp_ln1496_718_fu_35652_p2 = (!kernel_data_V_4_1006.read().is_01() || !data_V_data_46_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1006.read()) < sc_bigint<16>(data_V_data_46_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_719_fu_35674_p2() {
    icmp_ln1496_719_fu_35674_p2 = (!select_ln65_1036_fu_35644_p3.read().is_01() || !select_ln65_1038_fu_35666_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1036_fu_35644_p3.read()) < sc_bigint<16>(select_ln65_1038_fu_35666_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_71_fu_17174_p2() {
    icmp_ln1496_71_fu_17174_p2 = (!kernel_data_V_4_513.read().is_01() || !kernel_data_V_4_577.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_513.read()) < sc_bigint<16>(kernel_data_V_4_577.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_720_fu_46242_p2() {
    icmp_ln1496_720_fu_46242_p2 = (!grp_fu_35592_p18.read().is_01() || !grp_fu_35692_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_35592_p18.read()) < sc_bigint<16>(grp_fu_35692_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_721_fu_49178_p2() {
    icmp_ln1496_721_fu_49178_p2 = (!grp_fu_46220_p18.read().is_01() || !grp_fu_46254_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_46220_p18.read()) < sc_bigint<16>(grp_fu_46254_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_722_fu_35764_p2() {
    icmp_ln1496_722_fu_35764_p2 = (!kernel_data_V_4_239.read().is_01() || !line_buffer_Array_V_4_2_47_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_239.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_47_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_723_fu_35786_p2() {
    icmp_ln1496_723_fu_35786_p2 = (!select_ln65_1042_fu_35756_p3.read().is_01() || !select_ln65_1044_fu_35778_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1042_fu_35756_p3.read()) < sc_bigint<16>(select_ln65_1044_fu_35778_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_724_fu_35842_p2() {
    icmp_ln1496_724_fu_35842_p2 = (!kernel_data_V_4_303.read().is_01() || !kernel_data_V_4_367.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_303.read()) < sc_bigint<16>(kernel_data_V_4_367.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_725_fu_35864_p2() {
    icmp_ln1496_725_fu_35864_p2 = (!kernel_data_V_4_495.read().is_01() || !line_buffer_Array_V_4_1_47_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_495.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_47_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_726_fu_35886_p2() {
    icmp_ln1496_726_fu_35886_p2 = (!select_ln65_1047_fu_35856_p3.read().is_01() || !select_ln65_1049_fu_35878_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1047_fu_35856_p3.read()) < sc_bigint<16>(select_ln65_1049_fu_35878_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_727_fu_46279_p2() {
    icmp_ln1496_727_fu_46279_p2 = (!grp_fu_35804_p18.read().is_01() || !grp_fu_35904_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_35804_p18.read()) < sc_bigint<16>(grp_fu_35904_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_728_fu_35942_p2() {
    icmp_ln1496_728_fu_35942_p2 = (!kernel_data_V_4_559.read().is_01() || !kernel_data_V_4_687.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_559.read()) < sc_bigint<16>(kernel_data_V_4_687.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_729_fu_35964_p2() {
    icmp_ln1496_729_fu_35964_p2 = (!kernel_data_V_4_751.read().is_01() || !line_buffer_Array_V_4_0_47_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_751.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_47_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_72_fu_17196_p2() {
    icmp_ln1496_72_fu_17196_p2 = (!kernel_data_V_4_705.read().is_01() || !line_buffer_Array_V_4_0_1_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_705.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_1_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_730_fu_35986_p2() {
    icmp_ln1496_730_fu_35986_p2 = (!select_ln65_1053_fu_35956_p3.read().is_01() || !select_ln65_1055_fu_35978_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1053_fu_35956_p3.read()) < sc_bigint<16>(select_ln65_1055_fu_35978_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_731_fu_36038_p2() {
    icmp_ln1496_731_fu_36038_p2 = (!kernel_data_V_4_815.read().is_01() || !kernel_data_V_4_943.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_815.read()) < sc_bigint<16>(kernel_data_V_4_943.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_732_fu_36060_p2() {
    icmp_ln1496_732_fu_36060_p2 = (!kernel_data_V_4_1007.read().is_01() || !data_V_data_47_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1007.read()) < sc_bigint<16>(data_V_data_47_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_733_fu_36082_p2() {
    icmp_ln1496_733_fu_36082_p2 = (!select_ln65_1058_fu_36052_p3.read().is_01() || !select_ln65_1060_fu_36074_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1058_fu_36052_p3.read()) < sc_bigint<16>(select_ln65_1060_fu_36074_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_734_fu_46318_p2() {
    icmp_ln1496_734_fu_46318_p2 = (!grp_fu_36000_p18.read().is_01() || !grp_fu_36100_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_36000_p18.read()) < sc_bigint<16>(grp_fu_36100_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_735_fu_49213_p2() {
    icmp_ln1496_735_fu_49213_p2 = (!grp_fu_46296_p18.read().is_01() || !grp_fu_46330_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_46296_p18.read()) < sc_bigint<16>(grp_fu_46330_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_736_fu_36172_p2() {
    icmp_ln1496_736_fu_36172_p2 = (!kernel_data_V_4_240.read().is_01() || !line_buffer_Array_V_4_2_48_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_240.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_48_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_737_fu_36194_p2() {
    icmp_ln1496_737_fu_36194_p2 = (!select_ln65_1064_fu_36164_p3.read().is_01() || !select_ln65_1066_fu_36186_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1064_fu_36164_p3.read()) < sc_bigint<16>(select_ln65_1066_fu_36186_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_738_fu_36250_p2() {
    icmp_ln1496_738_fu_36250_p2 = (!kernel_data_V_4_304.read().is_01() || !kernel_data_V_4_368.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_304.read()) < sc_bigint<16>(kernel_data_V_4_368.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_739_fu_36272_p2() {
    icmp_ln1496_739_fu_36272_p2 = (!kernel_data_V_4_496.read().is_01() || !line_buffer_Array_V_4_1_48_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_496.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_48_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_73_fu_17218_p2() {
    icmp_ln1496_73_fu_17218_p2 = (!select_ln65_41_fu_17188_p3.read().is_01() || !select_ln65_43_fu_17210_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_41_fu_17188_p3.read()) < sc_bigint<16>(select_ln65_43_fu_17210_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_740_fu_36294_p2() {
    icmp_ln1496_740_fu_36294_p2 = (!select_ln65_1069_fu_36264_p3.read().is_01() || !select_ln65_1071_fu_36286_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1069_fu_36264_p3.read()) < sc_bigint<16>(select_ln65_1071_fu_36286_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_741_fu_46355_p2() {
    icmp_ln1496_741_fu_46355_p2 = (!grp_fu_36212_p18.read().is_01() || !grp_fu_36312_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_36212_p18.read()) < sc_bigint<16>(grp_fu_36312_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_742_fu_36350_p2() {
    icmp_ln1496_742_fu_36350_p2 = (!kernel_data_V_4_560.read().is_01() || !kernel_data_V_4_688.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_560.read()) < sc_bigint<16>(kernel_data_V_4_688.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_743_fu_36372_p2() {
    icmp_ln1496_743_fu_36372_p2 = (!kernel_data_V_4_752.read().is_01() || !line_buffer_Array_V_4_0_48_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_752.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_48_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_744_fu_36394_p2() {
    icmp_ln1496_744_fu_36394_p2 = (!select_ln65_1075_fu_36364_p3.read().is_01() || !select_ln65_1077_fu_36386_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1075_fu_36364_p3.read()) < sc_bigint<16>(select_ln65_1077_fu_36386_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_745_fu_36446_p2() {
    icmp_ln1496_745_fu_36446_p2 = (!kernel_data_V_4_816.read().is_01() || !kernel_data_V_4_944.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_816.read()) < sc_bigint<16>(kernel_data_V_4_944.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_746_fu_36468_p2() {
    icmp_ln1496_746_fu_36468_p2 = (!kernel_data_V_4_1008.read().is_01() || !data_V_data_48_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1008.read()) < sc_bigint<16>(data_V_data_48_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_747_fu_36490_p2() {
    icmp_ln1496_747_fu_36490_p2 = (!select_ln65_1080_fu_36460_p3.read().is_01() || !select_ln65_1082_fu_36482_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1080_fu_36460_p3.read()) < sc_bigint<16>(select_ln65_1082_fu_36482_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_748_fu_46394_p2() {
    icmp_ln1496_748_fu_46394_p2 = (!grp_fu_36408_p18.read().is_01() || !grp_fu_36508_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_36408_p18.read()) < sc_bigint<16>(grp_fu_36508_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_749_fu_49248_p2() {
    icmp_ln1496_749_fu_49248_p2 = (!grp_fu_46372_p18.read().is_01() || !grp_fu_46406_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_46372_p18.read()) < sc_bigint<16>(grp_fu_46406_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_74_fu_17270_p2() {
    icmp_ln1496_74_fu_17270_p2 = (!kernel_data_V_4_769.read().is_01() || !kernel_data_V_4_897.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_769.read()) < sc_bigint<16>(kernel_data_V_4_897.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_750_fu_36580_p2() {
    icmp_ln1496_750_fu_36580_p2 = (!kernel_data_V_4_241.read().is_01() || !line_buffer_Array_V_4_2_49_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_241.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_49_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_751_fu_36602_p2() {
    icmp_ln1496_751_fu_36602_p2 = (!select_ln65_1086_fu_36572_p3.read().is_01() || !select_ln65_1088_fu_36594_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1086_fu_36572_p3.read()) < sc_bigint<16>(select_ln65_1088_fu_36594_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_752_fu_36658_p2() {
    icmp_ln1496_752_fu_36658_p2 = (!kernel_data_V_4_305.read().is_01() || !kernel_data_V_4_369.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_305.read()) < sc_bigint<16>(kernel_data_V_4_369.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_753_fu_36680_p2() {
    icmp_ln1496_753_fu_36680_p2 = (!kernel_data_V_4_497.read().is_01() || !line_buffer_Array_V_4_1_49_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_497.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_49_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_754_fu_36702_p2() {
    icmp_ln1496_754_fu_36702_p2 = (!select_ln65_1091_fu_36672_p3.read().is_01() || !select_ln65_1093_fu_36694_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1091_fu_36672_p3.read()) < sc_bigint<16>(select_ln65_1093_fu_36694_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_755_fu_46431_p2() {
    icmp_ln1496_755_fu_46431_p2 = (!grp_fu_36620_p18.read().is_01() || !grp_fu_36720_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_36620_p18.read()) < sc_bigint<16>(grp_fu_36720_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_756_fu_36758_p2() {
    icmp_ln1496_756_fu_36758_p2 = (!kernel_data_V_4_561.read().is_01() || !kernel_data_V_4_689.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_561.read()) < sc_bigint<16>(kernel_data_V_4_689.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_757_fu_36780_p2() {
    icmp_ln1496_757_fu_36780_p2 = (!kernel_data_V_4_753.read().is_01() || !line_buffer_Array_V_4_0_49_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_753.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_49_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_758_fu_36802_p2() {
    icmp_ln1496_758_fu_36802_p2 = (!select_ln65_1097_fu_36772_p3.read().is_01() || !select_ln65_1099_fu_36794_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1097_fu_36772_p3.read()) < sc_bigint<16>(select_ln65_1099_fu_36794_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_759_fu_36854_p2() {
    icmp_ln1496_759_fu_36854_p2 = (!kernel_data_V_4_817.read().is_01() || !kernel_data_V_4_945.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_817.read()) < sc_bigint<16>(kernel_data_V_4_945.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_75_fu_17292_p2() {
    icmp_ln1496_75_fu_17292_p2 = (!kernel_data_V_4_961.read().is_01() || !data_V_data_1_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_961.read()) < sc_bigint<16>(data_V_data_1_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_760_fu_36876_p2() {
    icmp_ln1496_760_fu_36876_p2 = (!kernel_data_V_4_1009.read().is_01() || !data_V_data_49_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1009.read()) < sc_bigint<16>(data_V_data_49_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_761_fu_36898_p2() {
    icmp_ln1496_761_fu_36898_p2 = (!select_ln65_1102_fu_36868_p3.read().is_01() || !select_ln65_1104_fu_36890_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1102_fu_36868_p3.read()) < sc_bigint<16>(select_ln65_1104_fu_36890_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_762_fu_46470_p2() {
    icmp_ln1496_762_fu_46470_p2 = (!grp_fu_36816_p18.read().is_01() || !grp_fu_36916_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_36816_p18.read()) < sc_bigint<16>(grp_fu_36916_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_763_fu_49283_p2() {
    icmp_ln1496_763_fu_49283_p2 = (!grp_fu_46448_p18.read().is_01() || !grp_fu_46482_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_46448_p18.read()) < sc_bigint<16>(grp_fu_46482_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_764_fu_36988_p2() {
    icmp_ln1496_764_fu_36988_p2 = (!kernel_data_V_4_242.read().is_01() || !line_buffer_Array_V_4_2_50_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_242.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_50_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_765_fu_37010_p2() {
    icmp_ln1496_765_fu_37010_p2 = (!select_ln65_1108_fu_36980_p3.read().is_01() || !select_ln65_1110_fu_37002_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1108_fu_36980_p3.read()) < sc_bigint<16>(select_ln65_1110_fu_37002_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_766_fu_37066_p2() {
    icmp_ln1496_766_fu_37066_p2 = (!kernel_data_V_4_306.read().is_01() || !kernel_data_V_4_370.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_306.read()) < sc_bigint<16>(kernel_data_V_4_370.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_767_fu_37088_p2() {
    icmp_ln1496_767_fu_37088_p2 = (!kernel_data_V_4_498.read().is_01() || !line_buffer_Array_V_4_1_50_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_498.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_50_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_768_fu_37110_p2() {
    icmp_ln1496_768_fu_37110_p2 = (!select_ln65_1113_fu_37080_p3.read().is_01() || !select_ln65_1115_fu_37102_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1113_fu_37080_p3.read()) < sc_bigint<16>(select_ln65_1115_fu_37102_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_769_fu_46507_p2() {
    icmp_ln1496_769_fu_46507_p2 = (!grp_fu_37028_p18.read().is_01() || !grp_fu_37128_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_37028_p18.read()) < sc_bigint<16>(grp_fu_37128_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_76_fu_17314_p2() {
    icmp_ln1496_76_fu_17314_p2 = (!select_ln65_46_fu_17284_p3.read().is_01() || !select_ln65_48_fu_17306_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_46_fu_17284_p3.read()) < sc_bigint<16>(select_ln65_48_fu_17306_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_770_fu_37166_p2() {
    icmp_ln1496_770_fu_37166_p2 = (!kernel_data_V_4_562.read().is_01() || !kernel_data_V_4_690.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_562.read()) < sc_bigint<16>(kernel_data_V_4_690.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_771_fu_37188_p2() {
    icmp_ln1496_771_fu_37188_p2 = (!kernel_data_V_4_754.read().is_01() || !line_buffer_Array_V_4_0_50_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_754.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_50_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_772_fu_37210_p2() {
    icmp_ln1496_772_fu_37210_p2 = (!select_ln65_1119_fu_37180_p3.read().is_01() || !select_ln65_1121_fu_37202_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1119_fu_37180_p3.read()) < sc_bigint<16>(select_ln65_1121_fu_37202_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_773_fu_37262_p2() {
    icmp_ln1496_773_fu_37262_p2 = (!kernel_data_V_4_818.read().is_01() || !kernel_data_V_4_946.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_818.read()) < sc_bigint<16>(kernel_data_V_4_946.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_774_fu_37284_p2() {
    icmp_ln1496_774_fu_37284_p2 = (!kernel_data_V_4_1010.read().is_01() || !data_V_data_50_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1010.read()) < sc_bigint<16>(data_V_data_50_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_775_fu_37306_p2() {
    icmp_ln1496_775_fu_37306_p2 = (!select_ln65_1124_fu_37276_p3.read().is_01() || !select_ln65_1126_fu_37298_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1124_fu_37276_p3.read()) < sc_bigint<16>(select_ln65_1126_fu_37298_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_776_fu_46546_p2() {
    icmp_ln1496_776_fu_46546_p2 = (!grp_fu_37224_p18.read().is_01() || !grp_fu_37324_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_37224_p18.read()) < sc_bigint<16>(grp_fu_37324_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_777_fu_49318_p2() {
    icmp_ln1496_777_fu_49318_p2 = (!grp_fu_46524_p18.read().is_01() || !grp_fu_46558_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_46524_p18.read()) < sc_bigint<16>(grp_fu_46558_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_778_fu_37396_p2() {
    icmp_ln1496_778_fu_37396_p2 = (!kernel_data_V_4_243.read().is_01() || !line_buffer_Array_V_4_2_51_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_243.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_51_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_779_fu_37418_p2() {
    icmp_ln1496_779_fu_37418_p2 = (!select_ln65_1130_fu_37388_p3.read().is_01() || !select_ln65_1132_fu_37410_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1130_fu_37388_p3.read()) < sc_bigint<16>(select_ln65_1132_fu_37410_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_77_fu_42822_p2() {
    icmp_ln1496_77_fu_42822_p2 = (!grp_fu_17232_p18.read().is_01() || !grp_fu_17332_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_17232_p18.read()) < sc_bigint<16>(grp_fu_17332_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_780_fu_37474_p2() {
    icmp_ln1496_780_fu_37474_p2 = (!kernel_data_V_4_307.read().is_01() || !kernel_data_V_4_371.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_307.read()) < sc_bigint<16>(kernel_data_V_4_371.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_781_fu_37496_p2() {
    icmp_ln1496_781_fu_37496_p2 = (!kernel_data_V_4_499.read().is_01() || !line_buffer_Array_V_4_1_51_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_499.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_51_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_782_fu_37518_p2() {
    icmp_ln1496_782_fu_37518_p2 = (!select_ln65_1135_fu_37488_p3.read().is_01() || !select_ln65_1137_fu_37510_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1135_fu_37488_p3.read()) < sc_bigint<16>(select_ln65_1137_fu_37510_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_783_fu_46583_p2() {
    icmp_ln1496_783_fu_46583_p2 = (!grp_fu_37436_p18.read().is_01() || !grp_fu_37536_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_37436_p18.read()) < sc_bigint<16>(grp_fu_37536_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_784_fu_37574_p2() {
    icmp_ln1496_784_fu_37574_p2 = (!kernel_data_V_4_563.read().is_01() || !kernel_data_V_4_691.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_563.read()) < sc_bigint<16>(kernel_data_V_4_691.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_785_fu_37596_p2() {
    icmp_ln1496_785_fu_37596_p2 = (!kernel_data_V_4_755.read().is_01() || !line_buffer_Array_V_4_0_51_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_755.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_51_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_786_fu_37618_p2() {
    icmp_ln1496_786_fu_37618_p2 = (!select_ln65_1141_fu_37588_p3.read().is_01() || !select_ln65_1143_fu_37610_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1141_fu_37588_p3.read()) < sc_bigint<16>(select_ln65_1143_fu_37610_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_787_fu_37670_p2() {
    icmp_ln1496_787_fu_37670_p2 = (!kernel_data_V_4_819.read().is_01() || !kernel_data_V_4_947.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_819.read()) < sc_bigint<16>(kernel_data_V_4_947.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_788_fu_37692_p2() {
    icmp_ln1496_788_fu_37692_p2 = (!kernel_data_V_4_1011.read().is_01() || !data_V_data_51_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1011.read()) < sc_bigint<16>(data_V_data_51_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_789_fu_37714_p2() {
    icmp_ln1496_789_fu_37714_p2 = (!select_ln65_1146_fu_37684_p3.read().is_01() || !select_ln65_1148_fu_37706_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1146_fu_37684_p3.read()) < sc_bigint<16>(select_ln65_1148_fu_37706_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_78_fu_47603_p2() {
    icmp_ln1496_78_fu_47603_p2 = (!grp_fu_42800_p18.read().is_01() || !grp_fu_42834_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_42800_p18.read()) < sc_bigint<16>(grp_fu_42834_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_790_fu_46622_p2() {
    icmp_ln1496_790_fu_46622_p2 = (!grp_fu_37632_p18.read().is_01() || !grp_fu_37732_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_37632_p18.read()) < sc_bigint<16>(grp_fu_37732_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_791_fu_49353_p2() {
    icmp_ln1496_791_fu_49353_p2 = (!grp_fu_46600_p18.read().is_01() || !grp_fu_46634_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_46600_p18.read()) < sc_bigint<16>(grp_fu_46634_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_792_fu_37804_p2() {
    icmp_ln1496_792_fu_37804_p2 = (!kernel_data_V_4_244.read().is_01() || !line_buffer_Array_V_4_2_52_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_244.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_52_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_793_fu_37826_p2() {
    icmp_ln1496_793_fu_37826_p2 = (!select_ln65_1152_fu_37796_p3.read().is_01() || !select_ln65_1154_fu_37818_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1152_fu_37796_p3.read()) < sc_bigint<16>(select_ln65_1154_fu_37818_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_794_fu_37882_p2() {
    icmp_ln1496_794_fu_37882_p2 = (!kernel_data_V_4_308.read().is_01() || !kernel_data_V_4_372.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_308.read()) < sc_bigint<16>(kernel_data_V_4_372.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_795_fu_37904_p2() {
    icmp_ln1496_795_fu_37904_p2 = (!kernel_data_V_4_500.read().is_01() || !line_buffer_Array_V_4_1_52_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_500.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_52_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_796_fu_37926_p2() {
    icmp_ln1496_796_fu_37926_p2 = (!select_ln65_1157_fu_37896_p3.read().is_01() || !select_ln65_1159_fu_37918_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1157_fu_37896_p3.read()) < sc_bigint<16>(select_ln65_1159_fu_37918_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_797_fu_46659_p2() {
    icmp_ln1496_797_fu_46659_p2 = (!grp_fu_37844_p18.read().is_01() || !grp_fu_37944_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_37844_p18.read()) < sc_bigint<16>(grp_fu_37944_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_798_fu_37982_p2() {
    icmp_ln1496_798_fu_37982_p2 = (!kernel_data_V_4_564.read().is_01() || !kernel_data_V_4_692.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_564.read()) < sc_bigint<16>(kernel_data_V_4_692.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_799_fu_38004_p2() {
    icmp_ln1496_799_fu_38004_p2 = (!kernel_data_V_4_756.read().is_01() || !line_buffer_Array_V_4_0_52_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_756.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_52_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_79_fu_17386_p2() {
    icmp_ln1496_79_fu_17386_p2 = (!kernel_data_V_4_2.read().is_01() || !kernel_data_V_4_66.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_2.read()) < sc_bigint<16>(kernel_data_V_4_66.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_7_fu_16766_p2() {
    icmp_ln1496_7_fu_16766_p2 = (!kernel_data_V_4_512.read().is_01() || !kernel_data_V_4_576.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_512.read()) < sc_bigint<16>(kernel_data_V_4_576.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_800_fu_38026_p2() {
    icmp_ln1496_800_fu_38026_p2 = (!select_ln65_1163_fu_37996_p3.read().is_01() || !select_ln65_1165_fu_38018_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1163_fu_37996_p3.read()) < sc_bigint<16>(select_ln65_1165_fu_38018_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_801_fu_38078_p2() {
    icmp_ln1496_801_fu_38078_p2 = (!kernel_data_V_4_820.read().is_01() || !kernel_data_V_4_948.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_820.read()) < sc_bigint<16>(kernel_data_V_4_948.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_802_fu_38100_p2() {
    icmp_ln1496_802_fu_38100_p2 = (!kernel_data_V_4_1012.read().is_01() || !data_V_data_52_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1012.read()) < sc_bigint<16>(data_V_data_52_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_803_fu_38122_p2() {
    icmp_ln1496_803_fu_38122_p2 = (!select_ln65_1168_fu_38092_p3.read().is_01() || !select_ln65_1170_fu_38114_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1168_fu_38092_p3.read()) < sc_bigint<16>(select_ln65_1170_fu_38114_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_804_fu_46698_p2() {
    icmp_ln1496_804_fu_46698_p2 = (!grp_fu_38040_p18.read().is_01() || !grp_fu_38140_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_38040_p18.read()) < sc_bigint<16>(grp_fu_38140_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_805_fu_49388_p2() {
    icmp_ln1496_805_fu_49388_p2 = (!grp_fu_46676_p18.read().is_01() || !grp_fu_46710_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_46676_p18.read()) < sc_bigint<16>(grp_fu_46710_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_806_fu_38212_p2() {
    icmp_ln1496_806_fu_38212_p2 = (!kernel_data_V_4_245.read().is_01() || !line_buffer_Array_V_4_2_53_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_245.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_53_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_807_fu_38234_p2() {
    icmp_ln1496_807_fu_38234_p2 = (!select_ln65_1174_fu_38204_p3.read().is_01() || !select_ln65_1176_fu_38226_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1174_fu_38204_p3.read()) < sc_bigint<16>(select_ln65_1176_fu_38226_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_808_fu_38290_p2() {
    icmp_ln1496_808_fu_38290_p2 = (!kernel_data_V_4_309.read().is_01() || !kernel_data_V_4_373.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_309.read()) < sc_bigint<16>(kernel_data_V_4_373.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_809_fu_38312_p2() {
    icmp_ln1496_809_fu_38312_p2 = (!kernel_data_V_4_501.read().is_01() || !line_buffer_Array_V_4_1_53_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_501.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_53_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_80_fu_17404_p2() {
    icmp_ln1496_80_fu_17404_p2 = (!kernel_data_V_4_194.read().is_01() || !line_buffer_Array_V_4_2_2_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_194.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_2_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_810_fu_38334_p2() {
    icmp_ln1496_810_fu_38334_p2 = (!select_ln65_1179_fu_38304_p3.read().is_01() || !select_ln65_1181_fu_38326_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1179_fu_38304_p3.read()) < sc_bigint<16>(select_ln65_1181_fu_38326_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_811_fu_46735_p2() {
    icmp_ln1496_811_fu_46735_p2 = (!grp_fu_38252_p18.read().is_01() || !grp_fu_38352_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_38252_p18.read()) < sc_bigint<16>(grp_fu_38352_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_812_fu_38390_p2() {
    icmp_ln1496_812_fu_38390_p2 = (!kernel_data_V_4_565.read().is_01() || !kernel_data_V_4_693.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_565.read()) < sc_bigint<16>(kernel_data_V_4_693.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_813_fu_38412_p2() {
    icmp_ln1496_813_fu_38412_p2 = (!kernel_data_V_4_757.read().is_01() || !line_buffer_Array_V_4_0_53_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_757.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_53_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_814_fu_38434_p2() {
    icmp_ln1496_814_fu_38434_p2 = (!select_ln65_1185_fu_38404_p3.read().is_01() || !select_ln65_1187_fu_38426_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1185_fu_38404_p3.read()) < sc_bigint<16>(select_ln65_1187_fu_38426_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_815_fu_38486_p2() {
    icmp_ln1496_815_fu_38486_p2 = (!kernel_data_V_4_821.read().is_01() || !kernel_data_V_4_949.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_821.read()) < sc_bigint<16>(kernel_data_V_4_949.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_816_fu_38508_p2() {
    icmp_ln1496_816_fu_38508_p2 = (!kernel_data_V_4_1013.read().is_01() || !data_V_data_53_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1013.read()) < sc_bigint<16>(data_V_data_53_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_817_fu_38530_p2() {
    icmp_ln1496_817_fu_38530_p2 = (!select_ln65_1190_fu_38500_p3.read().is_01() || !select_ln65_1192_fu_38522_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1190_fu_38500_p3.read()) < sc_bigint<16>(select_ln65_1192_fu_38522_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_818_fu_46774_p2() {
    icmp_ln1496_818_fu_46774_p2 = (!grp_fu_38448_p18.read().is_01() || !grp_fu_38548_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_38448_p18.read()) < sc_bigint<16>(grp_fu_38548_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_819_fu_49423_p2() {
    icmp_ln1496_819_fu_49423_p2 = (!grp_fu_46752_p18.read().is_01() || !grp_fu_46786_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_46752_p18.read()) < sc_bigint<16>(grp_fu_46786_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_81_fu_17426_p2() {
    icmp_ln1496_81_fu_17426_p2 = (!select_ln65_52_fu_17396_p3.read().is_01() || !select_ln65_54_fu_17418_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_52_fu_17396_p3.read()) < sc_bigint<16>(select_ln65_54_fu_17418_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_820_fu_38620_p2() {
    icmp_ln1496_820_fu_38620_p2 = (!kernel_data_V_4_246.read().is_01() || !line_buffer_Array_V_4_2_54_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_246.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_54_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_821_fu_38642_p2() {
    icmp_ln1496_821_fu_38642_p2 = (!select_ln65_1196_fu_38612_p3.read().is_01() || !select_ln65_1198_fu_38634_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1196_fu_38612_p3.read()) < sc_bigint<16>(select_ln65_1198_fu_38634_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_822_fu_38698_p2() {
    icmp_ln1496_822_fu_38698_p2 = (!kernel_data_V_4_310.read().is_01() || !kernel_data_V_4_374.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_310.read()) < sc_bigint<16>(kernel_data_V_4_374.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_823_fu_38720_p2() {
    icmp_ln1496_823_fu_38720_p2 = (!kernel_data_V_4_502.read().is_01() || !line_buffer_Array_V_4_1_54_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_502.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_54_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_824_fu_38742_p2() {
    icmp_ln1496_824_fu_38742_p2 = (!select_ln65_1201_fu_38712_p3.read().is_01() || !select_ln65_1203_fu_38734_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1201_fu_38712_p3.read()) < sc_bigint<16>(select_ln65_1203_fu_38734_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_825_fu_46811_p2() {
    icmp_ln1496_825_fu_46811_p2 = (!grp_fu_38660_p18.read().is_01() || !grp_fu_38760_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_38660_p18.read()) < sc_bigint<16>(grp_fu_38760_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_826_fu_38798_p2() {
    icmp_ln1496_826_fu_38798_p2 = (!kernel_data_V_4_566.read().is_01() || !kernel_data_V_4_694.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_566.read()) < sc_bigint<16>(kernel_data_V_4_694.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_827_fu_38820_p2() {
    icmp_ln1496_827_fu_38820_p2 = (!kernel_data_V_4_758.read().is_01() || !line_buffer_Array_V_4_0_54_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_758.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_54_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_828_fu_38842_p2() {
    icmp_ln1496_828_fu_38842_p2 = (!select_ln65_1207_fu_38812_p3.read().is_01() || !select_ln65_1209_fu_38834_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1207_fu_38812_p3.read()) < sc_bigint<16>(select_ln65_1209_fu_38834_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_829_fu_38894_p2() {
    icmp_ln1496_829_fu_38894_p2 = (!kernel_data_V_4_822.read().is_01() || !kernel_data_V_4_950.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_822.read()) < sc_bigint<16>(kernel_data_V_4_950.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_82_fu_17482_p2() {
    icmp_ln1496_82_fu_17482_p2 = (!kernel_data_V_4_258.read().is_01() || !kernel_data_V_4_322.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_258.read()) < sc_bigint<16>(kernel_data_V_4_322.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_830_fu_38916_p2() {
    icmp_ln1496_830_fu_38916_p2 = (!kernel_data_V_4_1014.read().is_01() || !data_V_data_54_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1014.read()) < sc_bigint<16>(data_V_data_54_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_831_fu_38938_p2() {
    icmp_ln1496_831_fu_38938_p2 = (!select_ln65_1212_fu_38908_p3.read().is_01() || !select_ln65_1214_fu_38930_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1212_fu_38908_p3.read()) < sc_bigint<16>(select_ln65_1214_fu_38930_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_832_fu_46850_p2() {
    icmp_ln1496_832_fu_46850_p2 = (!grp_fu_38856_p18.read().is_01() || !grp_fu_38956_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_38856_p18.read()) < sc_bigint<16>(grp_fu_38956_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_833_fu_49458_p2() {
    icmp_ln1496_833_fu_49458_p2 = (!grp_fu_46828_p18.read().is_01() || !grp_fu_46862_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_46828_p18.read()) < sc_bigint<16>(grp_fu_46862_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_834_fu_39028_p2() {
    icmp_ln1496_834_fu_39028_p2 = (!kernel_data_V_4_247.read().is_01() || !line_buffer_Array_V_4_2_55_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_247.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_55_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_835_fu_39050_p2() {
    icmp_ln1496_835_fu_39050_p2 = (!select_ln65_1218_fu_39020_p3.read().is_01() || !select_ln65_1220_fu_39042_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1218_fu_39020_p3.read()) < sc_bigint<16>(select_ln65_1220_fu_39042_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_836_fu_39106_p2() {
    icmp_ln1496_836_fu_39106_p2 = (!kernel_data_V_4_311.read().is_01() || !kernel_data_V_4_375.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_311.read()) < sc_bigint<16>(kernel_data_V_4_375.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_837_fu_39128_p2() {
    icmp_ln1496_837_fu_39128_p2 = (!kernel_data_V_4_503.read().is_01() || !line_buffer_Array_V_4_1_55_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_503.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_55_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_838_fu_39150_p2() {
    icmp_ln1496_838_fu_39150_p2 = (!select_ln65_1223_fu_39120_p3.read().is_01() || !select_ln65_1225_fu_39142_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1223_fu_39120_p3.read()) < sc_bigint<16>(select_ln65_1225_fu_39142_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_839_fu_46887_p2() {
    icmp_ln1496_839_fu_46887_p2 = (!grp_fu_39068_p18.read().is_01() || !grp_fu_39168_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_39068_p18.read()) < sc_bigint<16>(grp_fu_39168_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_83_fu_17504_p2() {
    icmp_ln1496_83_fu_17504_p2 = (!kernel_data_V_4_450.read().is_01() || !line_buffer_Array_V_4_1_2_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_450.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_2_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_840_fu_39206_p2() {
    icmp_ln1496_840_fu_39206_p2 = (!kernel_data_V_4_567.read().is_01() || !kernel_data_V_4_695.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_567.read()) < sc_bigint<16>(kernel_data_V_4_695.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_841_fu_39228_p2() {
    icmp_ln1496_841_fu_39228_p2 = (!kernel_data_V_4_759.read().is_01() || !line_buffer_Array_V_4_0_55_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_759.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_55_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_842_fu_39250_p2() {
    icmp_ln1496_842_fu_39250_p2 = (!select_ln65_1229_fu_39220_p3.read().is_01() || !select_ln65_1231_fu_39242_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1229_fu_39220_p3.read()) < sc_bigint<16>(select_ln65_1231_fu_39242_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_843_fu_39302_p2() {
    icmp_ln1496_843_fu_39302_p2 = (!kernel_data_V_4_823.read().is_01() || !kernel_data_V_4_951.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_823.read()) < sc_bigint<16>(kernel_data_V_4_951.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_844_fu_39324_p2() {
    icmp_ln1496_844_fu_39324_p2 = (!kernel_data_V_4_1015.read().is_01() || !data_V_data_55_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1015.read()) < sc_bigint<16>(data_V_data_55_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_845_fu_39346_p2() {
    icmp_ln1496_845_fu_39346_p2 = (!select_ln65_1234_fu_39316_p3.read().is_01() || !select_ln65_1236_fu_39338_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1234_fu_39316_p3.read()) < sc_bigint<16>(select_ln65_1236_fu_39338_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_846_fu_46926_p2() {
    icmp_ln1496_846_fu_46926_p2 = (!grp_fu_39264_p18.read().is_01() || !grp_fu_39364_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_39264_p18.read()) < sc_bigint<16>(grp_fu_39364_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_847_fu_49493_p2() {
    icmp_ln1496_847_fu_49493_p2 = (!grp_fu_46904_p18.read().is_01() || !grp_fu_46938_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_46904_p18.read()) < sc_bigint<16>(grp_fu_46938_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_848_fu_39436_p2() {
    icmp_ln1496_848_fu_39436_p2 = (!kernel_data_V_4_248.read().is_01() || !line_buffer_Array_V_4_2_56_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_248.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_56_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_849_fu_39458_p2() {
    icmp_ln1496_849_fu_39458_p2 = (!select_ln65_1240_fu_39428_p3.read().is_01() || !select_ln65_1242_fu_39450_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1240_fu_39428_p3.read()) < sc_bigint<16>(select_ln65_1242_fu_39450_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_84_fu_17526_p2() {
    icmp_ln1496_84_fu_17526_p2 = (!select_ln65_57_fu_17496_p3.read().is_01() || !select_ln65_59_fu_17518_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_57_fu_17496_p3.read()) < sc_bigint<16>(select_ln65_59_fu_17518_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_850_fu_39514_p2() {
    icmp_ln1496_850_fu_39514_p2 = (!kernel_data_V_4_312.read().is_01() || !kernel_data_V_4_376.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_312.read()) < sc_bigint<16>(kernel_data_V_4_376.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_851_fu_39536_p2() {
    icmp_ln1496_851_fu_39536_p2 = (!kernel_data_V_4_504.read().is_01() || !line_buffer_Array_V_4_1_56_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_504.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_56_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_852_fu_39558_p2() {
    icmp_ln1496_852_fu_39558_p2 = (!select_ln65_1245_fu_39528_p3.read().is_01() || !select_ln65_1247_fu_39550_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1245_fu_39528_p3.read()) < sc_bigint<16>(select_ln65_1247_fu_39550_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_853_fu_46963_p2() {
    icmp_ln1496_853_fu_46963_p2 = (!grp_fu_39476_p18.read().is_01() || !grp_fu_39576_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_39476_p18.read()) < sc_bigint<16>(grp_fu_39576_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_854_fu_39614_p2() {
    icmp_ln1496_854_fu_39614_p2 = (!kernel_data_V_4_568.read().is_01() || !kernel_data_V_4_696.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_568.read()) < sc_bigint<16>(kernel_data_V_4_696.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_855_fu_39636_p2() {
    icmp_ln1496_855_fu_39636_p2 = (!kernel_data_V_4_760.read().is_01() || !line_buffer_Array_V_4_0_56_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_760.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_56_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_856_fu_39658_p2() {
    icmp_ln1496_856_fu_39658_p2 = (!select_ln65_1251_fu_39628_p3.read().is_01() || !select_ln65_1253_fu_39650_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1251_fu_39628_p3.read()) < sc_bigint<16>(select_ln65_1253_fu_39650_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_857_fu_39710_p2() {
    icmp_ln1496_857_fu_39710_p2 = (!kernel_data_V_4_824.read().is_01() || !kernel_data_V_4_952.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_824.read()) < sc_bigint<16>(kernel_data_V_4_952.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_858_fu_39732_p2() {
    icmp_ln1496_858_fu_39732_p2 = (!kernel_data_V_4_1016.read().is_01() || !data_V_data_56_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1016.read()) < sc_bigint<16>(data_V_data_56_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_859_fu_39754_p2() {
    icmp_ln1496_859_fu_39754_p2 = (!select_ln65_1256_fu_39724_p3.read().is_01() || !select_ln65_1258_fu_39746_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1256_fu_39724_p3.read()) < sc_bigint<16>(select_ln65_1258_fu_39746_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_85_fu_42859_p2() {
    icmp_ln1496_85_fu_42859_p2 = (!grp_fu_17444_p18.read().is_01() || !grp_fu_17544_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_17444_p18.read()) < sc_bigint<16>(grp_fu_17544_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_860_fu_47002_p2() {
    icmp_ln1496_860_fu_47002_p2 = (!grp_fu_39672_p18.read().is_01() || !grp_fu_39772_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_39672_p18.read()) < sc_bigint<16>(grp_fu_39772_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_861_fu_49528_p2() {
    icmp_ln1496_861_fu_49528_p2 = (!grp_fu_46980_p18.read().is_01() || !grp_fu_47014_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_46980_p18.read()) < sc_bigint<16>(grp_fu_47014_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_862_fu_39844_p2() {
    icmp_ln1496_862_fu_39844_p2 = (!kernel_data_V_4_249.read().is_01() || !line_buffer_Array_V_4_2_57_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_249.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_57_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_863_fu_39866_p2() {
    icmp_ln1496_863_fu_39866_p2 = (!select_ln65_1261_fu_39836_p3.read().is_01() || !select_ln65_1263_fu_39858_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1261_fu_39836_p3.read()) < sc_bigint<16>(select_ln65_1263_fu_39858_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_864_fu_39922_p2() {
    icmp_ln1496_864_fu_39922_p2 = (!kernel_data_V_4_313.read().is_01() || !kernel_data_V_4_377.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_313.read()) < sc_bigint<16>(kernel_data_V_4_377.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_865_fu_39944_p2() {
    icmp_ln1496_865_fu_39944_p2 = (!kernel_data_V_4_505.read().is_01() || !line_buffer_Array_V_4_1_57_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_505.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_57_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_866_fu_39966_p2() {
    icmp_ln1496_866_fu_39966_p2 = (!select_ln65_1266_fu_39936_p3.read().is_01() || !select_ln65_1268_fu_39958_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1266_fu_39936_p3.read()) < sc_bigint<16>(select_ln65_1268_fu_39958_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_867_fu_47039_p2() {
    icmp_ln1496_867_fu_47039_p2 = (!grp_fu_39884_p18.read().is_01() || !grp_fu_39984_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_39884_p18.read()) < sc_bigint<16>(grp_fu_39984_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_868_fu_40022_p2() {
    icmp_ln1496_868_fu_40022_p2 = (!kernel_data_V_4_569.read().is_01() || !kernel_data_V_4_697.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_569.read()) < sc_bigint<16>(kernel_data_V_4_697.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_869_fu_40044_p2() {
    icmp_ln1496_869_fu_40044_p2 = (!kernel_data_V_4_761.read().is_01() || !line_buffer_Array_V_4_0_57_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_761.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_57_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_86_fu_17582_p2() {
    icmp_ln1496_86_fu_17582_p2 = (!kernel_data_V_4_514.read().is_01() || !kernel_data_V_4_578.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_514.read()) < sc_bigint<16>(kernel_data_V_4_578.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_870_fu_40066_p2() {
    icmp_ln1496_870_fu_40066_p2 = (!select_ln65_1272_fu_40036_p3.read().is_01() || !select_ln65_1274_fu_40058_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1272_fu_40036_p3.read()) < sc_bigint<16>(select_ln65_1274_fu_40058_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_871_fu_40118_p2() {
    icmp_ln1496_871_fu_40118_p2 = (!kernel_data_V_4_825.read().is_01() || !kernel_data_V_4_953.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_825.read()) < sc_bigint<16>(kernel_data_V_4_953.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_872_fu_40140_p2() {
    icmp_ln1496_872_fu_40140_p2 = (!kernel_data_V_4_1017.read().is_01() || !data_V_data_57_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1017.read()) < sc_bigint<16>(data_V_data_57_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_873_fu_40162_p2() {
    icmp_ln1496_873_fu_40162_p2 = (!select_ln65_1277_fu_40132_p3.read().is_01() || !select_ln65_1279_fu_40154_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1277_fu_40132_p3.read()) < sc_bigint<16>(select_ln65_1279_fu_40154_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_874_fu_47078_p2() {
    icmp_ln1496_874_fu_47078_p2 = (!grp_fu_40080_p18.read().is_01() || !grp_fu_40180_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_40080_p18.read()) < sc_bigint<16>(grp_fu_40180_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_875_fu_49563_p2() {
    icmp_ln1496_875_fu_49563_p2 = (!grp_fu_47056_p18.read().is_01() || !grp_fu_47090_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_47056_p18.read()) < sc_bigint<16>(grp_fu_47090_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_876_fu_40252_p2() {
    icmp_ln1496_876_fu_40252_p2 = (!kernel_data_V_4_250.read().is_01() || !line_buffer_Array_V_4_2_58_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_250.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_58_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_877_fu_40274_p2() {
    icmp_ln1496_877_fu_40274_p2 = (!select_ln65_1282_fu_40244_p3.read().is_01() || !select_ln65_1284_fu_40266_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1282_fu_40244_p3.read()) < sc_bigint<16>(select_ln65_1284_fu_40266_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_878_fu_40330_p2() {
    icmp_ln1496_878_fu_40330_p2 = (!kernel_data_V_4_314.read().is_01() || !kernel_data_V_4_378.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_314.read()) < sc_bigint<16>(kernel_data_V_4_378.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_879_fu_40352_p2() {
    icmp_ln1496_879_fu_40352_p2 = (!kernel_data_V_4_506.read().is_01() || !line_buffer_Array_V_4_1_58_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_506.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_58_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_87_fu_17604_p2() {
    icmp_ln1496_87_fu_17604_p2 = (!kernel_data_V_4_706.read().is_01() || !line_buffer_Array_V_4_0_2_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_706.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_2_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_880_fu_40374_p2() {
    icmp_ln1496_880_fu_40374_p2 = (!select_ln65_1287_fu_40344_p3.read().is_01() || !select_ln65_1289_fu_40366_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1287_fu_40344_p3.read()) < sc_bigint<16>(select_ln65_1289_fu_40366_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_881_fu_47115_p2() {
    icmp_ln1496_881_fu_47115_p2 = (!grp_fu_40292_p18.read().is_01() || !grp_fu_40392_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_40292_p18.read()) < sc_bigint<16>(grp_fu_40392_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_882_fu_40430_p2() {
    icmp_ln1496_882_fu_40430_p2 = (!kernel_data_V_4_570.read().is_01() || !kernel_data_V_4_698.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_570.read()) < sc_bigint<16>(kernel_data_V_4_698.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_883_fu_40452_p2() {
    icmp_ln1496_883_fu_40452_p2 = (!kernel_data_V_4_762.read().is_01() || !line_buffer_Array_V_4_0_58_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_762.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_58_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_884_fu_40474_p2() {
    icmp_ln1496_884_fu_40474_p2 = (!select_ln65_1293_fu_40444_p3.read().is_01() || !select_ln65_1295_fu_40466_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1293_fu_40444_p3.read()) < sc_bigint<16>(select_ln65_1295_fu_40466_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_885_fu_40526_p2() {
    icmp_ln1496_885_fu_40526_p2 = (!kernel_data_V_4_826.read().is_01() || !kernel_data_V_4_954.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_826.read()) < sc_bigint<16>(kernel_data_V_4_954.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_886_fu_40548_p2() {
    icmp_ln1496_886_fu_40548_p2 = (!kernel_data_V_4_1018.read().is_01() || !data_V_data_58_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1018.read()) < sc_bigint<16>(data_V_data_58_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_887_fu_40570_p2() {
    icmp_ln1496_887_fu_40570_p2 = (!select_ln65_1298_fu_40540_p3.read().is_01() || !select_ln65_1300_fu_40562_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1298_fu_40540_p3.read()) < sc_bigint<16>(select_ln65_1300_fu_40562_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_888_fu_47154_p2() {
    icmp_ln1496_888_fu_47154_p2 = (!grp_fu_40488_p18.read().is_01() || !grp_fu_40588_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_40488_p18.read()) < sc_bigint<16>(grp_fu_40588_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_889_fu_49598_p2() {
    icmp_ln1496_889_fu_49598_p2 = (!grp_fu_47132_p18.read().is_01() || !grp_fu_47166_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_47132_p18.read()) < sc_bigint<16>(grp_fu_47166_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_88_fu_17626_p2() {
    icmp_ln1496_88_fu_17626_p2 = (!select_ln65_63_fu_17596_p3.read().is_01() || !select_ln65_65_fu_17618_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_63_fu_17596_p3.read()) < sc_bigint<16>(select_ln65_65_fu_17618_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_890_fu_40660_p2() {
    icmp_ln1496_890_fu_40660_p2 = (!kernel_data_V_4_251.read().is_01() || !line_buffer_Array_V_4_2_59_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_251.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_59_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_891_fu_40682_p2() {
    icmp_ln1496_891_fu_40682_p2 = (!select_ln65_1303_fu_40652_p3.read().is_01() || !select_ln65_1305_fu_40674_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1303_fu_40652_p3.read()) < sc_bigint<16>(select_ln65_1305_fu_40674_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_892_fu_40738_p2() {
    icmp_ln1496_892_fu_40738_p2 = (!kernel_data_V_4_315.read().is_01() || !kernel_data_V_4_379.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_315.read()) < sc_bigint<16>(kernel_data_V_4_379.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_893_fu_40760_p2() {
    icmp_ln1496_893_fu_40760_p2 = (!kernel_data_V_4_507.read().is_01() || !line_buffer_Array_V_4_1_59_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_507.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_59_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_894_fu_40782_p2() {
    icmp_ln1496_894_fu_40782_p2 = (!select_ln65_1308_fu_40752_p3.read().is_01() || !select_ln65_1310_fu_40774_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1308_fu_40752_p3.read()) < sc_bigint<16>(select_ln65_1310_fu_40774_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_895_fu_47191_p2() {
    icmp_ln1496_895_fu_47191_p2 = (!grp_fu_40700_p18.read().is_01() || !grp_fu_40800_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_40700_p18.read()) < sc_bigint<16>(grp_fu_40800_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_896_fu_40838_p2() {
    icmp_ln1496_896_fu_40838_p2 = (!kernel_data_V_4_571.read().is_01() || !kernel_data_V_4_699.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_571.read()) < sc_bigint<16>(kernel_data_V_4_699.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_897_fu_40860_p2() {
    icmp_ln1496_897_fu_40860_p2 = (!kernel_data_V_4_763.read().is_01() || !line_buffer_Array_V_4_0_59_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_763.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_59_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_898_fu_40882_p2() {
    icmp_ln1496_898_fu_40882_p2 = (!select_ln65_1314_fu_40852_p3.read().is_01() || !select_ln65_1316_fu_40874_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1314_fu_40852_p3.read()) < sc_bigint<16>(select_ln65_1316_fu_40874_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_899_fu_40934_p2() {
    icmp_ln1496_899_fu_40934_p2 = (!kernel_data_V_4_827.read().is_01() || !kernel_data_V_4_955.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_827.read()) < sc_bigint<16>(kernel_data_V_4_955.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_89_fu_17678_p2() {
    icmp_ln1496_89_fu_17678_p2 = (!kernel_data_V_4_770.read().is_01() || !kernel_data_V_4_898.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_770.read()) < sc_bigint<16>(kernel_data_V_4_898.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_8_fu_16788_p2() {
    icmp_ln1496_8_fu_16788_p2 = (!kernel_data_V_4_704.read().is_01() || !line_buffer_Array_V_4_0_0_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_704.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_0_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_900_fu_40956_p2() {
    icmp_ln1496_900_fu_40956_p2 = (!kernel_data_V_4_1019.read().is_01() || !data_V_data_59_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1019.read()) < sc_bigint<16>(data_V_data_59_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_901_fu_40978_p2() {
    icmp_ln1496_901_fu_40978_p2 = (!select_ln65_1319_fu_40948_p3.read().is_01() || !select_ln65_1321_fu_40970_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1319_fu_40948_p3.read()) < sc_bigint<16>(select_ln65_1321_fu_40970_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_902_fu_47230_p2() {
    icmp_ln1496_902_fu_47230_p2 = (!grp_fu_40896_p18.read().is_01() || !grp_fu_40996_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_40896_p18.read()) < sc_bigint<16>(grp_fu_40996_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_903_fu_49633_p2() {
    icmp_ln1496_903_fu_49633_p2 = (!grp_fu_47208_p18.read().is_01() || !grp_fu_47242_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_47208_p18.read()) < sc_bigint<16>(grp_fu_47242_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_904_fu_41068_p2() {
    icmp_ln1496_904_fu_41068_p2 = (!kernel_data_V_4_252.read().is_01() || !line_buffer_Array_V_4_2_60_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_252.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_60_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_905_fu_41090_p2() {
    icmp_ln1496_905_fu_41090_p2 = (!select_ln65_1324_fu_41060_p3.read().is_01() || !select_ln65_1326_fu_41082_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1324_fu_41060_p3.read()) < sc_bigint<16>(select_ln65_1326_fu_41082_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_906_fu_41146_p2() {
    icmp_ln1496_906_fu_41146_p2 = (!kernel_data_V_4_316.read().is_01() || !kernel_data_V_4_380.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_316.read()) < sc_bigint<16>(kernel_data_V_4_380.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_907_fu_41168_p2() {
    icmp_ln1496_907_fu_41168_p2 = (!kernel_data_V_4_508.read().is_01() || !line_buffer_Array_V_4_1_60_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_508.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_60_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_908_fu_41190_p2() {
    icmp_ln1496_908_fu_41190_p2 = (!select_ln65_1329_fu_41160_p3.read().is_01() || !select_ln65_1331_fu_41182_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1329_fu_41160_p3.read()) < sc_bigint<16>(select_ln65_1331_fu_41182_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_909_fu_47267_p2() {
    icmp_ln1496_909_fu_47267_p2 = (!grp_fu_41108_p18.read().is_01() || !grp_fu_41208_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_41108_p18.read()) < sc_bigint<16>(grp_fu_41208_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_90_fu_17700_p2() {
    icmp_ln1496_90_fu_17700_p2 = (!kernel_data_V_4_962.read().is_01() || !data_V_data_2_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_962.read()) < sc_bigint<16>(data_V_data_2_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_910_fu_41246_p2() {
    icmp_ln1496_910_fu_41246_p2 = (!kernel_data_V_4_572.read().is_01() || !kernel_data_V_4_700.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_572.read()) < sc_bigint<16>(kernel_data_V_4_700.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_911_fu_41268_p2() {
    icmp_ln1496_911_fu_41268_p2 = (!kernel_data_V_4_764.read().is_01() || !line_buffer_Array_V_4_0_60_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_764.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_60_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_912_fu_41290_p2() {
    icmp_ln1496_912_fu_41290_p2 = (!select_ln65_1335_fu_41260_p3.read().is_01() || !select_ln65_1337_fu_41282_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1335_fu_41260_p3.read()) < sc_bigint<16>(select_ln65_1337_fu_41282_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_913_fu_41342_p2() {
    icmp_ln1496_913_fu_41342_p2 = (!kernel_data_V_4_828.read().is_01() || !kernel_data_V_4_956.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_828.read()) < sc_bigint<16>(kernel_data_V_4_956.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_914_fu_41364_p2() {
    icmp_ln1496_914_fu_41364_p2 = (!kernel_data_V_4_1020.read().is_01() || !data_V_data_60_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1020.read()) < sc_bigint<16>(data_V_data_60_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_915_fu_41386_p2() {
    icmp_ln1496_915_fu_41386_p2 = (!select_ln65_1340_fu_41356_p3.read().is_01() || !select_ln65_1342_fu_41378_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1340_fu_41356_p3.read()) < sc_bigint<16>(select_ln65_1342_fu_41378_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_916_fu_47306_p2() {
    icmp_ln1496_916_fu_47306_p2 = (!grp_fu_41304_p18.read().is_01() || !grp_fu_41404_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_41304_p18.read()) < sc_bigint<16>(grp_fu_41404_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_917_fu_49668_p2() {
    icmp_ln1496_917_fu_49668_p2 = (!grp_fu_47284_p18.read().is_01() || !grp_fu_47318_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_47284_p18.read()) < sc_bigint<16>(grp_fu_47318_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_918_fu_41476_p2() {
    icmp_ln1496_918_fu_41476_p2 = (!kernel_data_V_4_253.read().is_01() || !line_buffer_Array_V_4_2_61_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_253.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_61_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_919_fu_41498_p2() {
    icmp_ln1496_919_fu_41498_p2 = (!select_ln65_1345_fu_41468_p3.read().is_01() || !select_ln65_1347_fu_41490_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1345_fu_41468_p3.read()) < sc_bigint<16>(select_ln65_1347_fu_41490_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_91_fu_17722_p2() {
    icmp_ln1496_91_fu_17722_p2 = (!select_ln65_68_fu_17692_p3.read().is_01() || !select_ln65_70_fu_17714_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_68_fu_17692_p3.read()) < sc_bigint<16>(select_ln65_70_fu_17714_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_920_fu_41554_p2() {
    icmp_ln1496_920_fu_41554_p2 = (!kernel_data_V_4_317.read().is_01() || !kernel_data_V_4_381.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_317.read()) < sc_bigint<16>(kernel_data_V_4_381.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_921_fu_41576_p2() {
    icmp_ln1496_921_fu_41576_p2 = (!kernel_data_V_4_509.read().is_01() || !line_buffer_Array_V_4_1_61_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_509.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_61_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_922_fu_41598_p2() {
    icmp_ln1496_922_fu_41598_p2 = (!select_ln65_1350_fu_41568_p3.read().is_01() || !select_ln65_1352_fu_41590_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1350_fu_41568_p3.read()) < sc_bigint<16>(select_ln65_1352_fu_41590_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_923_fu_47343_p2() {
    icmp_ln1496_923_fu_47343_p2 = (!grp_fu_41516_p18.read().is_01() || !grp_fu_41616_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_41516_p18.read()) < sc_bigint<16>(grp_fu_41616_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_924_fu_41654_p2() {
    icmp_ln1496_924_fu_41654_p2 = (!kernel_data_V_4_573.read().is_01() || !kernel_data_V_4_701.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_573.read()) < sc_bigint<16>(kernel_data_V_4_701.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_925_fu_41676_p2() {
    icmp_ln1496_925_fu_41676_p2 = (!kernel_data_V_4_765.read().is_01() || !line_buffer_Array_V_4_0_61_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_765.read()) < sc_bigint<16>(line_buffer_Array_V_4_0_61_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_926_fu_41698_p2() {
    icmp_ln1496_926_fu_41698_p2 = (!select_ln65_1356_fu_41668_p3.read().is_01() || !select_ln65_1358_fu_41690_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1356_fu_41668_p3.read()) < sc_bigint<16>(select_ln65_1358_fu_41690_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_927_fu_41750_p2() {
    icmp_ln1496_927_fu_41750_p2 = (!kernel_data_V_4_829.read().is_01() || !kernel_data_V_4_957.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_829.read()) < sc_bigint<16>(kernel_data_V_4_957.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_928_fu_41772_p2() {
    icmp_ln1496_928_fu_41772_p2 = (!kernel_data_V_4_1021.read().is_01() || !data_V_data_61_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_1021.read()) < sc_bigint<16>(data_V_data_61_V_dout.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_929_fu_41794_p2() {
    icmp_ln1496_929_fu_41794_p2 = (!select_ln65_1361_fu_41764_p3.read().is_01() || !select_ln65_1363_fu_41786_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1361_fu_41764_p3.read()) < sc_bigint<16>(select_ln65_1363_fu_41786_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_92_fu_42898_p2() {
    icmp_ln1496_92_fu_42898_p2 = (!grp_fu_17640_p18.read().is_01() || !grp_fu_17740_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_17640_p18.read()) < sc_bigint<16>(grp_fu_17740_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_930_fu_47382_p2() {
    icmp_ln1496_930_fu_47382_p2 = (!grp_fu_41712_p18.read().is_01() || !grp_fu_41812_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_41712_p18.read()) < sc_bigint<16>(grp_fu_41812_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_931_fu_49703_p2() {
    icmp_ln1496_931_fu_49703_p2 = (!grp_fu_47360_p18.read().is_01() || !grp_fu_47394_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_47360_p18.read()) < sc_bigint<16>(grp_fu_47394_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_932_fu_41884_p2() {
    icmp_ln1496_932_fu_41884_p2 = (!kernel_data_V_4_254.read().is_01() || !line_buffer_Array_V_4_2_62_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_254.read()) < sc_bigint<16>(line_buffer_Array_V_4_2_62_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_933_fu_41906_p2() {
    icmp_ln1496_933_fu_41906_p2 = (!select_ln65_1366_fu_41876_p3.read().is_01() || !select_ln65_1368_fu_41898_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1366_fu_41876_p3.read()) < sc_bigint<16>(select_ln65_1368_fu_41898_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_934_fu_41962_p2() {
    icmp_ln1496_934_fu_41962_p2 = (!kernel_data_V_4_318.read().is_01() || !kernel_data_V_4_382.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_318.read()) < sc_bigint<16>(kernel_data_V_4_382.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_935_fu_41984_p2() {
    icmp_ln1496_935_fu_41984_p2 = (!kernel_data_V_4_510.read().is_01() || !line_buffer_Array_V_4_1_62_q0.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_510.read()) < sc_bigint<16>(line_buffer_Array_V_4_1_62_q0.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_936_fu_42006_p2() {
    icmp_ln1496_936_fu_42006_p2 = (!select_ln65_1371_fu_41976_p3.read().is_01() || !select_ln65_1373_fu_41998_p3.read().is_01())? sc_lv<1>(): (sc_bigint<16>(select_ln65_1371_fu_41976_p3.read()) < sc_bigint<16>(select_ln65_1373_fu_41998_p3.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_937_fu_47419_p2() {
    icmp_ln1496_937_fu_47419_p2 = (!grp_fu_41924_p18.read().is_01() || !grp_fu_42024_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(grp_fu_41924_p18.read()) < sc_bigint<16>(grp_fu_42024_p18.read()));
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_icmp_ln1496_938_fu_42062_p2() {
    icmp_ln1496_938_fu_42062_p2 = (!kernel_data_V_4_574.read().is_01() || !kernel_data_V_4_702.read().is_01())? sc_lv<1>(): (sc_bigint<16>(kernel_data_V_4_574.read()) < sc_bigint<16>(kernel_data_V_4_702.read()));
}

}

