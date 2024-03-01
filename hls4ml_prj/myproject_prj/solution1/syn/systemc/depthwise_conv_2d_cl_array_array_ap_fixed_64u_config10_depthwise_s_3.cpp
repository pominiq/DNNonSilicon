#include "depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln1118_104_fu_4134318_p2() {
    add_ln1118_104_fu_4134318_p2 = (!sext_ln1118_1062_fu_4134314_p1.read().is_01() || !sext_ln1118_1061_fu_4134302_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(sext_ln1118_1062_fu_4134314_p1.read()) + sc_bigint<20>(sext_ln1118_1061_fu_4134302_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln1118_121_fu_4146212_p2() {
    add_ln1118_121_fu_4146212_p2 = (!sext_ln1118_1497_fu_4146196_p1.read().is_01() || !sext_ln1118_1498_fu_4146208_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(sext_ln1118_1497_fu_4146196_p1.read()) + sc_bigint<20>(sext_ln1118_1498_fu_4146208_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln63_fu_4127135_p2() {
    add_ln63_fu_4127135_p2 = (!indvar_flatten_reg_4424.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(indvar_flatten_reg_4424.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3157_fu_4146288_p2() {
    add_ln703_3157_fu_4146288_p2 = (!mult_64_V_fu_4143825_p1.read().is_01() || !mult_256_V_fu_4144013_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_64_V_fu_4143825_p1.read()) + sc_biguint<16>(mult_256_V_fu_4144013_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3158_fu_4146294_p2() {
    add_ln703_3158_fu_4146294_p2 = (!add_ln703_reg_4153164.read().is_01() || !add_ln703_3157_fu_4146288_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_reg_4153164.read()) + sc_biguint<16>(add_ln703_3157_fu_4146288_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3159_fu_4142752_p2() {
    add_ln703_3159_fu_4142752_p2 = (!mult_192_V_fu_4139327_p1.read().is_01() || !mult_448_V_fu_4141621_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_192_V_fu_4139327_p1.read()) + sc_bigint<16>(mult_448_V_fu_4141621_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3160_fu_4146299_p2() {
    add_ln703_3160_fu_4146299_p2 = (!sext_ln203_1114_fu_4145027_p1.read().is_01() || !sext_ln203_1094_fu_4144195_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1114_fu_4145027_p1.read()) + sc_bigint<14>(sext_ln203_1094_fu_4144195_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3161_fu_4146309_p2() {
    add_ln703_3161_fu_4146309_p2 = (!sext_ln203_1156_fu_4145460_p1.read().is_01() || !sext_ln703_fu_4146305_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1156_fu_4145460_p1.read()) + sc_bigint<15>(sext_ln703_fu_4146305_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3162_fu_4146319_p2() {
    add_ln703_3162_fu_4146319_p2 = (!add_ln703_3159_reg_4153169.read().is_01() || !sext_ln703_667_fu_4146315_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3159_reg_4153169.read()) + sc_bigint<16>(sext_ln703_667_fu_4146315_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3164_fu_4142758_p2() {
    add_ln703_3164_fu_4142758_p2 = (!mult_449_V_fu_4141625_p4.read().is_01() || !mult_385_V_fu_4140835_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_449_V_fu_4141625_p4.read()) + sc_biguint<16>(mult_385_V_fu_4140835_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3165_fu_4146331_p2() {
    add_ln703_3165_fu_4146331_p2 = (!mult_65_V_fu_4143828_p1.read().is_01() || !mult_513_V_fu_4145464_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_65_V_fu_4143828_p1.read()) + sc_biguint<16>(mult_513_V_fu_4145464_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3166_fu_4146337_p2() {
    add_ln703_3166_fu_4146337_p2 = (!add_ln703_3164_reg_4153174.read().is_01() || !add_ln703_3165_fu_4146331_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3164_reg_4153174.read()) + sc_biguint<16>(add_ln703_3165_fu_4146331_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3167_fu_4146342_p2() {
    add_ln703_3167_fu_4146342_p2 = (!sext_ln203_1095_fu_4144209_p1.read().is_01() || !sext_ln203_1066_fu_4143909_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1095_fu_4144209_p1.read()) + sc_bigint<15>(sext_ln203_1066_fu_4143909_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3168_fu_4146352_p2() {
    add_ln703_3168_fu_4146352_p2 = (!sext_ln203_1079_fu_4144033_p1.read().is_01() || !sext_ln203_1037_fu_4143870_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_1079_fu_4144033_p1.read()) + sc_bigint<13>(sext_ln203_1037_fu_4143870_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3169_fu_4146362_p2() {
    add_ln703_3169_fu_4146362_p2 = (!sext_ln203_fu_4143771_p1.read().is_01() || !sext_ln703_669_fu_4146358_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_fu_4143771_p1.read()) + sc_bigint<14>(sext_ln703_669_fu_4146358_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3170_fu_4146372_p2() {
    add_ln703_3170_fu_4146372_p2 = (!sext_ln703_668_fu_4146348_p1.read().is_01() || !sext_ln703_670_fu_4146368_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_668_fu_4146348_p1.read()) + sc_bigint<16>(sext_ln703_670_fu_4146368_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3172_fu_4146385_p2() {
    add_ln703_3172_fu_4146385_p2 = (!mult_322_V_fu_4144213_p4.read().is_01() || !mult_258_V_reg_4152494.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_322_V_fu_4144213_p4.read()) + sc_biguint<16>(mult_258_V_reg_4152494.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3173_fu_4142764_p2() {
    add_ln703_3173_fu_4142764_p2 = (!mult_386_V_fu_4140855_p1.read().is_01() || !mult_194_V_fu_4139330_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_386_V_fu_4140855_p1.read()) + sc_bigint<16>(mult_194_V_fu_4139330_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3174_fu_4146390_p2() {
    add_ln703_3174_fu_4146390_p2 = (!add_ln703_3172_fu_4146385_p2.read().is_01() || !add_ln703_3173_reg_4153179.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3172_fu_4146385_p2.read()) + sc_biguint<16>(add_ln703_3173_reg_4153179.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3175_fu_4146395_p2() {
    add_ln703_3175_fu_4146395_p2 = (!mult_514_V_fu_4145484_p1.read().is_01() || !mult_450_V_fu_4145238_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_514_V_fu_4145484_p1.read()) + sc_bigint<16>(mult_450_V_fu_4145238_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3176_fu_4138386_p2() {
    add_ln703_3176_fu_4138386_p2 = (!sext_ln203_1038_fu_4137740_p1.read().is_01() || !sext_ln203_1011_fu_4137221_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_1038_fu_4137740_p1.read()) + sc_bigint<12>(sext_ln203_1011_fu_4137221_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3177_fu_4138396_p2() {
    add_ln703_3177_fu_4138396_p2 = (!sext_ln203_989_fu_4136676_p1.read().is_01() || !sext_ln703_671_fu_4138392_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_989_fu_4136676_p1.read()) + sc_bigint<13>(sext_ln703_671_fu_4138392_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3178_fu_4146404_p2() {
    add_ln703_3178_fu_4146404_p2 = (!add_ln703_3175_fu_4146395_p2.read().is_01() || !sext_ln703_672_fu_4146401_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3175_fu_4146395_p2.read()) + sc_bigint<16>(sext_ln703_672_fu_4146401_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3180_fu_4146417_p2() {
    add_ln703_3180_fu_4146417_p2 = (!mult_515_V_fu_4145488_p4.read().is_01() || !mult_131_V_reg_4152364.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_515_V_fu_4145488_p4.read()) + sc_biguint<16>(mult_131_V_reg_4152364.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3181_fu_4146422_p2() {
    add_ln703_3181_fu_4146422_p2 = (!mult_323_V_fu_4144233_p1.read().is_01() || !mult_259_V_fu_4144037_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_323_V_fu_4144233_p1.read()) + sc_bigint<16>(mult_259_V_fu_4144037_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3182_fu_4146428_p2() {
    add_ln703_3182_fu_4146428_p2 = (!add_ln703_3180_fu_4146417_p2.read().is_01() || !add_ln703_3181_fu_4146422_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3180_fu_4146417_p2.read()) + sc_biguint<16>(add_ln703_3181_fu_4146422_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3183_fu_4142770_p2() {
    add_ln703_3183_fu_4142770_p2 = (!mult_3_V_fu_4138533_p1.read().is_01() || !mult_451_V_fu_4141655_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3_V_fu_4138533_p1.read()) + sc_bigint<16>(mult_451_V_fu_4141655_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3184_fu_4142776_p2() {
    add_ln703_3184_fu_4142776_p2 = (!sext_ln203_1012_fu_4138596_p1.read().is_01() || !sext_ln203_1115_fu_4140869_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1012_fu_4138596_p1.read()) + sc_bigint<15>(sext_ln203_1115_fu_4140869_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3185_fu_4142786_p2() {
    add_ln703_3185_fu_4142786_p2 = (!add_ln703_3183_fu_4142770_p2.read().is_01() || !sext_ln703_673_fu_4142782_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3183_fu_4142770_p2.read()) + sc_bigint<16>(sext_ln703_673_fu_4142782_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3187_fu_4142792_p2() {
    add_ln703_3187_fu_4142792_p2 = (!mult_68_V_fu_4138599_p1.read().is_01() || !mult_132_V_fu_4138714_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_68_V_fu_4138599_p1.read()) + sc_biguint<16>(mult_132_V_fu_4138714_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3188_fu_4142798_p2() {
    add_ln703_3188_fu_4142798_p2 = (!mult_260_V_fu_4139835_p1.read().is_01() || !mult_196_V_fu_4139333_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_260_V_fu_4139835_p1.read()) + sc_bigint<16>(mult_196_V_fu_4139333_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3189_fu_4142804_p2() {
    add_ln703_3189_fu_4142804_p2 = (!add_ln703_3187_fu_4142792_p2.read().is_01() || !add_ln703_3188_fu_4142798_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3187_fu_4142792_p2.read()) + sc_biguint<16>(add_ln703_3188_fu_4142798_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3190_fu_4146440_p2() {
    add_ln703_3190_fu_4146440_p2 = (!mult_388_V_fu_4145031_p1.read().is_01() || !mult_324_V_fu_4144247_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_388_V_fu_4145031_p1.read()) + sc_bigint<16>(mult_324_V_fu_4144247_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3191_fu_4146446_p2() {
    add_ln703_3191_fu_4146446_p2 = (!mult_4_V_fu_4143774_p1.read().is_01() || !mult_516_V_fu_4145508_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_4_V_fu_4143774_p1.read()) + sc_bigint<16>(mult_516_V_fu_4145508_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3192_fu_4146452_p2() {
    add_ln703_3192_fu_4146452_p2 = (!mult_452_V_fu_4145241_p1.read().is_01() || !add_ln703_3191_fu_4146446_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_452_V_fu_4145241_p1.read()) + sc_biguint<16>(add_ln703_3191_fu_4146446_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3193_fu_4146458_p2() {
    add_ln703_3193_fu_4146458_p2 = (!add_ln703_3190_fu_4146440_p2.read().is_01() || !add_ln703_3192_fu_4146452_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3190_fu_4146440_p2.read()) + sc_biguint<16>(add_ln703_3192_fu_4146452_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3195_fu_4146470_p2() {
    add_ln703_3195_fu_4146470_p2 = (!mult_517_V_fu_4145512_p4.read().is_01() || !mult_389_V_reg_4152714.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_517_V_fu_4145512_p4.read()) + sc_biguint<16>(mult_389_V_reg_4152714.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3196_fu_4142810_p2() {
    add_ln703_3196_fu_4142810_p2 = (!mult_197_V_fu_4139336_p1.read().is_01() || !mult_133_V_fu_4138734_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_197_V_fu_4139336_p1.read()) + sc_bigint<16>(mult_133_V_fu_4138734_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3197_fu_4146475_p2() {
    add_ln703_3197_fu_4146475_p2 = (!add_ln703_3195_fu_4146470_p2.read().is_01() || !add_ln703_3196_reg_4153194.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3195_fu_4146470_p2.read()) + sc_biguint<16>(add_ln703_3196_reg_4153194.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3198_fu_4146480_p2() {
    add_ln703_3198_fu_4146480_p2 = (!mult_5_V_fu_4143777_p1.read().is_01() || !mult_325_V_fu_4144261_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_5_V_fu_4143777_p1.read()) + sc_bigint<16>(mult_325_V_fu_4144261_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3199_fu_4146486_p2() {
    add_ln703_3199_fu_4146486_p2 = (!sext_ln203_1135_fu_4145244_p1.read().is_01() || !sext_ln203_1080_fu_4144050_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1135_fu_4145244_p1.read()) + sc_bigint<14>(sext_ln203_1080_fu_4144050_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3200_fu_4146496_p2() {
    add_ln703_3200_fu_4146496_p2 = (!sext_ln203_1013_fu_4143831_p1.read().is_01() || !sext_ln703_674_fu_4146492_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1013_fu_4143831_p1.read()) + sc_bigint<15>(sext_ln703_674_fu_4146492_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3201_fu_4146506_p2() {
    add_ln703_3201_fu_4146506_p2 = (!add_ln703_3198_fu_4146480_p2.read().is_01() || !sext_ln703_675_fu_4146502_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3198_fu_4146480_p2.read()) + sc_bigint<16>(sext_ln703_675_fu_4146502_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3203_fu_4142816_p2() {
    add_ln703_3203_fu_4142816_p2 = (!mult_134_V_fu_4138738_p4.read().is_01() || !mult_6_V_reg_4151664.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_134_V_fu_4138738_p4.read()) + sc_biguint<16>(mult_6_V_reg_4151664.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3204_fu_4146519_p2() {
    add_ln703_3204_fu_4146519_p2 = (!mult_326_V_fu_4144275_p1.read().is_01() || !mult_70_V_fu_4143834_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_326_V_fu_4144275_p1.read()) + sc_bigint<16>(mult_70_V_fu_4143834_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3205_fu_4146525_p2() {
    add_ln703_3205_fu_4146525_p2 = (!add_ln703_3203_reg_4153199.read().is_01() || !add_ln703_3204_fu_4146519_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3203_reg_4153199.read()) + sc_biguint<16>(add_ln703_3204_fu_4146519_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3206_fu_4142821_p2() {
    add_ln703_3206_fu_4142821_p2 = (!sext_ln203_1081_fu_4139879_p1.read().is_01() || !sext_ln203_1067_fu_4139339_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1081_fu_4139879_p1.read()) + sc_bigint<15>(sext_ln203_1067_fu_4139339_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3207_fu_4142831_p2() {
    add_ln703_3207_fu_4142831_p2 = (!sext_ln203_1157_fu_4142572_p1.read().is_01() || !sext_ln203_1116_fu_4140903_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1157_fu_4142572_p1.read()) + sc_bigint<14>(sext_ln203_1116_fu_4140903_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3208_fu_4142841_p2() {
    add_ln703_3208_fu_4142841_p2 = (!sext_ln203_1136_fu_4141689_p1.read().is_01() || !sext_ln703_677_fu_4142837_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1136_fu_4141689_p1.read()) + sc_bigint<15>(sext_ln703_677_fu_4142837_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3209_fu_4142851_p2() {
    add_ln703_3209_fu_4142851_p2 = (!sext_ln703_676_fu_4142827_p1.read().is_01() || !sext_ln703_678_fu_4142847_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_676_fu_4142827_p1.read()) + sc_bigint<16>(sext_ln703_678_fu_4142847_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3211_fu_4142857_p2() {
    add_ln703_3211_fu_4142857_p2 = (!mult_391_V_fu_4140907_p4.read().is_01() || !mult_7_V_reg_4151669.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_391_V_fu_4140907_p4.read()) + sc_biguint<16>(mult_7_V_reg_4151669.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3212_fu_4142862_p2() {
    add_ln703_3212_fu_4142862_p2 = (!mult_135_V_fu_4138758_p1.read().is_01() || !mult_71_V_fu_4138602_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_135_V_fu_4138758_p1.read()) + sc_bigint<16>(mult_71_V_fu_4138602_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3213_fu_4142868_p2() {
    add_ln703_3213_fu_4142868_p2 = (!add_ln703_3211_fu_4142857_p2.read().is_01() || !add_ln703_3212_fu_4142862_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3211_fu_4142857_p2.read()) + sc_biguint<16>(add_ln703_3212_fu_4142862_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3214_fu_4142874_p2() {
    add_ln703_3214_fu_4142874_p2 = (!mult_455_V_fu_4141703_p1.read().is_01() || !mult_263_V_fu_4139893_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_455_V_fu_4141703_p1.read()) + sc_bigint<16>(mult_263_V_fu_4139893_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3215_fu_4146536_p2() {
    add_ln703_3215_fu_4146536_p2 = (!sext_ln203_1068_fu_4143912_p1.read().is_01() || !sext_ln203_1096_fu_4144289_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1068_fu_4143912_p1.read()) + sc_bigint<15>(sext_ln203_1096_fu_4144289_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3216_fu_4146546_p2() {
    add_ln703_3216_fu_4146546_p2 = (!mult_519_V_fu_4145532_p1.read().is_01() || !sext_ln703_679_fu_4146542_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_519_V_fu_4145532_p1.read()) + sc_bigint<16>(sext_ln703_679_fu_4146542_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3217_fu_4146552_p2() {
    add_ln703_3217_fu_4146552_p2 = (!add_ln703_3214_reg_4153214.read().is_01() || !add_ln703_3216_fu_4146546_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3214_reg_4153214.read()) + sc_biguint<16>(add_ln703_3216_fu_4146546_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3219_fu_4142880_p2() {
    add_ln703_3219_fu_4142880_p2 = (!mult_136_V_fu_4138762_p4.read().is_01() || !mult_8_V_reg_4151674.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_136_V_fu_4138762_p4.read()) + sc_biguint<16>(mult_8_V_reg_4151674.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3220_fu_4142885_p2() {
    add_ln703_3220_fu_4142885_p2 = (!mult_456_V_fu_4141707_p4.read().is_01() || !mult_264_V_fu_4139897_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_456_V_fu_4141707_p4.read()) + sc_biguint<16>(mult_264_V_fu_4139897_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3221_fu_4142891_p2() {
    add_ln703_3221_fu_4142891_p2 = (!add_ln703_3219_fu_4142880_p2.read().is_01() || !add_ln703_3220_fu_4142885_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3219_fu_4142880_p2.read()) + sc_biguint<16>(add_ln703_3220_fu_4142885_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3222_fu_4138402_p2() {
    add_ln703_3222_fu_4138402_p2 = (!mult_200_V_fu_4137856_p1.read().is_01() || !mult_72_V_fu_4137265_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_200_V_fu_4137856_p1.read()) + sc_bigint<16>(mult_72_V_fu_4137265_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3223_fu_4146563_p2() {
    add_ln703_3223_fu_4146563_p2 = (!sext_ln203_1117_fu_4145066_p1.read().is_01() || !sext_ln203_1097_fu_4144303_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_1117_fu_4145066_p1.read()) + sc_bigint<13>(sext_ln203_1097_fu_4144303_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3224_fu_4146573_p2() {
    add_ln703_3224_fu_4146573_p2 = (!sext_ln203_1158_fu_4145546_p1.read().is_01() || !sext_ln703_680_fu_4146569_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1158_fu_4145546_p1.read()) + sc_bigint<14>(sext_ln703_680_fu_4146569_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3225_fu_4146583_p2() {
    add_ln703_3225_fu_4146583_p2 = (!add_ln703_3222_reg_4152284.read().is_01() || !sext_ln703_681_fu_4146579_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3222_reg_4152284.read()) + sc_bigint<16>(sext_ln703_681_fu_4146579_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3227_fu_4142897_p2() {
    add_ln703_3227_fu_4142897_p2 = (!mult_137_V_fu_4138772_p4.read().is_01() || !mult_9_V_reg_4151679.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_137_V_fu_4138772_p4.read()) + sc_biguint<16>(mult_9_V_reg_4151679.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3228_fu_4146594_p2() {
    add_ln703_3228_fu_4146594_p2 = (!mult_329_V_fu_4144317_p1.read().is_01() || !mult_393_V_reg_4152719.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_329_V_fu_4144317_p1.read()) + sc_biguint<16>(mult_393_V_reg_4152719.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3229_fu_4146599_p2() {
    add_ln703_3229_fu_4146599_p2 = (!add_ln703_3227_reg_4153224.read().is_01() || !add_ln703_3228_fu_4146594_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3227_reg_4153224.read()) + sc_biguint<16>(add_ln703_3228_fu_4146594_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3230_fu_4146604_p2() {
    add_ln703_3230_fu_4146604_p2 = (!mult_73_V_fu_4143837_p1.read().is_01() || !mult_521_V_fu_4145560_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_73_V_fu_4143837_p1.read()) + sc_bigint<16>(mult_521_V_fu_4145560_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3231_fu_4142902_p2() {
    add_ln703_3231_fu_4142902_p2 = (!sext_ln203_1082_fu_4139917_p1.read().is_01() || !sext_ln203_1137_fu_4141727_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1082_fu_4139917_p1.read()) + sc_bigint<15>(sext_ln203_1137_fu_4141727_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3232_fu_4142912_p2() {
    add_ln703_3232_fu_4142912_p2 = (!mult_201_V_fu_4139342_p1.read().is_01() || !sext_ln703_682_fu_4142908_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_201_V_fu_4139342_p1.read()) + sc_bigint<16>(sext_ln703_682_fu_4142908_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3233_fu_4146610_p2() {
    add_ln703_3233_fu_4146610_p2 = (!add_ln703_3230_fu_4146604_p2.read().is_01() || !add_ln703_3232_reg_4153229.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3230_fu_4146604_p2.read()) + sc_biguint<16>(add_ln703_3232_reg_4153229.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3235_fu_4142918_p2() {
    add_ln703_3235_fu_4142918_p2 = (!mult_266_V_fu_4139921_p4.read().is_01() || !mult_10_V_reg_4151684.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_266_V_fu_4139921_p4.read()) + sc_biguint<16>(mult_10_V_reg_4151684.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3236_fu_4146622_p2() {
    add_ln703_3236_fu_4146622_p2 = (!mult_74_V_fu_4143840_p1.read().is_01() || !mult_522_V_fu_4145564_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_74_V_fu_4143840_p1.read()) + sc_biguint<16>(mult_522_V_fu_4145564_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3237_fu_4146628_p2() {
    add_ln703_3237_fu_4146628_p2 = (!add_ln703_3235_reg_4153234.read().is_01() || !add_ln703_3236_fu_4146622_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3235_reg_4153234.read()) + sc_biguint<16>(add_ln703_3236_fu_4146622_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3238_fu_4146633_p2() {
    add_ln703_3238_fu_4146633_p2 = (!mult_330_V_fu_4144331_p1.read().is_01() || !mult_138_V_fu_4143873_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_330_V_fu_4144331_p1.read()) + sc_bigint<16>(mult_138_V_fu_4143873_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3239_fu_4142923_p2() {
    add_ln703_3239_fu_4142923_p2 = (!mult_202_V_fu_4139345_p1.read().is_01() || !mult_458_V_fu_4141741_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_202_V_fu_4139345_p1.read()) + sc_bigint<16>(mult_458_V_fu_4141741_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3240_fu_4142929_p2() {
    add_ln703_3240_fu_4142929_p2 = (!mult_394_V_fu_4140937_p1.read().is_01() || !add_ln703_3239_fu_4142923_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_394_V_fu_4140937_p1.read()) + sc_biguint<16>(add_ln703_3239_fu_4142923_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3241_fu_4146639_p2() {
    add_ln703_3241_fu_4146639_p2 = (!add_ln703_3238_fu_4146633_p2.read().is_01() || !add_ln703_3240_reg_4153239.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3238_fu_4146633_p2.read()) + sc_biguint<16>(add_ln703_3240_reg_4153239.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3243_fu_4146651_p2() {
    add_ln703_3243_fu_4146651_p2 = (!mult_11_V_fu_4143780_p1.read().is_01() || !mult_331_V_fu_4144335_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_11_V_fu_4143780_p1.read()) + sc_biguint<16>(mult_331_V_fu_4144335_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3244_fu_4142935_p2() {
    add_ln703_3244_fu_4142935_p2 = (!mult_139_V_fu_4138802_p1.read().is_01() || !mult_75_V_fu_4138605_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_139_V_fu_4138802_p1.read()) + sc_bigint<16>(mult_75_V_fu_4138605_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3245_fu_4146657_p2() {
    add_ln703_3245_fu_4146657_p2 = (!add_ln703_3243_fu_4146651_p2.read().is_01() || !add_ln703_3244_reg_4153244.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3243_fu_4146651_p2.read()) + sc_biguint<16>(add_ln703_3244_reg_4153244.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3246_fu_4146662_p2() {
    add_ln703_3246_fu_4146662_p2 = (!mult_267_V_fu_4144064_p1.read().is_01() || !mult_203_V_fu_4143915_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_267_V_fu_4144064_p1.read()) + sc_bigint<16>(mult_203_V_fu_4143915_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3247_fu_4142941_p2() {
    add_ln703_3247_fu_4142941_p2 = (!sext_ln203_1138_fu_4141755_p1.read().is_01() || !sext_ln203_1118_fu_4140951_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1138_fu_4141755_p1.read()) + sc_bigint<14>(sext_ln203_1118_fu_4140951_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3248_fu_4146671_p2() {
    add_ln703_3248_fu_4146671_p2 = (!sext_ln203_1159_fu_4145584_p1.read().is_01() || !sext_ln703_683_fu_4146668_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1159_fu_4145584_p1.read()) + sc_bigint<15>(sext_ln703_683_fu_4146668_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3249_fu_4146681_p2() {
    add_ln703_3249_fu_4146681_p2 = (!add_ln703_3246_fu_4146662_p2.read().is_01() || !sext_ln703_684_fu_4146677_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3246_fu_4146662_p2.read()) + sc_bigint<16>(sext_ln703_684_fu_4146677_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3251_fu_4146694_p2() {
    add_ln703_3251_fu_4146694_p2 = (!mult_12_V_fu_4143783_p1.read().is_01() || !mult_332_V_fu_4144345_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_12_V_fu_4143783_p1.read()) + sc_biguint<16>(mult_332_V_fu_4144345_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3252_fu_4138408_p2() {
    add_ln703_3252_fu_4138408_p2 = (!mult_204_V_fu_4137880_p1.read().is_01() || !mult_76_V_fu_4137299_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_204_V_fu_4137880_p1.read()) + sc_bigint<16>(mult_76_V_fu_4137299_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3253_fu_4146700_p2() {
    add_ln703_3253_fu_4146700_p2 = (!add_ln703_3251_fu_4146694_p2.read().is_01() || !add_ln703_3252_reg_4152289.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3251_fu_4146694_p2.read()) + sc_biguint<16>(add_ln703_3252_reg_4152289.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3254_fu_4142947_p2() {
    add_ln703_3254_fu_4142947_p2 = (!mult_396_V_fu_4140965_p1.read().is_01() || !mult_268_V_fu_4139971_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_396_V_fu_4140965_p1.read()) + sc_bigint<16>(mult_268_V_fu_4139971_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3255_fu_4146705_p2() {
    add_ln703_3255_fu_4146705_p2 = (!sext_ln203_1160_fu_4145598_p1.read().is_01() || !sext_ln203_1039_fu_4143876_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1160_fu_4145598_p1.read()) + sc_bigint<15>(sext_ln203_1039_fu_4143876_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3256_fu_4146715_p2() {
    add_ln703_3256_fu_4146715_p2 = (!mult_460_V_fu_4145247_p1.read().is_01() || !sext_ln703_685_fu_4146711_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_460_V_fu_4145247_p1.read()) + sc_bigint<16>(sext_ln703_685_fu_4146711_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3257_fu_4146721_p2() {
    add_ln703_3257_fu_4146721_p2 = (!add_ln703_3254_reg_4153254.read().is_01() || !add_ln703_3256_fu_4146715_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3254_reg_4153254.read()) + sc_biguint<16>(add_ln703_3256_fu_4146715_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3259_fu_4146733_p2() {
    add_ln703_3259_fu_4146733_p2 = (!mult_525_V_fu_4145602_p4.read().is_01() || !mult_461_V_reg_4152894.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_525_V_fu_4145602_p4.read()) + sc_biguint<16>(mult_461_V_reg_4152894.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3260_fu_4142953_p2() {
    add_ln703_3260_fu_4142953_p2 = (!mult_13_V_fu_4138536_p1.read().is_01() || !mult_397_V_fu_4140979_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_13_V_fu_4138536_p1.read()) + sc_bigint<16>(mult_397_V_fu_4140979_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3261_fu_4146738_p2() {
    add_ln703_3261_fu_4146738_p2 = (!add_ln703_3259_fu_4146733_p2.read().is_01() || !add_ln703_3260_reg_4153259.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3259_fu_4146733_p2.read()) + sc_biguint<16>(add_ln703_3260_reg_4153259.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3262_fu_4142959_p2() {
    add_ln703_3262_fu_4142959_p2 = (!sext_ln203_1069_fu_4139348_p1.read().is_01() || !sext_ln203_1040_fu_4138816_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1069_fu_4139348_p1.read()) + sc_bigint<15>(sext_ln203_1040_fu_4138816_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3263_fu_4142969_p2() {
    add_ln703_3263_fu_4142969_p2 = (!sext_ln203_1083_fu_4139985_p1.read().is_01() || !sext_ln203_1098_fu_4140683_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1083_fu_4139985_p1.read()) + sc_bigint<14>(sext_ln203_1098_fu_4140683_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3264_fu_4142979_p2() {
    add_ln703_3264_fu_4142979_p2 = (!sext_ln203_1014_fu_4138608_p1.read().is_01() || !sext_ln703_687_fu_4142975_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1014_fu_4138608_p1.read()) + sc_bigint<15>(sext_ln703_687_fu_4142975_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3265_fu_4142989_p2() {
    add_ln703_3265_fu_4142989_p2 = (!sext_ln703_686_fu_4142965_p1.read().is_01() || !sext_ln703_688_fu_4142985_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_686_fu_4142965_p1.read()) + sc_bigint<16>(sext_ln703_688_fu_4142985_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3267_fu_4142995_p2() {
    add_ln703_3267_fu_4142995_p2 = (!mult_142_V_fu_4138820_p4.read().is_01() || !mult_14_V_reg_4151704.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_142_V_fu_4138820_p4.read()) + sc_biguint<16>(mult_14_V_reg_4151704.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3268_fu_4146749_p2() {
    add_ln703_3268_fu_4146749_p2 = (!mult_526_V_fu_4145622_p1.read().is_01() || !mult_270_V_fu_4144068_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_526_V_fu_4145622_p1.read()) + sc_bigint<16>(mult_270_V_fu_4144068_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3269_fu_4146755_p2() {
    add_ln703_3269_fu_4146755_p2 = (!add_ln703_3267_reg_4153269.read().is_01() || !add_ln703_3268_fu_4146749_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3267_reg_4153269.read()) + sc_biguint<16>(add_ln703_3268_fu_4146749_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3270_fu_4146760_p2() {
    add_ln703_3270_fu_4146760_p2 = (!sext_ln203_1099_fu_4144365_p1.read().is_01() || !sext_ln203_1015_fu_4143843_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1099_fu_4144365_p1.read()) + sc_bigint<15>(sext_ln203_1015_fu_4143843_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3271_fu_4143000_p2() {
    add_ln703_3271_fu_4143000_p2 = (!sext_ln203_1070_fu_4139351_p1.read().is_01() || !sext_ln203_1139_fu_4141789_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1070_fu_4139351_p1.read()) + sc_bigint<15>(sext_ln203_1139_fu_4141789_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3272_fu_4143010_p2() {
    add_ln703_3272_fu_4143010_p2 = (!mult_398_V_fu_4140993_p1.read().is_01() || !sext_ln703_690_fu_4143006_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_398_V_fu_4140993_p1.read()) + sc_bigint<16>(sext_ln703_690_fu_4143006_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3273_fu_4146770_p2() {
    add_ln703_3273_fu_4146770_p2 = (!sext_ln703_689_fu_4146766_p1.read().is_01() || !add_ln703_3272_reg_4153274.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_689_fu_4146766_p1.read()) + sc_biguint<16>(add_ln703_3272_reg_4153274.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3275_fu_4146782_p2() {
    add_ln703_3275_fu_4146782_p2 = (!mult_399_V_reg_4152724.read().is_01() || !mult_335_V_fu_4144369_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_399_V_reg_4152724.read()) + sc_biguint<16>(mult_335_V_fu_4144369_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3276_fu_4146787_p2() {
    add_ln703_3276_fu_4146787_p2 = (!mult_143_V_fu_4143879_p1.read().is_01() || !mult_527_V_fu_4145626_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_143_V_fu_4143879_p1.read()) + sc_biguint<16>(mult_527_V_fu_4145626_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3277_fu_4146793_p2() {
    add_ln703_3277_fu_4146793_p2 = (!add_ln703_3275_fu_4146782_p2.read().is_01() || !add_ln703_3276_fu_4146787_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3275_fu_4146782_p2.read()) + sc_biguint<16>(add_ln703_3276_fu_4146787_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3278_fu_4143016_p2() {
    add_ln703_3278_fu_4143016_p2 = (!mult_271_V_fu_4140009_p1.read().is_01() || !mult_207_V_fu_4139354_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_271_V_fu_4140009_p1.read()) + sc_bigint<16>(mult_207_V_fu_4139354_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3279_fu_4143022_p2() {
    add_ln703_3279_fu_4143022_p2 = (!sext_ln203_990_fu_4138539_p1.read().is_01() || !sext_ln203_1140_fu_4141803_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_990_fu_4138539_p1.read()) + sc_bigint<14>(sext_ln203_1140_fu_4141803_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3280_fu_4143032_p2() {
    add_ln703_3280_fu_4143032_p2 = (!sext_ln203_1016_fu_4138611_p1.read().is_01() || !sext_ln703_691_fu_4143028_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1016_fu_4138611_p1.read()) + sc_bigint<15>(sext_ln703_691_fu_4143028_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3281_fu_4143042_p2() {
    add_ln703_3281_fu_4143042_p2 = (!add_ln703_3278_fu_4143016_p2.read().is_01() || !sext_ln703_692_fu_4143038_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3278_fu_4143016_p2.read()) + sc_bigint<16>(sext_ln703_692_fu_4143038_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3283_fu_4143048_p2() {
    add_ln703_3283_fu_4143048_p2 = (!mult_80_V_reg_4151889.read().is_01() || !mult_144_V_fu_4138840_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_80_V_reg_4151889.read()) + sc_biguint<16>(mult_144_V_fu_4138840_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3284_fu_4138414_p2() {
    add_ln703_3284_fu_4138414_p2 = (!mult_208_V_fu_4137914_p1.read().is_01() || !mult_16_V_fu_4136809_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_208_V_fu_4137914_p1.read()) + sc_bigint<16>(mult_16_V_fu_4136809_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3285_fu_4143053_p2() {
    add_ln703_3285_fu_4143053_p2 = (!add_ln703_3283_fu_4143048_p2.read().is_01() || !add_ln703_3284_reg_4152294.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3283_fu_4143048_p2.read()) + sc_biguint<16>(add_ln703_3284_reg_4152294.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3286_fu_4146805_p2() {
    add_ln703_3286_fu_4146805_p2 = (!mult_400_V_fu_4145070_p1.read().is_01() || !mult_336_V_fu_4144389_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_400_V_fu_4145070_p1.read()) + sc_bigint<16>(mult_336_V_fu_4144389_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3287_fu_4143058_p2() {
    add_ln703_3287_fu_4143058_p2 = (!sext_ln203_1084_fu_4140023_p1.read().is_01() || !sext_ln203_1141_fu_4141817_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1084_fu_4140023_p1.read()) + sc_bigint<15>(sext_ln203_1141_fu_4141817_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3288_fu_4146814_p2() {
    add_ln703_3288_fu_4146814_p2 = (!mult_528_V_fu_4145646_p1.read().is_01() || !sext_ln703_693_fu_4146811_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_528_V_fu_4145646_p1.read()) + sc_bigint<16>(sext_ln703_693_fu_4146811_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3289_fu_4146820_p2() {
    add_ln703_3289_fu_4146820_p2 = (!add_ln703_3286_fu_4146805_p2.read().is_01() || !add_ln703_3288_fu_4146814_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3286_fu_4146805_p2.read()) + sc_biguint<16>(add_ln703_3288_fu_4146814_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3291_fu_4143064_p2() {
    add_ln703_3291_fu_4143064_p2 = (!mult_17_V_fu_4138542_p1.read().is_01() || !mult_273_V_fu_4140027_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_17_V_fu_4138542_p1.read()) + sc_biguint<16>(mult_273_V_fu_4140027_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3292_fu_4143070_p2() {
    add_ln703_3292_fu_4143070_p2 = (!mult_145_V_fu_4138860_p1.read().is_01() || !mult_81_V_fu_4138614_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_145_V_fu_4138860_p1.read()) + sc_bigint<16>(mult_81_V_fu_4138614_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3293_fu_4143076_p2() {
    add_ln703_3293_fu_4143076_p2 = (!add_ln703_3291_fu_4143064_p2.read().is_01() || !add_ln703_3292_fu_4143070_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3291_fu_4143064_p2.read()) + sc_biguint<16>(add_ln703_3292_fu_4143070_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3294_fu_4146832_p2() {
    add_ln703_3294_fu_4146832_p2 = (!mult_337_V_fu_4144403_p1.read().is_01() || !mult_209_V_fu_4143918_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_337_V_fu_4144403_p1.read()) + sc_bigint<16>(mult_209_V_fu_4143918_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3295_fu_4146838_p2() {
    add_ln703_3295_fu_4146838_p2 = (!mult_465_V_fu_4145250_p1.read().is_01() || !mult_529_V_fu_4145660_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_465_V_fu_4145250_p1.read()) + sc_bigint<16>(mult_529_V_fu_4145660_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3296_fu_4146844_p2() {
    add_ln703_3296_fu_4146844_p2 = (!mult_401_V_fu_4145073_p1.read().is_01() || !add_ln703_3295_fu_4146838_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_401_V_fu_4145073_p1.read()) + sc_biguint<16>(add_ln703_3295_fu_4146838_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3297_fu_4146850_p2() {
    add_ln703_3297_fu_4146850_p2 = (!add_ln703_3294_fu_4146832_p2.read().is_01() || !add_ln703_3296_fu_4146844_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3294_fu_4146832_p2.read()) + sc_biguint<16>(add_ln703_3296_fu_4146844_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3299_fu_4146862_p2() {
    add_ln703_3299_fu_4146862_p2 = (!mult_338_V_fu_4144407_p4.read().is_01() || !mult_274_V_reg_4152529.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_338_V_fu_4144407_p4.read()) + sc_biguint<16>(mult_274_V_reg_4152529.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3300_fu_4146867_p2() {
    add_ln703_3300_fu_4146867_p2 = (!mult_210_V_fu_4143921_p1.read().is_01() || !mult_530_V_fu_4145664_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_210_V_fu_4143921_p1.read()) + sc_biguint<16>(mult_530_V_fu_4145664_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3301_fu_4146873_p2() {
    add_ln703_3301_fu_4146873_p2 = (!add_ln703_3299_fu_4146862_p2.read().is_01() || !add_ln703_3300_fu_4146867_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3299_fu_4146862_p2.read()) + sc_biguint<16>(add_ln703_3300_fu_4146867_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3302_fu_4143082_p2() {
    add_ln703_3302_fu_4143082_p2 = (!mult_466_V_fu_4141841_p1.read().is_01() || !mult_402_V_fu_4141037_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_466_V_fu_4141841_p1.read()) + sc_bigint<16>(mult_402_V_fu_4141037_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3303_fu_4143088_p2() {
    add_ln703_3303_fu_4143088_p2 = (!sext_ln203_1041_fu_4138874_p1.read().is_01() || !sext_ln203_991_fu_4138545_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_1041_fu_4138874_p1.read()) + sc_bigint<13>(sext_ln203_991_fu_4138545_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3304_fu_4143098_p2() {
    add_ln703_3304_fu_4143098_p2 = (!sext_ln203_1017_fu_4138617_p1.read().is_01() || !sext_ln703_694_fu_4143094_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1017_fu_4138617_p1.read()) + sc_bigint<15>(sext_ln703_694_fu_4143094_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3305_fu_4143108_p2() {
    add_ln703_3305_fu_4143108_p2 = (!add_ln703_3302_fu_4143082_p2.read().is_01() || !sext_ln703_695_fu_4143104_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3302_fu_4143082_p2.read()) + sc_bigint<16>(sext_ln703_695_fu_4143104_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3307_fu_4143114_p2() {
    add_ln703_3307_fu_4143114_p2 = (!mult_275_V_fu_4140047_p4.read().is_01() || !mult_211_V_reg_4152094.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_275_V_fu_4140047_p4.read()) + sc_biguint<16>(mult_211_V_reg_4152094.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3308_fu_4143119_p2() {
    add_ln703_3308_fu_4143119_p2 = (!mult_403_V_fu_4141051_p1.read().is_01() || !mult_83_V_fu_4138620_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_403_V_fu_4141051_p1.read()) + sc_bigint<16>(mult_83_V_fu_4138620_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3309_fu_4143125_p2() {
    add_ln703_3309_fu_4143125_p2 = (!add_ln703_3307_fu_4143114_p2.read().is_01() || !add_ln703_3308_fu_4143119_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3307_fu_4143114_p2.read()) + sc_biguint<16>(add_ln703_3308_fu_4143119_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3310_fu_4146885_p2() {
    add_ln703_3310_fu_4146885_p2 = (!sext_ln203_1161_fu_4145684_p1.read().is_01() || !sext_ln203_1100_fu_4144427_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1161_fu_4145684_p1.read()) + sc_bigint<15>(sext_ln203_1100_fu_4144427_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3311_fu_4136622_p2() {
    add_ln703_3311_fu_4136622_p2 = (!sext_ln203_1042_fu_4136001_p1.read().is_01() || !sext_ln203_992_fu_4135735_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_1042_fu_4136001_p1.read()) + sc_bigint<12>(sext_ln203_992_fu_4135735_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3312_fu_4143134_p2() {
    add_ln703_3312_fu_4143134_p2 = (!sext_ln203_1142_fu_4141855_p1.read().is_01() || !sext_ln703_697_fu_4143131_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1142_fu_4141855_p1.read()) + sc_bigint<14>(sext_ln703_697_fu_4143131_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3313_fu_4146898_p2() {
    add_ln703_3313_fu_4146898_p2 = (!sext_ln703_696_fu_4146891_p1.read().is_01() || !sext_ln703_698_fu_4146895_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_696_fu_4146891_p1.read()) + sc_bigint<16>(sext_ln703_698_fu_4146895_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3315_fu_4143140_p2() {
    add_ln703_3315_fu_4143140_p2 = (!mult_404_V_fu_4141055_p4.read().is_01() || !mult_276_V_fu_4140057_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_404_V_fu_4141055_p4.read()) + sc_biguint<16>(mult_276_V_fu_4140057_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3316_fu_4146910_p2() {
    add_ln703_3316_fu_4146910_p2 = (!mult_532_V_fu_4145688_p4.read().is_01() || !mult_468_V_reg_4152904.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_532_V_fu_4145688_p4.read()) + sc_biguint<16>(mult_468_V_reg_4152904.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3317_fu_4146915_p2() {
    add_ln703_3317_fu_4146915_p2 = (!add_ln703_3315_reg_4153314.read().is_01() || !add_ln703_3316_fu_4146910_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3315_reg_4153314.read()) + sc_biguint<16>(add_ln703_3316_fu_4146910_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3318_fu_4136628_p2() {
    add_ln703_3318_fu_4136628_p2 = (!mult_20_V_fu_4135748_p1.read().is_01() || !mult_84_V_fu_4135883_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_20_V_fu_4135748_p1.read()) + sc_bigint<16>(mult_84_V_fu_4135883_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3319_fu_4146920_p2() {
    add_ln703_3319_fu_4146920_p2 = (!sext_ln203_1101_fu_4144441_p1.read().is_01() || !sext_ln203_1071_fu_4143924_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_1101_fu_4144441_p1.read()) + sc_bigint<12>(sext_ln203_1071_fu_4143924_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3320_fu_4146930_p2() {
    add_ln703_3320_fu_4146930_p2 = (!sext_ln203_1043_fu_4143882_p1.read().is_01() || !sext_ln703_699_fu_4146926_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1043_fu_4143882_p1.read()) + sc_bigint<14>(sext_ln703_699_fu_4146926_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3321_fu_4146940_p2() {
    add_ln703_3321_fu_4146940_p2 = (!add_ln703_3318_reg_4151634.read().is_01() || !sext_ln703_700_fu_4146936_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3318_reg_4151634.read()) + sc_bigint<16>(sext_ln703_700_fu_4146936_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3323_fu_4143146_p2() {
    add_ln703_3323_fu_4143146_p2 = (!mult_277_V_fu_4140077_p1.read().is_01() || !mult_405_V_fu_4141065_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_277_V_fu_4140077_p1.read()) + sc_biguint<16>(mult_405_V_fu_4141065_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3324_fu_4146952_p2() {
    add_ln703_3324_fu_4146952_p2 = (!mult_469_V_fu_4145253_p1.read().is_01() || !mult_341_V_fu_4144455_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_469_V_fu_4145253_p1.read()) + sc_bigint<16>(mult_341_V_fu_4144455_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3325_fu_4146958_p2() {
    add_ln703_3325_fu_4146958_p2 = (!add_ln703_3323_reg_4153319.read().is_01() || !add_ln703_3324_fu_4146952_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3323_reg_4153319.read()) + sc_biguint<16>(add_ln703_3324_fu_4146952_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3326_fu_4146963_p2() {
    add_ln703_3326_fu_4146963_p2 = (!sext_ln203_1162_fu_4145708_p1.read().is_01() || !sext_ln203_1072_fu_4143927_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1162_fu_4145708_p1.read()) + sc_bigint<15>(sext_ln203_1072_fu_4143927_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3327_fu_4143152_p2() {
    add_ln703_3327_fu_4143152_p2 = (!sext_ln203_993_fu_4138548_p1.read().is_01() || !sext_ln203_1044_fu_4138898_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_993_fu_4138548_p1.read()) + sc_bigint<14>(sext_ln203_1044_fu_4138898_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3328_fu_4143162_p2() {
    add_ln703_3328_fu_4143162_p2 = (!sext_ln203_1018_fu_4138623_p1.read().is_01() || !sext_ln703_702_fu_4143158_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1018_fu_4138623_p1.read()) + sc_bigint<15>(sext_ln703_702_fu_4143158_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3329_fu_4146976_p2() {
    add_ln703_3329_fu_4146976_p2 = (!sext_ln703_701_fu_4146969_p1.read().is_01() || !sext_ln703_703_fu_4146973_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_701_fu_4146969_p1.read()) + sc_bigint<16>(sext_ln703_703_fu_4146973_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3331_fu_4146989_p2() {
    add_ln703_3331_fu_4146989_p2 = (!mult_278_V_fu_4144071_p1.read().is_01() || !mult_470_V_fu_4145256_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_278_V_fu_4144071_p1.read()) + sc_biguint<16>(mult_470_V_fu_4145256_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3332_fu_4146995_p2() {
    add_ln703_3332_fu_4146995_p2 = (!mult_534_V_fu_4145722_p1.read().is_01() || !mult_406_V_fu_4145076_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_534_V_fu_4145722_p1.read()) + sc_bigint<16>(mult_406_V_fu_4145076_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3333_fu_4147001_p2() {
    add_ln703_3333_fu_4147001_p2 = (!add_ln703_3331_fu_4146989_p2.read().is_01() || !add_ln703_3332_fu_4146995_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3331_fu_4146989_p2.read()) + sc_biguint<16>(add_ln703_3332_fu_4146995_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3334_fu_4143168_p2() {
    add_ln703_3334_fu_4143168_p2 = (!sext_ln203_1045_fu_4138912_p1.read().is_01() || !sext_ln203_994_fu_4138551_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1045_fu_4138912_p1.read()) + sc_bigint<14>(sext_ln203_994_fu_4138551_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3335_fu_4143178_p2() {
    add_ln703_3335_fu_4143178_p2 = (!sext_ln203_1019_fu_4138626_p1.read().is_01() || !sext_ln203_1102_fu_4140697_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1019_fu_4138626_p1.read()) + sc_bigint<14>(sext_ln203_1102_fu_4140697_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3336_fu_4143188_p2() {
    add_ln703_3336_fu_4143188_p2 = (!sext_ln203_1073_fu_4139357_p1.read().is_01() || !sext_ln703_705_fu_4143184_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1073_fu_4139357_p1.read()) + sc_bigint<15>(sext_ln703_705_fu_4143184_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3337_fu_4143198_p2() {
    add_ln703_3337_fu_4143198_p2 = (!sext_ln703_704_fu_4143174_p1.read().is_01() || !sext_ln703_706_fu_4143194_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_704_fu_4143174_p1.read()) + sc_bigint<16>(sext_ln703_706_fu_4143194_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3339_fu_4147013_p2() {
    add_ln703_3339_fu_4147013_p2 = (!mult_535_V_fu_4145726_p4.read().is_01() || !mult_407_V_reg_4152744.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_535_V_fu_4145726_p4.read()) + sc_biguint<16>(mult_407_V_reg_4152744.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3340_fu_4143204_p2() {
    add_ln703_3340_fu_4143204_p2 = (!mult_151_V_fu_4138926_p1.read().is_01() || !mult_23_V_fu_4138554_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_151_V_fu_4138926_p1.read()) + sc_bigint<16>(mult_23_V_fu_4138554_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3341_fu_4147018_p2() {
    add_ln703_3341_fu_4147018_p2 = (!add_ln703_3339_fu_4147013_p2.read().is_01() || !add_ln703_3340_reg_4153334.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3339_fu_4147013_p2.read()) + sc_biguint<16>(add_ln703_3340_reg_4153334.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3342_fu_4147023_p2() {
    add_ln703_3342_fu_4147023_p2 = (!mult_343_V_fu_4144469_p1.read().is_01() || !mult_215_V_fu_4143930_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_343_V_fu_4144469_p1.read()) + sc_bigint<16>(mult_215_V_fu_4143930_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3343_fu_4147029_p2() {
    add_ln703_3343_fu_4147029_p2 = (!sext_ln203_1085_fu_4144084_p1.read().is_01() || !sext_ln203_1020_fu_4143846_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1085_fu_4144084_p1.read()) + sc_bigint<15>(sext_ln203_1020_fu_4143846_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3344_fu_4147039_p2() {
    add_ln703_3344_fu_4147039_p2 = (!mult_471_V_fu_4145266_p1.read().is_01() || !sext_ln703_707_fu_4147035_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_471_V_fu_4145266_p1.read()) + sc_bigint<16>(sext_ln703_707_fu_4147035_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3345_fu_4147045_p2() {
    add_ln703_3345_fu_4147045_p2 = (!add_ln703_3342_fu_4147023_p2.read().is_01() || !add_ln703_3344_fu_4147039_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3342_fu_4147023_p2.read()) + sc_biguint<16>(add_ln703_3344_fu_4147039_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3347_fu_4143210_p2() {
    add_ln703_3347_fu_4143210_p2 = (!mult_472_V_fu_4141919_p4.read().is_01() || !mult_280_V_fu_4140113_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_472_V_fu_4141919_p4.read()) + sc_biguint<16>(mult_280_V_fu_4140113_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3348_fu_4147058_p2() {
    add_ln703_3348_fu_4147058_p2 = (!mult_24_V_fu_4143786_p1.read().is_01() || !mult_344_V_fu_4144483_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_24_V_fu_4143786_p1.read()) + sc_bigint<16>(mult_344_V_fu_4144483_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3349_fu_4147064_p2() {
    add_ln703_3349_fu_4147064_p2 = (!add_ln703_3347_reg_4153339.read().is_01() || !add_ln703_3348_fu_4147058_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3347_reg_4153339.read()) + sc_biguint<16>(add_ln703_3348_fu_4147058_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3350_fu_4143216_p2() {
    add_ln703_3350_fu_4143216_p2 = (!sext_ln203_1046_fu_4138940_p1.read().is_01() || !sext_ln203_1021_fu_4138629_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1046_fu_4138940_p1.read()) + sc_bigint<15>(sext_ln203_1021_fu_4138629_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3351_fu_4147072_p2() {
    add_ln703_3351_fu_4147072_p2 = (!sext_ln203_1163_fu_4145746_p1.read().is_01() || !sext_ln203_1119_fu_4145079_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1163_fu_4145746_p1.read()) + sc_bigint<15>(sext_ln203_1119_fu_4145079_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3352_fu_4147082_p2() {
    add_ln703_3352_fu_4147082_p2 = (!mult_216_V_fu_4143933_p1.read().is_01() || !sext_ln703_709_fu_4147078_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_216_V_fu_4143933_p1.read()) + sc_bigint<16>(sext_ln703_709_fu_4147078_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3353_fu_4147088_p2() {
    add_ln703_3353_fu_4147088_p2 = (!sext_ln703_708_fu_4147069_p1.read().is_01() || !add_ln703_3352_fu_4147082_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_708_fu_4147069_p1.read()) + sc_biguint<16>(add_ln703_3352_fu_4147082_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3355_fu_4138420_p2() {
    add_ln703_3355_fu_4138420_p2 = (!mult_217_V_fu_4137988_p4.read().is_01() || !mult_25_V_fu_4136853_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_217_V_fu_4137988_p4.read()) + sc_biguint<16>(mult_25_V_fu_4136853_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3356_fu_4138426_p2() {
    add_ln703_3356_fu_4138426_p2 = (!mult_153_V_fu_4137753_p1.read().is_01() || !mult_89_V_fu_4137383_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_153_V_fu_4137753_p1.read()) + sc_bigint<16>(mult_89_V_fu_4137383_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3357_fu_4138432_p2() {
    add_ln703_3357_fu_4138432_p2 = (!add_ln703_3355_fu_4138420_p2.read().is_01() || !add_ln703_3356_fu_4138426_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3355_fu_4138420_p2.read()) + sc_biguint<16>(add_ln703_3356_fu_4138426_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3358_fu_4147101_p2() {
    add_ln703_3358_fu_4147101_p2 = (!mult_473_V_fu_4145269_p1.read().is_01() || !mult_345_V_fu_4144497_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_473_V_fu_4145269_p1.read()) + sc_bigint<16>(mult_345_V_fu_4144497_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3359_fu_4147107_p2() {
    add_ln703_3359_fu_4147107_p2 = (!sext_ln203_1120_fu_4145096_p1.read().is_01() || !sext_ln203_1164_fu_4145760_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1120_fu_4145096_p1.read()) + sc_bigint<14>(sext_ln203_1164_fu_4145760_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3360_fu_4147117_p2() {
    add_ln703_3360_fu_4147117_p2 = (!sext_ln203_1086_fu_4144098_p1.read().is_01() || !sext_ln703_710_fu_4147113_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1086_fu_4144098_p1.read()) + sc_bigint<15>(sext_ln703_710_fu_4147113_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3361_fu_4147127_p2() {
    add_ln703_3361_fu_4147127_p2 = (!add_ln703_3358_fu_4147101_p2.read().is_01() || !sext_ln703_711_fu_4147123_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3358_fu_4147101_p2.read()) + sc_bigint<16>(sext_ln703_711_fu_4147123_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3363_fu_4147139_p2() {
    add_ln703_3363_fu_4147139_p2 = (!mult_346_V_fu_4144501_p4.read().is_01() || !mult_218_V_reg_4152119.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_346_V_fu_4144501_p4.read()) + sc_biguint<16>(mult_218_V_reg_4152119.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3364_fu_4147144_p2() {
    add_ln703_3364_fu_4147144_p2 = (!mult_282_V_fu_4144112_p1.read().is_01() || !mult_90_V_reg_4151909.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_282_V_fu_4144112_p1.read()) + sc_biguint<16>(mult_90_V_reg_4151909.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3365_fu_4147149_p2() {
    add_ln703_3365_fu_4147149_p2 = (!add_ln703_3363_fu_4147139_p2.read().is_01() || !add_ln703_3364_fu_4147144_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3363_fu_4147139_p2.read()) + sc_biguint<16>(add_ln703_3364_fu_4147144_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3366_fu_4147155_p2() {
    add_ln703_3366_fu_4147155_p2 = (!mult_538_V_fu_4145774_p1.read().is_01() || !mult_474_V_fu_4145272_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_538_V_fu_4145774_p1.read()) + sc_bigint<16>(mult_474_V_fu_4145272_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3367_fu_4143222_p2() {
    add_ln703_3367_fu_4143222_p2 = (!sext_ln203_1121_fu_4141115_p1.read().is_01() || !sext_ln203_1047_fu_4138954_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_1121_fu_4141115_p1.read()) + sc_bigint<13>(sext_ln203_1047_fu_4138954_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3368_fu_4143232_p2() {
    add_ln703_3368_fu_4143232_p2 = (!sext_ln203_995_fu_4138557_p1.read().is_01() || !sext_ln703_712_fu_4143228_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_995_fu_4138557_p1.read()) + sc_bigint<14>(sext_ln703_712_fu_4143228_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3369_fu_4147164_p2() {
    add_ln703_3369_fu_4147164_p2 = (!add_ln703_3366_fu_4147155_p2.read().is_01() || !sext_ln703_713_fu_4147161_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3366_fu_4147155_p2.read()) + sc_bigint<16>(sext_ln703_713_fu_4147161_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3371_fu_4143238_p2() {
    add_ln703_3371_fu_4143238_p2 = (!mult_91_V_reg_4151914.read().is_01() || !mult_283_V_fu_4140170_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_91_V_reg_4151914.read()) + sc_biguint<16>(mult_283_V_fu_4140170_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3372_fu_4138438_p2() {
    add_ln703_3372_fu_4138438_p2 = (!mult_219_V_fu_4138018_p1.read().is_01() || !mult_27_V_fu_4136883_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_219_V_fu_4138018_p1.read()) + sc_bigint<16>(mult_27_V_fu_4136883_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3373_fu_4143243_p2() {
    add_ln703_3373_fu_4143243_p2 = (!add_ln703_3371_fu_4143238_p2.read().is_01() || !add_ln703_3372_reg_4152304.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3371_fu_4143238_p2.read()) + sc_biguint<16>(add_ln703_3372_reg_4152304.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3374_fu_4147177_p2() {
    add_ln703_3374_fu_4147177_p2 = (!mult_475_V_fu_4145285_p1.read().is_01() || !mult_347_V_fu_4144521_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_475_V_fu_4145285_p1.read()) + sc_bigint<16>(mult_347_V_fu_4144521_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3375_fu_4143248_p2() {
    add_ln703_3375_fu_4143248_p2 = (!sext_ln203_1122_fu_4141129_p1.read().is_01() || !sext_ln203_1048_fu_4138968_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1122_fu_4141129_p1.read()) + sc_bigint<15>(sext_ln203_1048_fu_4138968_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3376_fu_4147186_p2() {
    add_ln703_3376_fu_4147186_p2 = (!mult_539_V_fu_4145788_p1.read().is_01() || !sext_ln703_714_fu_4147183_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_539_V_fu_4145788_p1.read()) + sc_bigint<16>(sext_ln703_714_fu_4147183_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3377_fu_4147192_p2() {
    add_ln703_3377_fu_4147192_p2 = (!add_ln703_3374_fu_4147177_p2.read().is_01() || !add_ln703_3376_fu_4147186_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3374_fu_4147177_p2.read()) + sc_biguint<16>(add_ln703_3376_fu_4147186_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3379_fu_4147204_p2() {
    add_ln703_3379_fu_4147204_p2 = (!mult_284_V_fu_4144116_p1.read().is_01() || !mult_540_V_fu_4145792_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_284_V_fu_4144116_p1.read()) + sc_biguint<16>(mult_540_V_fu_4145792_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3380_fu_4143254_p2() {
    add_ln703_3380_fu_4143254_p2 = (!mult_28_V_fu_4138560_p1.read().is_01() || !mult_476_V_fu_4141989_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_28_V_fu_4138560_p1.read()) + sc_bigint<16>(mult_476_V_fu_4141989_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3381_fu_4147210_p2() {
    add_ln703_3381_fu_4147210_p2 = (!add_ln703_3379_fu_4147204_p2.read().is_01() || !add_ln703_3380_reg_4153364.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3379_fu_4147204_p2.read()) + sc_biguint<16>(add_ln703_3380_reg_4153364.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3382_fu_4138444_p2() {
    add_ln703_3382_fu_4138444_p2 = (!sext_ln203_1074_fu_4138032_p1.read().is_01() || !sext_ln203_1022_fu_4137417_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1074_fu_4138032_p1.read()) + sc_bigint<15>(sext_ln203_1022_fu_4137417_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3383_fu_4143260_p2() {
    add_ln703_3383_fu_4143260_p2 = (!sext_ln203_1049_fu_4138982_p1.read().is_01() || !sext_ln203_1123_fu_4141143_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1049_fu_4138982_p1.read()) + sc_bigint<15>(sext_ln203_1123_fu_4141143_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3384_fu_4147221_p2() {
    add_ln703_3384_fu_4147221_p2 = (!mult_348_V_fu_4144535_p1.read().is_01() || !sext_ln703_716_fu_4147218_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_348_V_fu_4144535_p1.read()) + sc_bigint<16>(sext_ln703_716_fu_4147218_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3385_fu_4147227_p2() {
    add_ln703_3385_fu_4147227_p2 = (!sext_ln703_715_fu_4147215_p1.read().is_01() || !add_ln703_3384_fu_4147221_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_715_fu_4147215_p1.read()) + sc_biguint<16>(add_ln703_3384_fu_4147221_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3387_fu_4147240_p2() {
    add_ln703_3387_fu_4147240_p2 = (!mult_541_V_fu_4145802_p4.read().is_01() || !mult_413_V_reg_4152754.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_541_V_fu_4145802_p4.read()) + sc_biguint<16>(mult_413_V_reg_4152754.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3388_fu_4147245_p2() {
    add_ln703_3388_fu_4147245_p2 = (!mult_477_V_fu_4145299_p1.read().is_01() || !mult_285_V_fu_4144119_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_477_V_fu_4145299_p1.read()) + sc_bigint<16>(mult_285_V_fu_4144119_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3389_fu_4147251_p2() {
    add_ln703_3389_fu_4147251_p2 = (!add_ln703_3387_fu_4147240_p2.read().is_01() || !add_ln703_3388_fu_4147245_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3387_fu_4147240_p2.read()) + sc_biguint<16>(add_ln703_3388_fu_4147245_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3390_fu_4143266_p2() {
    add_ln703_3390_fu_4143266_p2 = (!sext_ln203_1050_fu_4138996_p1.read().is_01() || !sext_ln203_1023_fu_4138632_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1050_fu_4138996_p1.read()) + sc_bigint<15>(sext_ln203_1023_fu_4138632_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3391_fu_4147260_p2() {
    add_ln703_3391_fu_4147260_p2 = (!sext_ln203_996_fu_4143789_p1.read().is_01() || !sext_ln203_1103_fu_4144549_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_996_fu_4143789_p1.read()) + sc_bigint<15>(sext_ln203_1103_fu_4144549_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3392_fu_4147270_p2() {
    add_ln703_3392_fu_4147270_p2 = (!mult_221_V_fu_4143936_p1.read().is_01() || !sext_ln703_718_fu_4147266_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_221_V_fu_4143936_p1.read()) + sc_bigint<16>(sext_ln703_718_fu_4147266_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3393_fu_4147276_p2() {
    add_ln703_3393_fu_4147276_p2 = (!sext_ln703_717_fu_4147257_p1.read().is_01() || !add_ln703_3392_fu_4147270_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_717_fu_4147257_p1.read()) + sc_biguint<16>(add_ln703_3392_fu_4147270_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3395_fu_4147289_p2() {
    add_ln703_3395_fu_4147289_p2 = (!mult_542_V_fu_4145812_p4.read().is_01() || !mult_478_V_reg_4152959.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_542_V_fu_4145812_p4.read()) + sc_biguint<16>(mult_478_V_reg_4152959.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3396_fu_4143272_p2() {
    add_ln703_3396_fu_4143272_p2 = (!mult_286_V_fu_4140210_p1.read().is_01() || !mult_222_V_fu_4139360_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_286_V_fu_4140210_p1.read()) + sc_bigint<16>(mult_222_V_fu_4139360_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3397_fu_4147294_p2() {
    add_ln703_3397_fu_4147294_p2 = (!add_ln703_3395_fu_4147289_p2.read().is_01() || !add_ln703_3396_reg_4153379.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3395_fu_4147289_p2.read()) + sc_biguint<16>(add_ln703_3396_reg_4153379.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3398_fu_4147299_p2() {
    add_ln703_3398_fu_4147299_p2 = (!mult_414_V_fu_4145110_p1.read().is_01() || !mult_350_V_fu_4144563_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_414_V_fu_4145110_p1.read()) + sc_bigint<16>(mult_350_V_fu_4144563_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3399_fu_4138450_p2() {
    add_ln703_3399_fu_4138450_p2 = (!sext_ln203_1024_fu_4137431_p1.read().is_01() || !sext_ln203_1051_fu_4137766_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_1024_fu_4137431_p1.read()) + sc_bigint<13>(sext_ln203_1051_fu_4137766_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3400_fu_4138460_p2() {
    add_ln703_3400_fu_4138460_p2 = (!sext_ln203_997_fu_4136917_p1.read().is_01() || !sext_ln703_719_fu_4138456_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_997_fu_4136917_p1.read()) + sc_bigint<14>(sext_ln703_719_fu_4138456_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3401_fu_4147308_p2() {
    add_ln703_3401_fu_4147308_p2 = (!add_ln703_3398_fu_4147299_p2.read().is_01() || !sext_ln703_720_fu_4147305_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3398_fu_4147299_p2.read()) + sc_bigint<16>(sext_ln703_720_fu_4147305_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3403_fu_4147321_p2() {
    add_ln703_3403_fu_4147321_p2 = (!mult_543_V_fu_4145822_p4.read().is_01() || !mult_415_V_reg_4152769.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_543_V_fu_4145822_p4.read()) + sc_biguint<16>(mult_415_V_reg_4152769.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3404_fu_4143278_p2() {
    add_ln703_3404_fu_4143278_p2 = (!mult_287_V_fu_4140224_p1.read().is_01() || !mult_223_V_fu_4139363_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_287_V_fu_4140224_p1.read()) + sc_bigint<16>(mult_223_V_fu_4139363_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3405_fu_4147326_p2() {
    add_ln703_3405_fu_4147326_p2 = (!add_ln703_3403_fu_4147321_p2.read().is_01() || !add_ln703_3404_reg_4153384.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3403_fu_4147321_p2.read()) + sc_biguint<16>(add_ln703_3404_reg_4153384.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3406_fu_4147331_p2() {
    add_ln703_3406_fu_4147331_p2 = (!mult_479_V_fu_4145313_p1.read().is_01() || !mult_351_V_fu_4144577_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_479_V_fu_4145313_p1.read()) + sc_bigint<16>(mult_351_V_fu_4144577_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3407_fu_4138466_p2() {
    add_ln703_3407_fu_4138466_p2 = (!sext_ln203_1052_fu_4137770_p1.read().is_01() || !sext_ln203_1025_fu_4137444_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1052_fu_4137770_p1.read()) + sc_bigint<14>(sext_ln203_1025_fu_4137444_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3408_fu_4138476_p2() {
    add_ln703_3408_fu_4138476_p2 = (!sext_ln203_998_fu_4136931_p1.read().is_01() || !sext_ln703_721_fu_4138472_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_998_fu_4136931_p1.read()) + sc_bigint<15>(sext_ln703_721_fu_4138472_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3409_fu_4147340_p2() {
    add_ln703_3409_fu_4147340_p2 = (!add_ln703_3406_fu_4147331_p2.read().is_01() || !sext_ln703_722_fu_4147337_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3406_fu_4147331_p2.read()) + sc_bigint<16>(sext_ln703_722_fu_4147337_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3411_fu_4143284_p2() {
    add_ln703_3411_fu_4143284_p2 = (!mult_160_V_fu_4139000_p4.read().is_01() || !mult_32_V_reg_4151744.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_160_V_fu_4139000_p4.read()) + sc_biguint<16>(mult_32_V_reg_4151744.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3412_fu_4143289_p2() {
    add_ln703_3412_fu_4143289_p2 = (!mult_288_V_fu_4140238_p1.read().is_01() || !mult_224_V_fu_4139366_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_288_V_fu_4140238_p1.read()) + sc_bigint<16>(mult_224_V_fu_4139366_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3413_fu_4143295_p2() {
    add_ln703_3413_fu_4143295_p2 = (!add_ln703_3411_fu_4143284_p2.read().is_01() || !add_ln703_3412_fu_4143289_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3411_fu_4143284_p2.read()) + sc_biguint<16>(add_ln703_3412_fu_4143289_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3414_fu_4147353_p2() {
    add_ln703_3414_fu_4147353_p2 = (!mult_96_V_fu_4143849_p1.read().is_01() || !mult_352_V_fu_4144591_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_96_V_fu_4143849_p1.read()) + sc_bigint<16>(mult_352_V_fu_4144591_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3415_fu_4147359_p2() {
    add_ln703_3415_fu_4147359_p2 = (!sext_ln203_1165_fu_4145860_p1.read().is_01() || !sext_ln203_1124_fu_4145150_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_1165_fu_4145860_p1.read()) + sc_bigint<11>(sext_ln203_1124_fu_4145150_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3416_fu_4147369_p2() {
    add_ln703_3416_fu_4147369_p2 = (!sext_ln203_1143_fu_4145317_p1.read().is_01() || !sext_ln703_723_fu_4147365_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1143_fu_4145317_p1.read()) + sc_bigint<14>(sext_ln703_723_fu_4147365_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3417_fu_4147379_p2() {
    add_ln703_3417_fu_4147379_p2 = (!add_ln703_3414_fu_4147353_p2.read().is_01() || !sext_ln703_724_fu_4147375_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3414_fu_4147353_p2.read()) + sc_bigint<16>(sext_ln703_724_fu_4147375_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3419_fu_4143301_p2() {
    add_ln703_3419_fu_4143301_p2 = (!mult_289_V_fu_4140242_p4.read().is_01() || !mult_225_V_reg_4152139.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_289_V_fu_4140242_p4.read()) + sc_biguint<16>(mult_225_V_reg_4152139.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3420_fu_4147391_p2() {
    add_ln703_3420_fu_4147391_p2 = (!mult_161_V_fu_4143885_p1.read().is_01() || !mult_353_V_fu_4144595_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_161_V_fu_4143885_p1.read()) + sc_biguint<16>(mult_353_V_fu_4144595_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3421_fu_4147397_p2() {
    add_ln703_3421_fu_4147397_p2 = (!add_ln703_3419_reg_4153394.read().is_01() || !add_ln703_3420_fu_4147391_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3419_reg_4153394.read()) + sc_biguint<16>(add_ln703_3420_fu_4147391_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3422_fu_4147402_p2() {
    add_ln703_3422_fu_4147402_p2 = (!mult_545_V_fu_4145874_p1.read().is_01() || !mult_417_V_fu_4145154_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_545_V_fu_4145874_p1.read()) + sc_bigint<16>(mult_417_V_fu_4145154_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3423_fu_4143306_p2() {
    add_ln703_3423_fu_4143306_p2 = (!sext_ln203_1026_fu_4138635_p1.read().is_01() || !sext_ln203_1144_fu_4142083_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1026_fu_4138635_p1.read()) + sc_bigint<15>(sext_ln203_1144_fu_4142083_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3424_fu_4143316_p2() {
    add_ln703_3424_fu_4143316_p2 = (!mult_33_V_fu_4138563_p1.read().is_01() || !sext_ln703_725_fu_4143312_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_33_V_fu_4138563_p1.read()) + sc_bigint<16>(sext_ln703_725_fu_4143312_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3425_fu_4147408_p2() {
    add_ln703_3425_fu_4147408_p2 = (!add_ln703_3422_fu_4147402_p2.read().is_01() || !add_ln703_3424_reg_4153399.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3422_fu_4147402_p2.read()) + sc_biguint<16>(add_ln703_3424_reg_4153399.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3427_fu_4143322_p2() {
    add_ln703_3427_fu_4143322_p2 = (!mult_162_V_fu_4139030_p1.read().is_01() || !mult_34_V_reg_4151754.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_162_V_fu_4139030_p1.read()) + sc_biguint<16>(mult_34_V_reg_4151754.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3428_fu_4147420_p2() {
    add_ln703_3428_fu_4147420_p2 = (!mult_290_V_fu_4144132_p1.read().is_01() || !mult_226_V_fu_4143939_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_290_V_fu_4144132_p1.read()) + sc_bigint<16>(mult_226_V_fu_4143939_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3429_fu_4147426_p2() {
    add_ln703_3429_fu_4147426_p2 = (!add_ln703_3427_reg_4153404.read().is_01() || !add_ln703_3428_fu_4147420_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3427_reg_4153404.read()) + sc_biguint<16>(add_ln703_3428_fu_4147420_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3430_fu_4147431_p2() {
    add_ln703_3430_fu_4147431_p2 = (!mult_482_V_fu_4145320_p1.read().is_01() || !mult_354_V_fu_4144615_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_482_V_fu_4145320_p1.read()) + sc_bigint<16>(mult_354_V_fu_4144615_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3431_fu_4147437_p2() {
    add_ln703_3431_fu_4147437_p2 = (!sext_ln203_1166_fu_4145888_p1.read().is_01() || !sext_ln203_1125_fu_4145157_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1166_fu_4145888_p1.read()) + sc_bigint<15>(sext_ln203_1125_fu_4145157_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3432_fu_4147447_p2() {
    add_ln703_3432_fu_4147447_p2 = (!mult_98_V_fu_4143852_p1.read().is_01() || !sext_ln703_726_fu_4147443_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_98_V_fu_4143852_p1.read()) + sc_bigint<16>(sext_ln703_726_fu_4147443_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3433_fu_4147453_p2() {
    add_ln703_3433_fu_4147453_p2 = (!add_ln703_3430_fu_4147431_p2.read().is_01() || !add_ln703_3432_fu_4147447_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3430_fu_4147431_p2.read()) + sc_biguint<16>(add_ln703_3432_fu_4147447_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3435_fu_4143327_p2() {
    add_ln703_3435_fu_4143327_p2 = (!mult_227_V_fu_4139369_p1.read().is_01() || !mult_163_V_fu_4139044_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_227_V_fu_4139369_p1.read()) + sc_bigint<16>(mult_163_V_fu_4139044_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3436_fu_4147466_p2() {
    add_ln703_3436_fu_4147466_p2 = (!mult_419_V_fu_4145160_p1.read().is_01() || !mult_355_V_fu_4144629_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_419_V_fu_4145160_p1.read()) + sc_bigint<16>(mult_355_V_fu_4144629_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3437_fu_4147472_p2() {
    add_ln703_3437_fu_4147472_p2 = (!add_ln703_3435_reg_4153409.read().is_01() || !add_ln703_3436_fu_4147466_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3435_reg_4153409.read()) + sc_biguint<16>(add_ln703_3436_fu_4147466_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3438_fu_4147477_p2() {
    add_ln703_3438_fu_4147477_p2 = (!mult_547_V_fu_4145902_p1.read().is_01() || !mult_483_V_fu_4145323_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_547_V_fu_4145902_p1.read()) + sc_bigint<16>(mult_483_V_fu_4145323_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3439_fu_4147483_p2() {
    add_ln703_3439_fu_4147483_p2 = (!sext_ln203_1027_fu_4143855_p1.read().is_01() || !sext_ln203_1087_fu_4144146_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1027_fu_4143855_p1.read()) + sc_bigint<15>(sext_ln203_1087_fu_4144146_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3440_fu_4147493_p2() {
    add_ln703_3440_fu_4147493_p2 = (!mult_35_V_fu_4143792_p1.read().is_01() || !sext_ln703_727_fu_4147489_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_35_V_fu_4143792_p1.read()) + sc_bigint<16>(sext_ln703_727_fu_4147489_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3441_fu_4147499_p2() {
    add_ln703_3441_fu_4147499_p2 = (!add_ln703_3438_fu_4147477_p2.read().is_01() || !add_ln703_3440_fu_4147493_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3438_fu_4147477_p2.read()) + sc_biguint<16>(add_ln703_3440_fu_4147493_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3443_fu_4143333_p2() {
    add_ln703_3443_fu_4143333_p2 = (!mult_292_V_fu_4140312_p4.read().is_01() || !mult_228_V_reg_4152154.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_292_V_fu_4140312_p4.read()) + sc_biguint<16>(mult_228_V_reg_4152154.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3444_fu_4147512_p2() {
    add_ln703_3444_fu_4147512_p2 = (!mult_36_V_fu_4143795_p1.read().is_01() || !mult_356_V_fu_4144633_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_36_V_fu_4143795_p1.read()) + sc_biguint<16>(mult_356_V_fu_4144633_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3445_fu_4147518_p2() {
    add_ln703_3445_fu_4147518_p2 = (!add_ln703_3443_reg_4153414.read().is_01() || !add_ln703_3444_fu_4147512_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3443_reg_4153414.read()) + sc_biguint<16>(add_ln703_3444_fu_4147512_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3446_fu_4143338_p2() {
    add_ln703_3446_fu_4143338_p2 = (!mult_164_V_fu_4139058_p1.read().is_01() || !mult_100_V_fu_4138638_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_164_V_fu_4139058_p1.read()) + sc_bigint<16>(mult_100_V_fu_4138638_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3447_fu_4147523_p2() {
    add_ln703_3447_fu_4147523_p2 = (!mult_484_V_fu_4145336_p1.read().is_01() || !mult_548_V_fu_4145916_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_484_V_fu_4145336_p1.read()) + sc_bigint<16>(mult_548_V_fu_4145916_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3448_fu_4147529_p2() {
    add_ln703_3448_fu_4147529_p2 = (!mult_420_V_fu_4145163_p1.read().is_01() || !add_ln703_3447_fu_4147523_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_420_V_fu_4145163_p1.read()) + sc_biguint<16>(add_ln703_3447_fu_4147523_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3449_fu_4147535_p2() {
    add_ln703_3449_fu_4147535_p2 = (!add_ln703_3446_reg_4153419.read().is_01() || !add_ln703_3448_fu_4147529_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3446_reg_4153419.read()) + sc_biguint<16>(add_ln703_3448_fu_4147529_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3451_fu_4143344_p2() {
    add_ln703_3451_fu_4143344_p2 = (!mult_229_V_fu_4139372_p1.read().is_01() || !mult_293_V_fu_4140322_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_229_V_fu_4139372_p1.read()) + sc_biguint<16>(mult_293_V_fu_4140322_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3452_fu_4147547_p2() {
    add_ln703_3452_fu_4147547_p2 = (!sext_ln203_1104_fu_4144653_p1.read().is_01() || !sext_ln203_1028_fu_4143858_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1104_fu_4144653_p1.read()) + sc_bigint<15>(sext_ln203_1028_fu_4143858_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3453_fu_4147557_p2() {
    add_ln703_3453_fu_4147557_p2 = (!add_ln703_3451_reg_4153424.read().is_01() || !sext_ln703_728_fu_4147553_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3451_reg_4153424.read()) + sc_bigint<16>(sext_ln703_728_fu_4147553_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3454_fu_4147562_p2() {
    add_ln703_3454_fu_4147562_p2 = (!sext_ln203_1167_fu_4145930_p1.read().is_01() || !sext_ln203_1145_fu_4145340_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1167_fu_4145930_p1.read()) + sc_bigint<15>(sext_ln203_1145_fu_4145340_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3455_fu_4147572_p2() {
    add_ln703_3455_fu_4147572_p2 = (!sext_ln203_1126_fu_4145176_p1.read().is_01() || !sext_ln203_1053_fu_4143888_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_1126_fu_4145176_p1.read()) + sc_bigint<13>(sext_ln203_1053_fu_4143888_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3456_fu_4147582_p2() {
    add_ln703_3456_fu_4147582_p2 = (!sext_ln203_999_fu_4143798_p1.read().is_01() || !sext_ln703_730_fu_4147578_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_999_fu_4143798_p1.read()) + sc_bigint<14>(sext_ln703_730_fu_4147578_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3457_fu_4147592_p2() {
    add_ln703_3457_fu_4147592_p2 = (!sext_ln703_729_fu_4147568_p1.read().is_01() || !sext_ln703_731_fu_4147588_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_729_fu_4147568_p1.read()) + sc_bigint<16>(sext_ln703_731_fu_4147588_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3459_fu_4147605_p2() {
    add_ln703_3459_fu_4147605_p2 = (!mult_358_V_fu_4144657_p4.read().is_01() || !mult_294_V_reg_4152599.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_358_V_fu_4144657_p4.read()) + sc_biguint<16>(mult_294_V_reg_4152599.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3460_fu_4143350_p2() {
    add_ln703_3460_fu_4143350_p2 = (!mult_38_V_fu_4138566_p1.read().is_01() || !mult_486_V_fu_4142147_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_38_V_fu_4138566_p1.read()) + sc_biguint<16>(mult_486_V_fu_4142147_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3461_fu_4147610_p2() {
    add_ln703_3461_fu_4147610_p2 = (!add_ln703_3459_fu_4147605_p2.read().is_01() || !add_ln703_3460_reg_4153429.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3459_fu_4147605_p2.read()) + sc_biguint<16>(add_ln703_3460_reg_4153429.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3462_fu_4143356_p2() {
    add_ln703_3462_fu_4143356_p2 = (!mult_166_V_fu_4139072_p1.read().is_01() || !mult_102_V_fu_4138641_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_166_V_fu_4139072_p1.read()) + sc_bigint<16>(mult_102_V_fu_4138641_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3463_fu_4147615_p2() {
    add_ln703_3463_fu_4147615_p2 = (!sext_ln203_1168_fu_4145944_p1.read().is_01() || !sext_ln203_1127_fu_4145180_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1168_fu_4145944_p1.read()) + sc_bigint<15>(sext_ln203_1127_fu_4145180_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3464_fu_4147625_p2() {
    add_ln703_3464_fu_4147625_p2 = (!mult_230_V_fu_4143942_p1.read().is_01() || !sext_ln703_732_fu_4147621_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_230_V_fu_4143942_p1.read()) + sc_bigint<16>(sext_ln703_732_fu_4147621_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3465_fu_4147631_p2() {
    add_ln703_3465_fu_4147631_p2 = (!add_ln703_3462_reg_4153434.read().is_01() || !add_ln703_3464_fu_4147625_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3462_reg_4153434.read()) + sc_biguint<16>(add_ln703_3464_fu_4147625_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3467_fu_4143362_p2() {
    add_ln703_3467_fu_4143362_p2 = (!mult_423_V_fu_4141285_p4.read().is_01() || !mult_231_V_fu_4139375_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_423_V_fu_4141285_p4.read()) + sc_biguint<16>(mult_231_V_fu_4139375_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3468_fu_4147643_p2() {
    add_ln703_3468_fu_4147643_p2 = (!mult_167_V_fu_4143891_p1.read().is_01() || !mult_551_V_fu_4145948_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_167_V_fu_4143891_p1.read()) + sc_biguint<16>(mult_551_V_fu_4145948_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3469_fu_4147649_p2() {
    add_ln703_3469_fu_4147649_p2 = (!add_ln703_3467_reg_4153439.read().is_01() || !add_ln703_3468_fu_4147643_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3467_reg_4153439.read()) + sc_biguint<16>(add_ln703_3468_fu_4147643_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3470_fu_4143368_p2() {
    add_ln703_3470_fu_4143368_p2 = (!mult_103_V_fu_4138644_p1.read().is_01() || !mult_295_V_fu_4140352_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_103_V_fu_4138644_p1.read()) + sc_bigint<16>(mult_295_V_fu_4140352_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3471_fu_4147654_p2() {
    add_ln703_3471_fu_4147654_p2 = (!sext_ln203_1000_fu_4143801_p1.read().is_01() || !sext_ln203_1146_fu_4145353_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1000_fu_4143801_p1.read()) + sc_bigint<15>(sext_ln203_1146_fu_4145353_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3472_fu_4147664_p2() {
    add_ln703_3472_fu_4147664_p2 = (!mult_359_V_fu_4144677_p1.read().is_01() || !sext_ln703_733_fu_4147660_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_359_V_fu_4144677_p1.read()) + sc_bigint<16>(sext_ln703_733_fu_4147660_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3473_fu_4147670_p2() {
    add_ln703_3473_fu_4147670_p2 = (!add_ln703_3470_reg_4153444.read().is_01() || !add_ln703_3472_fu_4147664_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3470_reg_4153444.read()) + sc_biguint<16>(add_ln703_3472_fu_4147664_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3475_fu_4147682_p2() {
    add_ln703_3475_fu_4147682_p2 = (!mult_360_V_fu_4144681_p4.read().is_01() || !mult_232_V_reg_4152414.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_360_V_fu_4144681_p4.read()) + sc_biguint<16>(mult_232_V_reg_4152414.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3476_fu_4138482_p2() {
    add_ln703_3476_fu_4138482_p2 = (!mult_104_V_fu_4137528_p1.read().is_01() || !mult_40_V_fu_4137015_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_104_V_fu_4137528_p1.read()) + sc_bigint<16>(mult_40_V_fu_4137015_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3477_fu_4147687_p2() {
    add_ln703_3477_fu_4147687_p2 = (!add_ln703_3475_fu_4147682_p2.read().is_01() || !add_ln703_3476_reg_4152324.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3475_fu_4147682_p2.read()) + sc_biguint<16>(add_ln703_3476_reg_4152324.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3478_fu_4143374_p2() {
    add_ln703_3478_fu_4143374_p2 = (!sext_ln203_1088_fu_4140366_p1.read().is_01() || !sext_ln203_1054_fu_4139096_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1088_fu_4140366_p1.read()) + sc_bigint<15>(sext_ln203_1054_fu_4139096_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3479_fu_4147695_p2() {
    add_ln703_3479_fu_4147695_p2 = (!sext_ln203_1128_fu_4145183_p1.read().is_01() || !sext_ln203_1169_fu_4145968_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1128_fu_4145183_p1.read()) + sc_bigint<14>(sext_ln203_1169_fu_4145968_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3480_fu_4147705_p2() {
    add_ln703_3480_fu_4147705_p2 = (!sext_ln203_1147_fu_4145357_p1.read().is_01() || !sext_ln703_735_fu_4147701_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1147_fu_4145357_p1.read()) + sc_bigint<15>(sext_ln703_735_fu_4147701_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3481_fu_4147715_p2() {
    add_ln703_3481_fu_4147715_p2 = (!sext_ln703_734_fu_4147692_p1.read().is_01() || !sext_ln703_736_fu_4147711_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_734_fu_4147692_p1.read()) + sc_bigint<16>(sext_ln703_736_fu_4147711_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3483_fu_4147728_p2() {
    add_ln703_3483_fu_4147728_p2 = (!mult_553_V_fu_4145972_p4.read().is_01() || !mult_169_V_reg_4152394.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_553_V_fu_4145972_p4.read()) + sc_biguint<16>(mult_169_V_reg_4152394.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3484_fu_4143380_p2() {
    add_ln703_3484_fu_4143380_p2 = (!mult_233_V_fu_4139405_p1.read().is_01() || !mult_105_V_reg_4151959.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_233_V_fu_4139405_p1.read()) + sc_biguint<16>(mult_105_V_reg_4151959.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3485_fu_4147733_p2() {
    add_ln703_3485_fu_4147733_p2 = (!add_ln703_3483_fu_4147728_p2.read().is_01() || !add_ln703_3484_reg_4153454.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3483_fu_4147728_p2.read()) + sc_biguint<16>(add_ln703_3484_reg_4153454.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3486_fu_4143385_p2() {
    add_ln703_3486_fu_4143385_p2 = (!mult_489_V_fu_4142194_p1.read().is_01() || !mult_425_V_fu_4141315_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_489_V_fu_4142194_p1.read()) + sc_bigint<16>(mult_425_V_fu_4141315_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3487_fu_4143391_p2() {
    add_ln703_3487_fu_4143391_p2 = (!sext_ln203_1089_fu_4140380_p1.read().is_01() || !sext_ln203_1001_fu_4138569_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_1089_fu_4140380_p1.read()) + sc_bigint<13>(sext_ln203_1001_fu_4138569_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3488_fu_4147741_p2() {
    add_ln703_3488_fu_4147741_p2 = (!sext_ln203_1105_fu_4144701_p1.read().is_01() || !sext_ln703_737_fu_4147738_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1105_fu_4144701_p1.read()) + sc_bigint<14>(sext_ln703_737_fu_4147738_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3489_fu_4147751_p2() {
    add_ln703_3489_fu_4147751_p2 = (!add_ln703_3486_reg_4153459.read().is_01() || !sext_ln703_738_fu_4147747_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3486_reg_4153459.read()) + sc_bigint<16>(sext_ln703_738_fu_4147747_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3491_fu_4143397_p2() {
    add_ln703_3491_fu_4143397_p2 = (!mult_170_V_fu_4139120_p1.read().is_01() || !mult_106_V_reg_4151964.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_170_V_fu_4139120_p1.read()) + sc_biguint<16>(mult_106_V_reg_4151964.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3492_fu_4147763_p2() {
    add_ln703_3492_fu_4147763_p2 = (!mult_362_V_fu_4144715_p1.read().is_01() || !mult_298_V_fu_4144150_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_362_V_fu_4144715_p1.read()) + sc_bigint<16>(mult_298_V_fu_4144150_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3493_fu_4147769_p2() {
    add_ln703_3493_fu_4147769_p2 = (!add_ln703_3491_reg_4153469.read().is_01() || !add_ln703_3492_fu_4147763_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3491_reg_4153469.read()) + sc_biguint<16>(add_ln703_3492_fu_4147763_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3494_fu_4143402_p2() {
    add_ln703_3494_fu_4143402_p2 = (!mult_42_V_fu_4138572_p1.read().is_01() || !mult_490_V_fu_4142208_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_42_V_fu_4138572_p1.read()) + sc_bigint<16>(mult_490_V_fu_4142208_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3495_fu_4147774_p2() {
    add_ln703_3495_fu_4147774_p2 = (!sext_ln203_1170_fu_4145992_p1.read().is_01() || !sext_ln203_1129_fu_4145186_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1170_fu_4145992_p1.read()) + sc_bigint<15>(sext_ln203_1129_fu_4145186_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3496_fu_4147784_p2() {
    add_ln703_3496_fu_4147784_p2 = (!mult_234_V_fu_4143945_p1.read().is_01() || !sext_ln703_739_fu_4147780_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_234_V_fu_4143945_p1.read()) + sc_bigint<16>(sext_ln703_739_fu_4147780_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3497_fu_4147790_p2() {
    add_ln703_3497_fu_4147790_p2 = (!add_ln703_3494_reg_4153474.read().is_01() || !add_ln703_3496_fu_4147784_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3494_reg_4153474.read()) + sc_biguint<16>(add_ln703_3496_fu_4147784_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3499_fu_4143408_p2() {
    add_ln703_3499_fu_4143408_p2 = (!mult_43_V_fu_4138575_p1.read().is_01() || !mult_299_V_fu_4140394_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_43_V_fu_4138575_p1.read()) + sc_biguint<16>(mult_299_V_fu_4140394_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3500_fu_4143414_p2() {
    add_ln703_3500_fu_4143414_p2 = (!mult_235_V_fu_4139429_p1.read().is_01() || !mult_107_V_fu_4138647_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_235_V_fu_4139429_p1.read()) + sc_bigint<16>(mult_107_V_fu_4138647_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3501_fu_4143420_p2() {
    add_ln703_3501_fu_4143420_p2 = (!add_ln703_3499_fu_4143408_p2.read().is_01() || !add_ln703_3500_fu_4143414_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3499_fu_4143408_p2.read()) + sc_biguint<16>(add_ln703_3500_fu_4143414_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3502_fu_4147802_p2() {
    add_ln703_3502_fu_4147802_p2 = (!sext_ln203_1130_fu_4145199_p1.read().is_01() || !sext_ln203_1106_fu_4144729_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1130_fu_4145199_p1.read()) + sc_bigint<15>(sext_ln203_1106_fu_4144729_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3503_fu_4147812_p2() {
    add_ln703_3503_fu_4147812_p2 = (!sext_ln203_1148_fu_4145370_p1.read().is_01() || !sext_ln203_1171_fu_4146006_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1148_fu_4145370_p1.read()) + sc_bigint<14>(sext_ln203_1171_fu_4146006_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3504_fu_4147822_p2() {
    add_ln703_3504_fu_4147822_p2 = (!sext_ln203_1055_fu_4143894_p1.read().is_01() || !sext_ln703_741_fu_4147818_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1055_fu_4143894_p1.read()) + sc_bigint<15>(sext_ln703_741_fu_4147818_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3505_fu_4147832_p2() {
    add_ln703_3505_fu_4147832_p2 = (!sext_ln703_740_fu_4147808_p1.read().is_01() || !sext_ln703_742_fu_4147828_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_740_fu_4147808_p1.read()) + sc_bigint<16>(sext_ln703_742_fu_4147828_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3507_fu_4143426_p2() {
    add_ln703_3507_fu_4143426_p2 = (!mult_492_V_fu_4142242_p4.read().is_01() || !mult_428_V_fu_4141363_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_492_V_fu_4142242_p4.read()) + sc_biguint<16>(mult_428_V_fu_4141363_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3508_fu_4147844_p2() {
    add_ln703_3508_fu_4147844_p2 = (!mult_300_V_fu_4144153_p1.read().is_01() || !mult_236_V_fu_4143958_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_300_V_fu_4144153_p1.read()) + sc_bigint<16>(mult_236_V_fu_4143958_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3509_fu_4147850_p2() {
    add_ln703_3509_fu_4147850_p2 = (!add_ln703_3507_reg_4153484.read().is_01() || !add_ln703_3508_fu_4147844_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3507_reg_4153484.read()) + sc_biguint<16>(add_ln703_3508_fu_4147844_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3510_fu_4147855_p2() {
    add_ln703_3510_fu_4147855_p2 = (!mult_556_V_fu_4146020_p1.read().is_01() || !mult_364_V_fu_4144743_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_556_V_fu_4146020_p1.read()) + sc_bigint<16>(mult_364_V_fu_4144743_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3511_fu_4143432_p2() {
    add_ln703_3511_fu_4143432_p2 = (!sext_ln203_1056_fu_4139144_p1.read().is_01() || !sext_ln203_1029_fu_4138650_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1056_fu_4139144_p1.read()) + sc_bigint<15>(sext_ln203_1029_fu_4138650_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3512_fu_4143442_p2() {
    add_ln703_3512_fu_4143442_p2 = (!mult_44_V_fu_4138578_p1.read().is_01() || !sext_ln703_743_fu_4143438_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_44_V_fu_4138578_p1.read()) + sc_bigint<16>(sext_ln703_743_fu_4143438_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3513_fu_4147861_p2() {
    add_ln703_3513_fu_4147861_p2 = (!add_ln703_3510_fu_4147855_p2.read().is_01() || !add_ln703_3512_reg_4153489.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3510_fu_4147855_p2.read()) + sc_biguint<16>(add_ln703_3512_reg_4153489.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3515_fu_4143448_p2() {
    add_ln703_3515_fu_4143448_p2 = (!mult_173_V_fu_4139148_p4.read().is_01() || !mult_45_V_reg_4151794.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_173_V_fu_4139148_p4.read()) + sc_biguint<16>(mult_45_V_reg_4151794.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3516_fu_4147873_p2() {
    add_ln703_3516_fu_4147873_p2 = (!mult_301_V_fu_4144156_p1.read().is_01() || !mult_237_V_fu_4143972_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_301_V_fu_4144156_p1.read()) + sc_bigint<16>(mult_237_V_fu_4143972_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3517_fu_4147879_p2() {
    add_ln703_3517_fu_4147879_p2 = (!add_ln703_3515_reg_4153494.read().is_01() || !add_ln703_3516_fu_4147873_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3515_reg_4153494.read()) + sc_biguint<16>(add_ln703_3516_fu_4147873_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3518_fu_4147884_p2() {
    add_ln703_3518_fu_4147884_p2 = (!sext_ln203_1131_fu_4145213_p1.read().is_01() || !sext_ln203_1030_fu_4143861_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1131_fu_4145213_p1.read()) + sc_bigint<15>(sext_ln203_1030_fu_4143861_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3519_fu_4147894_p2() {
    add_ln703_3519_fu_4147894_p2 = (!sext_ln203_1107_fu_4144757_p1.read().is_01() || !sext_ln203_1172_fu_4146034_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1107_fu_4144757_p1.read()) + sc_bigint<14>(sext_ln203_1172_fu_4146034_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3520_fu_4147904_p2() {
    add_ln703_3520_fu_4147904_p2 = (!sext_ln203_1149_fu_4145384_p1.read().is_01() || !sext_ln703_745_fu_4147900_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1149_fu_4145384_p1.read()) + sc_bigint<15>(sext_ln703_745_fu_4147900_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3521_fu_4147914_p2() {
    add_ln703_3521_fu_4147914_p2 = (!sext_ln703_744_fu_4147890_p1.read().is_01() || !sext_ln703_746_fu_4147910_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_744_fu_4147890_p1.read()) + sc_bigint<16>(sext_ln703_746_fu_4147910_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3523_fu_4143453_p2() {
    add_ln703_3523_fu_4143453_p2 = (!mult_494_V_fu_4142282_p4.read().is_01() || !mult_430_V_fu_4141407_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_494_V_fu_4142282_p4.read()) + sc_biguint<16>(mult_430_V_fu_4141407_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3524_fu_4138488_p2() {
    add_ln703_3524_fu_4138488_p2 = (!mult_110_V_fu_4137582_p1.read().is_01() || !mult_46_V_fu_4137069_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_110_V_fu_4137582_p1.read()) + sc_bigint<16>(mult_46_V_fu_4137069_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3525_fu_4143459_p2() {
    add_ln703_3525_fu_4143459_p2 = (!add_ln703_3523_fu_4143453_p2.read().is_01() || !add_ln703_3524_reg_4152329.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3523_fu_4143453_p2.read()) + sc_biguint<16>(add_ln703_3524_reg_4152329.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3526_fu_4143464_p2() {
    add_ln703_3526_fu_4143464_p2 = (!mult_302_V_fu_4140434_p1.read().is_01() || !mult_174_V_fu_4139168_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_302_V_fu_4140434_p1.read()) + sc_bigint<16>(mult_174_V_fu_4139168_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3527_fu_4147927_p2() {
    add_ln703_3527_fu_4147927_p2 = (!sext_ln203_1075_fu_4143986_p1.read().is_01() || !sext_ln203_1108_fu_4144771_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_1075_fu_4143986_p1.read()) + sc_bigint<12>(sext_ln203_1108_fu_4144771_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3528_fu_4147937_p2() {
    add_ln703_3528_fu_4147937_p2 = (!mult_558_V_fu_4146048_p1.read().is_01() || !sext_ln703_747_fu_4147933_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_558_V_fu_4146048_p1.read()) + sc_bigint<16>(sext_ln703_747_fu_4147933_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3529_fu_4147943_p2() {
    add_ln703_3529_fu_4147943_p2 = (!add_ln703_3526_reg_4153504.read().is_01() || !add_ln703_3528_fu_4147937_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3526_reg_4153504.read()) + sc_biguint<16>(add_ln703_3528_fu_4147937_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3531_fu_4147954_p2() {
    add_ln703_3531_fu_4147954_p2 = (!mult_559_V_fu_4146052_p4.read().is_01() || !mult_495_V_reg_4153039.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_559_V_fu_4146052_p4.read()) + sc_biguint<16>(mult_495_V_reg_4153039.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3532_fu_4143470_p2() {
    add_ln703_3532_fu_4143470_p2 = (!mult_303_V_fu_4140448_p1.read().is_01() || !mult_111_V_reg_4151979.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_303_V_fu_4140448_p1.read()) + sc_biguint<16>(mult_111_V_reg_4151979.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3533_fu_4147959_p2() {
    add_ln703_3533_fu_4147959_p2 = (!add_ln703_3531_fu_4147954_p2.read().is_01() || !add_ln703_3532_reg_4153509.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3531_fu_4147954_p2.read()) + sc_biguint<16>(add_ln703_3532_reg_4153509.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3534_fu_4147964_p2() {
    add_ln703_3534_fu_4147964_p2 = (!mult_239_V_fu_4143990_p1.read().is_01() || !mult_367_V_fu_4144785_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_239_V_fu_4143990_p1.read()) + sc_bigint<16>(mult_367_V_fu_4144785_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3535_fu_4143475_p2() {
    add_ln703_3535_fu_4143475_p2 = (!sext_ln203_1002_fu_4138581_p1.read().is_01() || !sext_ln203_1132_fu_4141427_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_1002_fu_4138581_p1.read()) + sc_bigint<13>(sext_ln203_1132_fu_4141427_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3536_fu_4143485_p2() {
    add_ln703_3536_fu_4143485_p2 = (!sext_ln203_1057_fu_4139172_p1.read().is_01() || !sext_ln703_748_fu_4143481_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1057_fu_4139172_p1.read()) + sc_bigint<14>(sext_ln703_748_fu_4143481_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3537_fu_4147973_p2() {
    add_ln703_3537_fu_4147973_p2 = (!add_ln703_3534_fu_4147964_p2.read().is_01() || !sext_ln703_749_fu_4147970_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3534_fu_4147964_p2.read()) + sc_bigint<16>(sext_ln703_749_fu_4147970_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3539_fu_4143491_p2() {
    add_ln703_3539_fu_4143491_p2 = (!mult_112_V_reg_4151984.read().is_01() || !mult_176_V_fu_4139175_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_112_V_reg_4151984.read()) + sc_biguint<16>(mult_176_V_fu_4139175_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3540_fu_4143496_p2() {
    add_ln703_3540_fu_4143496_p2 = (!mult_240_V_fu_4139553_p1.read().is_01() || !mult_48_V_fu_4138584_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_240_V_fu_4139553_p1.read()) + sc_bigint<16>(mult_48_V_fu_4138584_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3541_fu_4143502_p2() {
    add_ln703_3541_fu_4143502_p2 = (!add_ln703_3539_fu_4143491_p2.read().is_01() || !add_ln703_3540_fu_4143496_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3539_fu_4143491_p2.read()) + sc_biguint<16>(add_ln703_3540_fu_4143496_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3542_fu_4147986_p2() {
    add_ln703_3542_fu_4147986_p2 = (!mult_368_V_fu_4144799_p1.read().is_01() || !mult_496_V_fu_4145388_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_368_V_fu_4144799_p1.read()) + sc_bigint<16>(mult_496_V_fu_4145388_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3543_fu_4147992_p2() {
    add_ln703_3543_fu_4147992_p2 = (!sext_ln203_1173_fu_4146072_p1.read().is_01() || !sext_ln203_1133_fu_4145217_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_1173_fu_4146072_p1.read()) + sc_bigint<13>(sext_ln203_1133_fu_4145217_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3544_fu_4148002_p2() {
    add_ln703_3544_fu_4148002_p2 = (!sext_ln203_1090_fu_4144159_p1.read().is_01() || !sext_ln703_750_fu_4147998_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1090_fu_4144159_p1.read()) + sc_bigint<14>(sext_ln703_750_fu_4147998_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3545_fu_4148012_p2() {
    add_ln703_3545_fu_4148012_p2 = (!add_ln703_3542_fu_4147986_p2.read().is_01() || !sext_ln703_751_fu_4148008_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3542_fu_4147986_p2.read()) + sc_bigint<16>(sext_ln703_751_fu_4148008_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3547_fu_4148024_p2() {
    add_ln703_3547_fu_4148024_p2 = (!mult_561_V_fu_4146076_p4.read().is_01() || !mult_305_V_reg_4152624.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_561_V_fu_4146076_p4.read()) + sc_biguint<16>(mult_305_V_reg_4152624.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3548_fu_4148029_p2() {
    add_ln703_3548_fu_4148029_p2 = (!mult_433_V_fu_4145220_p1.read().is_01() || !mult_369_V_fu_4144813_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_433_V_fu_4145220_p1.read()) + sc_bigint<16>(mult_369_V_fu_4144813_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3549_fu_4148035_p2() {
    add_ln703_3549_fu_4148035_p2 = (!add_ln703_3547_fu_4148024_p2.read().is_01() || !add_ln703_3548_fu_4148029_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3547_fu_4148024_p2.read()) + sc_biguint<16>(add_ln703_3548_fu_4148029_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3550_fu_4143508_p2() {
    add_ln703_3550_fu_4143508_p2 = (!mult_49_V_fu_4138587_p1.read().is_01() || !mult_497_V_fu_4142322_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_49_V_fu_4138587_p1.read()) + sc_bigint<16>(mult_497_V_fu_4142322_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3551_fu_4143514_p2() {
    add_ln703_3551_fu_4143514_p2 = (!sext_ln203_1058_fu_4139195_p1.read().is_01() || !sext_ln203_1076_fu_4139567_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_1058_fu_4139195_p1.read()) + sc_bigint<13>(sext_ln203_1076_fu_4139567_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3552_fu_4143524_p2() {
    add_ln703_3552_fu_4143524_p2 = (!sext_ln203_1031_fu_4138653_p1.read().is_01() || !sext_ln703_752_fu_4143520_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1031_fu_4138653_p1.read()) + sc_bigint<15>(sext_ln703_752_fu_4143520_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3553_fu_4143534_p2() {
    add_ln703_3553_fu_4143534_p2 = (!add_ln703_3550_fu_4143508_p2.read().is_01() || !sext_ln703_753_fu_4143530_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3550_fu_4143508_p2.read()) + sc_bigint<16>(sext_ln703_753_fu_4143530_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3555_fu_4143540_p2() {
    add_ln703_3555_fu_4143540_p2 = (!mult_498_V_fu_4142326_p4.read().is_01() || !mult_434_V_fu_4141451_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_498_V_fu_4142326_p4.read()) + sc_biguint<16>(mult_434_V_fu_4141451_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3556_fu_4148047_p2() {
    add_ln703_3556_fu_4148047_p2 = (!mult_50_V_fu_4143804_p1.read().is_01() || !mult_562_V_fu_4146086_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_50_V_fu_4143804_p1.read()) + sc_biguint<16>(mult_562_V_fu_4146086_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3557_fu_4148053_p2() {
    add_ln703_3557_fu_4148053_p2 = (!add_ln703_3555_reg_4153529.read().is_01() || !add_ln703_3556_fu_4148047_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3555_reg_4153529.read()) + sc_biguint<16>(add_ln703_3556_fu_4148047_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3558_fu_4143546_p2() {
    add_ln703_3558_fu_4143546_p2 = (!sext_ln203_1077_fu_4139581_p1.read().is_01() || !sext_ln203_1032_fu_4138656_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1077_fu_4139581_p1.read()) + sc_bigint<15>(sext_ln203_1032_fu_4138656_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3559_fu_4143556_p2() {
    add_ln703_3559_fu_4143556_p2 = (!sext_ln203_1059_fu_4139209_p1.read().is_01() || !sext_ln203_1109_fu_4140801_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1059_fu_4139209_p1.read()) + sc_bigint<15>(sext_ln203_1109_fu_4140801_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3560_fu_4143566_p2() {
    add_ln703_3560_fu_4143566_p2 = (!mult_306_V_fu_4140482_p1.read().is_01() || !sext_ln703_755_fu_4143562_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_306_V_fu_4140482_p1.read()) + sc_bigint<16>(sext_ln703_755_fu_4143562_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3561_fu_4143572_p2() {
    add_ln703_3561_fu_4143572_p2 = (!sext_ln703_754_fu_4143552_p1.read().is_01() || !add_ln703_3560_fu_4143566_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_754_fu_4143552_p1.read()) + sc_biguint<16>(add_ln703_3560_fu_4143566_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3563_fu_4148064_p2() {
    add_ln703_3563_fu_4148064_p2 = (!mult_371_V_fu_4144817_p4.read().is_01() || !mult_307_V_reg_4152629.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_371_V_fu_4144817_p4.read()) + sc_biguint<16>(mult_307_V_reg_4152629.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3564_fu_4138494_p2() {
    add_ln703_3564_fu_4138494_p2 = (!mult_179_V_fu_4137773_p1.read().is_01() || !mult_115_V_fu_4137616_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_179_V_fu_4137773_p1.read()) + sc_biguint<16>(mult_115_V_fu_4137616_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3565_fu_4148069_p2() {
    add_ln703_3565_fu_4148069_p2 = (!add_ln703_3563_fu_4148064_p2.read().is_01() || !add_ln703_3564_reg_4152334.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3563_fu_4148064_p2.read()) + sc_biguint<16>(add_ln703_3564_reg_4152334.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3566_fu_4143578_p2() {
    add_ln703_3566_fu_4143578_p2 = (!mult_435_V_fu_4141471_p1.read().is_01() || !mult_243_V_fu_4139595_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_435_V_fu_4141471_p1.read()) + sc_bigint<16>(mult_243_V_fu_4139595_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3567_fu_4148074_p2() {
    add_ln703_3567_fu_4148074_p2 = (!sext_ln203_1003_fu_4143807_p1.read().is_01() || !sext_ln203_1174_fu_4146106_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1003_fu_4143807_p1.read()) + sc_bigint<14>(sext_ln203_1174_fu_4146106_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3568_fu_4148084_p2() {
    add_ln703_3568_fu_4148084_p2 = (!mult_499_V_fu_4145401_p1.read().is_01() || !sext_ln703_756_fu_4148080_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_499_V_fu_4145401_p1.read()) + sc_bigint<16>(sext_ln703_756_fu_4148080_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3569_fu_4148090_p2() {
    add_ln703_3569_fu_4148090_p2 = (!add_ln703_3566_reg_4153539.read().is_01() || !add_ln703_3568_fu_4148084_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3566_reg_4153539.read()) + sc_biguint<16>(add_ln703_3568_fu_4148084_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3571_fu_4138500_p2() {
    add_ln703_3571_fu_4138500_p2 = (!mult_52_V_fu_4137103_p1.read().is_01() || !mult_116_V_fu_4137626_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_52_V_fu_4137103_p1.read()) + sc_biguint<16>(mult_116_V_fu_4137626_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3572_fu_4143584_p2() {
    add_ln703_3572_fu_4143584_p2 = (!mult_308_V_fu_4140506_p1.read().is_01() || !mult_244_V_fu_4139609_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_308_V_fu_4140506_p1.read()) + sc_bigint<16>(mult_244_V_fu_4139609_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3573_fu_4143590_p2() {
    add_ln703_3573_fu_4143590_p2 = (!add_ln703_3571_reg_4152339.read().is_01() || !add_ln703_3572_fu_4143584_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3571_reg_4152339.read()) + sc_biguint<16>(add_ln703_3572_fu_4143584_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3574_fu_4148102_p2() {
    add_ln703_3574_fu_4148102_p2 = (!mult_436_V_fu_4145223_p1.read().is_01() || !mult_372_V_fu_4144837_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_436_V_fu_4145223_p1.read()) + sc_bigint<16>(mult_372_V_fu_4144837_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3575_fu_4148108_p2() {
    add_ln703_3575_fu_4148108_p2 = (!sext_ln203_1150_fu_4145415_p1.read().is_01() || !sext_ln203_1060_fu_4143897_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1150_fu_4145415_p1.read()) + sc_bigint<15>(sext_ln203_1060_fu_4143897_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3576_fu_4148118_p2() {
    add_ln703_3576_fu_4148118_p2 = (!mult_564_V_fu_4146120_p1.read().is_01() || !sext_ln703_757_fu_4148114_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_564_V_fu_4146120_p1.read()) + sc_bigint<16>(sext_ln703_757_fu_4148114_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3577_fu_4148124_p2() {
    add_ln703_3577_fu_4148124_p2 = (!add_ln703_3574_fu_4148102_p2.read().is_01() || !add_ln703_3576_fu_4148118_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3574_fu_4148102_p2.read()) + sc_biguint<16>(add_ln703_3576_fu_4148118_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3579_fu_4143595_p2() {
    add_ln703_3579_fu_4143595_p2 = (!mult_245_V_fu_4139623_p1.read().is_01() || !mult_501_V_fu_4142396_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_245_V_fu_4139623_p1.read()) + sc_biguint<16>(mult_501_V_fu_4142396_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3580_fu_4148136_p2() {
    add_ln703_3580_fu_4148136_p2 = (!mult_373_V_fu_4144851_p1.read().is_01() || !mult_309_V_fu_4144162_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_373_V_fu_4144851_p1.read()) + sc_bigint<16>(mult_309_V_fu_4144162_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3581_fu_4148142_p2() {
    add_ln703_3581_fu_4148142_p2 = (!add_ln703_3579_reg_4153549.read().is_01() || !add_ln703_3580_fu_4148136_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3579_reg_4153549.read()) + sc_biguint<16>(add_ln703_3580_fu_4148136_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3582_fu_4148147_p2() {
    add_ln703_3582_fu_4148147_p2 = (!mult_565_V_fu_4146134_p1.read().is_01() || !mult_437_V_fu_4145226_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_565_V_fu_4146134_p1.read()) + sc_bigint<16>(mult_437_V_fu_4145226_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3583_fu_4135661_p2() {
    add_ln703_3583_fu_4135661_p2 = (!sext_ln203_1061_fu_4134334_p1.read().is_01() || !sext_ln203_1004_fu_4133319_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1061_fu_4134334_p1.read()) + sc_bigint<14>(sext_ln203_1004_fu_4133319_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3584_fu_4138509_p2() {
    add_ln703_3584_fu_4138509_p2 = (!sext_ln203_1033_fu_4137646_p1.read().is_01() || !sext_ln703_758_fu_4138506_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1033_fu_4137646_p1.read()) + sc_bigint<15>(sext_ln703_758_fu_4138506_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3585_fu_4148156_p2() {
    add_ln703_3585_fu_4148156_p2 = (!add_ln703_3582_fu_4148147_p2.read().is_01() || !sext_ln703_759_fu_4148153_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3582_fu_4148147_p2.read()) + sc_bigint<16>(sext_ln703_759_fu_4148153_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3587_fu_4143601_p2() {
    add_ln703_3587_fu_4143601_p2 = (!mult_502_V_fu_4142406_p4.read().is_01() || !mult_438_V_fu_4141495_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_502_V_fu_4142406_p4.read()) + sc_biguint<16>(mult_438_V_fu_4141495_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3588_fu_4148169_p2() {
    add_ln703_3588_fu_4148169_p2 = (!mult_54_V_fu_4143810_p1.read().is_01() || !mult_566_V_fu_4146138_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_54_V_fu_4143810_p1.read()) + sc_biguint<16>(mult_566_V_fu_4146138_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3589_fu_4148175_p2() {
    add_ln703_3589_fu_4148175_p2 = (!add_ln703_3587_reg_4153554.read().is_01() || !add_ln703_3588_fu_4148169_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3587_reg_4153554.read()) + sc_biguint<16>(add_ln703_3588_fu_4148169_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3590_fu_4143607_p2() {
    add_ln703_3590_fu_4143607_p2 = (!mult_246_V_fu_4139637_p1.read().is_01() || !mult_310_V_fu_4140530_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_246_V_fu_4139637_p1.read()) + sc_bigint<16>(mult_310_V_fu_4140530_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3591_fu_4143613_p2() {
    add_ln703_3591_fu_4143613_p2 = (!sext_ln203_1062_fu_4139223_p1.read().is_01() || !sext_ln203_1034_fu_4138659_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1062_fu_4139223_p1.read()) + sc_bigint<14>(sext_ln203_1034_fu_4138659_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3592_fu_4148183_p2() {
    add_ln703_3592_fu_4148183_p2 = (!sext_ln203_1110_fu_4144865_p1.read().is_01() || !sext_ln703_760_fu_4148180_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1110_fu_4144865_p1.read()) + sc_bigint<15>(sext_ln703_760_fu_4148180_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3593_fu_4148193_p2() {
    add_ln703_3593_fu_4148193_p2 = (!add_ln703_3590_reg_4153559.read().is_01() || !sext_ln703_761_fu_4148189_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3590_reg_4153559.read()) + sc_bigint<16>(sext_ln703_761_fu_4148189_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3595_fu_4143619_p2() {
    add_ln703_3595_fu_4143619_p2 = (!mult_311_V_fu_4140534_p4.read().is_01() || !mult_55_V_reg_4151814.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_311_V_fu_4140534_p4.read()) + sc_biguint<16>(mult_55_V_reg_4151814.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3596_fu_4148205_p2() {
    add_ln703_3596_fu_4148205_p2 = (!mult_119_V_fu_4143864_p1.read().is_01() || !mult_567_V_fu_4146148_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_119_V_fu_4143864_p1.read()) + sc_biguint<16>(mult_567_V_fu_4146148_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3597_fu_4148211_p2() {
    add_ln703_3597_fu_4148211_p2 = (!add_ln703_3595_reg_4153569.read().is_01() || !add_ln703_3596_fu_4148205_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3595_reg_4153569.read()) + sc_biguint<16>(add_ln703_3596_fu_4148205_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3598_fu_4143624_p2() {
    add_ln703_3598_fu_4143624_p2 = (!mult_247_V_fu_4139651_p1.read().is_01() || !mult_183_V_fu_4139237_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_247_V_fu_4139651_p1.read()) + sc_bigint<16>(mult_183_V_fu_4139237_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3599_fu_4148216_p2() {
    add_ln703_3599_fu_4148216_p2 = (!mult_375_V_fu_4144879_p1.read().is_01() || !mult_503_V_fu_4145429_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_375_V_fu_4144879_p1.read()) + sc_bigint<16>(mult_503_V_fu_4145429_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3600_fu_4148222_p2() {
    add_ln703_3600_fu_4148222_p2 = (!mult_439_V_fu_4145229_p1.read().is_01() || !add_ln703_3599_fu_4148216_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_439_V_fu_4145229_p1.read()) + sc_biguint<16>(add_ln703_3599_fu_4148216_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3601_fu_4148228_p2() {
    add_ln703_3601_fu_4148228_p2 = (!add_ln703_3598_reg_4153574.read().is_01() || !add_ln703_3600_fu_4148222_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3598_reg_4153574.read()) + sc_biguint<16>(add_ln703_3600_fu_4148222_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3603_fu_4148240_p2() {
    add_ln703_3603_fu_4148240_p2 = (!mult_376_V_fu_4144883_p4.read().is_01() || !mult_248_V_reg_4152459.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_376_V_fu_4144883_p4.read()) + sc_biguint<16>(mult_248_V_reg_4152459.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3604_fu_4148245_p2() {
    add_ln703_3604_fu_4148245_p2 = (!mult_184_V_fu_4143900_p1.read().is_01() || !mult_568_V_fu_4146158_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_184_V_fu_4143900_p1.read()) + sc_biguint<16>(mult_568_V_fu_4146158_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3605_fu_4148251_p2() {
    add_ln703_3605_fu_4148251_p2 = (!add_ln703_3603_fu_4148240_p2.read().is_01() || !add_ln703_3604_fu_4148245_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3603_fu_4148240_p2.read()) + sc_biguint<16>(add_ln703_3604_fu_4148245_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3606_fu_4143630_p2() {
    add_ln703_3606_fu_4143630_p2 = (!mult_440_V_fu_4141525_p1.read().is_01() || !mult_312_V_fu_4140554_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_440_V_fu_4141525_p1.read()) + sc_bigint<16>(mult_312_V_fu_4140554_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3607_fu_4138515_p2() {
    add_ln703_3607_fu_4138515_p2 = (!sext_ln203_1035_fu_4137670_p1.read().is_01() || !sext_ln203_1005_fu_4137137_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1035_fu_4137670_p1.read()) + sc_bigint<14>(sext_ln203_1005_fu_4137137_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3608_fu_4143639_p2() {
    add_ln703_3608_fu_4143639_p2 = (!sext_ln203_1151_fu_4142456_p1.read().is_01() || !sext_ln703_762_fu_4143636_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1151_fu_4142456_p1.read()) + sc_bigint<15>(sext_ln703_762_fu_4143636_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3609_fu_4143649_p2() {
    add_ln703_3609_fu_4143649_p2 = (!add_ln703_3606_fu_4143630_p2.read().is_01() || !sext_ln703_763_fu_4143645_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3606_fu_4143630_p2.read()) + sc_bigint<16>(sext_ln703_763_fu_4143645_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3611_fu_4143655_p2() {
    add_ln703_3611_fu_4143655_p2 = (!mult_249_V_fu_4139675_p1.read().is_01() || !mult_121_V_fu_4138662_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_249_V_fu_4139675_p1.read()) + sc_bigint<16>(mult_121_V_fu_4138662_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3612_fu_4148263_p2() {
    add_ln703_3612_fu_4148263_p2 = (!mult_377_V_fu_4144903_p1.read().is_01() || !mult_313_V_fu_4144165_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_377_V_fu_4144903_p1.read()) + sc_bigint<16>(mult_313_V_fu_4144165_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3613_fu_4148269_p2() {
    add_ln703_3613_fu_4148269_p2 = (!add_ln703_3611_reg_4153584.read().is_01() || !add_ln703_3612_fu_4148263_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3611_reg_4153584.read()) + sc_biguint<16>(add_ln703_3612_fu_4148263_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3614_fu_4148274_p2() {
    add_ln703_3614_fu_4148274_p2 = (!mult_569_V_fu_4146178_p1.read().is_01() || !mult_441_V_fu_4145232_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_569_V_fu_4146178_p1.read()) + sc_bigint<16>(mult_441_V_fu_4145232_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3615_fu_4143661_p2() {
    add_ln703_3615_fu_4143661_p2 = (!sext_ln203_1152_fu_4142470_p1.read().is_01() || !sext_ln203_1006_fu_4138590_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1152_fu_4142470_p1.read()) + sc_bigint<14>(sext_ln203_1006_fu_4138590_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3616_fu_4143671_p2() {
    add_ln703_3616_fu_4143671_p2 = (!sext_ln203_1063_fu_4139261_p1.read().is_01() || !sext_ln703_764_fu_4143667_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1063_fu_4139261_p1.read()) + sc_bigint<15>(sext_ln703_764_fu_4143667_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3617_fu_4148283_p2() {
    add_ln703_3617_fu_4148283_p2 = (!add_ln703_3614_fu_4148274_p2.read().is_01() || !sext_ln703_765_fu_4148280_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3614_fu_4148274_p2.read()) + sc_bigint<16>(sext_ln703_765_fu_4148280_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3619_fu_4143677_p2() {
    add_ln703_3619_fu_4143677_p2 = (!mult_506_V_fu_4142474_p4.read().is_01() || !mult_314_V_fu_4140568_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_506_V_fu_4142474_p4.read()) + sc_biguint<16>(mult_314_V_fu_4140568_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3620_fu_4143683_p2() {
    add_ln703_3620_fu_4143683_p2 = (!mult_186_V_fu_4139275_p1.read().is_01() || !mult_122_V_fu_4138665_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_186_V_fu_4139275_p1.read()) + sc_biguint<16>(mult_122_V_fu_4138665_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3621_fu_4143689_p2() {
    add_ln703_3621_fu_4143689_p2 = (!add_ln703_3619_fu_4143677_p2.read().is_01() || !add_ln703_3620_fu_4143683_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3619_fu_4143677_p2.read()) + sc_biguint<16>(add_ln703_3620_fu_4143683_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3622_fu_4143695_p2() {
    add_ln703_3622_fu_4143695_p2 = (!mult_250_V_fu_4139689_p1.read().is_01() || !mult_442_V_fu_4141549_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_250_V_fu_4139689_p1.read()) + sc_bigint<16>(mult_442_V_fu_4141549_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3623_fu_4148296_p2() {
    add_ln703_3623_fu_4148296_p2 = (!sext_ln203_1111_fu_4144917_p1.read().is_01() || !sext_ln203_1007_fu_4143813_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1111_fu_4144917_p1.read()) + sc_bigint<14>(sext_ln203_1007_fu_4143813_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3624_fu_4148306_p2() {
    add_ln703_3624_fu_4148306_p2 = (!sext_ln203_1175_fu_4146192_p1.read().is_01() || !sext_ln703_766_fu_4148302_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1175_fu_4146192_p1.read()) + sc_bigint<15>(sext_ln703_766_fu_4148302_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3625_fu_4148316_p2() {
    add_ln703_3625_fu_4148316_p2 = (!add_ln703_3622_reg_4153599.read().is_01() || !sext_ln703_767_fu_4148312_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3622_reg_4153599.read()) + sc_bigint<16>(sext_ln703_767_fu_4148312_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3627_fu_4143701_p2() {
    add_ln703_3627_fu_4143701_p2 = (!mult_123_V_fu_4138675_p1.read().is_01() || !mult_187_V_fu_4139279_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_123_V_fu_4138675_p1.read()) + sc_biguint<16>(mult_187_V_fu_4139279_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3628_fu_4148327_p2() {
    add_ln703_3628_fu_4148327_p2 = (!mult_379_V_fu_4144931_p1.read().is_01() || !mult_315_V_fu_4144168_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_379_V_fu_4144931_p1.read()) + sc_bigint<16>(mult_315_V_fu_4144168_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3629_fu_4148333_p2() {
    add_ln703_3629_fu_4148333_p2 = (!add_ln703_3627_reg_4153604.read().is_01() || !add_ln703_3628_fu_4148327_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3627_reg_4153604.read()) + sc_biguint<16>(add_ln703_3628_fu_4148327_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3630_fu_4148338_p2() {
    add_ln703_3630_fu_4148338_p2 = (!mult_251_V_fu_4144003_p1.read().is_01() || !mult_443_V_fu_4145235_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_251_V_fu_4144003_p1.read()) + sc_bigint<16>(mult_443_V_fu_4145235_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3631_fu_4148344_p2() {
    add_ln703_3631_fu_4148344_p2 = (!sext_ln203_1176_fu_4146228_p1.read().is_01() || !sext_ln203_1008_fu_4143816_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1176_fu_4146228_p1.read()) + sc_bigint<14>(sext_ln203_1008_fu_4143816_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3632_fu_4148354_p2() {
    add_ln703_3632_fu_4148354_p2 = (!sext_ln203_1153_fu_4145443_p1.read().is_01() || !sext_ln703_768_fu_4148350_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1153_fu_4145443_p1.read()) + sc_bigint<15>(sext_ln703_768_fu_4148350_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3633_fu_4148364_p2() {
    add_ln703_3633_fu_4148364_p2 = (!add_ln703_3630_fu_4148338_p2.read().is_01() || !sext_ln703_769_fu_4148360_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3630_fu_4148338_p2.read()) + sc_bigint<16>(sext_ln703_769_fu_4148360_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3635_fu_4138521_p2() {
    add_ln703_3635_fu_4138521_p2 = (!mult_124_V_fu_4137710_p4.read().is_01() || !mult_60_V_fu_4137161_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_124_V_fu_4137710_p4.read()) + sc_biguint<16>(mult_60_V_fu_4137161_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3636_fu_4148377_p2() {
    add_ln703_3636_fu_4148377_p2 = (!mult_572_V_fu_4146242_p1.read().is_01() || !mult_188_V_fu_4143903_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_572_V_fu_4146242_p1.read()) + sc_bigint<16>(mult_188_V_fu_4143903_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3637_fu_4148383_p2() {
    add_ln703_3637_fu_4148383_p2 = (!add_ln703_3635_reg_4152354.read().is_01() || !add_ln703_3636_fu_4148377_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3635_reg_4152354.read()) + sc_biguint<16>(add_ln703_3636_fu_4148377_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3638_fu_4143707_p2() {
    add_ln703_3638_fu_4143707_p2 = (!sext_ln203_1091_fu_4140598_p1.read().is_01() || !sext_ln203_1078_fu_4139737_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1091_fu_4140598_p1.read()) + sc_bigint<15>(sext_ln203_1078_fu_4139737_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3639_fu_4143713_p2() {
    add_ln703_3639_fu_4143713_p2 = (!sext_ln203_1154_fu_4142524_p1.read().is_01() || !sext_ln203_1134_fu_4141573_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1154_fu_4142524_p1.read()) + sc_bigint<15>(sext_ln203_1134_fu_4141573_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3640_fu_4148394_p2() {
    add_ln703_3640_fu_4148394_p2 = (!mult_380_V_fu_4144945_p1.read().is_01() || !sext_ln703_771_fu_4148391_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_380_V_fu_4144945_p1.read()) + sc_bigint<16>(sext_ln703_771_fu_4148391_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3641_fu_4148400_p2() {
    add_ln703_3641_fu_4148400_p2 = (!sext_ln703_770_fu_4148388_p1.read().is_01() || !add_ln703_3640_fu_4148394_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_770_fu_4148388_p1.read()) + sc_biguint<16>(add_ln703_3640_fu_4148394_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3643_fu_4143719_p2() {
    add_ln703_3643_fu_4143719_p2 = (!mult_509_V_fu_4142528_p4.read().is_01() || !mult_445_V_fu_4141577_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_509_V_fu_4142528_p4.read()) + sc_biguint<16>(mult_445_V_fu_4141577_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3644_fu_4148413_p2() {
    add_ln703_3644_fu_4148413_p2 = (!mult_573_V_fu_4146256_p1.read().is_01() || !mult_253_V_fu_4144007_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_573_V_fu_4146256_p1.read()) + sc_bigint<16>(mult_253_V_fu_4144007_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3645_fu_4148419_p2() {
    add_ln703_3645_fu_4148419_p2 = (!add_ln703_3643_reg_4153619.read().is_01() || !add_ln703_3644_fu_4148413_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3643_reg_4153619.read()) + sc_biguint<16>(add_ln703_3644_fu_4148413_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3646_fu_4148424_p2() {
    add_ln703_3646_fu_4148424_p2 = (!sext_ln203_1009_fu_4143819_p1.read().is_01() || !sext_ln203_1112_fu_4144959_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1009_fu_4143819_p1.read()) + sc_bigint<15>(sext_ln203_1112_fu_4144959_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3647_fu_4143725_p2() {
    add_ln703_3647_fu_4143725_p2 = (!sext_ln203_1036_fu_4138678_p1.read().is_01() || !sext_ln203_1092_fu_4140612_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1036_fu_4138678_p1.read()) + sc_bigint<14>(sext_ln203_1092_fu_4140612_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3648_fu_4143735_p2() {
    add_ln703_3648_fu_4143735_p2 = (!sext_ln203_1064_fu_4139309_p1.read().is_01() || !sext_ln703_773_fu_4143731_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1064_fu_4139309_p1.read()) + sc_bigint<15>(sext_ln703_773_fu_4143731_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3649_fu_4148437_p2() {
    add_ln703_3649_fu_4148437_p2 = (!sext_ln703_772_fu_4148430_p1.read().is_01() || !sext_ln703_774_fu_4148434_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_772_fu_4148430_p1.read()) + sc_bigint<16>(sext_ln703_774_fu_4148434_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3651_fu_4143741_p2() {
    add_ln703_3651_fu_4143741_p2 = (!mult_126_V_fu_4138681_p1.read().is_01() || !mult_446_V_fu_4141587_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_126_V_fu_4138681_p1.read()) + sc_biguint<16>(mult_446_V_fu_4141587_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3652_fu_4143747_p2() {
    add_ln703_3652_fu_4143747_p2 = (!mult_510_V_fu_4142548_p1.read().is_01() || !mult_190_V_fu_4139323_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_510_V_fu_4142548_p1.read()) + sc_bigint<16>(mult_190_V_fu_4139323_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3653_fu_4143753_p2() {
    add_ln703_3653_fu_4143753_p2 = (!add_ln703_3651_fu_4143741_p2.read().is_01() || !add_ln703_3652_fu_4143747_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3651_fu_4143741_p2.read()) + sc_biguint<16>(add_ln703_3652_fu_4143747_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3654_fu_4148450_p2() {
    add_ln703_3654_fu_4148450_p2 = (!mult_254_V_fu_4144010_p1.read().is_01() || !mult_574_V_fu_4146270_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_254_V_fu_4144010_p1.read()) + sc_bigint<16>(mult_574_V_fu_4146270_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3655_fu_4148456_p2() {
    add_ln703_3655_fu_4148456_p2 = (!sext_ln203_1093_fu_4144181_p1.read().is_01() || !sext_ln203_1010_fu_4143822_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1093_fu_4144181_p1.read()) + sc_bigint<14>(sext_ln203_1010_fu_4143822_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3656_fu_4148466_p2() {
    add_ln703_3656_fu_4148466_p2 = (!sext_ln203_1113_fu_4144973_p1.read().is_01() || !sext_ln703_775_fu_4148462_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1113_fu_4144973_p1.read()) + sc_bigint<15>(sext_ln703_775_fu_4148462_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3657_fu_4148476_p2() {
    add_ln703_3657_fu_4148476_p2 = (!add_ln703_3654_fu_4148450_p2.read().is_01() || !sext_ln703_776_fu_4148472_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3654_fu_4148450_p2.read()) + sc_bigint<16>(sext_ln703_776_fu_4148472_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3659_fu_4143759_p2() {
    add_ln703_3659_fu_4143759_p2 = (!mult_63_V_fu_4138593_p1.read().is_01() || !mult_319_V_fu_4140633_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_63_V_fu_4138593_p1.read()) + sc_biguint<16>(mult_319_V_fu_4140633_p4.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3660_fu_4148488_p2() {
    add_ln703_3660_fu_4148488_p2 = (!mult_383_V_fu_4144987_p1.read().is_01() || !mult_127_V_fu_4143867_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_383_V_fu_4144987_p1.read()) + sc_bigint<16>(mult_127_V_fu_4143867_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3661_fu_4148494_p2() {
    add_ln703_3661_fu_4148494_p2 = (!add_ln703_3659_reg_4153634.read().is_01() || !add_ln703_3660_fu_4148488_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3659_reg_4153634.read()) + sc_biguint<16>(add_ln703_3660_fu_4148488_p2.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3662_fu_4143765_p2() {
    add_ln703_3662_fu_4143765_p2 = (!mult_255_V_fu_4139771_p1.read().is_01() || !mult_447_V_fu_4141607_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_255_V_fu_4139771_p1.read()) + sc_bigint<16>(mult_447_V_fu_4141607_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3663_fu_4148499_p2() {
    add_ln703_3663_fu_4148499_p2 = (!sext_ln203_1177_fu_4146284_p1.read().is_01() || !sext_ln203_1155_fu_4145447_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_1177_fu_4146284_p1.read()) + sc_bigint<14>(sext_ln203_1155_fu_4145447_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3664_fu_4148509_p2() {
    add_ln703_3664_fu_4148509_p2 = (!sext_ln203_1065_fu_4143906_p1.read().is_01() || !sext_ln703_777_fu_4148505_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_1065_fu_4143906_p1.read()) + sc_bigint<15>(sext_ln703_777_fu_4148505_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_3665_fu_4148519_p2() {
    add_ln703_3665_fu_4148519_p2 = (!add_ln703_3662_reg_4153639.read().is_01() || !sext_ln703_778_fu_4148515_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3662_reg_4153639.read()) + sc_bigint<16>(sext_ln703_778_fu_4148515_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_add_ln703_fu_4142747_p2() {
    add_ln703_fu_4142747_p2 = (!mult_128_V_fu_4138684_p4.read().is_01() || !mult_0_V_reg_4151644.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_128_V_fu_4138684_p4.read()) + sc_biguint<16>(mult_0_V_reg_4151644.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_and_ln266_1_fu_4129203_p2() {
    and_ln266_1_fu_4129203_p2 = (icmp_ln266_2_fu_4129171_p2.read() & icmp_ln266_3_fu_4129191_p2.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_and_ln266_2_fu_4129209_p2() {
    and_ln266_2_fu_4129209_p2 = (and_ln266_1_fu_4129203_p2.read() & and_ln266_fu_4129197_p2.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_and_ln266_fu_4129197_p2() {
    and_ln266_fu_4129197_p2 = (icmp_ln266_fu_4129141_p2.read() & icmp_ln266_1_fu_4129151_p2.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_ap_block_state7() {
    ap_block_state7 = (esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_ap_predicate_op6164_write_state7() {
    ap_predicate_op6164_write_state7 = (esl_seteq<1,1,1>(icmp_ln63_reg_4148531.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(and_ln266_2_reg_4148577.read(), ap_const_lv1_1));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_ap_ready() {
    ap_ready = internal_ap_ready.read();
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_0_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_0_V_blk_n = data_V_data_0_V_empty_n.read();
    } else {
        data_V_data_0_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_0_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_0_V_read = ap_const_logic_1;
    } else {
        data_V_data_0_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_10_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_10_V_blk_n = data_V_data_10_V_empty_n.read();
    } else {
        data_V_data_10_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_10_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_10_V_read = ap_const_logic_1;
    } else {
        data_V_data_10_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_11_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_11_V_blk_n = data_V_data_11_V_empty_n.read();
    } else {
        data_V_data_11_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_11_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_11_V_read = ap_const_logic_1;
    } else {
        data_V_data_11_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_12_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_12_V_blk_n = data_V_data_12_V_empty_n.read();
    } else {
        data_V_data_12_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_12_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_12_V_read = ap_const_logic_1;
    } else {
        data_V_data_12_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_13_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_13_V_blk_n = data_V_data_13_V_empty_n.read();
    } else {
        data_V_data_13_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_13_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_13_V_read = ap_const_logic_1;
    } else {
        data_V_data_13_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_14_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_14_V_blk_n = data_V_data_14_V_empty_n.read();
    } else {
        data_V_data_14_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_14_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_14_V_read = ap_const_logic_1;
    } else {
        data_V_data_14_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_15_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_15_V_blk_n = data_V_data_15_V_empty_n.read();
    } else {
        data_V_data_15_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_15_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_15_V_read = ap_const_logic_1;
    } else {
        data_V_data_15_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_16_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_16_V_blk_n = data_V_data_16_V_empty_n.read();
    } else {
        data_V_data_16_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_16_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_16_V_read = ap_const_logic_1;
    } else {
        data_V_data_16_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_17_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_17_V_blk_n = data_V_data_17_V_empty_n.read();
    } else {
        data_V_data_17_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_17_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_17_V_read = ap_const_logic_1;
    } else {
        data_V_data_17_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_18_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_18_V_blk_n = data_V_data_18_V_empty_n.read();
    } else {
        data_V_data_18_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_18_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_18_V_read = ap_const_logic_1;
    } else {
        data_V_data_18_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_19_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_19_V_blk_n = data_V_data_19_V_empty_n.read();
    } else {
        data_V_data_19_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_19_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_19_V_read = ap_const_logic_1;
    } else {
        data_V_data_19_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_1_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_1_V_blk_n = data_V_data_1_V_empty_n.read();
    } else {
        data_V_data_1_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_1_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_1_V_read = ap_const_logic_1;
    } else {
        data_V_data_1_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_20_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_20_V_blk_n = data_V_data_20_V_empty_n.read();
    } else {
        data_V_data_20_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_20_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_20_V_read = ap_const_logic_1;
    } else {
        data_V_data_20_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_21_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_21_V_blk_n = data_V_data_21_V_empty_n.read();
    } else {
        data_V_data_21_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_21_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_21_V_read = ap_const_logic_1;
    } else {
        data_V_data_21_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_22_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_22_V_blk_n = data_V_data_22_V_empty_n.read();
    } else {
        data_V_data_22_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_22_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_22_V_read = ap_const_logic_1;
    } else {
        data_V_data_22_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_23_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_23_V_blk_n = data_V_data_23_V_empty_n.read();
    } else {
        data_V_data_23_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_23_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_23_V_read = ap_const_logic_1;
    } else {
        data_V_data_23_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_24_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_24_V_blk_n = data_V_data_24_V_empty_n.read();
    } else {
        data_V_data_24_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_24_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_24_V_read = ap_const_logic_1;
    } else {
        data_V_data_24_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_25_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_25_V_blk_n = data_V_data_25_V_empty_n.read();
    } else {
        data_V_data_25_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_25_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_25_V_read = ap_const_logic_1;
    } else {
        data_V_data_25_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_26_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_26_V_blk_n = data_V_data_26_V_empty_n.read();
    } else {
        data_V_data_26_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_26_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_26_V_read = ap_const_logic_1;
    } else {
        data_V_data_26_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_27_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_27_V_blk_n = data_V_data_27_V_empty_n.read();
    } else {
        data_V_data_27_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_27_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_27_V_read = ap_const_logic_1;
    } else {
        data_V_data_27_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_28_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_28_V_blk_n = data_V_data_28_V_empty_n.read();
    } else {
        data_V_data_28_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_28_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_28_V_read = ap_const_logic_1;
    } else {
        data_V_data_28_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_29_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_29_V_blk_n = data_V_data_29_V_empty_n.read();
    } else {
        data_V_data_29_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_29_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_29_V_read = ap_const_logic_1;
    } else {
        data_V_data_29_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_2_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_2_V_blk_n = data_V_data_2_V_empty_n.read();
    } else {
        data_V_data_2_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_2_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_2_V_read = ap_const_logic_1;
    } else {
        data_V_data_2_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_30_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_30_V_blk_n = data_V_data_30_V_empty_n.read();
    } else {
        data_V_data_30_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_30_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_30_V_read = ap_const_logic_1;
    } else {
        data_V_data_30_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_31_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_31_V_blk_n = data_V_data_31_V_empty_n.read();
    } else {
        data_V_data_31_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_31_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_31_V_read = ap_const_logic_1;
    } else {
        data_V_data_31_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_32_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_32_V_blk_n = data_V_data_32_V_empty_n.read();
    } else {
        data_V_data_32_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_32_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_32_V_read = ap_const_logic_1;
    } else {
        data_V_data_32_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_33_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_33_V_blk_n = data_V_data_33_V_empty_n.read();
    } else {
        data_V_data_33_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_33_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_33_V_read = ap_const_logic_1;
    } else {
        data_V_data_33_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_34_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_34_V_blk_n = data_V_data_34_V_empty_n.read();
    } else {
        data_V_data_34_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_34_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_34_V_read = ap_const_logic_1;
    } else {
        data_V_data_34_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_35_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_35_V_blk_n = data_V_data_35_V_empty_n.read();
    } else {
        data_V_data_35_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_35_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_35_V_read = ap_const_logic_1;
    } else {
        data_V_data_35_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_36_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_36_V_blk_n = data_V_data_36_V_empty_n.read();
    } else {
        data_V_data_36_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_36_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_36_V_read = ap_const_logic_1;
    } else {
        data_V_data_36_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_37_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_37_V_blk_n = data_V_data_37_V_empty_n.read();
    } else {
        data_V_data_37_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_37_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_37_V_read = ap_const_logic_1;
    } else {
        data_V_data_37_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_38_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_38_V_blk_n = data_V_data_38_V_empty_n.read();
    } else {
        data_V_data_38_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_38_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_38_V_read = ap_const_logic_1;
    } else {
        data_V_data_38_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_39_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_39_V_blk_n = data_V_data_39_V_empty_n.read();
    } else {
        data_V_data_39_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_39_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_39_V_read = ap_const_logic_1;
    } else {
        data_V_data_39_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_3_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_3_V_blk_n = data_V_data_3_V_empty_n.read();
    } else {
        data_V_data_3_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_3_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_3_V_read = ap_const_logic_1;
    } else {
        data_V_data_3_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_40_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_40_V_blk_n = data_V_data_40_V_empty_n.read();
    } else {
        data_V_data_40_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_40_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_40_V_read = ap_const_logic_1;
    } else {
        data_V_data_40_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_41_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_41_V_blk_n = data_V_data_41_V_empty_n.read();
    } else {
        data_V_data_41_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_41_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_41_V_read = ap_const_logic_1;
    } else {
        data_V_data_41_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_42_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_42_V_blk_n = data_V_data_42_V_empty_n.read();
    } else {
        data_V_data_42_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_42_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_42_V_read = ap_const_logic_1;
    } else {
        data_V_data_42_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_43_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_43_V_blk_n = data_V_data_43_V_empty_n.read();
    } else {
        data_V_data_43_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_43_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_43_V_read = ap_const_logic_1;
    } else {
        data_V_data_43_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_44_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_44_V_blk_n = data_V_data_44_V_empty_n.read();
    } else {
        data_V_data_44_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_44_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_44_V_read = ap_const_logic_1;
    } else {
        data_V_data_44_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_45_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_45_V_blk_n = data_V_data_45_V_empty_n.read();
    } else {
        data_V_data_45_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_45_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_45_V_read = ap_const_logic_1;
    } else {
        data_V_data_45_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_46_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_46_V_blk_n = data_V_data_46_V_empty_n.read();
    } else {
        data_V_data_46_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_46_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_46_V_read = ap_const_logic_1;
    } else {
        data_V_data_46_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_47_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_47_V_blk_n = data_V_data_47_V_empty_n.read();
    } else {
        data_V_data_47_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_47_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_47_V_read = ap_const_logic_1;
    } else {
        data_V_data_47_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_48_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_48_V_blk_n = data_V_data_48_V_empty_n.read();
    } else {
        data_V_data_48_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_48_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_48_V_read = ap_const_logic_1;
    } else {
        data_V_data_48_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_49_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_49_V_blk_n = data_V_data_49_V_empty_n.read();
    } else {
        data_V_data_49_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_49_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_49_V_read = ap_const_logic_1;
    } else {
        data_V_data_49_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_4_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_4_V_blk_n = data_V_data_4_V_empty_n.read();
    } else {
        data_V_data_4_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_4_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_4_V_read = ap_const_logic_1;
    } else {
        data_V_data_4_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_50_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_50_V_blk_n = data_V_data_50_V_empty_n.read();
    } else {
        data_V_data_50_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_50_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_50_V_read = ap_const_logic_1;
    } else {
        data_V_data_50_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_51_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_51_V_blk_n = data_V_data_51_V_empty_n.read();
    } else {
        data_V_data_51_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_51_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_51_V_read = ap_const_logic_1;
    } else {
        data_V_data_51_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_52_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_52_V_blk_n = data_V_data_52_V_empty_n.read();
    } else {
        data_V_data_52_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_52_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_52_V_read = ap_const_logic_1;
    } else {
        data_V_data_52_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_53_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_53_V_blk_n = data_V_data_53_V_empty_n.read();
    } else {
        data_V_data_53_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_53_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_53_V_read = ap_const_logic_1;
    } else {
        data_V_data_53_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_54_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_54_V_blk_n = data_V_data_54_V_empty_n.read();
    } else {
        data_V_data_54_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_54_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_54_V_read = ap_const_logic_1;
    } else {
        data_V_data_54_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_55_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_55_V_blk_n = data_V_data_55_V_empty_n.read();
    } else {
        data_V_data_55_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_55_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_55_V_read = ap_const_logic_1;
    } else {
        data_V_data_55_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_56_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_56_V_blk_n = data_V_data_56_V_empty_n.read();
    } else {
        data_V_data_56_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_56_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_56_V_read = ap_const_logic_1;
    } else {
        data_V_data_56_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_57_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_57_V_blk_n = data_V_data_57_V_empty_n.read();
    } else {
        data_V_data_57_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_57_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_57_V_read = ap_const_logic_1;
    } else {
        data_V_data_57_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_58_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_58_V_blk_n = data_V_data_58_V_empty_n.read();
    } else {
        data_V_data_58_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_58_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_58_V_read = ap_const_logic_1;
    } else {
        data_V_data_58_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_59_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_59_V_blk_n = data_V_data_59_V_empty_n.read();
    } else {
        data_V_data_59_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_59_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_59_V_read = ap_const_logic_1;
    } else {
        data_V_data_59_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_5_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_5_V_blk_n = data_V_data_5_V_empty_n.read();
    } else {
        data_V_data_5_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_5_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_5_V_read = ap_const_logic_1;
    } else {
        data_V_data_5_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_60_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_60_V_blk_n = data_V_data_60_V_empty_n.read();
    } else {
        data_V_data_60_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_60_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_60_V_read = ap_const_logic_1;
    } else {
        data_V_data_60_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_61_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_61_V_blk_n = data_V_data_61_V_empty_n.read();
    } else {
        data_V_data_61_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_61_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_61_V_read = ap_const_logic_1;
    } else {
        data_V_data_61_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_62_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_62_V_blk_n = data_V_data_62_V_empty_n.read();
    } else {
        data_V_data_62_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_62_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_62_V_read = ap_const_logic_1;
    } else {
        data_V_data_62_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_63_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_63_V_blk_n = data_V_data_63_V_empty_n.read();
    } else {
        data_V_data_63_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_63_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_63_V_read = ap_const_logic_1;
    } else {
        data_V_data_63_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_6_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_6_V_blk_n = data_V_data_6_V_empty_n.read();
    } else {
        data_V_data_6_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_6_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_6_V_read = ap_const_logic_1;
    } else {
        data_V_data_6_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_7_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_7_V_blk_n = data_V_data_7_V_empty_n.read();
    } else {
        data_V_data_7_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_7_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_7_V_read = ap_const_logic_1;
    } else {
        data_V_data_7_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_8_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_8_V_blk_n = data_V_data_8_V_empty_n.read();
    } else {
        data_V_data_8_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_8_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_8_V_read = ap_const_logic_1;
    } else {
        data_V_data_8_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_9_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        data_V_data_9_V_blk_n = data_V_data_9_V_empty_n.read();
    } else {
        data_V_data_9_V_blk_n = ap_const_logic_1;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_data_V_data_9_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1))) {
        data_V_data_9_V_read = ap_const_logic_1;
    } else {
        data_V_data_9_V_read = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129244_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)))) {
        grp_fu_4129244_ce = ap_const_logic_1;
    } else {
        grp_fu_4129244_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129244_p0() {
    grp_fu_4129244_p0 = esl_sext<21,17>(shl_ln1118_409_fu_4129232_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129244_p1() {
    grp_fu_4129244_p1 = esl_sext<21,20>(shl_ln1118_408_fu_4129220_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129322_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)))) {
        grp_fu_4129322_ce = ap_const_logic_1;
    } else {
        grp_fu_4129322_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129322_p1() {
    grp_fu_4129322_p1 = esl_sext<22,21>(shl_ln1118_410_fu_4129310_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129354_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)))) {
        grp_fu_4129354_ce = ap_const_logic_1;
    } else {
        grp_fu_4129354_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129354_p0() {
    grp_fu_4129354_p0 = esl_sext<21,16>(sext_ln1118_861_fu_4129338_p0.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129354_p1() {
    grp_fu_4129354_p1 = esl_sext<21,20>(shl_ln1118_411_fu_4129342_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129469_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)))) {
        grp_fu_4129469_ce = ap_const_logic_1;
    } else {
        grp_fu_4129469_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129469_p0() {
    grp_fu_4129469_p0 = esl_sext<22,21>(shl_ln1118_416_fu_4129445_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129469_p1() {
    grp_fu_4129469_p1 = esl_sext<22,17>(shl_ln1118_417_fu_4129457_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129504_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)))) {
        grp_fu_4129504_ce = ap_const_logic_1;
    } else {
        grp_fu_4129504_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129504_p0() {
    grp_fu_4129504_p0 = esl_sext<22,17>(shl_ln1118_419_fu_4129492_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129504_p1() {
    grp_fu_4129504_p1 = esl_sext<22,21>(shl_ln1118_418_fu_4129480_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129559_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)))) {
        grp_fu_4129559_ce = ap_const_logic_1;
    } else {
        grp_fu_4129559_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129559_p0() {
    grp_fu_4129559_p0 = esl_sext<21,17>(shl_ln1118_421_fu_4129547_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129559_p1() {
    grp_fu_4129559_p1 = esl_sext<21,20>(shl_ln1118_420_fu_4129535_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129587_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)))) {
        grp_fu_4129587_ce = ap_const_logic_1;
    } else {
        grp_fu_4129587_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129587_p1() {
    grp_fu_4129587_p1 = esl_sext<21,20>(shl_ln1118_422_fu_4129575_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129622_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)))) {
        grp_fu_4129622_ce = ap_const_logic_1;
    } else {
        grp_fu_4129622_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129622_p0() {
    grp_fu_4129622_p0 = esl_sext<23,17>(shl_ln1118_424_fu_4129610_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129622_p1() {
    grp_fu_4129622_p1 = esl_sext<23,22>(shl_ln1118_423_fu_4129598_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129654_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)))) {
        grp_fu_4129654_ce = ap_const_logic_1;
    } else {
        grp_fu_4129654_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129654_p0() {
    grp_fu_4129654_p0 = esl_sext<23,16>(sext_ln1118_909_fu_4129638_p0.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129654_p1() {
    grp_fu_4129654_p1 = esl_sext<23,22>(tmp_21_fu_4129642_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129971_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)))) {
        grp_fu_4129971_ce = ap_const_logic_1;
    } else {
        grp_fu_4129971_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129971_p0() {
    grp_fu_4129971_p0 = esl_sext<24,23>(shl_ln1118_473_fu_4129959_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129971_p1() {
    grp_fu_4129971_p1 = esl_sext<24,16>(sext_ln1118_1080_fu_4129955_p0.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129989_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)))) {
        grp_fu_4129989_ce = ap_const_logic_1;
    } else {
        grp_fu_4129989_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4129989_p1() {
    grp_fu_4129989_p1 = esl_sext<24,23>(shl_ln1118_474_fu_4129977_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4130040_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)))) {
        grp_fu_4130040_ce = ap_const_logic_1;
    } else {
        grp_fu_4130040_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4130040_p0() {
    grp_fu_4130040_p0 = (!ap_const_lv20_0.is_01() || !sext_ln1118_1086_fu_4130018_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_0) - sc_bigint<20>(sext_ln1118_1086_fu_4130018_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4130040_p1() {
    grp_fu_4130040_p1 = esl_sext<20,17>(shl_ln1118_476_fu_4130028_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4130095_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)))) {
        grp_fu_4130095_ce = ap_const_logic_1;
    } else {
        grp_fu_4130095_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4130095_p0() {
    grp_fu_4130095_p0 = esl_sext<21,18>(shl_ln1118_478_fu_4130083_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4130095_p1() {
    grp_fu_4130095_p1 = esl_sext<21,20>(shl_ln1118_477_fu_4130071_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4130175_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)))) {
        grp_fu_4130175_ce = ap_const_logic_1;
    } else {
        grp_fu_4130175_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4130175_p0() {
    grp_fu_4130175_p0 = esl_sext<25,18>(shl_ln1118_480_fu_4130163_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4130175_p1() {
    grp_fu_4130175_p1 = esl_sext<25,24>(shl_ln1118_479_fu_4130151_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133130_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133130_ce = ap_const_logic_1;
    } else {
        grp_fu_4133130_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133130_p0() {
    grp_fu_4133130_p0 = esl_sext<23,20>(shl_ln1118_s_fu_4133118_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133130_p1() {
    grp_fu_4133130_p1 = esl_sext<23,22>(shl_ln_fu_4133106_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133172_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133172_ce = ap_const_logic_1;
    } else {
        grp_fu_4133172_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133172_p0() {
    grp_fu_4133172_p0 = esl_sext<22,16>(sext_ln1118_859_fu_4133156_p0.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133172_p1() {
    grp_fu_4133172_p1 = esl_sext<22,21>(tmp_fu_4133160_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133212_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133212_ce = ap_const_logic_1;
    } else {
        grp_fu_4133212_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133212_p0() {
    grp_fu_4133212_p0 = esl_sext<24,20>(shl_ln1118_413_fu_4133200_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133212_p1() {
    grp_fu_4133212_p1 = esl_sext<24,23>(shl_ln1118_412_fu_4133188_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133242_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133242_ce = ap_const_logic_1;
    } else {
        grp_fu_4133242_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133242_p0() {
    grp_fu_4133242_p0 = esl_sext<23,18>(shl_ln1118_415_fu_4133230_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133242_p1() {
    grp_fu_4133242_p1 = esl_sext<23,22>(shl_ln1118_414_fu_4133218_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133294_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133294_ce = ap_const_logic_1;
    } else {
        grp_fu_4133294_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133294_p0() {
    grp_fu_4133294_p0 = esl_sext<24,16>(sext_ln1118_898_fu_4133278_p0.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133294_p1() {
    grp_fu_4133294_p1 = esl_sext<24,23>(tmp_20_fu_4133282_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133303_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133303_ce = ap_const_logic_1;
    } else {
        grp_fu_4133303_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133303_p1() {
    grp_fu_4133303_p1 = esl_sext<21,16>(kernel_data_V_2_115_load_reg_4148540.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133335_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133335_ce = ap_const_logic_1;
    } else {
        grp_fu_4133335_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133335_p1() {
    grp_fu_4133335_p1 = esl_sext<23,22>(shl_ln1118_425_fu_4133323_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133363_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133363_ce = ap_const_logic_1;
    } else {
        grp_fu_4133363_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133363_p1() {
    grp_fu_4133363_p1 = esl_sext<23,22>(shl_ln1118_427_fu_4133351_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133393_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133393_ce = ap_const_logic_1;
    } else {
        grp_fu_4133393_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133393_p0() {
    grp_fu_4133393_p0 = esl_sext<23,17>(shl_ln1118_430_fu_4133381_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133393_p1() {
    grp_fu_4133393_p1 = esl_sext<23,22>(shl_ln1118_429_fu_4133369_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133411_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133411_ce = ap_const_logic_1;
    } else {
        grp_fu_4133411_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133411_p1() {
    grp_fu_4133411_p1 = esl_sext<25,24>(shl_ln1118_431_fu_4133399_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133465_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133465_ce = ap_const_logic_1;
    } else {
        grp_fu_4133465_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133465_p0() {
    grp_fu_4133465_p0 = esl_sext<23,16>(sext_ln1118_926_fu_4133449_p0.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133465_p1() {
    grp_fu_4133465_p1 = esl_sext<23,22>(shl_ln1118_434_fu_4133453_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133495_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133495_ce = ap_const_logic_1;
    } else {
        grp_fu_4133495_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133495_p0() {
    grp_fu_4133495_p0 = esl_sext<25,24>(shl_ln1118_435_fu_4133471_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133495_p1() {
    grp_fu_4133495_p1 = esl_sext<25,19>(shl_ln1118_436_fu_4133483_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133525_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133525_ce = ap_const_logic_1;
    } else {
        grp_fu_4133525_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133525_p0() {
    grp_fu_4133525_p0 = esl_sext<24,21>(shl_ln1118_438_fu_4133513_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133525_p1() {
    grp_fu_4133525_p1 = esl_sext<24,23>(shl_ln1118_437_fu_4133501_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133547_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133547_ce = ap_const_logic_1;
    } else {
        grp_fu_4133547_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133547_p0() {
    grp_fu_4133547_p0 = esl_sext<25,16>(sext_ln1118_944_fu_4133531_p0.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133547_p1() {
    grp_fu_4133547_p1 = esl_sext<25,24>(shl_ln1118_439_fu_4133535_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133577_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133577_ce = ap_const_logic_1;
    } else {
        grp_fu_4133577_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133577_p0() {
    grp_fu_4133577_p0 = esl_sext<22,17>(shl_ln1118_441_fu_4133565_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133577_p1() {
    grp_fu_4133577_p1 = esl_sext<22,21>(shl_ln1118_440_fu_4133553_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133599_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133599_ce = ap_const_logic_1;
    } else {
        grp_fu_4133599_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133599_p0() {
    grp_fu_4133599_p0 = esl_sext<24,23>(shl_ln1118_442_fu_4133587_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133599_p1() {
    grp_fu_4133599_p1 = esl_sext<24,16>(sext_ln1118_949_fu_4133583_p0.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133629_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133629_ce = ap_const_logic_1;
    } else {
        grp_fu_4133629_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133629_p0() {
    grp_fu_4133629_p0 = esl_sext<24,17>(shl_ln1118_444_fu_4133617_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133629_p1() {
    grp_fu_4133629_p1 = esl_sext<24,23>(shl_ln1118_443_fu_4133605_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133651_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133651_ce = ap_const_logic_1;
    } else {
        grp_fu_4133651_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133651_p0() {
    grp_fu_4133651_p0 = esl_sext<21,20>(shl_ln1118_445_fu_4133639_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133651_p1() {
    grp_fu_4133651_p1 = esl_sext<21,16>(sext_ln1118_958_fu_4133635_p0.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133669_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133669_ce = ap_const_logic_1;
    } else {
        grp_fu_4133669_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133669_p1() {
    grp_fu_4133669_p1 = esl_sext<23,22>(shl_ln1118_446_fu_4133657_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133699_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133699_ce = ap_const_logic_1;
    } else {
        grp_fu_4133699_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133699_p0() {
    grp_fu_4133699_p0 = esl_sext<23,19>(shl_ln1118_449_fu_4133687_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133699_p1() {
    grp_fu_4133699_p1 = esl_sext<23,22>(shl_ln1118_448_fu_4133675_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133729_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133729_ce = ap_const_logic_1;
    } else {
        grp_fu_4133729_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133729_p0() {
    grp_fu_4133729_p0 = esl_sext<25,17>(shl_ln1118_451_fu_4133717_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133729_p1() {
    grp_fu_4133729_p1 = esl_sext<25,24>(shl_ln1118_450_fu_4133705_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133759_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133759_ce = ap_const_logic_1;
    } else {
        grp_fu_4133759_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133759_p0() {
    grp_fu_4133759_p0 = esl_sext<24,20>(shl_ln1118_453_fu_4133747_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133759_p1() {
    grp_fu_4133759_p1 = esl_sext<24,23>(shl_ln1118_452_fu_4133735_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133928_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133928_ce = ap_const_logic_1;
    } else {
        grp_fu_4133928_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133928_p1() {
    grp_fu_4133928_p1 = esl_sext<24,23>(shl_ln1118_457_fu_4133916_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133980_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4133980_ce = ap_const_logic_1;
    } else {
        grp_fu_4133980_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133980_p0() {
    grp_fu_4133980_p0 = esl_sext<21,20>(shl_ln1118_459_fu_4133968_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4133980_p1() {
    grp_fu_4133980_p1 = esl_sext<21,16>(sext_ln1118_1020_fu_4133964_p0.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4134035_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4134035_ce = ap_const_logic_1;
    } else {
        grp_fu_4134035_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4134035_p0() {
    grp_fu_4134035_p0 = esl_sext<25,17>(shl_ln1118_461_fu_4134023_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4134035_p1() {
    grp_fu_4134035_p1 = esl_sext<25,24>(shl_ln1118_460_fu_4134011_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4134073_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4134073_ce = ap_const_logic_1;
    } else {
        grp_fu_4134073_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4134073_p1() {
    grp_fu_4134073_p1 = esl_sext<22,21>(shl_ln1118_462_fu_4134061_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4134103_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4134103_ce = ap_const_logic_1;
    } else {
        grp_fu_4134103_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4134103_p0() {
    grp_fu_4134103_p0 = esl_sext<23,19>(shl_ln1118_465_fu_4134091_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4134103_p1() {
    grp_fu_4134103_p1 = esl_sext<23,22>(shl_ln1118_464_fu_4134079_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4134158_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4134158_ce = ap_const_logic_1;
    } else {
        grp_fu_4134158_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4134158_p0() {
    grp_fu_4134158_p0 = esl_sext<22,21>(shl_ln1118_466_fu_4134134_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4134158_p1() {
    grp_fu_4134158_p1 = esl_sext<22,17>(shl_ln1118_467_fu_4134146_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4134233_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4134233_ce = ap_const_logic_1;
    } else {
        grp_fu_4134233_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4134233_p0() {
    grp_fu_4134233_p0 = esl_sext<22,21>(shl_ln1118_468_fu_4134209_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4134233_p1() {
    grp_fu_4134233_p1 = esl_sext<22,19>(shl_ln1118_469_fu_4134221_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4134266_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4134266_ce = ap_const_logic_1;
    } else {
        grp_fu_4134266_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4134266_p1() {
    grp_fu_4134266_p1 = esl_sext<25,24>(shl_ln1118_470_fu_4134254_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4134288_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4134288_ce = ap_const_logic_1;
    } else {
        grp_fu_4134288_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4134288_p0() {
    grp_fu_4134288_p0 = esl_sext<24,16>(sext_ln1118_1059_fu_4134272_p0.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4134288_p1() {
    grp_fu_4134288_p1 = esl_sext<24,23>(tmp_23_fu_4134276_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4135672_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4135672_ce = ap_const_logic_1;
    } else {
        grp_fu_4135672_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4135677_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4135677_ce = ap_const_logic_1;
    } else {
        grp_fu_4135677_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4135699_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4135699_ce = ap_const_logic_1;
    } else {
        grp_fu_4135699_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4135704_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        grp_fu_4135704_ce = ap_const_logic_1;
    } else {
        grp_fu_4135704_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4135793_p1() {
    grp_fu_4135793_p1 = esl_sext<23,20>(shl_ln1118_426_fu_4135782_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4135810_p1() {
    grp_fu_4135810_p1 = esl_sext<23,17>(shl_ln1118_428_fu_4135799_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4135837_p1() {
    grp_fu_4135837_p1 = esl_sext<25,20>(shl_ln1118_432_fu_4135826_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4135938_p1() {
    grp_fu_4135938_p1 = esl_sext<23,17>(shl_ln1118_447_fu_4135927_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4135985_p1() {
    grp_fu_4135985_p1 = esl_sext<24,20>(shl_ln1118_458_fu_4135974_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4136026_p1() {
    grp_fu_4136026_p1 = esl_sext<22,17>(shl_ln1118_463_fu_4136015_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4137694_p1() {
    grp_fu_4137694_p1 = esl_sext<26,25>(shl_ln1118_455_fu_4137683_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4138154_p0() {
    grp_fu_4138154_p0 = esl_sext<22,21>(shl_ln1118_486_fu_4138130_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4138154_p1() {
    grp_fu_4138154_p1 = esl_sext<22,17>(shl_ln1118_487_fu_4138142_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4138172_p1() {
    grp_fu_4138172_p1 = esl_sext<23,22>(shl_ln1118_497_fu_4138160_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4138190_p1() {
    grp_fu_4138190_p1 = esl_sext<23,22>(shl_ln1118_505_fu_4138178_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4138220_p0() {
    grp_fu_4138220_p0 = esl_sext<23,19>(shl_ln1118_510_fu_4138208_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4138220_p1() {
    grp_fu_4138220_p1 = esl_sext<23,22>(shl_ln1118_509_fu_4138196_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4138250_p0() {
    grp_fu_4138250_p0 = esl_sext<23,22>(shl_ln1118_511_fu_4138226_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4138250_p1() {
    grp_fu_4138250_p1 = esl_sext<23,19>(shl_ln1118_512_fu_4138238_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4138280_p0() {
    grp_fu_4138280_p0 = esl_sext<24,21>(shl_ln1118_520_fu_4138268_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4138280_p1() {
    grp_fu_4138280_p1 = esl_sext<24,23>(shl_ln1118_519_fu_4138256_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4138298_p1() {
    grp_fu_4138298_p1 = esl_sext<24,23>(shl_ln1118_544_fu_4138286_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4138326_p0() {
    grp_fu_4138326_p0 = (!ap_const_lv20_0.is_01() || !sext_ln1118_1438_fu_4138316_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_0) - sc_bigint<20>(sext_ln1118_1438_fu_4138316_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4138326_p1() {
    grp_fu_4138326_p1 = esl_sext<20,16>(sext_ln1118_1437_fu_4138304_p0.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4138344_p1() {
    grp_fu_4138344_p1 = esl_sext<23,22>(shl_ln1118_568_fu_4138332_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4138362_p1() {
    grp_fu_4138362_p1 = esl_sext<25,24>(shl_ln1118_570_fu_4138350_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4138380_p1() {
    grp_fu_4138380_p1 = esl_sext<25,24>(shl_ln1118_573_fu_4138368_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139461_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4139461_ce = ap_const_logic_1;
    } else {
        grp_fu_4139461_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139461_p0() {
    grp_fu_4139461_p0 = esl_sext<25,24>(shl_ln1118_481_fu_4139437_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139461_p1() {
    grp_fu_4139461_p1 = esl_sext<25,20>(shl_ln1118_482_fu_4139449_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139495_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4139495_ce = ap_const_logic_1;
    } else {
        grp_fu_4139495_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139495_p0() {
    grp_fu_4139495_p0 = esl_sext<25,18>(shl_ln1118_484_fu_4139483_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139495_p1() {
    grp_fu_4139495_p1 = esl_sext<25,24>(shl_ln1118_483_fu_4139471_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139527_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4139527_ce = ap_const_logic_1;
    } else {
        grp_fu_4139527_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139527_p0() {
    grp_fu_4139527_p0 = (!ap_const_lv20_0.is_01() || !sext_ln1118_1124_fu_4139517_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_0) - sc_bigint<20>(sext_ln1118_1124_fu_4139517_p1.read()));
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139527_p1() {
    grp_fu_4139527_p1 = esl_sext<20,16>(sext_ln1118_1123_fu_4139505_p0.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139721_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4139721_ce = ap_const_logic_1;
    } else {
        grp_fu_4139721_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139721_p0() {
    grp_fu_4139721_p0 = esl_sext<24,21>(shl_ln1118_489_fu_4139709_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139721_p1() {
    grp_fu_4139721_p1 = esl_sext<24,23>(shl_ln1118_488_fu_4139697_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139799_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4139799_ce = ap_const_logic_1;
    } else {
        grp_fu_4139799_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139799_p0() {
    grp_fu_4139799_p0 = esl_sext<26,25>(shl_ln1118_490_fu_4139775_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139799_p1() {
    grp_fu_4139799_p1 = esl_sext<26,23>(shl_ln1118_491_fu_4139787_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139863_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4139863_ce = ap_const_logic_1;
    } else {
        grp_fu_4139863_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139863_p0() {
    grp_fu_4139863_p0 = esl_sext<23,22>(shl_ln1118_492_fu_4139839_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139863_p1() {
    grp_fu_4139863_p1 = esl_sext<23,17>(shl_ln1118_493_fu_4139851_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139955_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4139955_ce = ap_const_logic_1;
    } else {
        grp_fu_4139955_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139955_p0() {
    grp_fu_4139955_p0 = esl_sext<25,22>(shl_ln1118_495_fu_4139943_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4139955_p1() {
    grp_fu_4139955_p1 = esl_sext<25,24>(shl_ln1118_494_fu_4139931_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140107_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4140107_ce = ap_const_logic_1;
    } else {
        grp_fu_4140107_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140107_p0() {
    grp_fu_4140107_p0 = esl_sext<22,16>(sext_ln1118_1169_fu_4140091_p0.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140107_p1() {
    grp_fu_4140107_p1 = esl_sext<22,21>(shl_ln1118_496_fu_4140095_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140134_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4140134_ce = ap_const_logic_1;
    } else {
        grp_fu_4140134_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140134_p1() {
    grp_fu_4140134_p1 = esl_sext<23,17>(shl_ln1118_498_fu_4140123_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140164_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4140164_ce = ap_const_logic_1;
    } else {
        grp_fu_4140164_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140164_p0() {
    grp_fu_4140164_p0 = esl_sext<25,17>(shl_ln1118_500_fu_4140152_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140164_p1() {
    grp_fu_4140164_p1 = esl_sext<25,24>(shl_ln1118_499_fu_4140140_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140276_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4140276_ce = ap_const_logic_1;
    } else {
        grp_fu_4140276_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140276_p0() {
    grp_fu_4140276_p0 = esl_sext<25,19>(shl_ln1118_502_fu_4140264_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140276_p1() {
    grp_fu_4140276_p1 = esl_sext<25,24>(shl_ln1118_501_fu_4140252_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140306_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4140306_ce = ap_const_logic_1;
    } else {
        grp_fu_4140306_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140306_p0() {
    grp_fu_4140306_p0 = esl_sext<24,19>(shl_ln1118_504_fu_4140294_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140306_p1() {
    grp_fu_4140306_p1 = esl_sext<24,23>(shl_ln1118_503_fu_4140282_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140627_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4140627_ce = ap_const_logic_1;
    } else {
        grp_fu_4140627_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140627_p1() {
    grp_fu_4140627_p1 = esl_sext<23,18>(shl_ln1118_506_fu_4140616_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140667_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4140667_ce = ap_const_logic_1;
    } else {
        grp_fu_4140667_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140667_p0() {
    grp_fu_4140667_p0 = esl_sext<22,21>(shl_ln1118_507_fu_4140643_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140667_p1() {
    grp_fu_4140667_p1 = esl_sext<22,17>(shl_ln1118_508_fu_4140655_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140725_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4140725_ce = ap_const_logic_1;
    } else {
        grp_fu_4140725_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140725_p0() {
    grp_fu_4140725_p0 = esl_sext<24,17>(shl_ln1118_514_fu_4140713_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140725_p1() {
    grp_fu_4140725_p1 = esl_sext<24,23>(shl_ln1118_513_fu_4140701_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140755_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4140755_ce = ap_const_logic_1;
    } else {
        grp_fu_4140755_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140755_p0() {
    grp_fu_4140755_p0 = esl_sext<25,24>(shl_ln1118_515_fu_4140731_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140755_p1() {
    grp_fu_4140755_p1 = esl_sext<25,20>(shl_ln1118_516_fu_4140743_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140785_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4140785_ce = ap_const_logic_1;
    } else {
        grp_fu_4140785_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140785_p0() {
    grp_fu_4140785_p0 = esl_sext<21,17>(shl_ln1118_518_fu_4140773_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140785_p1() {
    grp_fu_4140785_p1 = esl_sext<21,20>(shl_ln1118_517_fu_4140761_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140829_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4140829_ce = ap_const_logic_1;
    } else {
        grp_fu_4140829_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140829_p0() {
    grp_fu_4140829_p0 = esl_sext<25,22>(shl_ln1118_522_fu_4140817_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4140829_p1() {
    grp_fu_4140829_p1 = esl_sext<25,24>(shl_ln1118_521_fu_4140805_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4141185_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4141185_ce = ap_const_logic_1;
    } else {
        grp_fu_4141185_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4141185_p0() {
    grp_fu_4141185_p0 = esl_sext<24,23>(shl_ln1118_525_fu_4141161_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4141185_p1() {
    grp_fu_4141185_p1 = esl_sext<24,21>(shl_ln1118_526_fu_4141173_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4141269_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4141269_ce = ap_const_logic_1;
    } else {
        grp_fu_4141269_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4141269_p0() {
    grp_fu_4141269_p0 = esl_sext<22,18>(shl_ln1118_529_fu_4141257_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4141269_p1() {
    grp_fu_4141269_p1 = esl_sext<22,21>(shl_ln1118_528_fu_4141245_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4141357_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4141357_ce = ap_const_logic_1;
    } else {
        grp_fu_4141357_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4141357_p0() {
    grp_fu_4141357_p0 = esl_sext<24,20>(shl_ln1118_531_fu_4141345_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4141357_p1() {
    grp_fu_4141357_p1 = esl_sext<24,23>(shl_ln1118_530_fu_4141333_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4141401_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4141401_ce = ap_const_logic_1;
    } else {
        grp_fu_4141401_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4141401_p0() {
    grp_fu_4141401_p0 = esl_sext<23,18>(shl_ln1118_533_fu_4141389_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4141401_p1() {
    grp_fu_4141401_p1 = esl_sext<23,22>(shl_ln1118_532_fu_4141377_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4141903_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4141903_ce = ap_const_logic_1;
    } else {
        grp_fu_4141903_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4141903_p0() {
    grp_fu_4141903_p0 = esl_sext<26,22>(shl_ln1118_535_fu_4141891_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4141903_p1() {
    grp_fu_4141903_p1 = esl_sext<26,25>(shl_ln1118_534_fu_4141879_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4141973_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4141973_ce = ap_const_logic_1;
    } else {
        grp_fu_4141973_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4141973_p0() {
    grp_fu_4141973_p0 = esl_sext<25,24>(shl_ln1118_536_fu_4141949_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4141973_p1() {
    grp_fu_4141973_p1 = esl_sext<25,21>(shl_ln1118_537_fu_4141961_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142017_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4142017_ce = ap_const_logic_1;
    } else {
        grp_fu_4142017_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142017_p0() {
    grp_fu_4142017_p0 = esl_sext<25,21>(shl_ln1118_539_fu_4142005_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142017_p1() {
    grp_fu_4142017_p1 = esl_sext<25,24>(shl_ln1118_538_fu_4141993_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142057_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4142057_ce = ap_const_logic_1;
    } else {
        grp_fu_4142057_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142057_p0() {
    grp_fu_4142057_p0 = esl_sext<25,18>(shl_ln1118_541_fu_4142045_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142057_p1() {
    grp_fu_4142057_p1 = esl_sext<25,24>(shl_ln1118_540_fu_4142033_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142131_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4142131_ce = ap_const_logic_1;
    } else {
        grp_fu_4142131_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142131_p0() {
    grp_fu_4142131_p0 = esl_sext<24,23>(shl_ln1118_542_fu_4142107_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142131_p1() {
    grp_fu_4142131_p1 = esl_sext<24,18>(shl_ln1118_543_fu_4142119_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142168_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4142168_ce = ap_const_logic_1;
    } else {
        grp_fu_4142168_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142168_p1() {
    grp_fu_4142168_p1 = esl_sext<24,20>(shl_ln1118_545_fu_4142157_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142236_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4142236_ce = ap_const_logic_1;
    } else {
        grp_fu_4142236_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142236_p0() {
    grp_fu_4142236_p0 = esl_sext<21,20>(shl_ln1118_546_fu_4142212_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142236_p1() {
    grp_fu_4142236_p1 = esl_sext<21,17>(shl_ln1118_547_fu_4142224_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142276_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4142276_ce = ap_const_logic_1;
    } else {
        grp_fu_4142276_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142276_p0() {
    grp_fu_4142276_p0 = esl_sext<23,17>(shl_ln1118_549_fu_4142264_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142276_p1() {
    grp_fu_4142276_p1 = esl_sext<23,22>(shl_ln1118_548_fu_4142252_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142360_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4142360_ce = ap_const_logic_1;
    } else {
        grp_fu_4142360_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142360_p0() {
    grp_fu_4142360_p0 = esl_sext<25,21>(shl_ln1118_551_fu_4142348_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142360_p1() {
    grp_fu_4142360_p1 = esl_sext<25,24>(shl_ln1118_550_fu_4142336_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142390_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4142390_ce = ap_const_logic_1;
    } else {
        grp_fu_4142390_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142390_p0() {
    grp_fu_4142390_p0 = esl_sext<22,17>(shl_ln1118_553_fu_4142378_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142390_p1() {
    grp_fu_4142390_p1 = esl_sext<22,21>(shl_ln1118_552_fu_4142366_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142440_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4142440_ce = ap_const_logic_1;
    } else {
        grp_fu_4142440_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142440_p0() {
    grp_fu_4142440_p0 = esl_sext<25,22>(shl_ln1118_555_fu_4142428_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142440_p1() {
    grp_fu_4142440_p1 = esl_sext<25,24>(shl_ln1118_554_fu_4142416_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142508_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4142508_ce = ap_const_logic_1;
    } else {
        grp_fu_4142508_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142508_p0() {
    grp_fu_4142508_p0 = esl_sext<24,23>(shl_ln1118_556_fu_4142484_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142508_p1() {
    grp_fu_4142508_p1 = esl_sext<24,21>(shl_ln1118_557_fu_4142496_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142600_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4142600_ce = ap_const_logic_1;
    } else {
        grp_fu_4142600_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142600_p0() {
    grp_fu_4142600_p0 = esl_sext<23,22>(shl_ln1118_559_fu_4142576_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142600_p1() {
    grp_fu_4142600_p1 = esl_sext<23,20>(shl_ln1118_560_fu_4142588_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142630_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4142630_ce = ap_const_logic_1;
    } else {
        grp_fu_4142630_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142630_p0() {
    grp_fu_4142630_p0 = esl_sext<25,18>(shl_ln1118_563_fu_4142618_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142630_p1() {
    grp_fu_4142630_p1 = esl_sext<25,24>(shl_ln1118_562_fu_4142606_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142660_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4142660_ce = ap_const_logic_1;
    } else {
        grp_fu_4142660_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142660_p0() {
    grp_fu_4142660_p0 = esl_sext<23,17>(shl_ln1118_565_fu_4142648_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142660_p1() {
    grp_fu_4142660_p1 = esl_sext<23,22>(shl_ln1118_564_fu_4142636_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142690_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4142690_ce = ap_const_logic_1;
    } else {
        grp_fu_4142690_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142690_p0() {
    grp_fu_4142690_p0 = esl_sext<22,18>(shl_ln1118_567_fu_4142678_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142690_p1() {
    grp_fu_4142690_p1 = esl_sext<22,21>(shl_ln1118_566_fu_4142666_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142707_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4142707_ce = ap_const_logic_1;
    } else {
        grp_fu_4142707_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142707_p1() {
    grp_fu_4142707_p1 = esl_sext<23,19>(shl_ln1118_569_fu_4142696_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142724_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4142724_ce = ap_const_logic_1;
    } else {
        grp_fu_4142724_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142724_p1() {
    grp_fu_4142724_p1 = esl_sext<25,21>(shl_ln1118_571_fu_4142713_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142741_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4142741_ce = ap_const_logic_1;
    } else {
        grp_fu_4142741_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4142741_p1() {
    grp_fu_4142741_p1 = esl_sext<25,22>(shl_ln1118_574_fu_4142730_p3.read());
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4449_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4449_ce = ap_const_logic_1;
    } else {
        grp_fu_4449_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4449_p1() {
    grp_fu_4449_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF14);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4458_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4458_ce = ap_const_logic_1;
    } else {
        grp_fu_4458_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4458_p1() {
    grp_fu_4458_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF42);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4474_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4474_ce = ap_const_logic_1;
    } else {
        grp_fu_4474_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4474_p1() {
    grp_fu_4474_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF76);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4475_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4475_ce = ap_const_logic_1;
    } else {
        grp_fu_4475_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4475_p1() {
    grp_fu_4475_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFEC1);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4476_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4476_ce = ap_const_logic_1;
    } else {
        grp_fu_4476_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4476_p1() {
    grp_fu_4476_p1 =  (sc_lv<8>) (ap_const_lv24_51);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4477_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4477_ce = ap_const_logic_1;
    } else {
        grp_fu_4477_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4477_p1() {
    grp_fu_4477_p1 =  (sc_lv<8>) (ap_const_lv24_45);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4478_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4478_ce = ap_const_logic_1;
    } else {
        grp_fu_4478_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4478_p1() {
    grp_fu_4478_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF23);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4479_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4479_ce = ap_const_logic_1;
    } else {
        grp_fu_4479_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4479_p1() {
    grp_fu_4479_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF59);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4494_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4494_ce = ap_const_logic_1;
    } else {
        grp_fu_4494_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4494_p1() {
    grp_fu_4494_p1 =  (sc_lv<9>) (ap_const_lv25_A2);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4495_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4495_ce = ap_const_logic_1;
    } else {
        grp_fu_4495_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4495_p1() {
    grp_fu_4495_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFA7);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4496_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4496_ce = ap_const_logic_1;
    } else {
        grp_fu_4496_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4496_p1() {
    grp_fu_4496_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF16);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4499_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4499_ce = ap_const_logic_1;
    } else {
        grp_fu_4499_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4499_p1() {
    grp_fu_4499_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFEDB);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4512_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4512_ce = ap_const_logic_1;
    } else {
        grp_fu_4512_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4512_p1() {
    grp_fu_4512_p1 =  (sc_lv<8>) (ap_const_lv24_74);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4518_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4518_ce = ap_const_logic_1;
    } else {
        grp_fu_4518_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4518_p1() {
    grp_fu_4518_p1 =  (sc_lv<9>) (ap_const_lv25_86);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4522_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4522_ce = ap_const_logic_1;
    } else {
        grp_fu_4522_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4522_p1() {
    grp_fu_4522_p1 =  (sc_lv<9>) (ap_const_lv25_8C);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4523_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4523_ce = ap_const_logic_1;
    } else {
        grp_fu_4523_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4523_p1() {
    grp_fu_4523_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF9F);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4531_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4531_ce = ap_const_logic_1;
    } else {
        grp_fu_4531_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4531_p1() {
    grp_fu_4531_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFEF5);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4547_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4547_ce = ap_const_logic_1;
    } else {
        grp_fu_4547_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4547_p1() {
    grp_fu_4547_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF36);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4556_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4556_ce = ap_const_logic_1;
    } else {
        grp_fu_4556_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4556_p1() {
    grp_fu_4556_p1 =  (sc_lv<6>) (ap_const_lv22_3FFFE7);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4557_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4557_ce = ap_const_logic_1;
    } else {
        grp_fu_4557_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4557_p1() {
    grp_fu_4557_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF4E);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4560_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4560_ce = ap_const_logic_1;
    } else {
        grp_fu_4560_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4560_p1() {
    grp_fu_4560_p1 =  (sc_lv<9>) (ap_const_lv25_FA);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4575_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4575_ce = ap_const_logic_1;
    } else {
        grp_fu_4575_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4575_p1() {
    grp_fu_4575_p1 =  (sc_lv<8>) (ap_const_lv24_4F);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4589_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4589_ce = ap_const_logic_1;
    } else {
        grp_fu_4589_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4589_p1() {
    grp_fu_4589_p1 =  (sc_lv<8>) (ap_const_lv24_75);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4592_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4592_ce = ap_const_logic_1;
    } else {
        grp_fu_4592_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4592_p1() {
    grp_fu_4592_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFD7);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4594_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4594_ce = ap_const_logic_1;
    } else {
        grp_fu_4594_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4594_p1() {
    grp_fu_4594_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF99);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4614_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4614_ce = ap_const_logic_1;
    } else {
        grp_fu_4614_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4614_p1() {
    grp_fu_4614_p1 =  (sc_lv<8>) (ap_const_lv24_4E);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4616_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4616_ce = ap_const_logic_1;
    } else {
        grp_fu_4616_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4616_p1() {
    grp_fu_4616_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF3B);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4617_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4617_ce = ap_const_logic_1;
    } else {
        grp_fu_4617_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4617_p1() {
    grp_fu_4617_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF41);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4620_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4620_ce = ap_const_logic_1;
    } else {
        grp_fu_4620_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4620_p1() {
    grp_fu_4620_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF1D);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4622_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4622_ce = ap_const_logic_1;
    } else {
        grp_fu_4622_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4622_p1() {
    grp_fu_4622_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF5A);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4623_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4623_ce = ap_const_logic_1;
    } else {
        grp_fu_4623_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4623_p1() {
    grp_fu_4623_p1 =  (sc_lv<7>) (ap_const_lv23_2F);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4625_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4625_ce = ap_const_logic_1;
    } else {
        grp_fu_4625_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4625_p1() {
    grp_fu_4625_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF8F);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4626_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4626_ce = ap_const_logic_1;
    } else {
        grp_fu_4626_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4626_p1() {
    grp_fu_4626_p1 =  (sc_lv<10>) (ap_const_lv26_161);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4627_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4627_ce = ap_const_logic_1;
    } else {
        grp_fu_4627_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4627_p1() {
    grp_fu_4627_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF68);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4628_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4628_ce = ap_const_logic_1;
    } else {
        grp_fu_4628_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4628_p1() {
    grp_fu_4628_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF55);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4631_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4631_ce = ap_const_logic_1;
    } else {
        grp_fu_4631_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4631_p1() {
    grp_fu_4631_p1 =  (sc_lv<9>) (ap_const_lv25_EC);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4632_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4632_ce = ap_const_logic_1;
    } else {
        grp_fu_4632_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4632_p1() {
    grp_fu_4632_p1 =  (sc_lv<10>) (ap_const_lv26_1B0);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4633_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4633_ce = ap_const_logic_1;
    } else {
        grp_fu_4633_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4633_p1() {
    grp_fu_4633_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFB2);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4639_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4639_ce = ap_const_logic_1;
    } else {
        grp_fu_4639_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4639_p1() {
    grp_fu_4639_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF11);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4661_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4661_ce = ap_const_logic_1;
    } else {
        grp_fu_4661_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4661_p1() {
    grp_fu_4661_p1 =  (sc_lv<9>) (ap_const_lv25_9F);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4662_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4662_ce = ap_const_logic_1;
    } else {
        grp_fu_4662_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4662_p1() {
    grp_fu_4662_p1 =  (sc_lv<9>) (ap_const_lv25_B8);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4670_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4670_ce = ap_const_logic_1;
    } else {
        grp_fu_4670_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4670_p1() {
    grp_fu_4670_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFAB);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4671_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4671_ce = ap_const_logic_1;
    } else {
        grp_fu_4671_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4671_p1() {
    grp_fu_4671_p1 =  (sc_lv<10>) (ap_const_lv26_16F);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4678_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4678_ce = ap_const_logic_1;
    } else {
        grp_fu_4678_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4678_p1() {
    grp_fu_4678_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFB4);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4683_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4683_ce = ap_const_logic_1;
    } else {
        grp_fu_4683_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4683_p1() {
    grp_fu_4683_p1 =  (sc_lv<9>) (ap_const_lv25_C6);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4685_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4685_ce = ap_const_logic_1;
    } else {
        grp_fu_4685_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4685_p1() {
    grp_fu_4685_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF56);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4689_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4689_ce = ap_const_logic_1;
    } else {
        grp_fu_4689_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4689_p1() {
    grp_fu_4689_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF64);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4690_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4690_ce = ap_const_logic_1;
    } else {
        grp_fu_4690_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4690_p1() {
    grp_fu_4690_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFEFD);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4691_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4691_ce = ap_const_logic_1;
    } else {
        grp_fu_4691_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4691_p1() {
    grp_fu_4691_p1 =  (sc_lv<9>) (ap_const_lv25_F1);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4697_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4697_ce = ap_const_logic_1;
    } else {
        grp_fu_4697_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4697_p1() {
    grp_fu_4697_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE1F);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4718_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4718_ce = ap_const_logic_1;
    } else {
        grp_fu_4718_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4718_p1() {
    grp_fu_4718_p1 =  (sc_lv<11>) (ap_const_lv26_3FFFDE9);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4721_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4721_ce = ap_const_logic_1;
    } else {
        grp_fu_4721_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4721_p1() {
    grp_fu_4721_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFB6);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4727_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4727_ce = ap_const_logic_1;
    } else {
        grp_fu_4727_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4727_p1() {
    grp_fu_4727_p1 =  (sc_lv<8>) (ap_const_lv24_6A);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4738_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4738_ce = ap_const_logic_1;
    } else {
        grp_fu_4738_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4738_p1() {
    grp_fu_4738_p1 =  (sc_lv<10>) (ap_const_lv26_122);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4739_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4739_ce = ap_const_logic_1;
    } else {
        grp_fu_4739_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4739_p1() {
    grp_fu_4739_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF4A);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4744_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4744_ce = ap_const_logic_1;
    } else {
        grp_fu_4744_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4744_p1() {
    grp_fu_4744_p1 =  (sc_lv<8>) (ap_const_lv24_5B);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4750_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4750_ce = ap_const_logic_1;
    } else {
        grp_fu_4750_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4750_p1() {
    grp_fu_4750_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFBB);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4755_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4755_ce = ap_const_logic_1;
    } else {
        grp_fu_4755_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4755_p1() {
    grp_fu_4755_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFEC3);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4757_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4757_ce = ap_const_logic_1;
    } else {
        grp_fu_4757_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4757_p1() {
    grp_fu_4757_p1 =  (sc_lv<9>) (ap_const_lv25_D4);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4758_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4758_ce = ap_const_logic_1;
    } else {
        grp_fu_4758_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4758_p1() {
    grp_fu_4758_p1 =  (sc_lv<10>) (ap_const_lv26_139);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4766_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4766_ce = ap_const_logic_1;
    } else {
        grp_fu_4766_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4766_p1() {
    grp_fu_4766_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF4E);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4767_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4767_ce = ap_const_logic_1;
    } else {
        grp_fu_4767_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4767_p1() {
    grp_fu_4767_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFEF9);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4771_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4771_ce = ap_const_logic_1;
    } else {
        grp_fu_4771_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4771_p1() {
    grp_fu_4771_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF9E);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4773_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4773_ce = ap_const_logic_1;
    } else {
        grp_fu_4773_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4773_p1() {
    grp_fu_4773_p1 =  (sc_lv<10>) (ap_const_lv26_18B);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4778_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4778_ce = ap_const_logic_1;
    } else {
        grp_fu_4778_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4778_p1() {
    grp_fu_4778_p1 =  (sc_lv<10>) (ap_const_lv26_17B);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4779_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        grp_fu_4779_ce = ap_const_logic_1;
    } else {
        grp_fu_4779_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4779_p1() {
    grp_fu_4779_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFCA);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4782_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op6164.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op6164_write_state7.read()))))) {
        grp_fu_4782_ce = ap_const_logic_1;
    } else {
        grp_fu_4782_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4782_p1() {
    grp_fu_4782_p1 =  (sc_lv<8>) (ap_const_lv24_FFFF94);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4783_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4783_ce = ap_const_logic_1;
    } else {
        grp_fu_4783_ce = ap_const_logic_0;
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4783_p1() {
    grp_fu_4783_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF59);
}

void depthwise_conv_2d_cl_array_array_ap_fixed_64u_config10_depthwise_s::thread_grp_fu_4785_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(io_acc_block_signal_op1099.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        grp_fu_4785_ce = ap_const_logic_1;
    } else {
        grp_fu_4785_ce = ap_const_logic_0;
    }
}

}

