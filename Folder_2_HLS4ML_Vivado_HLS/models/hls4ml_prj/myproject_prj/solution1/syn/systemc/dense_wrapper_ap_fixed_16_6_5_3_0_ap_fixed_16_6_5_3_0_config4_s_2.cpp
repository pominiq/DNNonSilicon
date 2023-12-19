#include "dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        add_ln703_103_reg_34095 = add_ln703_103_fu_26493_p2.read();
        add_ln703_104_reg_34100 = add_ln703_104_fu_26499_p2.read();
        add_ln703_142_reg_34105 = add_ln703_142_fu_26528_p2.read();
        add_ln703_149_reg_34110 = add_ln703_149_fu_26569_p2.read();
        add_ln703_14_reg_34075 = add_ln703_14_fu_26420_p2.read();
        add_ln703_150_reg_34115 = add_ln703_150_fu_26575_p2.read();
        add_ln703_17_reg_34080 = add_ln703_17_fu_26437_p2.read();
        add_ln703_18_reg_34085 = add_ln703_18_fu_26443_p2.read();
        add_ln703_197_reg_34120 = add_ln703_197_fu_26607_p2.read();
        add_ln703_270_reg_34125 = add_ln703_270_fu_26647_p2.read();
        add_ln703_273_reg_34130 = add_ln703_273_fu_26664_p2.read();
        add_ln703_321_reg_34135 = add_ln703_321_fu_26690_p2.read();
        add_ln703_52_reg_34090 = add_ln703_52_fu_26468_p2.read();
        data_31_V_read_1_reg_34019 = ap_port_reg_data_31_V_read.read();
        data_32_V_read_1_reg_34013 = ap_port_reg_data_32_V_read.read();
        data_33_V_read_1_reg_34008 = ap_port_reg_data_33_V_read.read();
        data_34_V_read_1_reg_34003 = ap_port_reg_data_34_V_read.read();
        data_37_V_read_1_reg_33998 = ap_port_reg_data_37_V_read.read();
        data_38_V_read_1_reg_33993 = ap_port_reg_data_38_V_read.read();
        data_40_V_read_1_reg_33988 = ap_port_reg_data_40_V_read.read();
        data_41_V_read_1_reg_33980 = ap_port_reg_data_41_V_read.read();
        data_43_V_read_1_reg_33974 = ap_port_reg_data_43_V_read.read();
        data_44_V_read_1_reg_33969 = ap_port_reg_data_44_V_read.read();
        data_45_V_read_1_reg_33964 = ap_port_reg_data_45_V_read.read();
        data_46_V_read_1_reg_33957 = ap_port_reg_data_46_V_read.read();
        data_47_V_read_1_reg_33952 = ap_port_reg_data_47_V_read.read();
        data_48_V_read_1_reg_33947 = ap_port_reg_data_48_V_read.read();
        data_49_V_read_1_reg_33940 = ap_port_reg_data_49_V_read.read();
        data_50_V_read_1_reg_33933 = ap_port_reg_data_50_V_read.read();
        data_51_V_read_1_reg_33927 = ap_port_reg_data_51_V_read.read();
        data_53_V_read_1_reg_33922 = ap_port_reg_data_53_V_read.read();
        data_57_V_read_1_reg_33915 = ap_port_reg_data_57_V_read.read();
        data_58_V_read_1_reg_33909 = ap_port_reg_data_58_V_read.read();
        sext_ln1118_86_reg_34025 = sext_ln1118_86_fu_25685_p1.read();
        sext_ln1118_90_reg_34030 = sext_ln1118_90_fu_25743_p1.read();
        sext_ln1118_99_reg_34035 = sext_ln1118_99_fu_25798_p1.read();
        trunc_ln708_116_reg_34040 = sub_ln1118_80_fu_25894_p2.read().range(20, 10);
        trunc_ln708_126_reg_34045 = sub_ln1118_24_fu_25987_p2.read().range(19, 10);
        trunc_ln708_164_reg_34050 = sub_ln1118_28_fu_26251_p2.read().range(22, 10);
        trunc_ln708_168_reg_34055 = sub_ln1118_30_fu_26348_p2.read().range(23, 10);
        trunc_ln708_177_reg_34060 = grp_fu_1547_p2.read().range(24, 10);
        trunc_ln708_178_reg_34065 = grp_fu_1540_p2.read().range(24, 10);
        trunc_ln708_179_reg_34070 = grp_fu_24269_p1.read().range(23, 10);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        add_ln703_107_reg_34534 = add_ln703_107_fu_29300_p2.read();
        add_ln703_112_reg_34539 = add_ln703_112_fu_29306_p2.read();
        add_ln703_122_reg_34544 = add_ln703_122_fu_29342_p2.read();
        add_ln703_166_reg_34549 = add_ln703_166_fu_29348_p2.read();
        add_ln703_169_reg_34554 = add_ln703_169_fu_29354_p2.read();
        add_ln703_180_reg_34559 = add_ln703_180_fu_29396_p2.read();
        add_ln703_181_reg_34564 = add_ln703_181_fu_29402_p2.read();
        add_ln703_186_reg_34569 = add_ln703_186_fu_29428_p2.read();
        add_ln703_238_reg_34574 = add_ln703_238_fu_29434_p2.read();
        add_ln703_246_reg_34579 = add_ln703_246_fu_29460_p2.read();
        add_ln703_293_reg_34584 = add_ln703_293_fu_29495_p2.read();
        add_ln703_294_reg_34589 = add_ln703_294_fu_29501_p2.read();
        add_ln703_297_reg_34594 = add_ln703_297_fu_29507_p2.read();
        add_ln703_308_reg_34599 = add_ln703_308_fu_29540_p2.read();
        add_ln703_325_reg_34604 = add_ln703_325_fu_29565_p2.read();
        add_ln703_338_reg_34609 = add_ln703_338_fu_29570_p2.read();
        add_ln703_341_reg_34614 = add_ln703_341_fu_29576_p2.read();
        add_ln703_356_reg_34619 = add_ln703_356_fu_29608_p2.read();
        add_ln703_37_reg_34514 = add_ln703_37_fu_29250_p2.read();
        add_ln703_38_reg_34519 = add_ln703_38_fu_29256_p2.read();
        add_ln703_41_reg_34524 = add_ln703_41_fu_29262_p2.read();
        add_ln703_82_reg_34529 = add_ln703_82_fu_29268_p2.read();
        data_101_V_read_1_reg_34363 = ap_port_reg_data_101_V_read.read();
        data_105_V_read_1_reg_34358 = ap_port_reg_data_105_V_read.read();
        data_106_V_read_1_reg_34353 = ap_port_reg_data_106_V_read.read();
        data_107_V_read_1_reg_34348 = ap_port_reg_data_107_V_read.read();
        data_108_V_read_1_reg_34341 = ap_port_reg_data_108_V_read.read();
        data_109_V_read_1_reg_34336 = ap_port_reg_data_109_V_read.read();
        data_113_V_read_1_reg_34331 = ap_port_reg_data_113_V_read.read();
        data_120_V_read_1_reg_34326 = ap_port_reg_data_120_V_read.read();
        data_122_V_read_1_reg_34321 = ap_port_reg_data_122_V_read.read();
        data_123_V_read_1_reg_34313 = ap_port_reg_data_123_V_read.read();
        data_124_V_read_1_reg_34308 = ap_port_reg_data_124_V_read.read();
        data_89_V_read_1_reg_34402 = ap_port_reg_data_89_V_read.read();
        data_91_V_read_1_reg_34397 = ap_port_reg_data_91_V_read.read();
        data_92_V_read_1_reg_34392 = ap_port_reg_data_92_V_read.read();
        data_93_V_read_1_reg_34385 = ap_port_reg_data_93_V_read.read();
        data_96_V_read_1_reg_34380 = ap_port_reg_data_96_V_read.read();
        data_97_V_read_1_reg_34375 = ap_port_reg_data_97_V_read.read();
        data_99_V_read_1_reg_34368 = ap_port_reg_data_99_V_read.read();
        sext_ln1118_281_reg_34429 = sext_ln1118_281_fu_28477_p1.read();
        sext_ln1118_285_reg_34439 = sext_ln1118_285_fu_28537_p1.read();
        sext_ln1118_287_reg_34444 = sext_ln1118_287_fu_28550_p1.read();
        sext_ln1118_307_reg_34449 = sext_ln1118_307_fu_28692_p1.read();
        sext_ln1118_317_reg_34459 = sext_ln1118_317_fu_28802_p1.read();
        sext_ln1118_319_reg_34464 = sext_ln1118_319_fu_28811_p1.read();
        sext_ln1118_352_reg_34479 = sext_ln1118_352_fu_28997_p1.read();
        sext_ln1118_358_reg_34484 = sext_ln1118_358_fu_29011_p1.read();
        sext_ln1118_366_reg_34499 = sext_ln1118_366_fu_29142_p1.read();
        sext_ln1118_372_reg_34504 = sext_ln1118_372_fu_29160_p1.read();
        sext_ln1118_377_reg_34509 = sext_ln1118_377_fu_29169_p1.read();
        trunc_ln708_11_reg_34409 = sub_ln1118_2_fu_27981_p2.read().range(20, 10);
        trunc_ln708_16_reg_34414 = trunc_ln708_16_fu_28001_p1.read().range(21, 10);
        trunc_ln708_264_reg_34419 = sub_ln1118_47_fu_28308_p2.read().range(22, 10);
        trunc_ln708_272_reg_34424 = sub_ln1118_50_fu_28375_p2.read().range(21, 10);
        trunc_ln708_282_reg_34434 = sub_ln1118_54_fu_28512_p2.read().range(20, 10);
        trunc_ln708_314_reg_34454 = sub_ln1118_60_fu_28777_p2.read().range(23, 10);
        trunc_ln708_344_reg_34469 = add_ln1118_16_fu_28919_p2.read().range(21, 10);
        trunc_ln708_349_reg_34474 = sub_ln1118_69_fu_28981_p2.read().range(23, 10);
        trunc_ln708_362_reg_34489 = sub_ln1118_72_fu_29054_p2.read().range(22, 10);
        trunc_ln708_364_reg_34494 = add_ln1118_18_fu_29126_p2.read().range(23, 10);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        add_ln703_114_reg_34678 = add_ln703_114_fu_31156_p2.read();
        add_ln703_205_reg_34683 = add_ln703_205_fu_31220_p2.read();
        add_ln703_206_reg_34688 = add_ln703_206_fu_31225_p2.read();
        add_ln703_224_reg_34693 = add_ln703_224_fu_31251_p2.read();
        add_ln703_225_reg_34698 = add_ln703_225_fu_31257_p2.read();
        add_ln703_230_reg_34703 = add_ln703_230_fu_31263_p2.read();
        add_ln703_234_reg_34708 = add_ln703_234_fu_31289_p2.read();
        add_ln703_252_reg_34713 = add_ln703_252_fu_31407_p2.read();
        add_ln703_316_reg_34718 = add_ln703_316_fu_31471_p2.read();
        add_ln703_347_reg_34723 = add_ln703_347_fu_31522_p2.read();
        add_ln703_358_reg_34728 = add_ln703_358_fu_31528_p2.read();
        add_ln703_362_reg_34733 = add_ln703_362_fu_31554_p2.read();
        add_ln703_370_reg_34738 = add_ln703_370_fu_31580_p2.read();
        add_ln703_374_reg_34743 = add_ln703_374_fu_31606_p2.read();
        add_ln703_60_reg_34658 = add_ln703_60_fu_31060_p2.read();
        add_ln703_70_reg_34663 = add_ln703_70_fu_31065_p2.read();
        add_ln703_91_reg_34668 = add_ln703_91_fu_31131_p2.read();
        add_ln703_94_reg_34673 = add_ln703_94_fu_31137_p2.read();
        data_112_V_read_1_reg_34636 = ap_port_reg_data_112_V_read.read();
        data_114_V_read_1_reg_34630 = ap_port_reg_data_114_V_read.read();
        data_117_V_read_1_reg_34624 = ap_port_reg_data_117_V_read.read();
        trunc_ln708_151_reg_34643 = sub_ln1118_81_fu_30358_p2.read().range(18, 10);
        trunc_ln708_232_reg_34648 = grp_fu_23799_p1.read().range(23, 10);
        trunc_ln708_297_reg_34653 = sub_ln1118_56_fu_30855_p2.read().range(22, 10);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        add_ln703_127_reg_34763 = add_ln703_127_fu_33055_p2.read();
        add_ln703_173_reg_34768 = add_ln703_173_fu_33089_p2.read();
        add_ln703_212_reg_34773 = add_ln703_212_fu_33139_p2.read();
        add_ln703_215_reg_34778 = add_ln703_215_fu_33165_p2.read();
        add_ln703_216_reg_34783 = add_ln703_216_fu_33171_p2.read();
        add_ln703_253_reg_34788 = add_ln703_253_fu_33250_p2.read();
        add_ln703_318_reg_34793 = add_ln703_318_fu_33294_p2.read();
        add_ln703_333_reg_34798 = add_ln703_333_fu_33357_p2.read();
        add_ln703_336_reg_34803 = add_ln703_336_fu_33382_p2.read();
        add_ln703_381_reg_34808 = add_ln703_381_fu_33527_p2.read();
        data_125_V_read_1_reg_34753 = ap_port_reg_data_125_V_read.read();
        data_127_V_read_1_reg_34748 = ap_port_reg_data_127_V_read.read();
        trunc_ln708_366_reg_34758 = trunc_ln708_366_fu_32470_p1.read().range(23, 10);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        add_ln703_134_reg_33869 = add_ln703_134_fu_25563_p2.read();
        add_ln703_137_reg_33874 = add_ln703_137_fu_25581_p2.read();
        add_ln703_193_reg_33879 = add_ln703_193_fu_25607_p2.read();
        add_ln703_262_reg_33884 = add_ln703_262_fu_25649_p2.read();
        add_ln703_263_reg_33889 = add_ln703_263_fu_25655_p2.read();
        add_ln703_303_reg_33894 = add_ln703_303_fu_25661_p2.read();
        add_ln703_305_reg_33899 = add_ln703_305_fu_25667_p2.read();
        add_ln703_306_reg_33904 = add_ln703_306_fu_25673_p2.read();
        add_ln703_48_reg_33859 = add_ln703_48_fu_25515_p2.read();
        add_ln703_49_reg_33864 = add_ln703_49_fu_25521_p2.read();
        add_ln703_6_reg_33849 = add_ln703_6_fu_25471_p2.read();
        add_ln703_9_reg_33854 = add_ln703_9_fu_25489_p2.read();
        ap_port_reg_data_100_V_read = data_100_V_read.read();
        ap_port_reg_data_101_V_read = data_101_V_read.read();
        ap_port_reg_data_102_V_read = data_102_V_read.read();
        ap_port_reg_data_103_V_read = data_103_V_read.read();
        ap_port_reg_data_104_V_read = data_104_V_read.read();
        ap_port_reg_data_105_V_read = data_105_V_read.read();
        ap_port_reg_data_106_V_read = data_106_V_read.read();
        ap_port_reg_data_107_V_read = data_107_V_read.read();
        ap_port_reg_data_108_V_read = data_108_V_read.read();
        ap_port_reg_data_109_V_read = data_109_V_read.read();
        ap_port_reg_data_110_V_read = data_110_V_read.read();
        ap_port_reg_data_111_V_read = data_111_V_read.read();
        ap_port_reg_data_112_V_read = data_112_V_read.read();
        ap_port_reg_data_113_V_read = data_113_V_read.read();
        ap_port_reg_data_114_V_read = data_114_V_read.read();
        ap_port_reg_data_115_V_read = data_115_V_read.read();
        ap_port_reg_data_116_V_read = data_116_V_read.read();
        ap_port_reg_data_117_V_read = data_117_V_read.read();
        ap_port_reg_data_118_V_read = data_118_V_read.read();
        ap_port_reg_data_119_V_read = data_119_V_read.read();
        ap_port_reg_data_120_V_read = data_120_V_read.read();
        ap_port_reg_data_121_V_read = data_121_V_read.read();
        ap_port_reg_data_122_V_read = data_122_V_read.read();
        ap_port_reg_data_123_V_read = data_123_V_read.read();
        ap_port_reg_data_124_V_read = data_124_V_read.read();
        ap_port_reg_data_125_V_read = data_125_V_read.read();
        ap_port_reg_data_126_V_read = data_126_V_read.read();
        ap_port_reg_data_127_V_read = data_127_V_read.read();
        ap_port_reg_data_13_V_read = data_13_V_read.read();
        ap_port_reg_data_16_V_read = data_16_V_read.read();
        ap_port_reg_data_29_V_read = data_29_V_read.read();
        ap_port_reg_data_30_V_read = data_30_V_read.read();
        ap_port_reg_data_31_V_read = data_31_V_read.read();
        ap_port_reg_data_32_V_read = data_32_V_read.read();
        ap_port_reg_data_33_V_read = data_33_V_read.read();
        ap_port_reg_data_34_V_read = data_34_V_read.read();
        ap_port_reg_data_35_V_read = data_35_V_read.read();
        ap_port_reg_data_36_V_read = data_36_V_read.read();
        ap_port_reg_data_37_V_read = data_37_V_read.read();
        ap_port_reg_data_38_V_read = data_38_V_read.read();
        ap_port_reg_data_39_V_read = data_39_V_read.read();
        ap_port_reg_data_40_V_read = data_40_V_read.read();
        ap_port_reg_data_41_V_read = data_41_V_read.read();
        ap_port_reg_data_42_V_read = data_42_V_read.read();
        ap_port_reg_data_43_V_read = data_43_V_read.read();
        ap_port_reg_data_44_V_read = data_44_V_read.read();
        ap_port_reg_data_45_V_read = data_45_V_read.read();
        ap_port_reg_data_46_V_read = data_46_V_read.read();
        ap_port_reg_data_47_V_read = data_47_V_read.read();
        ap_port_reg_data_48_V_read = data_48_V_read.read();
        ap_port_reg_data_49_V_read = data_49_V_read.read();
        ap_port_reg_data_50_V_read = data_50_V_read.read();
        ap_port_reg_data_51_V_read = data_51_V_read.read();
        ap_port_reg_data_52_V_read = data_52_V_read.read();
        ap_port_reg_data_53_V_read = data_53_V_read.read();
        ap_port_reg_data_54_V_read = data_54_V_read.read();
        ap_port_reg_data_55_V_read = data_55_V_read.read();
        ap_port_reg_data_56_V_read = data_56_V_read.read();
        ap_port_reg_data_57_V_read = data_57_V_read.read();
        ap_port_reg_data_58_V_read = data_58_V_read.read();
        ap_port_reg_data_59_V_read = data_59_V_read.read();
        ap_port_reg_data_60_V_read = data_60_V_read.read();
        ap_port_reg_data_61_V_read = data_61_V_read.read();
        ap_port_reg_data_62_V_read = data_62_V_read.read();
        ap_port_reg_data_63_V_read = data_63_V_read.read();
        ap_port_reg_data_64_V_read = data_64_V_read.read();
        ap_port_reg_data_65_V_read = data_65_V_read.read();
        ap_port_reg_data_66_V_read = data_66_V_read.read();
        ap_port_reg_data_67_V_read = data_67_V_read.read();
        ap_port_reg_data_68_V_read = data_68_V_read.read();
        ap_port_reg_data_69_V_read = data_69_V_read.read();
        ap_port_reg_data_70_V_read = data_70_V_read.read();
        ap_port_reg_data_71_V_read = data_71_V_read.read();
        ap_port_reg_data_72_V_read = data_72_V_read.read();
        ap_port_reg_data_73_V_read = data_73_V_read.read();
        ap_port_reg_data_74_V_read = data_74_V_read.read();
        ap_port_reg_data_75_V_read = data_75_V_read.read();
        ap_port_reg_data_76_V_read = data_76_V_read.read();
        ap_port_reg_data_77_V_read = data_77_V_read.read();
        ap_port_reg_data_78_V_read = data_78_V_read.read();
        ap_port_reg_data_79_V_read = data_79_V_read.read();
        ap_port_reg_data_80_V_read = data_80_V_read.read();
        ap_port_reg_data_81_V_read = data_81_V_read.read();
        ap_port_reg_data_82_V_read = data_82_V_read.read();
        ap_port_reg_data_83_V_read = data_83_V_read.read();
        ap_port_reg_data_84_V_read = data_84_V_read.read();
        ap_port_reg_data_85_V_read = data_85_V_read.read();
        ap_port_reg_data_86_V_read = data_86_V_read.read();
        ap_port_reg_data_87_V_read = data_87_V_read.read();
        ap_port_reg_data_88_V_read = data_88_V_read.read();
        ap_port_reg_data_89_V_read = data_89_V_read.read();
        ap_port_reg_data_90_V_read = data_90_V_read.read();
        ap_port_reg_data_91_V_read = data_91_V_read.read();
        ap_port_reg_data_92_V_read = data_92_V_read.read();
        ap_port_reg_data_93_V_read = data_93_V_read.read();
        ap_port_reg_data_94_V_read = data_94_V_read.read();
        ap_port_reg_data_95_V_read = data_95_V_read.read();
        ap_port_reg_data_96_V_read = data_96_V_read.read();
        ap_port_reg_data_97_V_read = data_97_V_read.read();
        ap_port_reg_data_98_V_read = data_98_V_read.read();
        ap_port_reg_data_99_V_read = data_99_V_read.read();
        data_10_V_read_1_reg_33749 = data_10_V_read.read();
        data_14_V_read_1_reg_33744 = data_14_V_read.read();
        data_15_V_read_1_reg_33736 = data_15_V_read.read();
        data_1_V_read_1_reg_33774 = data_1_V_read.read();
        data_20_V_read_1_reg_33731 = data_20_V_read.read();
        data_21_V_read_1_reg_33726 = data_21_V_read.read();
        data_22_V_read_1_reg_33721 = data_22_V_read.read();
        data_27_V_read_1_reg_33714 = data_27_V_read.read();
        data_3_V_read_1_reg_33767 = data_3_V_read.read();
        data_5_V_read_1_reg_33762 = data_5_V_read.read();
        data_7_V_read_1_reg_33756 = data_7_V_read.read();
        sext_ln1118_24_reg_33794 = sext_ln1118_24_fu_24771_p1.read();
        sext_ln1118_reg_33779 = sext_ln1118_fu_24509_p1.read();
        trunc_ln708_18_reg_33789 = sub_ln1118_4_fu_24738_p2.read().range(20, 10);
        trunc_ln708_1_reg_33784 = add_ln1118_fu_24619_p2.read().range(21, 10);
        trunc_ln708_29_reg_33799 = sub_ln1118_6_fu_24866_p2.read().range(21, 10);
        trunc_ln708_35_reg_33804 = sub_ln1118_8_fu_24945_p2.read().range(22, 10);
        trunc_ln708_43_reg_33809 = sub_ln1118_11_fu_25003_p2.read().range(23, 10);
        trunc_ln708_51_reg_33814 = trunc_ln708_51_fu_25047_p1.read().range(21, 10);
        trunc_ln708_66_reg_33819 = grp_fu_24009_p1.read().range(23, 10);
        trunc_ln708_71_reg_33824 = sub_ln1118_12_fu_25183_p2.read().range(18, 10);
        trunc_ln708_73_reg_33829 = sub_ln1118_13_fu_25225_p2.read().range(20, 10);
        trunc_ln708_75_reg_33834 = add_ln1118_5_fu_25274_p2.read().range(22, 10);
        trunc_ln708_78_reg_33844 = sub_ln1118_14_fu_25337_p2.read().range(22, 10);
        trunc_ln_reg_33839 = trunc_ln_fu_25290_p1.read().range(15, 8);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        add_ln703_158_reg_34268 = add_ln703_158_fu_27769_p2.read();
        add_ln703_165_reg_34273 = add_ln703_165_fu_27810_p2.read();
        add_ln703_286_reg_34278 = add_ln703_286_fu_27887_p2.read();
        add_ln703_287_reg_34283 = add_ln703_287_fu_27892_p2.read();
        add_ln703_30_reg_34258 = add_ln703_30_fu_27666_p2.read();
        add_ln703_322_reg_34288 = add_ln703_322_fu_27898_p2.read();
        add_ln703_345_reg_34293 = add_ln703_345_fu_27904_p2.read();
        add_ln703_352_reg_34298 = add_ln703_352_fu_27930_p2.read();
        add_ln703_353_reg_34303 = add_ln703_353_fu_27936_p2.read();
        add_ln703_69_reg_34263 = add_ln703_69_fu_27723_p2.read();
        data_60_V_read_1_reg_34203 = ap_port_reg_data_60_V_read.read();
        data_63_V_read_1_reg_34198 = ap_port_reg_data_63_V_read.read();
        data_65_V_read_1_reg_34193 = ap_port_reg_data_65_V_read.read();
        data_69_V_read_1_reg_34188 = ap_port_reg_data_69_V_read.read();
        data_70_V_read_1_reg_34182 = ap_port_reg_data_70_V_read.read();
        data_71_V_read_1_reg_34177 = ap_port_reg_data_71_V_read.read();
        data_77_V_read_1_reg_34172 = ap_port_reg_data_77_V_read.read();
        data_78_V_read_1_reg_34165 = ap_port_reg_data_78_V_read.read();
        data_79_V_read_1_reg_34160 = ap_port_reg_data_79_V_read.read();
        data_81_V_read_1_reg_34152 = ap_port_reg_data_81_V_read.read();
        data_82_V_read_1_reg_34147 = ap_port_reg_data_82_V_read.read();
        data_85_V_read_1_reg_34140 = ap_port_reg_data_85_V_read.read();
        sext_ln1118_224_reg_34238 = sext_ln1118_224_fu_27318_p1.read();
        trunc_ln708_171_reg_34208 = sub_ln1118_31_fu_26718_p2.read().range(21, 10);
        trunc_ln708_176_reg_34243 = trunc_ln708_176_fu_27531_p1.read().range(15, 5);
        trunc_ln708_183_reg_34213 = sub_ln1118_33_fu_26810_p2.read().range(20, 10);
        trunc_ln708_196_reg_34218 = sub_ln1118_38_fu_26972_p2.read().range(23, 10);
        trunc_ln708_199_reg_34223 = sub_ln1118_82_fu_27018_p2.read().range(22, 10);
        trunc_ln708_206_reg_34228 = sub_ln1118_39_fu_27130_p2.read().range(21, 10);
        trunc_ln708_223_reg_34233 = add_ln1118_12_fu_27298_p2.read().range(19, 10);
        trunc_ln708_251_reg_34248 = grp_fu_1561_p2.read().range(24, 10);
        trunc_ln708_260_reg_34253 = grp_fu_24379_p1.read().range(21, 10);
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<7>) ("XXXXXXX");
            break;
    }
}

}

