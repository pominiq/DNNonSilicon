#include "dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0::thread_ap_clk_no_reset_() {
    ap_ce_reg = ap_ce.read();
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_const_logic_1))) {
        add_ln703_108_reg_486640 = add_ln703_108_fu_484805_p2.read();
        add_ln703_115_reg_486645 = add_ln703_115_fu_484851_p2.read();
        add_ln703_123_reg_486650 = add_ln703_123_fu_484907_p2.read();
        add_ln703_142_reg_486655 = add_ln703_142_fu_484997_p2.read();
        add_ln703_149_reg_486660 = add_ln703_149_fu_485043_p2.read();
        add_ln703_14_reg_486600 = add_ln703_14_fu_484221_p2.read();
        add_ln703_156_reg_486665 = add_ln703_156_fu_485089_p2.read();
        add_ln703_173_reg_486670 = add_ln703_173_fu_485187_p2.read();
        add_ln703_188_reg_486675 = add_ln703_188_fu_485281_p2.read();
        add_ln703_205_reg_486680 = add_ln703_205_fu_485371_p2.read();
        add_ln703_212_reg_486685 = add_ln703_212_fu_485413_p2.read();
        add_ln703_219_reg_486690 = add_ln703_219_fu_485455_p2.read();
        add_ln703_21_reg_486605 = add_ln703_21_fu_484267_p2.read();
        add_ln703_236_reg_486695 = add_ln703_236_fu_485545_p2.read();
        add_ln703_243_reg_486700 = add_ln703_243_fu_485587_p2.read();
        add_ln703_251_reg_486705 = add_ln703_251_fu_485647_p2.read();
        add_ln703_270_reg_486710 = add_ln703_270_fu_485737_p2.read();
        add_ln703_277_reg_486715 = add_ln703_277_fu_485787_p2.read();
        add_ln703_284_reg_486720 = add_ln703_284_fu_485833_p2.read();
        add_ln703_28_reg_486610 = add_ln703_28_fu_484317_p2.read();
        add_ln703_301_reg_486725 = add_ln703_301_fu_485931_p2.read();
        add_ln703_316_reg_486730 = add_ln703_316_fu_486025_p2.read();
        add_ln703_349_reg_486735 = add_ln703_349_fu_486235_p2.read();
        add_ln703_364_reg_486740 = add_ln703_364_fu_486333_p2.read();
        add_ln703_371_reg_486745 = add_ln703_371_fu_486383_p2.read();
        add_ln703_379_reg_486750 = add_ln703_379_fu_486439_p2.read();
        add_ln703_45_reg_486615 = add_ln703_45_fu_484419_p2.read();
        add_ln703_60_reg_486620 = add_ln703_60_fu_484517_p2.read();
        add_ln703_77_reg_486625 = add_ln703_77_fu_484623_p2.read();
        add_ln703_84_reg_486630 = add_ln703_84_fu_484669_p2.read();
        add_ln703_91_reg_486635 = add_ln703_91_fu_484715_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_0_int_reg = add_ln703_127_fu_486488_p2.read();
        ap_return_1_int_reg = acc_1_V_fu_486537_p2.read();
        ap_return_2_int_reg = acc_2_V_fu_486576_p2.read();
    }
}

}

