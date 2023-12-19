#include "dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_shl_ln1118_s_fu_24788_p3() {
    shl_ln1118_s_fu_24788_p3 = esl_concat<16,5>(shl_ln1118_s_fu_24788_p1.read(), ap_const_lv5_0);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_shl_ln_fu_24541_p1() {
    shl_ln_fu_24541_p1 = data_2_V_read.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_shl_ln_fu_24541_p3() {
    shl_ln_fu_24541_p3 = esl_concat<16,7>(shl_ln_fu_24541_p1.read(), ap_const_lv7_0);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_10_fu_24997_p2() {
    sub_ln1118_10_fu_24997_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1118_44_fu_24993_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1118_44_fu_24993_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_11_fu_25003_p2() {
    sub_ln1118_11_fu_25003_p2 = (!sub_ln1118_10_fu_24997_p2.read().is_01() || !sext_ln1118_42_fu_24980_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(sub_ln1118_10_fu_24997_p2.read()) - sc_bigint<24>(sext_ln1118_42_fu_24980_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_12_fu_25183_p2() {
    sub_ln1118_12_fu_25183_p2 = (!sext_ln1118_68_fu_25179_p1.read().is_01() || !sext_ln1118_67_fu_25159_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(sext_ln1118_68_fu_25179_p1.read()) - sc_bigint<19>(sext_ln1118_67_fu_25159_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_13_fu_25225_p2() {
    sub_ln1118_13_fu_25225_p2 = (!ap_const_lv21_0.is_01() || !sext_ln1118_71_fu_25221_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_0) - sc_bigint<21>(sext_ln1118_71_fu_25221_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_14_fu_25337_p2() {
    sub_ln1118_14_fu_25337_p2 = (!sext_ln1118_77_fu_25333_p1.read().is_01() || !sext_ln1118_76_fu_25321_p1.read().is_01())? sc_lv<23>(): (sc_bigint<23>(sext_ln1118_77_fu_25333_p1.read()) - sc_bigint<23>(sext_ln1118_76_fu_25321_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_15_fu_25365_p2() {
    sub_ln1118_15_fu_25365_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1118_78_fu_25361_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1118_78_fu_25361_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_16_fu_25383_p2() {
    sub_ln1118_16_fu_25383_p2 = (!sub_ln1118_15_fu_25365_p2.read().is_01() || !sext_ln1118_79_fu_25379_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(sub_ln1118_15_fu_25365_p2.read()) - sc_bigint<24>(sext_ln1118_79_fu_25379_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_17_fu_29863_p2() {
    sub_ln1118_17_fu_29863_p2 = (!sext_ln1118_83_fu_29859_p1.read().is_01() || !sext_ln1118_82_fu_29848_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln1118_83_fu_29859_p1.read()) - sc_bigint<22>(sext_ln1118_82_fu_29848_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_18_fu_25718_p2() {
    sub_ln1118_18_fu_25718_p2 = (!sext_ln1118_88_fu_25714_p1.read().is_01() || !sext_ln1118_87_fu_25702_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln1118_88_fu_25714_p1.read()) - sc_bigint<24>(sext_ln1118_87_fu_25702_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_19_fu_29997_p2() {
    sub_ln1118_19_fu_29997_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1118_103_fu_29993_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1118_103_fu_29993_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_1_fu_24571_p2() {
    sub_ln1118_1_fu_24571_p2 = (!sub_ln1118_fu_24553_p2.read().is_01() || !sext_ln1118_6_fu_24567_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(sub_ln1118_fu_24553_p2.read()) - sc_bigint<24>(sext_ln1118_6_fu_24567_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_20_fu_30003_p2() {
    sub_ln1118_20_fu_30003_p2 = (!sub_ln1118_19_fu_29997_p2.read().is_01() || !sext_ln1118_102_fu_29981_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(sub_ln1118_19_fu_29997_p2.read()) - sc_bigint<24>(sext_ln1118_102_fu_29981_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_21_fu_30049_p2() {
    sub_ln1118_21_fu_30049_p2 = (!sext_ln1118_103_fu_29993_p1.read().is_01() || !sext_ln1118_104_fu_30045_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln1118_103_fu_29993_p1.read()) - sc_bigint<24>(sext_ln1118_104_fu_30045_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_22_fu_30123_p2() {
    sub_ln1118_22_fu_30123_p2 = (!sext_ln1118_120_fu_30119_p1.read().is_01() || !sext_ln1118_119_fu_30109_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln1118_120_fu_30119_p1.read()) - sc_bigint<24>(sext_ln1118_119_fu_30109_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_23_fu_25981_p2() {
    sub_ln1118_23_fu_25981_p2 = (!ap_const_lv20_0.is_01() || !sext_ln1118_124_fu_25977_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_0) - sc_bigint<20>(sext_ln1118_124_fu_25977_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_24_fu_25987_p2() {
    sub_ln1118_24_fu_25987_p2 = (!sub_ln1118_23_fu_25981_p2.read().is_01() || !sext_ln1118_123_fu_25961_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(sub_ln1118_23_fu_25981_p2.read()) - sc_bigint<20>(sext_ln1118_123_fu_25961_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_25_fu_28197_p2() {
    sub_ln1118_25_fu_28197_p2 = (!ap_const_lv19_0.is_01() || !sext_ln1118_127_fu_28193_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ap_const_lv19_0) - sc_bigint<19>(sext_ln1118_127_fu_28193_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_26_fu_26060_p2() {
    sub_ln1118_26_fu_26060_p2 = (!ap_const_lv22_0.is_01() || !sext_ln1118_138_fu_26056_p1.read().is_01())? sc_lv<22>(): (sc_biguint<22>(ap_const_lv22_0) - sc_bigint<22>(sext_ln1118_138_fu_26056_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_27_fu_26078_p2() {
    sub_ln1118_27_fu_26078_p2 = (!sub_ln1118_26_fu_26060_p2.read().is_01() || !sext_ln1118_139_fu_26074_p1.read().is_01())? sc_lv<22>(): (sc_biguint<22>(sub_ln1118_26_fu_26060_p2.read()) - sc_bigint<22>(sext_ln1118_139_fu_26074_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_28_fu_26251_p2() {
    sub_ln1118_28_fu_26251_p2 = (!sext_ln1118_161_fu_26235_p1.read().is_01() || !sext_ln1118_162_fu_26247_p1.read().is_01())? sc_lv<23>(): (sc_bigint<23>(sext_ln1118_161_fu_26235_p1.read()) - sc_bigint<23>(sext_ln1118_162_fu_26247_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_29_fu_26304_p2() {
    sub_ln1118_29_fu_26304_p2 = (!sext_ln1118_164_fu_26288_p1.read().is_01() || !sext_ln1118_165_fu_26300_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln1118_164_fu_26288_p1.read()) - sc_bigint<22>(sext_ln1118_165_fu_26300_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_2_fu_27981_p2() {
    sub_ln1118_2_fu_27981_p2 = (!sext_ln1118_12_fu_27977_p1.read().is_01() || !sext_ln1118_11_fu_27963_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1118_12_fu_27977_p1.read()) - sc_bigint<21>(sext_ln1118_11_fu_27963_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_30_fu_26348_p2() {
    sub_ln1118_30_fu_26348_p2 = (!sext_ln1118_166_fu_26332_p1.read().is_01() || !sext_ln1118_167_fu_26344_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln1118_166_fu_26332_p1.read()) - sc_bigint<24>(sext_ln1118_167_fu_26344_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_31_fu_26718_p2() {
    sub_ln1118_31_fu_26718_p2 = (!sext_ln1118_169_fu_26703_p1.read().is_01() || !sext_ln1118_170_fu_26714_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln1118_169_fu_26703_p1.read()) - sc_bigint<22>(sext_ln1118_170_fu_26714_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_32_fu_26745_p2() {
    sub_ln1118_32_fu_26745_p2 = (!ap_const_lv23_0.is_01() || !sext_ln1118_171_fu_26741_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_0) - sc_bigint<23>(sext_ln1118_171_fu_26741_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_33_fu_26810_p2() {
    sub_ln1118_33_fu_26810_p2 = (!sext_ln1118_181_fu_26806_p1.read().is_01() || !sext_ln1118_180_fu_26794_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1118_181_fu_26806_p1.read()) - sc_bigint<21>(sext_ln1118_180_fu_26794_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_34_fu_30484_p2() {
    sub_ln1118_34_fu_30484_p2 = (!sext_ln1118_184_fu_30468_p1.read().is_01() || !sext_ln1118_185_fu_30480_p1.read().is_01())? sc_lv<23>(): (sc_bigint<23>(sext_ln1118_184_fu_30468_p1.read()) - sc_bigint<23>(sext_ln1118_185_fu_30480_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_35_fu_30530_p2() {
    sub_ln1118_35_fu_30530_p2 = (!sext_ln1118_186_fu_30526_p1.read().is_01() || !sext_ln1118_183_fu_30456_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln1118_186_fu_30526_p1.read()) - sc_bigint<22>(sext_ln1118_183_fu_30456_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_36_fu_26922_p2() {
    sub_ln1118_36_fu_26922_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1118_194_fu_26918_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1118_194_fu_26918_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_37_fu_26940_p2() {
    sub_ln1118_37_fu_26940_p2 = (!sub_ln1118_36_fu_26922_p2.read().is_01() || !sext_ln1118_195_fu_26936_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(sub_ln1118_36_fu_26922_p2.read()) - sc_bigint<24>(sext_ln1118_195_fu_26936_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_38_fu_26972_p2() {
    sub_ln1118_38_fu_26972_p2 = (!sext_ln1118_196_fu_26968_p1.read().is_01() || !sext_ln1118_194_fu_26918_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln1118_196_fu_26968_p1.read()) - sc_bigint<24>(sext_ln1118_194_fu_26918_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_39_fu_27130_p2() {
    sub_ln1118_39_fu_27130_p2 = (!sext_ln1118_205_fu_27090_p1.read().is_01() || !sext_ln1118_206_fu_27126_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln1118_205_fu_27090_p1.read()) - sc_bigint<22>(sext_ln1118_206_fu_27126_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_3_fu_24682_p2() {
    sub_ln1118_3_fu_24682_p2 = (!sext_ln1118_15_fu_24678_p1.read().is_01() || !sext_ln1118_14_fu_24666_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln1118_15_fu_24678_p1.read()) - sc_bigint<25>(sext_ln1118_14_fu_24666_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_40_fu_27240_p2() {
    sub_ln1118_40_fu_27240_p2 = (!sext_ln1118_219_fu_27236_p1.read().is_01() || !sext_ln1118_218_fu_27224_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln1118_219_fu_27236_p1.read()) - sc_bigint<25>(sext_ln1118_218_fu_27224_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_41_fu_27339_p2() {
    sub_ln1118_41_fu_27339_p2 = (!ap_const_lv23_0.is_01() || !sext_ln1118_225_fu_27335_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_0) - sc_bigint<23>(sext_ln1118_225_fu_27335_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_42_fu_27357_p2() {
    sub_ln1118_42_fu_27357_p2 = (!sub_ln1118_41_fu_27339_p2.read().is_01() || !sext_ln1118_226_fu_27353_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(sub_ln1118_41_fu_27339_p2.read()) - sc_bigint<23>(sext_ln1118_226_fu_27353_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_43_fu_30706_p2() {
    sub_ln1118_43_fu_30706_p2 = (!sext_ln1118_235_fu_30702_p1.read().is_01() || !sext_ln1118_234_fu_30691_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln1118_235_fu_30702_p1.read()) - sc_bigint<24>(sext_ln1118_234_fu_30691_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_44_fu_28245_p2() {
    sub_ln1118_44_fu_28245_p2 = (!sext_ln1118_251_fu_28230_p1.read().is_01() || !sext_ln1118_252_fu_28241_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln1118_251_fu_28230_p1.read()) - sc_bigint<25>(sext_ln1118_252_fu_28241_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_45_fu_31689_p2() {
    sub_ln1118_45_fu_31689_p2 = (!sext_ln1118_256_fu_31685_p1.read().is_01() || !sext_ln1118_255_fu_31673_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1118_256_fu_31685_p1.read()) - sc_bigint<21>(sext_ln1118_255_fu_31673_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_46_fu_28290_p2() {
    sub_ln1118_46_fu_28290_p2 = (!ap_const_lv23_0.is_01() || !sext_ln1118_262_fu_28286_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_0) - sc_bigint<23>(sext_ln1118_262_fu_28286_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_47_fu_28308_p2() {
    sub_ln1118_47_fu_28308_p2 = (!sub_ln1118_46_fu_28290_p2.read().is_01() || !sext_ln1118_263_fu_28304_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(sub_ln1118_46_fu_28290_p2.read()) - sc_bigint<23>(sext_ln1118_263_fu_28304_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_48_fu_31777_p2() {
    sub_ln1118_48_fu_31777_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1118_266_fu_31773_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1118_266_fu_31773_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_49_fu_31794_p2() {
    sub_ln1118_49_fu_31794_p2 = (!sub_ln1118_48_fu_31777_p2.read().is_01() || !sext_ln1118_267_fu_31790_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(sub_ln1118_48_fu_31777_p2.read()) - sc_bigint<24>(sext_ln1118_267_fu_31790_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_4_fu_24738_p2() {
    sub_ln1118_4_fu_24738_p2 = (!sext_ln1118_20_fu_24734_p1.read().is_01() || !sext_ln1118_19_fu_24722_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1118_20_fu_24734_p1.read()) - sc_bigint<21>(sext_ln1118_19_fu_24722_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_50_fu_28375_p2() {
    sub_ln1118_50_fu_28375_p2 = (!sext_ln1118_270_fu_28371_p1.read().is_01() || !sext_ln1118_269_fu_28359_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln1118_270_fu_28371_p1.read()) - sc_bigint<22>(sext_ln1118_269_fu_28359_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_51_fu_28424_p2() {
    sub_ln1118_51_fu_28424_p2 = (!sext_ln1118_273_fu_28408_p1.read().is_01() || !sext_ln1118_274_fu_28420_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln1118_273_fu_28408_p1.read()) - sc_bigint<25>(sext_ln1118_274_fu_28420_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_52_fu_31863_p2() {
    sub_ln1118_52_fu_31863_p2 = (!sext_ln1118_280_fu_31859_p1.read().is_01() || !sext_ln1118_279_fu_31848_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln1118_280_fu_31859_p1.read()) - sc_bigint<24>(sext_ln1118_279_fu_31848_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_53_fu_28494_p2() {
    sub_ln1118_53_fu_28494_p2 = (!ap_const_lv21_0.is_01() || !sext_ln1118_282_fu_28490_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_0) - sc_bigint<21>(sext_ln1118_282_fu_28490_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_54_fu_28512_p2() {
    sub_ln1118_54_fu_28512_p2 = (!sub_ln1118_53_fu_28494_p2.read().is_01() || !sext_ln1118_283_fu_28508_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(sub_ln1118_53_fu_28494_p2.read()) - sc_bigint<21>(sext_ln1118_283_fu_28508_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_55_fu_31953_p2() {
    sub_ln1118_55_fu_31953_p2 = (!sext_ln1118_293_fu_31949_p1.read().is_01() || !sext_ln1118_292_fu_31937_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln1118_293_fu_31949_p1.read()) - sc_bigint<24>(sext_ln1118_292_fu_31937_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_56_fu_30855_p2() {
    sub_ln1118_56_fu_30855_p2 = (!sext_ln1118_295_fu_30836_p1.read().is_01() || !sext_ln1118_297_fu_30851_p1.read().is_01())? sc_lv<23>(): (sc_bigint<23>(sext_ln1118_295_fu_30836_p1.read()) - sc_bigint<23>(sext_ln1118_297_fu_30851_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_57_fu_28606_p2() {
    sub_ln1118_57_fu_28606_p2 = (!sext_ln1118_300_fu_28590_p1.read().is_01() || !sext_ln1118_301_fu_28602_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln1118_300_fu_28590_p1.read()) - sc_bigint<25>(sext_ln1118_301_fu_28602_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_58_fu_28650_p2() {
    sub_ln1118_58_fu_28650_p2 = (!sext_ln1118_302_fu_28634_p1.read().is_01() || !sext_ln1118_303_fu_28646_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln1118_302_fu_28634_p1.read()) - sc_bigint<22>(sext_ln1118_303_fu_28646_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_59_fu_28759_p2() {
    sub_ln1118_59_fu_28759_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1118_312_fu_28755_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1118_312_fu_28755_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_5_fu_24800_p2() {
    sub_ln1118_5_fu_24800_p2 = (!sext_ln1118_25_fu_24784_p1.read().is_01() || !sext_ln1118_26_fu_24796_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln1118_25_fu_24784_p1.read()) - sc_bigint<24>(sext_ln1118_26_fu_24796_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_60_fu_28777_p2() {
    sub_ln1118_60_fu_28777_p2 = (!sub_ln1118_59_fu_28759_p2.read().is_01() || !sext_ln1118_313_fu_28773_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(sub_ln1118_59_fu_28759_p2.read()) - sc_bigint<24>(sext_ln1118_313_fu_28773_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_61_fu_32133_p2() {
    sub_ln1118_61_fu_32133_p2 = (!sext_ln1118_322_fu_32118_p1.read().is_01() || !sext_ln1118_323_fu_32129_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln1118_322_fu_32118_p1.read()) - sc_bigint<24>(sext_ln1118_323_fu_32129_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_62_fu_32229_p2() {
    sub_ln1118_62_fu_32229_p2 = (!sext_ln1118_330_fu_32225_p1.read().is_01() || !sext_ln1118_329_fu_32213_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln1118_330_fu_32225_p1.read()) - sc_bigint<24>(sext_ln1118_329_fu_32213_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_63_fu_30914_p2() {
    sub_ln1118_63_fu_30914_p2 = (!ap_const_lv21_0.is_01() || !sext_ln1118_332_fu_30910_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_0) - sc_bigint<21>(sext_ln1118_332_fu_30910_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_64_fu_30932_p2() {
    sub_ln1118_64_fu_30932_p2 = (!sub_ln1118_63_fu_30914_p2.read().is_01() || !sext_ln1118_333_fu_30928_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(sub_ln1118_63_fu_30914_p2.read()) - sc_bigint<21>(sext_ln1118_333_fu_30928_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_65_fu_32286_p2() {
    sub_ln1118_65_fu_32286_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1118_334_fu_32282_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1118_334_fu_32282_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_66_fu_32303_p2() {
    sub_ln1118_66_fu_32303_p2 = (!sub_ln1118_65_fu_32286_p2.read().is_01() || !sext_ln1118_335_fu_32299_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(sub_ln1118_65_fu_32286_p2.read()) - sc_bigint<24>(sext_ln1118_335_fu_32299_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_67_fu_28859_p2() {
    sub_ln1118_67_fu_28859_p2 = (!ap_const_lv20_0.is_01() || !sext_ln1118_339_fu_28855_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_0) - sc_bigint<20>(sext_ln1118_339_fu_28855_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_68_fu_28865_p2() {
    sub_ln1118_68_fu_28865_p2 = (!sub_ln1118_67_fu_28859_p2.read().is_01() || !sext_ln1118_338_fu_28843_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(sub_ln1118_67_fu_28859_p2.read()) - sc_bigint<20>(sext_ln1118_338_fu_28843_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_69_fu_28981_p2() {
    sub_ln1118_69_fu_28981_p2 = (!sext_ln1118_346_fu_28965_p1.read().is_01() || !sext_ln1118_347_fu_28977_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln1118_346_fu_28965_p1.read()) - sc_bigint<24>(sext_ln1118_347_fu_28977_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_6_fu_24866_p2() {
    sub_ln1118_6_fu_24866_p2 = (!sext_ln1118_29_fu_24850_p1.read().is_01() || !sext_ln1118_30_fu_24862_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln1118_29_fu_24850_p1.read()) - sc_bigint<22>(sext_ln1118_30_fu_24862_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_70_fu_30982_p2() {
    sub_ln1118_70_fu_30982_p2 = (!sext_ln1118_351_fu_30978_p1.read().is_01() || !sext_ln1118_350_fu_30966_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(sext_ln1118_351_fu_30978_p1.read()) - sc_bigint<19>(sext_ln1118_350_fu_30966_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_71_fu_29036_p2() {
    sub_ln1118_71_fu_29036_p2 = (!ap_const_lv23_0.is_01() || !sext_ln1118_360_fu_29032_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_0) - sc_bigint<23>(sext_ln1118_360_fu_29032_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_72_fu_29054_p2() {
    sub_ln1118_72_fu_29054_p2 = (!sub_ln1118_71_fu_29036_p2.read().is_01() || !sext_ln1118_361_fu_29050_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(sub_ln1118_71_fu_29036_p2.read()) - sc_bigint<23>(sext_ln1118_361_fu_29050_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_73_fu_29082_p2() {
    sub_ln1118_73_fu_29082_p2 = (!sext_ln1118_362_fu_29078_p1.read().is_01() || !sext_ln1118_359_fu_29028_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln1118_362_fu_29078_p1.read()) - sc_bigint<25>(sext_ln1118_359_fu_29028_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_74_fu_32544_p2() {
    sub_ln1118_74_fu_32544_p2 = (!sext_ln1118_371_fu_32540_p1.read().is_01() || !sext_ln1118_370_fu_32529_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln1118_371_fu_32540_p1.read()) - sc_bigint<22>(sext_ln1118_370_fu_32529_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_75_fu_32616_p2() {
    sub_ln1118_75_fu_32616_p2 = (!ap_const_lv19_0.is_01() || !sext_ln1118_376_fu_32612_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ap_const_lv19_0) - sc_bigint<19>(sext_ln1118_376_fu_32612_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_76_fu_29190_p2() {
    sub_ln1118_76_fu_29190_p2 = (!sext_ln1118_379_fu_29186_p1.read().is_01() || !sext_ln1118_378_fu_29174_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1118_379_fu_29186_p1.read()) - sc_bigint<21>(sext_ln1118_378_fu_29174_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_77_fu_32652_p2() {
    sub_ln1118_77_fu_32652_p2 = (!ap_const_lv23_0.is_01() || !sext_ln1118_382_fu_32648_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_0) - sc_bigint<23>(sext_ln1118_382_fu_32648_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_78_fu_32670_p2() {
    sub_ln1118_78_fu_32670_p2 = (!sub_ln1118_77_fu_32652_p2.read().is_01() || !sext_ln1118_383_fu_32666_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(sub_ln1118_77_fu_32652_p2.read()) - sc_bigint<23>(sext_ln1118_383_fu_32666_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_79_fu_32702_p2() {
    sub_ln1118_79_fu_32702_p2 = (!sext_ln1118_384_fu_32698_p1.read().is_01() || !sext_ln1118_381_fu_32636_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln1118_384_fu_32698_p1.read()) - sc_bigint<22>(sext_ln1118_381_fu_32636_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_7_fu_24927_p2() {
    sub_ln1118_7_fu_24927_p2 = (!ap_const_lv23_0.is_01() || !sext_ln1118_36_fu_24923_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_0) - sc_bigint<23>(sext_ln1118_36_fu_24923_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_80_fu_25894_p2() {
    sub_ln1118_80_fu_25894_p2 = (!sext_ln1118_111_fu_25868_p1.read().is_01() || !sext_ln1118_385_fu_25890_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(sext_ln1118_111_fu_25868_p1.read()) - sc_bigint<21>(sext_ln1118_385_fu_25890_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_81_fu_30358_p2() {
    sub_ln1118_81_fu_30358_p2 = (!sext_ln1118_146_fu_30336_p1.read().is_01() || !sext_ln1118_386_fu_30354_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(sext_ln1118_146_fu_30336_p1.read()) - sc_bigint<19>(sext_ln1118_386_fu_30354_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_82_fu_27018_p2() {
    sub_ln1118_82_fu_27018_p2 = (!sext_ln1118_197_fu_26988_p1.read().is_01() || !sext_ln1118_387_fu_27014_p1.read().is_01())? sc_lv<23>(): (sc_bigint<23>(sext_ln1118_197_fu_26988_p1.read()) - sc_bigint<23>(sext_ln1118_387_fu_27014_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_83_fu_30775_p2() {
    sub_ln1118_83_fu_30775_p2 = (!sext_ln1118_240_fu_30761_p1.read().is_01() || !sext_ln1118_388_fu_30771_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln1118_240_fu_30761_p1.read()) - sc_bigint<22>(sext_ln1118_388_fu_30771_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_84_fu_30806_p2() {
    sub_ln1118_84_fu_30806_p2 = (!sext_ln1118_239_fu_30758_p1.read().is_01() || !sext_ln1118_389_fu_30802_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(sext_ln1118_239_fu_30758_p1.read()) - sc_bigint<20>(sext_ln1118_389_fu_30802_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_85_fu_28709_p2() {
    sub_ln1118_85_fu_28709_p2 = (!sext_ln1118_306_fu_28688_p1.read().is_01() || !sext_ln1118_390_fu_28705_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(sext_ln1118_306_fu_28688_p1.read()) - sc_bigint<20>(sext_ln1118_390_fu_28705_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_86_fu_32584_p2() {
    sub_ln1118_86_fu_32584_p2 = (!sext_ln1118_374_fu_32568_p1.read().is_01() || !sext_ln1118_391_fu_32580_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(sext_ln1118_374_fu_32568_p1.read()) - sc_bigint<22>(sext_ln1118_391_fu_32580_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_8_fu_24945_p2() {
    sub_ln1118_8_fu_24945_p2 = (!sub_ln1118_7_fu_24927_p2.read().is_01() || !sext_ln1118_37_fu_24941_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(sub_ln1118_7_fu_24927_p2.read()) - sc_bigint<23>(sext_ln1118_37_fu_24941_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_9_fu_28156_p2() {
    sub_ln1118_9_fu_28156_p2 = (!sext_ln1118_41_fu_28152_p1.read().is_01() || !sext_ln1118_40_fu_28140_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(sext_ln1118_41_fu_28152_p1.read()) - sc_bigint<20>(sext_ln1118_40_fu_28140_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_sub_ln1118_fu_24553_p2() {
    sub_ln1118_fu_24553_p2 = (!ap_const_lv24_0.is_01() || !sext_ln1118_5_fu_24549_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(sext_ln1118_5_fu_24549_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_tmp_1_fu_25882_p1() {
    tmp_1_fu_25882_p1 = ap_port_reg_data_39_V_read.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_tmp_1_fu_25882_p3() {
    tmp_1_fu_25882_p3 = esl_concat<16,4>(tmp_1_fu_25882_p1.read(), ap_const_lv4_0);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_tmp_2_fu_30347_p3() {
    tmp_2_fu_30347_p3 = esl_concat<16,2>(data_50_V_read_1_reg_33933.read(), ap_const_lv2_0);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_tmp_3_fu_27006_p1() {
    tmp_3_fu_27006_p1 = ap_port_reg_data_66_V_read.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_tmp_3_fu_27006_p3() {
    tmp_3_fu_27006_p3 = esl_concat<16,6>(tmp_3_fu_27006_p1.read(), ap_const_lv6_0);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_tmp_4_fu_30764_p3() {
    tmp_4_fu_30764_p3 = esl_concat<16,5>(data_81_V_read_1_reg_34152.read(), ap_const_lv5_0);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_tmp_5_fu_30795_p3() {
    tmp_5_fu_30795_p3 = esl_concat<16,3>(data_81_V_read_1_reg_34152.read(), ap_const_lv3_0);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_tmp_6_fu_28697_p1() {
    tmp_6_fu_28697_p1 = ap_port_reg_data_102_V_read.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_tmp_6_fu_28697_p3() {
    tmp_6_fu_28697_p3 = esl_concat<16,3>(tmp_6_fu_28697_p1.read(), ap_const_lv3_0);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_tmp_7_fu_32572_p1() {
    tmp_7_fu_32572_p1 = ap_port_reg_data_125_V_read.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_tmp_7_fu_32572_p3() {
    tmp_7_fu_32572_p3 = esl_concat<16,5>(tmp_7_fu_32572_p1.read(), ap_const_lv5_0);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_104_fu_30009_p4() {
    trunc_ln708_104_fu_30009_p4 = sub_ln1118_20_fu_30003_p2.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_105_fu_30023_p1() {
    trunc_ln708_105_fu_30023_p1 =  (sc_lv<22>) (grp_fu_1549_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_105_fu_30023_p4() {
    trunc_ln708_105_fu_30023_p4 = trunc_ln708_105_fu_30023_p1.read().range(21, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_106_fu_30055_p4() {
    trunc_ln708_106_fu_30055_p4 = sub_ln1118_21_fu_30049_p2.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_107_fu_25818_p1() {
    trunc_ln708_107_fu_25818_p1 =  (sc_lv<22>) (grp_fu_1535_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_107_fu_25818_p4() {
    trunc_ln708_107_fu_25818_p4 = trunc_ln708_107_fu_25818_p1.read().range(21, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_112_fu_30073_p1() {
    trunc_ln708_112_fu_30073_p1 =  (sc_lv<24>) (grp_fu_1577_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_112_fu_30073_p4() {
    trunc_ln708_112_fu_30073_p4 = trunc_ln708_112_fu_30073_p1.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_117_fu_25910_p1() {
    trunc_ln708_117_fu_25910_p1 =  (sc_lv<24>) (grp_fu_1569_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_117_fu_25910_p4() {
    trunc_ln708_117_fu_25910_p4 = trunc_ln708_117_fu_25910_p1.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_122_fu_30129_p4() {
    trunc_ln708_122_fu_30129_p4 = sub_ln1118_22_fu_30123_p2.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_123_fu_30160_p4() {
    trunc_ln708_123_fu_30160_p4 = add_ln1118_7_fu_30154_p2.read().range(18, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_128_fu_28203_p4() {
    trunc_ln708_128_fu_28203_p4 = sub_ln1118_25_fu_28197_p2.read().range(18, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_139_fu_30236_p4() {
    trunc_ln708_139_fu_30236_p4 = add_ln1118_8_fu_30230_p2.read().range(21, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_140_fu_26084_p4() {
    trunc_ln708_140_fu_26084_p4 = sub_ln1118_27_fu_26078_p2.read().range(21, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_141_fu_30254_p1() {
    trunc_ln708_141_fu_30254_p1 =  (sc_lv<24>) (grp_fu_1550_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_141_fu_30254_p4() {
    trunc_ln708_141_fu_30254_p4 = trunc_ln708_141_fu_30254_p1.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_146_fu_30280_p1() {
    trunc_ln708_146_fu_30280_p1 =  (sc_lv<23>) (grp_fu_1574_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_146_fu_30280_p4() {
    trunc_ln708_146_fu_30280_p4 = trunc_ln708_146_fu_30280_p1.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_148_fu_30322_p4() {
    trunc_ln708_148_fu_30322_p4 = add_ln1118_9_fu_30316_p2.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_14_fu_24688_p4() {
    trunc_ln708_14_fu_24688_p4 = sub_ln1118_3_fu_24682_p2.read().range(24, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_152_fu_30382_p1() {
    trunc_ln708_152_fu_30382_p1 =  (sc_lv<21>) (grp_fu_1556_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_152_fu_30382_p4() {
    trunc_ln708_152_fu_30382_p4 = trunc_ln708_152_fu_30382_p1.read().range(20, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_155_fu_26154_p1() {
    trunc_ln708_155_fu_26154_p1 =  (sc_lv<22>) (grp_fu_1534_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_155_fu_26154_p4() {
    trunc_ln708_155_fu_26154_p4 = trunc_ln708_155_fu_26154_p1.read().range(21, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_167_fu_26310_p4() {
    trunc_ln708_167_fu_26310_p4 = sub_ln1118_29_fu_26304_p2.read().range(21, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_16_fu_28001_p1() {
    trunc_ln708_16_fu_28001_p1 =  (sc_lv<22>) (grp_fu_1539_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_172_fu_26751_p4() {
    trunc_ln708_172_fu_26751_p4 = sub_ln1118_32_fu_26745_p2.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_174_fu_30425_p1() {
    trunc_ln708_174_fu_30425_p1 =  (sc_lv<24>) (grp_fu_1555_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_174_fu_30425_p4() {
    trunc_ln708_174_fu_30425_p4 = trunc_ln708_174_fu_30425_p1.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_176_fu_27531_p1() {
    trunc_ln708_176_fu_27531_p1 = ap_port_reg_data_83_V_read.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_186_fu_30490_p4() {
    trunc_ln708_186_fu_30490_p4 = sub_ln1118_34_fu_30484_p2.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_187_fu_30504_p1() {
    trunc_ln708_187_fu_30504_p1 =  (sc_lv<24>) (grp_fu_1560_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_187_fu_30504_p4() {
    trunc_ln708_187_fu_30504_p4 = trunc_ln708_187_fu_30504_p1.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_188_fu_30536_p4() {
    trunc_ln708_188_fu_30536_p4 = sub_ln1118_35_fu_30530_p2.read().range(21, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_194_fu_26896_p4() {
    trunc_ln708_194_fu_26896_p4 = add_ln1118_10_fu_26890_p2.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_195_fu_26946_p4() {
    trunc_ln708_195_fu_26946_p4 = sub_ln1118_37_fu_26940_p2.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_197_fu_30565_p1() {
    trunc_ln708_197_fu_30565_p1 =  (sc_lv<21>) (grp_fu_1579_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_197_fu_30565_p4() {
    trunc_ln708_197_fu_30565_p4 = trunc_ln708_197_fu_30565_p1.read().range(20, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_204_fu_27100_p4() {
    trunc_ln708_204_fu_27100_p4 = add_ln1118_11_fu_27094_p2.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_208_fu_30589_p1() {
    trunc_ln708_208_fu_30589_p1 =  (sc_lv<23>) (grp_fu_1551_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_208_fu_30589_p4() {
    trunc_ln708_208_fu_30589_p4 = trunc_ln708_208_fu_30589_p1.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_210_fu_30611_p1() {
    trunc_ln708_210_fu_30611_p1 =  (sc_lv<23>) (grp_fu_1580_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_210_fu_30611_p4() {
    trunc_ln708_210_fu_30611_p4 = trunc_ln708_210_fu_30611_p1.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_211_fu_30625_p1() {
    trunc_ln708_211_fu_30625_p1 =  (sc_lv<24>) (grp_fu_1554_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_211_fu_30625_p4() {
    trunc_ln708_211_fu_30625_p4 = trunc_ln708_211_fu_30625_p1.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_214_fu_30643_p1() {
    trunc_ln708_214_fu_30643_p1 =  (sc_lv<23>) (grp_fu_1534_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_214_fu_30643_p4() {
    trunc_ln708_214_fu_30643_p4 = trunc_ln708_214_fu_30643_p1.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_219_fu_27246_p4() {
    trunc_ln708_219_fu_27246_p4 = sub_ln1118_40_fu_27240_p2.read().range(24, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_227_fu_27363_p4() {
    trunc_ln708_227_fu_27363_p4 = sub_ln1118_42_fu_27357_p2.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_22_fu_28039_p4() {
    trunc_ln708_22_fu_28039_p4 = add_ln1118_1_fu_28033_p2.read().range(20, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_231_fu_30666_p1() {
    trunc_ln708_231_fu_30666_p1 =  (sc_lv<24>) (grp_fu_1544_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_231_fu_30666_p4() {
    trunc_ln708_231_fu_30666_p4 = trunc_ln708_231_fu_30666_p1.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_234_fu_30712_p4() {
    trunc_ln708_234_fu_30712_p4 = sub_ln1118_43_fu_30706_p2.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_235_fu_30726_p1() {
    trunc_ln708_235_fu_30726_p1 =  (sc_lv<21>) (grp_fu_1563_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_235_fu_30726_p4() {
    trunc_ln708_235_fu_30726_p4 = trunc_ln708_235_fu_30726_p1.read().range(20, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_238_fu_30744_p1() {
    trunc_ln708_238_fu_30744_p1 =  (sc_lv<22>) (grp_fu_1537_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_238_fu_30744_p4() {
    trunc_ln708_238_fu_30744_p4 = trunc_ln708_238_fu_30744_p1.read().range(21, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_244_fu_30781_p4() {
    trunc_ln708_244_fu_30781_p4 = sub_ln1118_83_fu_30775_p2.read().range(21, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_245_fu_30812_p4() {
    trunc_ln708_245_fu_30812_p4 = sub_ln1118_84_fu_30806_p2.read().range(19, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_248_fu_27503_p4() {
    trunc_ln708_248_fu_27503_p4 = add_ln1118_13_fu_27497_p2.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_24_fu_24806_p4() {
    trunc_ln708_24_fu_24806_p4 = sub_ln1118_5_fu_24800_p2.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_250_fu_27541_p1() {
    trunc_ln708_250_fu_27541_p1 =  (sc_lv<23>) (grp_fu_1564_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_250_fu_27541_p4() {
    trunc_ln708_250_fu_27541_p4 = trunc_ln708_250_fu_27541_p1.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_254_fu_31642_p1() {
    trunc_ln708_254_fu_31642_p1 =  (sc_lv<24>) (grp_fu_1557_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_254_fu_31642_p4() {
    trunc_ln708_254_fu_31642_p4 = trunc_ln708_254_fu_31642_p1.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_256_fu_28251_p4() {
    trunc_ln708_256_fu_28251_p4 = sub_ln1118_44_fu_28245_p2.read().range(24, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_257_fu_31695_p4() {
    trunc_ln708_257_fu_31695_p4 = sub_ln1118_45_fu_31689_p2.read().range(20, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_259_fu_31731_p4() {
    trunc_ln708_259_fu_31731_p4 = add_ln1118_14_fu_31725_p2.read().range(19, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_266_fu_31752_p1() {
    trunc_ln708_266_fu_31752_p1 =  (sc_lv<24>) (grp_fu_1567_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_266_fu_31752_p4() {
    trunc_ln708_266_fu_31752_p4 = trunc_ln708_266_fu_31752_p1.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_267_fu_31800_p4() {
    trunc_ln708_267_fu_31800_p4 = sub_ln1118_49_fu_31794_p2.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_269_fu_30952_p1() {
    trunc_ln708_269_fu_30952_p1 = ap_port_reg_data_114_V_read.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_269_fu_30952_p4() {
    trunc_ln708_269_fu_30952_p4 = trunc_ln708_269_fu_30952_p1.read().range(15, 9);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_275_fu_28430_p4() {
    trunc_ln708_275_fu_28430_p4 = sub_ln1118_51_fu_28424_p2.read().range(24, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_280_fu_31869_p4() {
    trunc_ln708_280_fu_31869_p4 = sub_ln1118_52_fu_31863_p2.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_281_fu_28463_p1() {
    trunc_ln708_281_fu_28463_p1 =  (sc_lv<23>) (grp_fu_1538_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_281_fu_28463_p4() {
    trunc_ln708_281_fu_28463_p4 = trunc_ln708_281_fu_28463_p1.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_294_fu_31959_p4() {
    trunc_ln708_294_fu_31959_p4 = sub_ln1118_55_fu_31953_p2.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_299_fu_30888_p4() {
    trunc_ln708_299_fu_30888_p4 = add_ln1118_15_fu_30882_p2.read().range(20, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_300_fu_28612_p4() {
    trunc_ln708_300_fu_28612_p4 = sub_ln1118_57_fu_28606_p2.read().range(24, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_301_fu_28656_p4() {
    trunc_ln708_301_fu_28656_p4 = sub_ln1118_58_fu_28650_p2.read().range(21, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_306_fu_28715_p4() {
    trunc_ln708_306_fu_28715_p4 = sub_ln1118_85_fu_28709_p2.read().range(19, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_309_fu_32011_p1() {
    trunc_ln708_309_fu_32011_p1 =  (sc_lv<23>) (grp_fu_1577_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_309_fu_32011_p4() {
    trunc_ln708_309_fu_32011_p4 = trunc_ln708_309_fu_32011_p1.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_30_fu_28081_p4() {
    trunc_ln708_30_fu_28081_p4 = add_ln1118_2_fu_28075_p2.read().range(19, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_311_fu_32029_p1() {
    trunc_ln708_311_fu_32029_p1 =  (sc_lv<24>) (grp_fu_1535_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_311_fu_32029_p4() {
    trunc_ln708_311_fu_32029_p4 = trunc_ln708_311_fu_32029_p1.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_319_fu_32063_p1() {
    trunc_ln708_319_fu_32063_p1 =  (sc_lv<23>) (grp_fu_1553_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_319_fu_32063_p4() {
    trunc_ln708_319_fu_32063_p4 = trunc_ln708_319_fu_32063_p1.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_321_fu_32085_p1() {
    trunc_ln708_321_fu_32085_p1 =  (sc_lv<24>) (grp_fu_1579_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_321_fu_32085_p4() {
    trunc_ln708_321_fu_32085_p4 = trunc_ln708_321_fu_32085_p1.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_326_fu_32139_p4() {
    trunc_ln708_326_fu_32139_p4 = sub_ln1118_61_fu_32133_p2.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_32_fu_28095_p1() {
    trunc_ln708_32_fu_28095_p1 =  (sc_lv<23>) (grp_fu_1561_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_32_fu_28095_p4() {
    trunc_ln708_32_fu_28095_p4 = trunc_ln708_32_fu_28095_p1.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_330_fu_32177_p1() {
    trunc_ln708_330_fu_32177_p1 =  (sc_lv<24>) (grp_fu_1537_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_330_fu_32177_p4() {
    trunc_ln708_330_fu_32177_p4 = trunc_ln708_330_fu_32177_p1.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_333_fu_32235_p4() {
    trunc_ln708_333_fu_32235_p4 = sub_ln1118_62_fu_32229_p2.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_334_fu_32249_p1() {
    trunc_ln708_334_fu_32249_p1 =  (sc_lv<24>) (grp_fu_1547_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_334_fu_32249_p4() {
    trunc_ln708_334_fu_32249_p4 = trunc_ln708_334_fu_32249_p1.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_337_fu_30938_p4() {
    trunc_ln708_337_fu_30938_p4 = sub_ln1118_64_fu_30932_p2.read().range(20, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_338_fu_32309_p4() {
    trunc_ln708_338_fu_32309_p4 = sub_ln1118_66_fu_32303_p2.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_339_fu_32327_p1() {
    trunc_ln708_339_fu_32327_p1 =  (sc_lv<22>) (grp_fu_1552_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_339_fu_32327_p4() {
    trunc_ln708_339_fu_32327_p4 = trunc_ln708_339_fu_32327_p1.read().range(21, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_340_fu_28871_p4() {
    trunc_ln708_340_fu_28871_p4 = sub_ln1118_68_fu_28865_p2.read().range(19, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_34_fu_24901_p4() {
    trunc_ln708_34_fu_24901_p4 = grp_fu_1548_p2.read().range(24, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_350_fu_32371_p1() {
    trunc_ln708_350_fu_32371_p1 =  (sc_lv<24>) (grp_fu_1551_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_350_fu_32371_p4() {
    trunc_ln708_350_fu_32371_p4 = trunc_ln708_350_fu_32371_p1.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_351_fu_30988_p4() {
    trunc_ln708_351_fu_30988_p4 = sub_ln1118_70_fu_30982_p2.read().range(18, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_356_fu_32425_p4() {
    trunc_ln708_356_fu_32425_p4 = add_ln1118_17_fu_32419_p2.read().range(21, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_363_fu_29088_p4() {
    trunc_ln708_363_fu_29088_p4 = sub_ln1118_73_fu_29082_p2.read().range(24, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_366_fu_32470_p1() {
    trunc_ln708_366_fu_32470_p1 =  (sc_lv<24>) (grp_fu_1534_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_368_fu_32508_p4() {
    trunc_ln708_368_fu_32508_p4 = add_ln1118_19_fu_32502_p2.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_370_fu_32550_p4() {
    trunc_ln708_370_fu_32550_p4 = sub_ln1118_74_fu_32544_p2.read().range(21, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_373_fu_33543_p1() {
    trunc_ln708_373_fu_33543_p1 =  (sc_lv<24>) (grp_fu_1541_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_373_fu_33543_p4() {
    trunc_ln708_373_fu_33543_p4 = trunc_ln708_373_fu_33543_p1.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_374_fu_32590_p4() {
    trunc_ln708_374_fu_32590_p4 = sub_ln1118_86_fu_32584_p2.read().range(21, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_376_fu_32622_p4() {
    trunc_ln708_376_fu_32622_p4 = sub_ln1118_75_fu_32616_p2.read().range(18, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_377_fu_29196_p4() {
    trunc_ln708_377_fu_29196_p4 = sub_ln1118_76_fu_29190_p2.read().range(20, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_380_fu_32676_p4() {
    trunc_ln708_380_fu_32676_p4 = sub_ln1118_78_fu_32670_p2.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_382_fu_32708_p4() {
    trunc_ln708_382_fu_32708_p4 = sub_ln1118_79_fu_32702_p2.read().range(21, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_39_fu_28118_p1() {
    trunc_ln708_39_fu_28118_p1 =  (sc_lv<23>) (grp_fu_1569_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_39_fu_28118_p4() {
    trunc_ln708_39_fu_28118_p4 = trunc_ln708_39_fu_28118_p1.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_40_fu_28162_p4() {
    trunc_ln708_40_fu_28162_p4 = sub_ln1118_9_fu_28156_p2.read().range(19, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_42_fu_29624_p1() {
    trunc_ln708_42_fu_29624_p1 =  (sc_lv<23>) (grp_fu_1567_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_42_fu_29624_p4() {
    trunc_ln708_42_fu_29624_p4 = trunc_ln708_42_fu_29624_p1.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_46_fu_29669_p4() {
    trunc_ln708_46_fu_29669_p4 = add_ln1118_3_fu_29663_p2.read().range(21, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_47_fu_29700_p4() {
    trunc_ln708_47_fu_29700_p4 = add_ln1118_4_fu_29694_p2.read().range(19, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_48_fu_29725_p1() {
    trunc_ln708_48_fu_29725_p1 =  (sc_lv<23>) (grp_fu_1558_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_48_fu_29725_p4() {
    trunc_ln708_48_fu_29725_p4 = trunc_ln708_48_fu_29725_p1.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_49_fu_29739_p1() {
    trunc_ln708_49_fu_29739_p1 =  (sc_lv<22>) (grp_fu_1576_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_49_fu_29739_p4() {
    trunc_ln708_49_fu_29739_p4 = trunc_ln708_49_fu_29739_p1.read().range(21, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_50_fu_29753_p1() {
    trunc_ln708_50_fu_29753_p1 =  (sc_lv<23>) (grp_fu_1572_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_50_fu_29753_p4() {
    trunc_ln708_50_fu_29753_p4 = trunc_ln708_50_fu_29753_p1.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_51_fu_25047_p1() {
    trunc_ln708_51_fu_25047_p1 =  (sc_lv<22>) (grp_fu_1571_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_62_fu_29771_p1() {
    trunc_ln708_62_fu_29771_p1 =  (sc_lv<21>) (grp_fu_1547_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_62_fu_29771_p4() {
    trunc_ln708_62_fu_29771_p4 = trunc_ln708_62_fu_29771_p1.read().range(20, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_64_fu_29789_p1() {
    trunc_ln708_64_fu_29789_p1 =  (sc_lv<22>) (grp_fu_1536_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_64_fu_29789_p4() {
    trunc_ln708_64_fu_29789_p4 = trunc_ln708_64_fu_29789_p1.read().range(21, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_68_fu_29807_p1() {
    trunc_ln708_68_fu_29807_p1 =  (sc_lv<23>) (grp_fu_1546_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_68_fu_29807_p4() {
    trunc_ln708_68_fu_29807_p4 = trunc_ln708_68_fu_29807_p1.read().range(22, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_79_fu_25389_p4() {
    trunc_ln708_79_fu_25389_p4 = sub_ln1118_16_fu_25383_p2.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_82_fu_29869_p4() {
    trunc_ln708_82_fu_29869_p4 = sub_ln1118_17_fu_29863_p2.read().range(21, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_87_fu_25724_p4() {
    trunc_ln708_87_fu_25724_p4 = sub_ln1118_18_fu_25718_p2.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_90_fu_25752_p1() {
    trunc_ln708_90_fu_25752_p1 =  (sc_lv<24>) (grp_fu_1558_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_90_fu_25752_p4() {
    trunc_ln708_90_fu_25752_p4 = trunc_ln708_90_fu_25752_p1.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_92_fu_29899_p1() {
    trunc_ln708_92_fu_29899_p1 =  (sc_lv<24>) (grp_fu_1542_p2.read());
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_92_fu_29899_p4() {
    trunc_ln708_92_fu_29899_p4 = trunc_ln708_92_fu_29899_p1.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_97_fu_29942_p4() {
    trunc_ln708_97_fu_29942_p4 = add_ln1118_6_fu_29936_p2.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln708_9_fu_24577_p4() {
    trunc_ln708_9_fu_24577_p4 = sub_ln1118_1_fu_24571_p2.read().range(23, 10);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config4_s::thread_trunc_ln_fu_25290_p1() {
    trunc_ln_fu_25290_p1 = data_25_V_read.read();
}

}

