#include "pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_283_fu_653554_p2() {
    add_ln703_283_fu_653554_p2 = (!add_ln703_280_fu_653528_p2.read().is_01() || !sext_ln703_72_fu_653550_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_280_fu_653528_p2.read()) + sc_bigint<15>(sext_ln703_72_fu_653550_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2840_fu_625271_p2() {
    add_ln703_2840_fu_625271_p2 = (!sext_ln203_214_fu_624315_p1.read().is_01() || !sext_ln203_119_fu_623957_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_214_fu_624315_p1.read()) + sc_bigint<14>(sext_ln203_119_fu_623957_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2841_fu_665065_p2() {
    add_ln703_2841_fu_665065_p2 = (!sext_ln203_972_fu_662868_p1.read().is_01() || !sext_ln703_600_fu_665062_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_972_fu_662868_p1.read()) + sc_bigint<15>(sext_ln703_600_fu_665062_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2842_fu_655308_p2() {
    add_ln703_2842_fu_655308_p2 = (!sext_ln203_771_fu_652379_p1.read().is_01() || !ap_const_lv14_3F63.is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_771_fu_652379_p1.read()) + sc_bigint<14>(ap_const_lv14_3F63));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2843_fu_655318_p2() {
    add_ln703_2843_fu_655318_p2 = (!sext_ln203_297_fu_651577_p1.read().is_01() || !sext_ln703_602_fu_655314_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_297_fu_651577_p1.read()) + sc_bigint<15>(sext_ln703_602_fu_655314_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2844_fu_665078_p2() {
    add_ln703_2844_fu_665078_p2 = (!sext_ln703_601_fu_665071_p1.read().is_01() || !sext_ln703_603_fu_665075_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_601_fu_665071_p1.read()) + sc_bigint<16>(sext_ln703_603_fu_665075_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2845_fu_665084_p2() {
    add_ln703_2845_fu_665084_p2 = (!add_ln703_2839_reg_681148.read().is_01() || !add_ln703_2844_fu_665078_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2839_reg_681148.read()) + sc_biguint<16>(add_ln703_2844_fu_665078_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2846_fu_665089_p2() {
    add_ln703_2846_fu_665089_p2 = (!add_ln703_2834_fu_665057_p2.read().is_01() || !add_ln703_2845_fu_665084_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2834_fu_665057_p2.read()) + sc_biguint<16>(add_ln703_2845_fu_665084_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2848_fu_632375_p2() {
    add_ln703_2848_fu_632375_p2 = (!grp_fu_615425_p4.read().is_01() || !reg_620647.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615425_p4.read()) + sc_biguint<16>(reg_620647.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2849_fu_632381_p2() {
    add_ln703_2849_fu_632381_p2 = (!reg_620087.read().is_01() || !add_ln703_2848_fu_632375_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620087.read()) + sc_biguint<16>(add_ln703_2848_fu_632375_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_284_fu_659856_p2() {
    add_ln703_284_fu_659856_p2 = (!add_ln703_278_fu_659847_p2.read().is_01() || !sext_ln703_73_fu_659853_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_278_fu_659847_p2.read()) + sc_bigint<16>(sext_ln703_73_fu_659853_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2850_fu_639371_p2() {
    add_ln703_2850_fu_639371_p2 = (!grp_fu_615445_p4.read().is_01() || !reg_620991.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615445_p4.read()) + sc_biguint<16>(reg_620991.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2851_fu_639377_p2() {
    add_ln703_2851_fu_639377_p2 = (!reg_620951.read().is_01() || !add_ln703_2850_fu_639371_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620951.read()) + sc_biguint<16>(add_ln703_2850_fu_639371_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2852_fu_639383_p2() {
    add_ln703_2852_fu_639383_p2 = (!add_ln703_2849_reg_672108.read().is_01() || !add_ln703_2851_fu_639377_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2849_reg_672108.read()) + sc_biguint<16>(add_ln703_2851_fu_639377_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2853_fu_651219_p2() {
    add_ln703_2853_fu_651219_p2 = (!grp_fu_616545_p4.read().is_01() || !reg_620959.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616545_p4.read()) + sc_biguint<16>(reg_620959.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2854_fu_651225_p2() {
    add_ln703_2854_fu_651225_p2 = (!mult_2040_V_reg_673811.read().is_01() || !add_ln703_2853_fu_651219_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_2040_V_reg_673811.read()) + sc_biguint<16>(add_ln703_2853_fu_651219_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2855_fu_658352_p2() {
    add_ln703_2855_fu_658352_p2 = (!grp_fu_615885_p4.read().is_01() || !grp_fu_617145_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615885_p4.read()) + sc_biguint<16>(grp_fu_617145_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2856_fu_658358_p2() {
    add_ln703_2856_fu_658358_p2 = (!reg_620443.read().is_01() || !add_ln703_2855_fu_658352_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620443.read()) + sc_biguint<16>(add_ln703_2855_fu_658352_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2857_fu_658364_p2() {
    add_ln703_2857_fu_658364_p2 = (!add_ln703_2854_reg_679047.read().is_01() || !add_ln703_2856_fu_658358_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2854_reg_679047.read()) + sc_biguint<16>(add_ln703_2856_fu_658358_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2858_fu_658369_p2() {
    add_ln703_2858_fu_658369_p2 = (!add_ln703_2852_reg_674796.read().is_01() || !add_ln703_2857_fu_658364_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2852_reg_674796.read()) + sc_biguint<16>(add_ln703_2857_fu_658364_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2859_fu_662378_p2() {
    add_ln703_2859_fu_662378_p2 = (!mult_56_V_fu_658588_p1.read().is_01() || !grp_fu_616475_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_56_V_fu_658588_p1.read()) + sc_biguint<16>(grp_fu_616475_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_285_fu_663076_p2() {
    add_ln703_285_fu_663076_p2 = (!add_ln703_273_fu_663071_p2.read().is_01() || !add_ln703_284_reg_680738.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_273_fu_663071_p2.read()) + sc_biguint<16>(add_ln703_284_reg_680738.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2860_fu_662384_p2() {
    add_ln703_2860_fu_662384_p2 = (!grp_fu_617105_p4.read().is_01() || !add_ln703_2859_fu_662378_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_617105_p4.read()) + sc_biguint<16>(add_ln703_2859_fu_662378_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2861_fu_632387_p2() {
    add_ln703_2861_fu_632387_p2 = (!mult_1528_V_fu_630641_p1.read().is_01() || !mult_1080_V_fu_629975_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1528_V_fu_630641_p1.read()) + sc_bigint<16>(mult_1080_V_fu_629975_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2862_fu_632393_p2() {
    add_ln703_2862_fu_632393_p2 = (!mult_760_V_fu_629753_p1.read().is_01() || !add_ln703_2861_fu_632387_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_760_V_fu_629753_p1.read()) + sc_biguint<16>(add_ln703_2861_fu_632387_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2863_fu_662390_p2() {
    add_ln703_2863_fu_662390_p2 = (!add_ln703_2860_fu_662384_p2.read().is_01() || !add_ln703_2862_reg_672113.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2860_fu_662384_p2.read()) + sc_biguint<16>(add_ln703_2862_reg_672113.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2864_fu_642406_p2() {
    add_ln703_2864_fu_642406_p2 = (!mult_2232_V_fu_640334_p1.read().is_01() || !mult_2168_V_fu_640194_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2232_V_fu_640334_p1.read()) + sc_bigint<16>(mult_2168_V_fu_640194_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2865_fu_642412_p2() {
    add_ln703_2865_fu_642412_p2 = (!mult_1720_V_fu_639848_p1.read().is_01() || !add_ln703_2864_fu_642406_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1720_V_fu_639848_p1.read()) + sc_biguint<16>(add_ln703_2864_fu_642406_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2866_fu_646683_p2() {
    add_ln703_2866_fu_646683_p2 = (!mult_2744_V_fu_643847_p1.read().is_01() || !mult_2296_V_fu_643019_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2744_V_fu_643847_p1.read()) + sc_bigint<16>(mult_2296_V_fu_643019_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2867_fu_655324_p2() {
    add_ln703_2867_fu_655324_p2 = (!mult_3128_V_fu_652091_p1.read().is_01() || !mult_3064_V_fu_651998_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3128_V_fu_652091_p1.read()) + sc_bigint<16>(mult_3064_V_fu_651998_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2868_fu_655330_p2() {
    add_ln703_2868_fu_655330_p2 = (!add_ln703_2866_reg_677464.read().is_01() || !add_ln703_2867_fu_655324_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2866_reg_677464.read()) + sc_biguint<16>(add_ln703_2867_fu_655324_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2869_fu_655335_p2() {
    add_ln703_2869_fu_655335_p2 = (!add_ln703_2865_reg_675938.read().is_01() || !add_ln703_2868_fu_655330_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2865_reg_675938.read()) + sc_biguint<16>(add_ln703_2868_fu_655330_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2870_fu_662395_p2() {
    add_ln703_2870_fu_662395_p2 = (!add_ln703_2863_fu_662390_p2.read().is_01() || !add_ln703_2869_reg_680033.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2863_fu_662390_p2.read()) + sc_biguint<16>(add_ln703_2869_reg_680033.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2871_fu_662400_p2() {
    add_ln703_2871_fu_662400_p2 = (!add_ln703_2858_reg_680613.read().is_01() || !add_ln703_2870_fu_662395_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2858_reg_680613.read()) + sc_biguint<16>(add_ln703_2870_fu_662395_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2872_fu_665101_p2() {
    add_ln703_2872_fu_665101_p2 = (!mult_4024_V_fu_662872_p1.read().is_01() || !mult_3896_V_fu_662784_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_4024_V_fu_662872_p1.read()) + sc_bigint<16>(mult_3896_V_fu_662784_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2873_fu_665107_p2() {
    add_ln703_2873_fu_665107_p2 = (!mult_3320_V_fu_662677_p1.read().is_01() || !add_ln703_2872_fu_665101_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3320_V_fu_662677_p1.read()) + sc_biguint<16>(add_ln703_2872_fu_665101_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2874_fu_623280_p2() {
    add_ln703_2874_fu_623280_p2 = (!sext_ln203_86_fu_622706_p1.read().is_01() || !sext_ln203_60_fu_622594_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_86_fu_622706_p1.read()) + sc_bigint<15>(sext_ln203_60_fu_622594_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2875_fu_623290_p2() {
    add_ln703_2875_fu_623290_p2 = (!mult_184_V_fu_622510_p1.read().is_01() || !sext_ln703_604_fu_623286_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_184_V_fu_622510_p1.read()) + sc_bigint<16>(sext_ln703_604_fu_623286_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2876_fu_665113_p2() {
    add_ln703_2876_fu_665113_p2 = (!add_ln703_2873_fu_665107_p2.read().is_01() || !add_ln703_2875_reg_667963.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2873_fu_665107_p2.read()) + sc_biguint<16>(add_ln703_2875_reg_667963.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2877_fu_629528_p2() {
    add_ln703_2877_fu_629528_p2 = (!sext_ln203_352_fu_628319_p1.read().is_01() || !sext_ln203_278_fu_628182_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_352_fu_628319_p1.read()) + sc_bigint<15>(sext_ln203_278_fu_628182_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2878_fu_629538_p2() {
    add_ln703_2878_fu_629538_p2 = (!mult_1016_V_fu_627940_p1.read().is_01() || !sext_ln703_605_fu_629534_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1016_V_fu_627940_p1.read()) + sc_bigint<16>(sext_ln703_605_fu_629534_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2879_fu_636064_p2() {
    add_ln703_2879_fu_636064_p2 = (!sext_ln203_573_fu_634365_p1.read().is_01() || !sext_ln203_442_fu_634162_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_573_fu_634365_p1.read()) + sc_bigint<15>(sext_ln203_442_fu_634162_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_287_fu_624811_p2() {
    add_ln703_287_fu_624811_p2 = (!grp_fu_616865_p4.read().is_01() || !reg_620063.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616865_p4.read()) + sc_biguint<16>(reg_620063.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2880_fu_636074_p2() {
    add_ln703_2880_fu_636074_p2 = (!mult_1592_V_fu_633546_p1.read().is_01() || !sext_ln703_606_fu_636070_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1592_V_fu_633546_p1.read()) + sc_bigint<16>(sext_ln703_606_fu_636070_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2881_fu_636080_p2() {
    add_ln703_2881_fu_636080_p2 = (!add_ln703_2878_reg_670921.read().is_01() || !add_ln703_2880_fu_636074_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2878_reg_670921.read()) + sc_biguint<16>(add_ln703_2880_fu_636074_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2882_fu_665118_p2() {
    add_ln703_2882_fu_665118_p2 = (!add_ln703_2876_fu_665113_p2.read().is_01() || !add_ln703_2881_reg_673564.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2876_fu_665113_p2.read()) + sc_biguint<16>(add_ln703_2881_reg_673564.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2883_fu_658374_p2() {
    add_ln703_2883_fu_658374_p2 = (!sext_ln203_856_fu_656056_p1.read().is_01() || !sext_ln203_839_fu_655952_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_856_fu_656056_p1.read()) + sc_bigint<15>(sext_ln203_839_fu_655952_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2884_fu_658384_p2() {
    add_ln703_2884_fu_658384_p2 = (!mult_2936_V_fu_655571_p1.read().is_01() || !sext_ln703_607_fu_658380_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2936_V_fu_655571_p1.read()) + sc_bigint<16>(sext_ln703_607_fu_658380_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2885_fu_665123_p2() {
    add_ln703_2885_fu_665123_p2 = (!sext_ln203_73_fu_662627_p1.read().is_01() || !sext_ln203_986_fu_662998_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_73_fu_662627_p1.read()) + sc_bigint<15>(sext_ln203_986_fu_662998_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2886_fu_665133_p2() {
    add_ln703_2886_fu_665133_p2 = (!mult_3832_V_fu_662765_p1.read().is_01() || !sext_ln703_608_fu_665129_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3832_V_fu_662765_p1.read()) + sc_bigint<16>(sext_ln703_608_fu_665129_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2887_fu_665139_p2() {
    add_ln703_2887_fu_665139_p2 = (!add_ln703_2884_reg_680618.read().is_01() || !add_ln703_2886_fu_665133_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2884_reg_680618.read()) + sc_biguint<16>(add_ln703_2886_fu_665133_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2888_fu_651230_p2() {
    add_ln703_2888_fu_651230_p2 = (!sext_ln203_670_fu_647778_p1.read().is_01() || !sext_ln203_602_fu_647446_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_670_fu_647778_p1.read()) + sc_bigint<14>(sext_ln203_602_fu_647446_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2889_fu_651240_p2() {
    add_ln703_2889_fu_651240_p2 = (!sext_ln203_215_fu_647122_p1.read().is_01() || !sext_ln703_609_fu_651236_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_215_fu_647122_p1.read()) + sc_bigint<15>(sext_ln703_609_fu_651236_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_288_fu_624817_p2() {
    add_ln703_288_fu_624817_p2 = (!mult_158_V_reg_667389.read().is_01() || !add_ln703_287_fu_624811_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_158_V_reg_667389.read()) + sc_biguint<16>(add_ln703_287_fu_624811_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2890_fu_651246_p2() {
    add_ln703_2890_fu_651246_p2 = (!sext_ln203_773_fu_648519_p1.read().is_01() || !sext_ln203_619_fu_647536_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_773_fu_648519_p1.read()) + sc_bigint<13>(sext_ln203_619_fu_647536_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2891_fu_658396_p2() {
    add_ln703_2891_fu_658396_p2 = (!sext_ln203_873_fu_656183_p1.read().is_01() || !ap_const_lv13_1DDC.is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_873_fu_656183_p1.read()) + sc_bigint<13>(ap_const_lv13_1DDC));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2892_fu_658406_p2() {
    add_ln703_2892_fu_658406_p2 = (!sext_ln703_611_fu_658393_p1.read().is_01() || !sext_ln703_612_fu_658402_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_611_fu_658393_p1.read()) + sc_bigint<14>(sext_ln703_612_fu_658402_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2893_fu_658416_p2() {
    add_ln703_2893_fu_658416_p2 = (!sext_ln703_610_fu_658390_p1.read().is_01() || !sext_ln703_613_fu_658412_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_610_fu_658390_p1.read()) + sc_bigint<16>(sext_ln703_613_fu_658412_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2894_fu_665144_p2() {
    add_ln703_2894_fu_665144_p2 = (!add_ln703_2887_fu_665139_p2.read().is_01() || !add_ln703_2893_reg_680623.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2887_fu_665139_p2.read()) + sc_biguint<16>(add_ln703_2893_reg_680623.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2895_fu_665149_p2() {
    add_ln703_2895_fu_665149_p2 = (!add_ln703_2882_fu_665118_p2.read().is_01() || !add_ln703_2894_fu_665144_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2882_fu_665118_p2.read()) + sc_biguint<16>(add_ln703_2894_fu_665144_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2897_fu_632399_p2() {
    add_ln703_2897_fu_632399_p2 = (!grp_fu_616315_p4.read().is_01() || !reg_620315.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616315_p4.read()) + sc_biguint<16>(reg_620315.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2898_fu_651252_p2() {
    add_ln703_2898_fu_651252_p2 = (!grp_fu_617025_p4.read().is_01() || !mult_2170_V_reg_674954.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_617025_p4.read()) + sc_biguint<16>(mult_2170_V_reg_674954.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2899_fu_651257_p2() {
    add_ln703_2899_fu_651257_p2 = (!reg_620667.read().is_01() || !add_ln703_2898_fu_651252_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620667.read()) + sc_biguint<16>(add_ln703_2898_fu_651252_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_289_fu_641381_p2() {
    add_ln703_289_fu_641381_p2 = (!grp_fu_616585_p4.read().is_01() || !reg_620643.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616585_p4.read()) + sc_biguint<16>(reg_620643.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_28_fu_626656_p2() {
    add_ln703_28_fu_626656_p2 = (!sext_ln203_202_fu_626083_p1.read().is_01() || !sext_ln203_149_fu_625772_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_202_fu_626083_p1.read()) + sc_bigint<15>(sext_ln203_149_fu_625772_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2900_fu_651263_p2() {
    add_ln703_2900_fu_651263_p2 = (!add_ln703_2897_reg_672118.read().is_01() || !add_ln703_2899_fu_651257_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2897_reg_672118.read()) + sc_biguint<16>(add_ln703_2899_fu_651257_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2901_fu_665161_p2() {
    add_ln703_2901_fu_665161_p2 = (!grp_fu_615325_p4.read().is_01() || !reg_621063.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615325_p4.read()) + sc_biguint<16>(reg_621063.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2902_fu_665167_p2() {
    add_ln703_2902_fu_665167_p2 = (!reg_620643.read().is_01() || !add_ln703_2901_fu_665161_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620643.read()) + sc_biguint<16>(add_ln703_2901_fu_665161_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2903_fu_625277_p2() {
    add_ln703_2903_fu_625277_p2 = (!mult_570_V_fu_623961_p1.read().is_01() || !mult_506_V_fu_623803_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_570_V_fu_623961_p1.read()) + sc_bigint<16>(mult_506_V_fu_623803_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2904_fu_625283_p2() {
    add_ln703_2904_fu_625283_p2 = (!mult_314_V_fu_623515_p1.read().is_01() || !add_ln703_2903_fu_625277_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_314_V_fu_623515_p1.read()) + sc_biguint<16>(add_ln703_2903_fu_625277_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2905_fu_665173_p2() {
    add_ln703_2905_fu_665173_p2 = (!add_ln703_2902_fu_665167_p2.read().is_01() || !add_ln703_2904_reg_669071.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2902_fu_665167_p2.read()) + sc_biguint<16>(add_ln703_2904_reg_669071.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2906_fu_665178_p2() {
    add_ln703_2906_fu_665178_p2 = (!add_ln703_2900_reg_679062.read().is_01() || !add_ln703_2905_fu_665173_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2900_reg_679062.read()) + sc_biguint<16>(add_ln703_2905_fu_665173_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2907_fu_627466_p2() {
    add_ln703_2907_fu_627466_p2 = (!mult_762_V_fu_625855_p1.read().is_01() || !mult_698_V_fu_625752_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_762_V_fu_625855_p1.read()) + sc_bigint<16>(mult_698_V_fu_625752_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2908_fu_642418_p2() {
    add_ln703_2908_fu_642418_p2 = (!mult_2234_V_fu_640342_p1.read().is_01() || !mult_1658_V_fu_639838_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2234_V_fu_640342_p1.read()) + sc_bigint<16>(mult_1658_V_fu_639838_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2909_fu_642424_p2() {
    add_ln703_2909_fu_642424_p2 = (!mult_1338_V_fu_639795_p1.read().is_01() || !add_ln703_2908_fu_642418_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1338_V_fu_639795_p1.read()) + sc_biguint<16>(add_ln703_2908_fu_642418_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_290_fu_641387_p2() {
    add_ln703_290_fu_641387_p2 = (!reg_620151.read().is_01() || !add_ln703_289_fu_641381_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620151.read()) + sc_biguint<16>(add_ln703_289_fu_641381_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2910_fu_642430_p2() {
    add_ln703_2910_fu_642430_p2 = (!add_ln703_2907_reg_669974.read().is_01() || !add_ln703_2909_fu_642424_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2907_reg_669974.read()) + sc_biguint<16>(add_ln703_2909_fu_642424_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2911_fu_655340_p2() {
    add_ln703_2911_fu_655340_p2 = (!mult_3130_V_fu_652095_p1.read().is_01() || !mult_2746_V_fu_651748_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3130_V_fu_652095_p1.read()) + sc_bigint<16>(mult_2746_V_fu_651748_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2912_fu_655346_p2() {
    add_ln703_2912_fu_655346_p2 = (!mult_2298_V_fu_651672_p1.read().is_01() || !add_ln703_2911_fu_655340_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2298_V_fu_651672_p1.read()) + sc_biguint<16>(add_ln703_2911_fu_655340_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2913_fu_658422_p2() {
    add_ln703_2913_fu_658422_p2 = (!mult_3514_V_fu_655956_p1.read().is_01() || !mult_3258_V_fu_655666_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3514_V_fu_655956_p1.read()) + sc_bigint<16>(mult_3258_V_fu_655666_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2914_fu_658428_p2() {
    add_ln703_2914_fu_658428_p2 = (!mult_3194_V_fu_655627_p1.read().is_01() || !add_ln703_2913_fu_658422_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3194_V_fu_655627_p1.read()) + sc_biguint<16>(add_ln703_2913_fu_658422_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2915_fu_658434_p2() {
    add_ln703_2915_fu_658434_p2 = (!add_ln703_2912_reg_680038.read().is_01() || !add_ln703_2914_fu_658428_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2912_reg_680038.read()) + sc_biguint<16>(add_ln703_2914_fu_658428_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2916_fu_658439_p2() {
    add_ln703_2916_fu_658439_p2 = (!add_ln703_2910_reg_675943.read().is_01() || !add_ln703_2915_fu_658434_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2910_reg_675943.read()) + sc_biguint<16>(add_ln703_2915_fu_658434_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2917_fu_665183_p2() {
    add_ln703_2917_fu_665183_p2 = (!add_ln703_2906_fu_665178_p2.read().is_01() || !add_ln703_2916_reg_680628.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2906_fu_665178_p2.read()) + sc_biguint<16>(add_ln703_2916_reg_680628.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2918_fu_665188_p2() {
    add_ln703_2918_fu_665188_p2 = (!mult_4090_V_fu_663002_p1.read().is_01() || !mult_3962_V_fu_662794_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_4090_V_fu_663002_p1.read()) + sc_bigint<16>(mult_3962_V_fu_662794_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2919_fu_629544_p2() {
    add_ln703_2919_fu_629544_p2 = (!sext_ln203_227_fu_627944_p1.read().is_01() || !sext_ln203_183_fu_627832_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_227_fu_627944_p1.read()) + sc_bigint<15>(sext_ln203_183_fu_627832_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_291_fu_641393_p2() {
    add_ln703_291_fu_641393_p2 = (!add_ln703_288_reg_668851.read().is_01() || !add_ln703_290_fu_641387_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_288_reg_668851.read()) + sc_biguint<16>(add_ln703_290_fu_641387_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2920_fu_629554_p2() {
    add_ln703_2920_fu_629554_p2 = (!mult_378_V_fu_627514_p1.read().is_01() || !sext_ln703_614_fu_629550_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_378_V_fu_627514_p1.read()) + sc_bigint<16>(sext_ln703_614_fu_629550_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2921_fu_665194_p2() {
    add_ln703_2921_fu_665194_p2 = (!add_ln703_2918_fu_665188_p2.read().is_01() || !add_ln703_2920_reg_670926.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2918_fu_665188_p2.read()) + sc_biguint<16>(add_ln703_2920_reg_670926.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2922_fu_632405_p2() {
    add_ln703_2922_fu_632405_p2 = (!sext_ln203_353_fu_630573_p1.read().is_01() || !sext_ln203_300_fu_630147_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_353_fu_630573_p1.read()) + sc_bigint<15>(sext_ln203_300_fu_630147_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2923_fu_632415_p2() {
    add_ln703_2923_fu_632415_p2 = (!mult_1082_V_fu_629978_p1.read().is_01() || !sext_ln703_615_fu_632411_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1082_V_fu_629978_p1.read()) + sc_bigint<16>(sext_ln703_615_fu_632411_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2924_fu_639388_p2() {
    add_ln703_2924_fu_639388_p2 = (!sext_ln203_506_fu_637369_p1.read().is_01() || !sext_ln203_459_fu_636989_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_506_fu_637369_p1.read()) + sc_bigint<15>(sext_ln203_459_fu_636989_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2925_fu_639398_p2() {
    add_ln703_2925_fu_639398_p2 = (!mult_1786_V_fu_636812_p1.read().is_01() || !sext_ln703_616_fu_639394_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1786_V_fu_636812_p1.read()) + sc_bigint<16>(sext_ln703_616_fu_639394_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2926_fu_639404_p2() {
    add_ln703_2926_fu_639404_p2 = (!add_ln703_2923_reg_672123.read().is_01() || !add_ln703_2925_fu_639398_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2923_reg_672123.read()) + sc_biguint<16>(add_ln703_2925_fu_639398_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2927_fu_665199_p2() {
    add_ln703_2927_fu_665199_p2 = (!add_ln703_2921_fu_665194_p2.read().is_01() || !add_ln703_2926_reg_674801.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2921_fu_665194_p2.read()) + sc_biguint<16>(add_ln703_2926_reg_674801.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2928_fu_646689_p2() {
    add_ln703_2928_fu_646689_p2 = (!sext_ln203_631_fu_643541_p1.read().is_01() || !sext_ln203_574_fu_643089_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_631_fu_643541_p1.read()) + sc_bigint<15>(sext_ln203_574_fu_643089_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2929_fu_662408_p2() {
    add_ln703_2929_fu_662408_p2 = (!sext_ln203_26_fu_658597_p1.read().is_01() || !sext_ln203_893_fu_658986_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_26_fu_658597_p1.read()) + sc_bigint<15>(sext_ln203_893_fu_658986_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_292_fu_645426_p2() {
    add_ln703_292_fu_645426_p2 = (!grp_fu_619035_p4.read().is_01() || !grp_fu_617155_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_619035_p4.read()) + sc_biguint<16>(grp_fu_617155_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2930_fu_662418_p2() {
    add_ln703_2930_fu_662418_p2 = (!mult_3578_V_fu_658907_p1.read().is_01() || !sext_ln703_618_fu_662414_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3578_V_fu_658907_p1.read()) + sc_bigint<16>(sext_ln703_618_fu_662414_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2931_fu_662424_p2() {
    add_ln703_2931_fu_662424_p2 = (!sext_ln703_617_fu_662405_p1.read().is_01() || !add_ln703_2930_fu_662418_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_617_fu_662405_p1.read()) + sc_biguint<16>(add_ln703_2930_fu_662418_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2932_fu_639409_p2() {
    add_ln703_2932_fu_639409_p2 = (!sext_ln203_642_fu_637911_p1.read().is_01() || !sext_ln203_469_fu_637125_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_642_fu_637911_p1.read()) + sc_bigint<14>(sext_ln203_469_fu_637125_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2933_fu_639419_p2() {
    add_ln703_2933_fu_639419_p2 = (!sext_ln203_380_fu_636664_p1.read().is_01() || !sext_ln703_619_fu_639415_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_380_fu_636664_p1.read()) + sc_bigint<15>(sext_ln703_619_fu_639415_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2934_fu_662433_p2() {
    add_ln703_2934_fu_662433_p2 = (!sext_ln203_730_fu_658761_p1.read().is_01() || !ap_const_lv12_13C.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_730_fu_658761_p1.read()) + sc_biguint<12>(ap_const_lv12_13C));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2935_fu_662443_p2() {
    add_ln703_2935_fu_662443_p2 = (!sext_ln203_906_fu_659092_p1.read().is_01() || !sext_ln703_621_fu_662439_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_906_fu_659092_p1.read()) + sc_bigint<14>(sext_ln703_621_fu_662439_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2936_fu_662453_p2() {
    add_ln703_2936_fu_662453_p2 = (!sext_ln703_620_fu_662430_p1.read().is_01() || !sext_ln703_622_fu_662449_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_620_fu_662430_p1.read()) + sc_bigint<16>(sext_ln703_622_fu_662449_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2937_fu_662459_p2() {
    add_ln703_2937_fu_662459_p2 = (!add_ln703_2931_fu_662424_p2.read().is_01() || !add_ln703_2936_fu_662453_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2931_fu_662424_p2.read()) + sc_biguint<16>(add_ln703_2936_fu_662453_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2938_fu_665204_p2() {
    add_ln703_2938_fu_665204_p2 = (!add_ln703_2927_fu_665199_p2.read().is_01() || !add_ln703_2937_reg_681158.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2927_fu_665199_p2.read()) + sc_biguint<16>(add_ln703_2937_reg_681158.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_293_fu_645432_p2() {
    add_ln703_293_fu_645432_p2 = (!reg_619883.read().is_01() || !add_ln703_292_fu_645426_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_619883.read()) + sc_biguint<16>(add_ln703_292_fu_645426_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2940_fu_632421_p2() {
    add_ln703_2940_fu_632421_p2 = (!grp_fu_615095_p4.read().is_01() || !reg_620195.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615095_p4.read()) + sc_biguint<16>(reg_620195.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2941_fu_655352_p2() {
    add_ln703_2941_fu_655352_p2 = (!grp_fu_615085_p4.read().is_01() || !mult_3003_V_reg_677835.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615085_p4.read()) + sc_biguint<16>(mult_3003_V_reg_677835.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2942_fu_655357_p2() {
    add_ln703_2942_fu_655357_p2 = (!reg_621083.read().is_01() || !add_ln703_2941_fu_655352_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_621083.read()) + sc_biguint<16>(add_ln703_2941_fu_655352_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2943_fu_655363_p2() {
    add_ln703_2943_fu_655363_p2 = (!add_ln703_2940_reg_672128.read().is_01() || !add_ln703_2942_fu_655357_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2940_reg_672128.read()) + sc_biguint<16>(add_ln703_2942_fu_655357_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2944_fu_662465_p2() {
    add_ln703_2944_fu_662465_p2 = (!mult_379_V_fu_658638_p1.read().is_01() || !grp_fu_619625_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_379_V_fu_658638_p1.read()) + sc_biguint<16>(grp_fu_619625_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2945_fu_662471_p2() {
    add_ln703_2945_fu_662471_p2 = (!grp_fu_617225_p4.read().is_01() || !add_ln703_2944_fu_662465_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_617225_p4.read()) + sc_biguint<16>(add_ln703_2944_fu_662465_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2946_fu_632427_p2() {
    add_ln703_2946_fu_632427_p2 = (!mult_1339_V_fu_630248_p1.read().is_01() || !mult_1211_V_fu_630090_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1339_V_fu_630248_p1.read()) + sc_bigint<16>(mult_1211_V_fu_630090_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2947_fu_632433_p2() {
    add_ln703_2947_fu_632433_p2 = (!mult_507_V_fu_629653_p1.read().is_01() || !add_ln703_2946_fu_632427_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_507_V_fu_629653_p1.read()) + sc_biguint<16>(add_ln703_2946_fu_632427_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2948_fu_662477_p2() {
    add_ln703_2948_fu_662477_p2 = (!add_ln703_2945_fu_662471_p2.read().is_01() || !add_ln703_2947_reg_672133.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2945_fu_662471_p2.read()) + sc_biguint<16>(add_ln703_2947_reg_672133.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2949_fu_662482_p2() {
    add_ln703_2949_fu_662482_p2 = (!add_ln703_2943_reg_680043.read().is_01() || !add_ln703_2948_fu_662477_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2943_reg_680043.read()) + sc_biguint<16>(add_ln703_2948_fu_662477_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_294_fu_649864_p2() {
    add_ln703_294_fu_649864_p2 = (!grp_fu_616265_p4.read().is_01() || !reg_620551.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616265_p4.read()) + sc_biguint<16>(reg_620551.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2950_fu_646695_p2() {
    add_ln703_2950_fu_646695_p2 = (!mult_2747_V_fu_643851_p1.read().is_01() || !mult_2043_V_fu_642818_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2747_V_fu_643851_p1.read()) + sc_bigint<16>(mult_2043_V_fu_642818_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2951_fu_646701_p2() {
    add_ln703_2951_fu_646701_p2 = (!mult_1723_V_fu_642760_p1.read().is_01() || !add_ln703_2950_fu_646695_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1723_V_fu_642760_p1.read()) + sc_biguint<16>(add_ln703_2950_fu_646695_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2952_fu_658444_p2() {
    add_ln703_2952_fu_658444_p2 = (!mult_3387_V_fu_655748_p1.read().is_01() || !mult_3195_V_fu_655631_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3387_V_fu_655748_p1.read()) + sc_bigint<16>(mult_3195_V_fu_655631_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2953_fu_658450_p2() {
    add_ln703_2953_fu_658450_p2 = (!mult_3067_V_fu_655595_p1.read().is_01() || !add_ln703_2952_fu_658444_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3067_V_fu_655595_p1.read()) + sc_biguint<16>(add_ln703_2952_fu_658444_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2954_fu_658456_p2() {
    add_ln703_2954_fu_658456_p2 = (!add_ln703_2951_reg_677474.read().is_01() || !add_ln703_2953_fu_658450_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2951_reg_677474.read()) + sc_biguint<16>(add_ln703_2953_fu_658450_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2955_fu_623296_p2() {
    add_ln703_2955_fu_623296_p2 = (!sext_ln203_87_fu_622719_p1.read().is_01() || !sext_ln203_28_fu_622486_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_87_fu_622719_p1.read()) + sc_bigint<15>(sext_ln203_28_fu_622486_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2956_fu_662490_p2() {
    add_ln703_2956_fu_662490_p2 = (!mult_3899_V_fu_659309_p1.read().is_01() || !sext_ln703_623_fu_662487_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3899_V_fu_659309_p1.read()) + sc_bigint<16>(sext_ln703_623_fu_662487_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2957_fu_632439_p2() {
    add_ln703_2957_fu_632439_p2 = (!sext_ln203_337_fu_630420_p1.read().is_01() || !sext_ln203_200_fu_629805_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_337_fu_630420_p1.read()) + sc_bigint<15>(sext_ln203_200_fu_629805_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2958_fu_632449_p2() {
    add_ln703_2958_fu_632449_p2 = (!mult_741_V_fu_629723_p1.read().is_01() || !sext_ln703_624_fu_632445_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_741_V_fu_629723_p1.read()) + sc_bigint<16>(sext_ln703_624_fu_632445_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2959_fu_662496_p2() {
    add_ln703_2959_fu_662496_p2 = (!add_ln703_2956_fu_662490_p2.read().is_01() || !add_ln703_2958_reg_672138.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2956_fu_662490_p2.read()) + sc_biguint<16>(add_ln703_2958_reg_672138.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_295_fu_656655_p2() {
    add_ln703_295_fu_656655_p2 = (!grp_fu_615615_p4.read().is_01() || !grp_fu_615235_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615615_p4.read()) + sc_biguint<16>(grp_fu_615235_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2960_fu_662501_p2() {
    add_ln703_2960_fu_662501_p2 = (!add_ln703_2954_reg_680633.read().is_01() || !add_ln703_2959_fu_662496_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2954_reg_680633.read()) + sc_biguint<16>(add_ln703_2959_fu_662496_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2961_fu_662506_p2() {
    add_ln703_2961_fu_662506_p2 = (!add_ln703_2949_fu_662482_p2.read().is_01() || !add_ln703_2960_fu_662501_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2949_fu_662482_p2.read()) + sc_biguint<16>(add_ln703_2960_fu_662501_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2962_fu_636085_p2() {
    add_ln703_2962_fu_636085_p2 = (!sext_ln203_396_fu_633630_p1.read().is_01() || !sext_ln203_366_fu_633440_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_396_fu_633630_p1.read()) + sc_bigint<15>(sext_ln203_366_fu_633440_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2963_fu_639428_p2() {
    add_ln703_2963_fu_639428_p2 = (!sext_ln203_470_fu_637129_p1.read().is_01() || !sext_ln203_444_fu_636909_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_470_fu_637129_p1.read()) + sc_bigint<15>(sext_ln203_444_fu_636909_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2964_fu_639438_p2() {
    add_ln703_2964_fu_639438_p2 = (!mult_1786_V_fu_636812_p1.read().is_01() || !sext_ln703_626_fu_639434_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1786_V_fu_636812_p1.read()) + sc_bigint<16>(sext_ln703_626_fu_639434_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2965_fu_639444_p2() {
    add_ln703_2965_fu_639444_p2 = (!sext_ln703_625_fu_639425_p1.read().is_01() || !add_ln703_2964_fu_639438_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_625_fu_639425_p1.read()) + sc_biguint<16>(add_ln703_2964_fu_639438_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2966_fu_646707_p2() {
    add_ln703_2966_fu_646707_p2 = (!sext_ln203_643_fu_643654_p1.read().is_01() || !sext_ln203_584_fu_643134_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_643_fu_643654_p1.read()) + sc_bigint<15>(sext_ln203_584_fu_643134_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2967_fu_646717_p2() {
    add_ln703_2967_fu_646717_p2 = (!mult_2235_V_fu_642980_p1.read().is_01() || !sext_ln703_627_fu_646713_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2235_V_fu_642980_p1.read()) + sc_bigint<16>(sext_ln703_627_fu_646713_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2968_fu_658461_p2() {
    add_ln703_2968_fu_658461_p2 = (!sext_ln203_857_fu_656070_p1.read().is_01() || !sext_ln203_825_fu_655866_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_857_fu_656070_p1.read()) + sc_bigint<15>(sext_ln203_825_fu_655866_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2969_fu_658471_p2() {
    add_ln703_2969_fu_658471_p2 = (!mult_3131_V_fu_655607_p1.read().is_01() || !sext_ln703_628_fu_658467_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3131_V_fu_655607_p1.read()) + sc_bigint<16>(sext_ln703_628_fu_658467_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_296_fu_656661_p2() {
    add_ln703_296_fu_656661_p2 = (!add_ln703_294_reg_678627.read().is_01() || !add_ln703_295_fu_656655_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_294_reg_678627.read()) + sc_biguint<16>(add_ln703_295_fu_656655_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2970_fu_658477_p2() {
    add_ln703_2970_fu_658477_p2 = (!add_ln703_2967_reg_677479.read().is_01() || !add_ln703_2969_fu_658471_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2967_reg_677479.read()) + sc_biguint<16>(add_ln703_2969_fu_658471_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2971_fu_658482_p2() {
    add_ln703_2971_fu_658482_p2 = (!add_ln703_2965_reg_674811.read().is_01() || !add_ln703_2970_fu_658477_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2965_reg_674811.read()) + sc_biguint<16>(add_ln703_2970_fu_658477_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2972_fu_665216_p2() {
    add_ln703_2972_fu_665216_p2 = (!sext_ln203_987_fu_663006_p1.read().is_01() || !sext_ln203_899_reg_680673.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_987_fu_663006_p1.read()) + sc_bigint<15>(sext_ln203_899_reg_680673.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2973_fu_665225_p2() {
    add_ln703_2973_fu_665225_p2 = (!mult_3707_V_fu_662735_p1.read().is_01() || !sext_ln703_629_fu_665221_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3707_V_fu_662735_p1.read()) + sc_bigint<16>(sext_ln703_629_fu_665221_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2974_fu_632455_p2() {
    add_ln703_2974_fu_632455_p2 = (!sext_ln203_301_fu_630151_p1.read().is_01() || !sext_ln203_258_fu_630054_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_301_fu_630151_p1.read()) + sc_bigint<14>(sext_ln203_258_fu_630054_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2975_fu_632465_p2() {
    add_ln703_2975_fu_632465_p2 = (!sext_ln203_238_fu_629982_p1.read().is_01() || !sext_ln703_630_fu_632461_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_238_fu_629982_p1.read()) + sc_bigint<15>(sext_ln703_630_fu_632461_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2976_fu_665234_p2() {
    add_ln703_2976_fu_665234_p2 = (!add_ln703_2973_fu_665225_p2.read().is_01() || !sext_ln703_631_fu_665231_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2973_fu_665225_p2.read()) + sc_bigint<16>(sext_ln703_631_fu_665231_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2977_fu_658487_p2() {
    add_ln703_2977_fu_658487_p2 = (!sext_ln203_840_fu_655960_p1.read().is_01() || !sext_ln203_561_fu_655492_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_840_fu_655960_p1.read()) + sc_bigint<14>(sext_ln203_561_fu_655492_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2978_fu_658497_p2() {
    add_ln703_2978_fu_658497_p2 = (!sext_ln203_507_fu_655483_p1.read().is_01() || !sext_ln703_632_fu_658493_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_507_fu_655483_p1.read()) + sc_bigint<15>(sext_ln703_632_fu_658493_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2979_fu_655368_p2() {
    add_ln703_2979_fu_655368_p2 = (!sext_ln203_702_fu_651918_p1.read().is_01() || !ap_const_lv13_1FCE.is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_702_fu_651918_p1.read()) + sc_bigint<13>(ap_const_lv13_1FCE));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_297_fu_656666_p2() {
    add_ln703_297_fu_656666_p2 = (!add_ln703_293_reg_677064.read().is_01() || !add_ln703_296_fu_656661_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_293_reg_677064.read()) + sc_biguint<16>(add_ln703_296_fu_656661_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2980_fu_655378_p2() {
    add_ln703_2980_fu_655378_p2 = (!sext_ln203_875_fu_652758_p1.read().is_01() || !sext_ln703_634_fu_655374_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_875_fu_652758_p1.read()) + sc_bigint<14>(sext_ln703_634_fu_655374_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2981_fu_658510_p2() {
    add_ln703_2981_fu_658510_p2 = (!sext_ln703_633_fu_658503_p1.read().is_01() || !sext_ln703_635_fu_658507_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_633_fu_658503_p1.read()) + sc_bigint<16>(sext_ln703_635_fu_658507_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2982_fu_665240_p2() {
    add_ln703_2982_fu_665240_p2 = (!add_ln703_2976_fu_665234_p2.read().is_01() || !add_ln703_2981_reg_680643.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2976_fu_665234_p2.read()) + sc_biguint<16>(add_ln703_2981_reg_680643.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2983_fu_665245_p2() {
    add_ln703_2983_fu_665245_p2 = (!add_ln703_2971_reg_680638.read().is_01() || !add_ln703_2982_fu_665240_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2971_reg_680638.read()) + sc_biguint<16>(add_ln703_2982_fu_665240_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2985_fu_623302_p2() {
    add_ln703_2985_fu_623302_p2 = (!grp_fu_615555_p4.read().is_01() || !grp_fu_615185_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615555_p4.read()) + sc_biguint<16>(grp_fu_615185_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2986_fu_625289_p2() {
    add_ln703_2986_fu_625289_p2 = (!grp_fu_616635_p4.read().is_01() || !reg_620095.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616635_p4.read()) + sc_biguint<16>(reg_620095.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2987_fu_625295_p2() {
    add_ln703_2987_fu_625295_p2 = (!reg_620019.read().is_01() || !add_ln703_2986_fu_625289_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620019.read()) + sc_biguint<16>(add_ln703_2986_fu_625289_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2988_fu_625301_p2() {
    add_ln703_2988_fu_625301_p2 = (!add_ln703_2985_reg_667973.read().is_01() || !add_ln703_2987_fu_625295_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2985_reg_667973.read()) + sc_biguint<16>(add_ln703_2987_fu_625295_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2989_fu_636091_p2() {
    add_ln703_2989_fu_636091_p2 = (!grp_fu_616985_p4.read().is_01() || !reg_619899.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616985_p4.read()) + sc_biguint<16>(reg_619899.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_298_fu_656671_p2() {
    add_ln703_298_fu_656671_p2 = (!add_ln703_291_reg_675588.read().is_01() || !add_ln703_297_fu_656666_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_291_reg_675588.read()) + sc_biguint<16>(add_ln703_297_fu_656666_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2990_fu_636097_p2() {
    add_ln703_2990_fu_636097_p2 = (!reg_620671.read().is_01() || !add_ln703_2989_fu_636091_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620671.read()) + sc_biguint<16>(add_ln703_2989_fu_636091_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2991_fu_646723_p2() {
    add_ln703_2991_fu_646723_p2 = (!grp_fu_618215_p4.read().is_01() || !mult_2301_V_reg_675039.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618215_p4.read()) + sc_biguint<16>(mult_2301_V_reg_675039.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2992_fu_646728_p2() {
    add_ln703_2992_fu_646728_p2 = (!reg_619971.read().is_01() || !add_ln703_2991_fu_646723_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_619971.read()) + sc_biguint<16>(add_ln703_2991_fu_646723_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2993_fu_646734_p2() {
    add_ln703_2993_fu_646734_p2 = (!add_ln703_2990_reg_673574.read().is_01() || !add_ln703_2992_fu_646728_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2990_reg_673574.read()) + sc_biguint<16>(add_ln703_2992_fu_646728_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2994_fu_646739_p2() {
    add_ln703_2994_fu_646739_p2 = (!add_ln703_2988_reg_669076.read().is_01() || !add_ln703_2993_fu_646734_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2988_reg_669076.read()) + sc_biguint<16>(add_ln703_2993_fu_646734_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2995_fu_662512_p2() {
    add_ln703_2995_fu_662512_p2 = (!grp_fu_617135_p4.read().is_01() || !grp_fu_619635_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_617135_p4.read()) + sc_biguint<16>(grp_fu_619635_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2996_fu_662518_p2() {
    add_ln703_2996_fu_662518_p2 = (!mult_2557_V_reg_676199.read().is_01() || !add_ln703_2995_fu_662512_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_2557_V_reg_676199.read()) + sc_biguint<16>(add_ln703_2995_fu_662512_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2997_fu_632471_p2() {
    add_ln703_2997_fu_632471_p2 = (!mult_1469_V_fu_630581_p1.read().is_01() || !mult_1021_V_fu_629896_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1469_V_fu_630581_p1.read()) + sc_bigint<16>(mult_1021_V_fu_629896_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2998_fu_632477_p2() {
    add_ln703_2998_fu_632477_p2 = (!mult_445_V_fu_629649_p1.read().is_01() || !add_ln703_2997_fu_632471_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_445_V_fu_629649_p1.read()) + sc_biguint<16>(add_ln703_2997_fu_632471_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2999_fu_662523_p2() {
    add_ln703_2999_fu_662523_p2 = (!add_ln703_2996_fu_662518_p2.read().is_01() || !add_ln703_2998_reg_672148.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2996_fu_662518_p2.read()) + sc_biguint<16>(add_ln703_2998_reg_672148.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_299_fu_626696_p2() {
    add_ln703_299_fu_626696_p2 = (!mult_670_V_fu_625728_p1.read().is_01() || !mult_606_V_fu_625705_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_670_V_fu_625728_p1.read()) + sc_bigint<16>(mult_606_V_fu_625705_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_29_fu_626666_p2() {
    add_ln703_29_fu_626666_p2 = (!mult_200_V_fu_625435_p1.read().is_01() || !sext_ln703_14_fu_626662_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_200_V_fu_625435_p1.read()) + sc_bigint<16>(sext_ln703_14_fu_626662_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_2_fu_626650_p2() {
    add_ln703_2_fu_626650_p2 = (!reg_619907.read().is_01() || !add_ln703_1_fu_626644_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_619907.read()) + sc_biguint<16>(add_ln703_1_fu_626644_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3000_fu_636103_p2() {
    add_ln703_3000_fu_636103_p2 = (!mult_1853_V_fu_634166_p1.read().is_01() || !mult_1661_V_fu_633638_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1853_V_fu_634166_p1.read()) + sc_bigint<16>(mult_1661_V_fu_633638_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3001_fu_636109_p2() {
    add_ln703_3001_fu_636109_p2 = (!mult_1533_V_fu_633443_p1.read().is_01() || !add_ln703_3000_fu_636103_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1533_V_fu_633443_p1.read()) + sc_biguint<16>(add_ln703_3000_fu_636103_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3002_fu_639450_p2() {
    add_ln703_3002_fu_639450_p2 = (!mult_2109_V_fu_637378_p1.read().is_01() || !mult_2045_V_fu_637210_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2109_V_fu_637378_p1.read()) + sc_bigint<16>(mult_2045_V_fu_637210_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3003_fu_639456_p2() {
    add_ln703_3003_fu_639456_p2 = (!mult_1917_V_fu_636993_p1.read().is_01() || !add_ln703_3002_fu_639450_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1917_V_fu_636993_p1.read()) + sc_biguint<16>(add_ln703_3002_fu_639450_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3004_fu_639462_p2() {
    add_ln703_3004_fu_639462_p2 = (!add_ln703_3001_reg_673579.read().is_01() || !add_ln703_3003_fu_639456_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3001_reg_673579.read()) + sc_biguint<16>(add_ln703_3003_fu_639456_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3005_fu_662528_p2() {
    add_ln703_3005_fu_662528_p2 = (!add_ln703_2999_fu_662523_p2.read().is_01() || !add_ln703_3004_reg_674816.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2999_fu_662523_p2.read()) + sc_biguint<16>(add_ln703_3004_reg_674816.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3006_fu_662533_p2() {
    add_ln703_3006_fu_662533_p2 = (!add_ln703_2994_reg_677484.read().is_01() || !add_ln703_3005_fu_662528_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2994_reg_677484.read()) + sc_biguint<16>(add_ln703_3005_fu_662528_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3007_fu_642435_p2() {
    add_ln703_3007_fu_642435_p2 = (!mult_2429_V_fu_640646_p1.read().is_01() || !mult_2365_V_fu_640568_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2429_V_fu_640646_p1.read()) + sc_bigint<16>(mult_2365_V_fu_640568_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3008_fu_642441_p2() {
    add_ln703_3008_fu_642441_p2 = (!mult_2173_V_fu_640198_p1.read().is_01() || !add_ln703_3007_fu_642435_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2173_V_fu_640198_p1.read()) + sc_biguint<16>(add_ln703_3007_fu_642435_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3009_fu_651268_p2() {
    add_ln703_3009_fu_651268_p2 = (!mult_2941_V_fu_648118_p1.read().is_01() || !mult_2877_V_fu_647962_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2941_V_fu_648118_p1.read()) + sc_bigint<16>(mult_2877_V_fu_647962_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_300_fu_626702_p2() {
    add_ln703_300_fu_626702_p2 = (!mult_286_V_fu_625447_p1.read().is_01() || !add_ln703_299_fu_626696_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_286_V_fu_625447_p1.read()) + sc_biguint<16>(add_ln703_299_fu_626696_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3010_fu_651274_p2() {
    add_ln703_3010_fu_651274_p2 = (!mult_2749_V_fu_647681_p1.read().is_01() || !add_ln703_3009_fu_651268_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2749_V_fu_647681_p1.read()) + sc_biguint<16>(add_ln703_3009_fu_651268_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3011_fu_651280_p2() {
    add_ln703_3011_fu_651280_p2 = (!add_ln703_3008_reg_675948.read().is_01() || !add_ln703_3010_fu_651274_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3008_reg_675948.read()) + sc_biguint<16>(add_ln703_3010_fu_651274_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3012_fu_658516_p2() {
    add_ln703_3012_fu_658516_p2 = (!mult_3453_V_fu_655870_p1.read().is_01() || !mult_3343_V_fu_655720_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3453_V_fu_655870_p1.read()) + sc_bigint<16>(mult_3343_V_fu_655720_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3013_fu_658522_p2() {
    add_ln703_3013_fu_658522_p2 = (!mult_3197_V_fu_655635_p1.read().is_01() || !add_ln703_3012_fu_658516_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3197_V_fu_655635_p1.read()) + sc_biguint<16>(add_ln703_3012_fu_658516_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3014_fu_646744_p2() {
    add_ln703_3014_fu_646744_p2 = (!mult_317_V_fu_642669_p1.read().is_01() || !mult_4093_V_fu_645237_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_317_V_fu_642669_p1.read()) + sc_bigint<16>(mult_4093_V_fu_645237_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3015_fu_658528_p2() {
    add_ln703_3015_fu_658528_p2 = (!mult_3645_V_fu_656187_p1.read().is_01() || !add_ln703_3014_reg_677489.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3645_V_fu_656187_p1.read()) + sc_biguint<16>(add_ln703_3014_reg_677489.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3016_fu_658533_p2() {
    add_ln703_3016_fu_658533_p2 = (!add_ln703_3013_fu_658522_p2.read().is_01() || !add_ln703_3015_fu_658528_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3013_fu_658522_p2.read()) + sc_biguint<16>(add_ln703_3015_fu_658528_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3017_fu_658539_p2() {
    add_ln703_3017_fu_658539_p2 = (!add_ln703_3011_reg_679067.read().is_01() || !add_ln703_3016_fu_658533_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3011_reg_679067.read()) + sc_biguint<16>(add_ln703_3016_fu_658533_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3018_fu_629560_p2() {
    add_ln703_3018_fu_629560_p2 = (!sext_ln203_279_fu_628190_p1.read().is_01() || !sext_ln203_185_fu_627835_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_279_fu_628190_p1.read()) + sc_bigint<15>(sext_ln203_185_fu_627835_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3019_fu_629570_p2() {
    add_ln703_3019_fu_629570_p2 = (!mult_573_V_fu_627563_p1.read().is_01() || !sext_ln703_636_fu_629566_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_573_V_fu_627563_p1.read()) + sc_bigint<16>(sext_ln703_636_fu_629566_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_301_fu_628808_p2() {
    add_ln703_301_fu_628808_p2 = (!mult_1182_V_fu_628174_p1.read().is_01() || !mult_862_V_fu_627851_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1182_V_fu_628174_p1.read()) + sc_bigint<16>(mult_862_V_fu_627851_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3020_fu_651285_p2() {
    add_ln703_3020_fu_651285_p2 = (!sext_ln203_671_fu_647782_p1.read().is_01() || !sext_ln203_317_fu_647143_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_671_fu_647782_p1.read()) + sc_bigint<15>(sext_ln203_317_fu_647143_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3021_fu_651295_p2() {
    add_ln703_3021_fu_651295_p2 = (!mult_1277_V_fu_647139_p1.read().is_01() || !sext_ln703_637_fu_651291_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1277_V_fu_647139_p1.read()) + sc_bigint<16>(sext_ln703_637_fu_651291_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3022_fu_651301_p2() {
    add_ln703_3022_fu_651301_p2 = (!add_ln703_3019_reg_670931.read().is_01() || !add_ln703_3021_fu_651295_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3019_reg_670931.read()) + sc_biguint<16>(add_ln703_3021_fu_651295_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3023_fu_662538_p2() {
    add_ln703_3023_fu_662538_p2 = (!sext_ln203_905_fu_659074_p1.read().is_01() || !sext_ln203_894_fu_658990_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_905_fu_659074_p1.read()) + sc_bigint<15>(sext_ln203_894_fu_658990_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3024_fu_662548_p2() {
    add_ln703_3024_fu_662548_p2 = (!mult_3581_V_fu_658911_p1.read().is_01() || !sext_ln703_638_fu_662544_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3581_V_fu_658911_p1.read()) + sc_bigint<16>(sext_ln703_638_fu_662544_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3025_fu_665256_p2() {
    add_ln703_3025_fu_665256_p2 = (!sext_ln203_632_fu_662663_p1.read().is_01() || !ap_const_lv14_CF.is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_632_fu_662663_p1.read()) + sc_biguint<14>(ap_const_lv14_CF));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3026_fu_665266_p2() {
    add_ln703_3026_fu_665266_p2 = (!sext_ln203_973_fu_662880_p1.read().is_01() || !sext_ln703_639_fu_665262_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_973_fu_662880_p1.read()) + sc_bigint<15>(sext_ln703_639_fu_665262_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3027_fu_665276_p2() {
    add_ln703_3027_fu_665276_p2 = (!add_ln703_3024_reg_681173.read().is_01() || !sext_ln703_640_fu_665272_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3024_reg_681173.read()) + sc_bigint<16>(sext_ln703_640_fu_665272_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3028_fu_665281_p2() {
    add_ln703_3028_fu_665281_p2 = (!add_ln703_3022_reg_679072.read().is_01() || !add_ln703_3027_fu_665276_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3022_reg_679072.read()) + sc_biguint<16>(add_ln703_3027_fu_665276_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3029_fu_665286_p2() {
    add_ln703_3029_fu_665286_p2 = (!add_ln703_3017_reg_680648.read().is_01() || !add_ln703_3028_fu_665281_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3017_reg_680648.read()) + sc_biguint<16>(add_ln703_3028_fu_665281_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_302_fu_628814_p2() {
    add_ln703_302_fu_628814_p2 = (!mult_798_V_fu_627794_p1.read().is_01() || !add_ln703_301_fu_628808_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_798_V_fu_627794_p1.read()) + sc_biguint<16>(add_ln703_301_fu_628808_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3031_fu_623308_p2() {
    add_ln703_3031_fu_623308_p2 = (!grp_fu_616265_p4.read().is_01() || !mult_63_V_fu_622435_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616265_p4.read()) + sc_biguint<16>(mult_63_V_fu_622435_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3032_fu_629576_p2() {
    add_ln703_3032_fu_629576_p2 = (!grp_fu_615805_p4.read().is_01() || !reg_620423.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615805_p4.read()) + sc_biguint<16>(reg_620423.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3033_fu_629582_p2() {
    add_ln703_3033_fu_629582_p2 = (!reg_620199.read().is_01() || !add_ln703_3032_fu_629576_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620199.read()) + sc_biguint<16>(add_ln703_3032_fu_629576_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3034_fu_629588_p2() {
    add_ln703_3034_fu_629588_p2 = (!add_ln703_3031_reg_667978.read().is_01() || !add_ln703_3033_fu_629582_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3031_reg_667978.read()) + sc_biguint<16>(add_ln703_3033_fu_629582_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3035_fu_629593_p2() {
    add_ln703_3035_fu_629593_p2 = (!grp_fu_614875_p4.read().is_01() || !grp_fu_615425_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_614875_p4.read()) + sc_biguint<16>(grp_fu_615425_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3036_fu_646750_p2() {
    add_ln703_3036_fu_646750_p2 = (!grp_fu_615315_p4.read().is_01() || !reg_620063.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615315_p4.read()) + sc_biguint<16>(reg_620063.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3037_fu_646756_p2() {
    add_ln703_3037_fu_646756_p2 = (!reg_619979.read().is_01() || !add_ln703_3036_fu_646750_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_619979.read()) + sc_biguint<16>(add_ln703_3036_fu_646750_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3038_fu_646762_p2() {
    add_ln703_3038_fu_646762_p2 = (!add_ln703_3035_reg_670941.read().is_01() || !add_ln703_3037_fu_646756_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3035_reg_670941.read()) + sc_biguint<16>(add_ln703_3037_fu_646756_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3039_fu_646767_p2() {
    add_ln703_3039_fu_646767_p2 = (!add_ln703_3034_reg_670936.read().is_01() || !add_ln703_3038_fu_646762_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3034_reg_670936.read()) + sc_biguint<16>(add_ln703_3038_fu_646762_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_303_fu_628820_p2() {
    add_ln703_303_fu_628820_p2 = (!add_ln703_300_reg_669679.read().is_01() || !add_ln703_302_fu_628814_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_300_reg_669679.read()) + sc_biguint<16>(add_ln703_302_fu_628814_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3040_fu_651306_p2() {
    add_ln703_3040_fu_651306_p2 = (!grp_fu_616105_p4.read().is_01() || !mult_2751_V_reg_676303.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616105_p4.read()) + sc_biguint<16>(mult_2751_V_reg_676303.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3041_fu_658544_p2() {
    add_ln703_3041_fu_658544_p2 = (!grp_fu_618335_p4.read().is_01() || !grp_fu_618485_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618335_p4.read()) + sc_biguint<16>(grp_fu_618485_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3042_fu_658550_p2() {
    add_ln703_3042_fu_658550_p2 = (!mult_3327_V_reg_679272.read().is_01() || !add_ln703_3041_fu_658544_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_3327_V_reg_679272.read()) + sc_biguint<16>(add_ln703_3041_fu_658544_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3043_fu_658555_p2() {
    add_ln703_3043_fu_658555_p2 = (!add_ln703_3040_reg_679077.read().is_01() || !add_ln703_3042_fu_658550_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3040_reg_679077.read()) + sc_biguint<16>(add_ln703_3042_fu_658550_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3044_fu_639467_p2() {
    add_ln703_3044_fu_639467_p2 = (!mult_1983_V_fu_637133_p1.read().is_01() || !mult_1919_V_fu_636997_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1983_V_fu_637133_p1.read()) + sc_bigint<16>(mult_1919_V_fu_636997_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3045_fu_639473_p2() {
    add_ln703_3045_fu_639473_p2 = (!mult_1599_V_fu_636667_p1.read().is_01() || !add_ln703_3044_fu_639467_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1599_V_fu_636667_p1.read()) + sc_biguint<16>(add_ln703_3044_fu_639467_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3046_fu_642447_p2() {
    add_ln703_3046_fu_642447_p2 = (!mult_2303_V_fu_640476_p1.read().is_01() || !mult_2239_V_fu_640346_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2303_V_fu_640476_p1.read()) + sc_bigint<16>(mult_2239_V_fu_640346_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3047_fu_642453_p2() {
    add_ln703_3047_fu_642453_p2 = (!mult_2111_V_fu_640123_p1.read().is_01() || !add_ln703_3046_fu_642447_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2111_V_fu_640123_p1.read()) + sc_biguint<16>(add_ln703_3046_fu_642447_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3048_fu_642459_p2() {
    add_ln703_3048_fu_642459_p2 = (!add_ln703_3045_reg_674821.read().is_01() || !add_ln703_3047_fu_642453_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3045_reg_674821.read()) + sc_biguint<16>(add_ln703_3047_fu_642453_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3049_fu_658560_p2() {
    add_ln703_3049_fu_658560_p2 = (!add_ln703_3043_fu_658555_p2.read().is_01() || !add_ln703_3048_reg_675953.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3043_fu_658555_p2.read()) + sc_biguint<16>(add_ln703_3048_reg_675953.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_304_fu_635054_p2() {
    add_ln703_304_fu_635054_p2 = (!mult_1822_V_fu_634095_p1.read().is_01() || !mult_1758_V_fu_633931_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1822_V_fu_634095_p1.read()) + sc_bigint<16>(mult_1758_V_fu_633931_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3050_fu_658565_p2() {
    add_ln703_3050_fu_658565_p2 = (!add_ln703_3039_reg_677494.read().is_01() || !add_ln703_3049_fu_658560_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3039_reg_677494.read()) + sc_biguint<16>(add_ln703_3049_fu_658560_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3051_fu_646772_p2() {
    add_ln703_3051_fu_646772_p2 = (!mult_2559_V_fu_643451_p1.read().is_01() || !mult_2495_V_fu_643278_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2559_V_fu_643451_p1.read()) + sc_bigint<16>(mult_2495_V_fu_643278_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3052_fu_651311_p2() {
    add_ln703_3052_fu_651311_p2 = (!mult_3071_V_fu_648314_p1.read().is_01() || !mult_3007_V_fu_648252_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3071_V_fu_648314_p1.read()) + sc_bigint<16>(mult_3007_V_fu_648252_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3053_fu_651317_p2() {
    add_ln703_3053_fu_651317_p2 = (!mult_2815_V_fu_647786_p1.read().is_01() || !add_ln703_3052_fu_651311_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2815_V_fu_647786_p1.read()) + sc_biguint<16>(add_ln703_3052_fu_651311_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3054_fu_651323_p2() {
    add_ln703_3054_fu_651323_p2 = (!add_ln703_3051_reg_677499.read().is_01() || !add_ln703_3053_fu_651317_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3051_reg_677499.read()) + sc_biguint<16>(add_ln703_3053_fu_651317_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3055_fu_658570_p2() {
    add_ln703_3055_fu_658570_p2 = (!mult_3583_V_fu_656082_p1.read().is_01() || !mult_3263_V_fu_655673_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3583_V_fu_656082_p1.read()) + sc_bigint<16>(mult_3263_V_fu_655673_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3056_fu_665297_p2() {
    add_ln703_3056_fu_665297_p2 = (!mult_127_V_fu_662606_p1.read().is_01() || !mult_4031_V_fu_662888_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_127_V_fu_662606_p1.read()) + sc_bigint<16>(mult_4031_V_fu_662888_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3057_fu_665303_p2() {
    add_ln703_3057_fu_665303_p2 = (!mult_3839_V_fu_662769_p1.read().is_01() || !add_ln703_3056_fu_665297_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3839_V_fu_662769_p1.read()) + sc_biguint<16>(add_ln703_3056_fu_665297_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3058_fu_665309_p2() {
    add_ln703_3058_fu_665309_p2 = (!add_ln703_3055_reg_680658.read().is_01() || !add_ln703_3057_fu_665303_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3055_reg_680658.read()) + sc_biguint<16>(add_ln703_3057_fu_665303_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3059_fu_665314_p2() {
    add_ln703_3059_fu_665314_p2 = (!add_ln703_3054_reg_679082.read().is_01() || !add_ln703_3058_fu_665309_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3054_reg_679082.read()) + sc_biguint<16>(add_ln703_3058_fu_665309_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_305_fu_635060_p2() {
    add_ln703_305_fu_635060_p2 = (!mult_1310_V_fu_633089_p1.read().is_01() || !add_ln703_304_fu_635054_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1310_V_fu_633089_p1.read()) + sc_biguint<16>(add_ln703_304_fu_635054_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3060_fu_629599_p2() {
    add_ln703_3060_fu_629599_p2 = (!sext_ln203_259_fu_628122_p1.read().is_01() || !sext_ln203_88_fu_627522_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_259_fu_628122_p1.read()) + sc_bigint<15>(sext_ln203_88_fu_627522_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3061_fu_662557_p2() {
    add_ln703_3061_fu_662557_p2 = (!sext_ln203_908_fu_659100_p1.read().is_01() || !sext_ln203_887_fu_658953_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_908_fu_659100_p1.read()) + sc_bigint<15>(sext_ln203_887_fu_658953_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3062_fu_662567_p2() {
    add_ln703_3062_fu_662567_p2 = (!mult_1215_V_fu_658682_p1.read().is_01() || !sext_ln703_642_fu_662563_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1215_V_fu_658682_p1.read()) + sc_bigint<16>(sext_ln703_642_fu_662563_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3063_fu_662573_p2() {
    add_ln703_3063_fu_662573_p2 = (!sext_ln703_641_fu_662554_p1.read().is_01() || !add_ln703_3062_fu_662567_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_641_fu_662554_p1.read()) + sc_biguint<16>(add_ln703_3062_fu_662567_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3064_fu_642464_p2() {
    add_ln703_3064_fu_642464_p2 = (!sext_ln203_575_fu_640572_p1.read().is_01() || !sext_ln203_72_fu_639665_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_575_fu_640572_p1.read()) + sc_bigint<14>(sext_ln203_72_fu_639665_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3065_fu_665322_p2() {
    add_ln703_3065_fu_665322_p2 = (!sext_ln203_988_fu_663010_p1.read().is_01() || !sext_ln703_643_fu_665319_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_988_fu_663010_p1.read()) + sc_bigint<15>(sext_ln703_643_fu_665319_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3066_fu_655384_p2() {
    add_ln703_3066_fu_655384_p2 = (!sext_ln203_186_fu_651526_p1.read().is_01() || !ap_const_lv12_F91.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_186_fu_651526_p1.read()) + sc_bigint<12>(ap_const_lv12_F91));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3067_fu_655394_p2() {
    add_ln703_3067_fu_655394_p2 = (!sext_ln203_741_fu_652099_p1.read().is_01() || !sext_ln703_645_fu_655390_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_741_fu_652099_p1.read()) + sc_bigint<14>(sext_ln703_645_fu_655390_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3068_fu_665335_p2() {
    add_ln703_3068_fu_665335_p2 = (!sext_ln703_644_fu_665328_p1.read().is_01() || !sext_ln703_646_fu_665332_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_644_fu_665328_p1.read()) + sc_bigint<16>(sext_ln703_646_fu_665332_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3069_fu_665341_p2() {
    add_ln703_3069_fu_665341_p2 = (!add_ln703_3063_reg_681178.read().is_01() || !add_ln703_3068_fu_665335_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3063_reg_681178.read()) + sc_biguint<16>(add_ln703_3068_fu_665335_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_306_fu_638358_p2() {
    add_ln703_306_fu_638358_p2 = (!mult_2078_V_fu_637314_p1.read().is_01() || !mult_1856_V_fu_636915_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2078_V_fu_637314_p1.read()) + sc_bigint<16>(mult_1856_V_fu_636915_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3070_fu_665346_p2() {
    add_ln703_3070_fu_665346_p2 = (!add_ln703_3059_fu_665314_p2.read().is_01() || !add_ln703_3069_fu_665341_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3059_fu_665314_p2.read()) + sc_biguint<16>(add_ln703_3069_fu_665341_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_307_fu_645438_p2() {
    add_ln703_307_fu_645438_p2 = (!mult_2654_V_fu_643603_p1.read().is_01() || !mult_2334_V_fu_643058_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2654_V_fu_643603_p1.read()) + sc_bigint<16>(mult_2334_V_fu_643058_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_308_fu_645444_p2() {
    add_ln703_308_fu_645444_p2 = (!add_ln703_306_reg_674451.read().is_01() || !add_ln703_307_fu_645438_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_306_reg_674451.read()) + sc_biguint<16>(add_ln703_307_fu_645438_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_309_fu_645449_p2() {
    add_ln703_309_fu_645449_p2 = (!add_ln703_305_reg_673214.read().is_01() || !add_ln703_308_fu_645444_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_305_reg_673214.read()) + sc_biguint<16>(add_ln703_308_fu_645444_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_30_fu_656394_p2() {
    add_ln703_30_fu_656394_p2 = (!add_ln703_27_fu_656388_p2.read().is_01() || !add_ln703_29_reg_669659.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_27_fu_656388_p2.read()) + sc_biguint<16>(add_ln703_29_reg_669659.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_310_fu_645454_p2() {
    add_ln703_310_fu_645454_p2 = (!add_ln703_303_reg_670641.read().is_01() || !add_ln703_309_fu_645449_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_303_reg_670641.read()) + sc_biguint<16>(add_ln703_309_fu_645449_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_311_fu_656676_p2() {
    add_ln703_311_fu_656676_p2 = (!add_ln703_298_fu_656671_p2.read().is_01() || !add_ln703_310_reg_677069.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_298_fu_656671_p2.read()) + sc_biguint<16>(add_ln703_310_reg_677069.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_312_fu_649870_p2() {
    add_ln703_312_fu_649870_p2 = (!mult_2974_V_fu_648190_p1.read().is_01() || !mult_2846_V_fu_647884_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2974_V_fu_648190_p1.read()) + sc_bigint<16>(mult_2846_V_fu_647884_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_313_fu_649876_p2() {
    add_ln703_313_fu_649876_p2 = (!mult_2782_V_fu_647726_p1.read().is_01() || !add_ln703_312_fu_649870_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2782_V_fu_647726_p1.read()) + sc_biguint<16>(add_ln703_312_fu_649870_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_314_fu_656681_p2() {
    add_ln703_314_fu_656681_p2 = (!mult_3486_V_fu_655920_p1.read().is_01() || !mult_3294_V_fu_655694_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3486_V_fu_655920_p1.read()) + sc_bigint<16>(mult_3294_V_fu_655694_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_315_fu_656687_p2() {
    add_ln703_315_fu_656687_p2 = (!mult_3166_V_fu_655623_p1.read().is_01() || !add_ln703_314_fu_656681_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3166_V_fu_655623_p1.read()) + sc_biguint<16>(add_ln703_314_fu_656681_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_316_fu_656693_p2() {
    add_ln703_316_fu_656693_p2 = (!add_ln703_313_reg_678632.read().is_01() || !add_ln703_315_fu_656687_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_313_reg_678632.read()) + sc_biguint<16>(add_ln703_315_fu_656687_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_317_fu_659862_p2() {
    add_ln703_317_fu_659862_p2 = (!mult_3934_V_fu_659381_p1.read().is_01() || !mult_3870_V_fu_659255_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3934_V_fu_659381_p1.read()) + sc_bigint<16>(mult_3870_V_fu_659255_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_318_fu_659868_p2() {
    add_ln703_318_fu_659868_p2 = (!mult_3742_V_fu_659024_p1.read().is_01() || !add_ln703_317_fu_659862_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3742_V_fu_659024_p1.read()) + sc_biguint<16>(add_ln703_317_fu_659862_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_319_fu_626708_p2() {
    add_ln703_319_fu_626708_p2 = (!sext_ln203_156_fu_625819_p1.read().is_01() || !sext_ln203_81_fu_625506_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_156_fu_625819_p1.read()) + sc_bigint<15>(sext_ln203_81_fu_625506_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_31_fu_634954_p2() {
    add_ln703_31_fu_634954_p2 = (!sext_ln203_322_fu_633145_p1.read().is_01() || !sext_ln203_230_fu_632848_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_322_fu_633145_p1.read()) + sc_bigint<15>(sext_ln203_230_fu_632848_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_320_fu_631546_p2() {
    add_ln703_320_fu_631546_p2 = (!sext_ln203_346_fu_630514_p1.read().is_01() || !sext_ln203_251_fu_630019_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_346_fu_630514_p1.read()) + sc_bigint<15>(sext_ln203_251_fu_630019_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_321_fu_631556_p2() {
    add_ln703_321_fu_631556_p2 = (!sext_ln703_74_fu_631543_p1.read().is_01() || !sext_ln703_75_fu_631552_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_74_fu_631543_p1.read()) + sc_bigint<16>(sext_ln703_75_fu_631552_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_322_fu_659874_p2() {
    add_ln703_322_fu_659874_p2 = (!add_ln703_318_fu_659868_p2.read().is_01() || !add_ln703_321_reg_671798.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_318_fu_659868_p2.read()) + sc_biguint<16>(add_ln703_321_reg_671798.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_323_fu_659879_p2() {
    add_ln703_323_fu_659879_p2 = (!add_ln703_316_reg_680243.read().is_01() || !add_ln703_322_fu_659874_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_316_reg_680243.read()) + sc_biguint<16>(add_ln703_322_fu_659874_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_324_fu_649882_p2() {
    add_ln703_324_fu_649882_p2 = (!sext_ln203_696_fu_648036_p1.read().is_01() || !sext_ln203_520_fu_647234_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_696_fu_648036_p1.read()) + sc_bigint<15>(sext_ln203_520_fu_647234_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_325_fu_649892_p2() {
    add_ln703_325_fu_649892_p2 = (!mult_1694_V_fu_647162_p1.read().is_01() || !sext_ln703_76_fu_649888_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1694_V_fu_647162_p1.read()) + sc_bigint<16>(sext_ln703_76_fu_649888_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_326_fu_659884_p2() {
    add_ln703_326_fu_659884_p2 = (!sext_ln203_917_fu_659169_p1.read().is_01() || !sext_ln203_765_fu_658784_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_917_fu_659169_p1.read()) + sc_bigint<15>(sext_ln203_765_fu_658784_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_327_fu_659894_p2() {
    add_ln703_327_fu_659894_p2 = (!mult_3102_V_fu_658764_p1.read().is_01() || !sext_ln703_77_fu_659890_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3102_V_fu_658764_p1.read()) + sc_bigint<16>(sext_ln703_77_fu_659890_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_328_fu_659900_p2() {
    add_ln703_328_fu_659900_p2 = (!add_ln703_325_reg_678637.read().is_01() || !add_ln703_327_fu_659894_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_325_reg_678637.read()) + sc_biguint<16>(add_ln703_327_fu_659894_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_329_fu_631562_p2() {
    add_ln703_329_fu_631562_p2 = (!sext_ln203_332_fu_630344_p1.read().is_01() || !sext_ln203_109_fu_629656_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_332_fu_630344_p1.read()) + sc_bigint<14>(sext_ln203_109_fu_629656_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_32_fu_634964_p2() {
    add_ln703_32_fu_634964_p2 = (!mult_968_V_fu_632796_p1.read().is_01() || !sext_ln703_15_fu_634960_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_968_V_fu_632796_p1.read()) + sc_bigint<16>(sext_ln703_15_fu_634960_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_330_fu_663090_p2() {
    add_ln703_330_fu_663090_p2 = (!sext_ln203_963_fu_662829_p1.read().is_01() || !sext_ln703_78_fu_663087_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_963_fu_662829_p1.read()) + sc_bigint<15>(sext_ln703_78_fu_663087_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_331_fu_656698_p2() {
    add_ln703_331_fu_656698_p2 = (!sext_ln203_207_fu_655449_p1.read().is_01() || !sext_ln203_849_fu_656028_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_207_fu_655449_p1.read()) + sc_bigint<14>(sext_ln203_849_fu_656028_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_332_fu_656708_p2() {
    add_ln703_332_fu_656708_p2 = (!sext_ln203_388_fu_655461_p1.read().is_01() || !ap_const_lv13_1EE4.is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_388_fu_655461_p1.read()) + sc_bigint<13>(ap_const_lv13_1EE4));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_333_fu_656718_p2() {
    add_ln703_333_fu_656718_p2 = (!sext_ln703_80_fu_656704_p1.read().is_01() || !sext_ln703_81_fu_656714_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_80_fu_656704_p1.read()) + sc_bigint<15>(sext_ln703_81_fu_656714_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_334_fu_663103_p2() {
    add_ln703_334_fu_663103_p2 = (!sext_ln703_79_fu_663096_p1.read().is_01() || !sext_ln703_82_fu_663100_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_79_fu_663096_p1.read()) + sc_bigint<16>(sext_ln703_82_fu_663100_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_335_fu_663109_p2() {
    add_ln703_335_fu_663109_p2 = (!add_ln703_328_reg_680748.read().is_01() || !add_ln703_334_fu_663103_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_328_reg_680748.read()) + sc_biguint<16>(add_ln703_334_fu_663103_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_336_fu_663114_p2() {
    add_ln703_336_fu_663114_p2 = (!add_ln703_323_reg_680743.read().is_01() || !add_ln703_335_fu_663109_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_323_reg_680743.read()) + sc_biguint<16>(add_ln703_335_fu_663109_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_338_fu_626714_p2() {
    add_ln703_338_fu_626714_p2 = (!grp_fu_617205_p4.read().is_01() || !reg_620067.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_617205_p4.read()) + sc_biguint<16>(reg_620067.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_339_fu_626720_p2() {
    add_ln703_339_fu_626720_p2 = (!reg_619879.read().is_01() || !add_ln703_338_fu_626714_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_619879.read()) + sc_biguint<16>(add_ln703_338_fu_626714_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_33_fu_638239_p2() {
    add_ln703_33_fu_638239_p2 = (!sext_ln203_447_fu_636931_p1.read().is_01() || !sext_ln203_358_fu_636638_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_447_fu_636931_p1.read()) + sc_bigint<15>(sext_ln203_358_fu_636638_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_340_fu_628825_p2() {
    add_ln703_340_fu_628825_p2 = (!grp_fu_618805_p4.read().is_01() || !reg_620631.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618805_p4.read()) + sc_biguint<16>(reg_620631.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_341_fu_628831_p2() {
    add_ln703_341_fu_628831_p2 = (!reg_620147.read().is_01() || !add_ln703_340_fu_628825_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620147.read()) + sc_biguint<16>(add_ln703_340_fu_628825_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_342_fu_628837_p2() {
    add_ln703_342_fu_628837_p2 = (!add_ln703_339_reg_669689.read().is_01() || !add_ln703_341_fu_628831_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_339_reg_669689.read()) + sc_biguint<16>(add_ln703_341_fu_628831_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_343_fu_641398_p2() {
    add_ln703_343_fu_641398_p2 = (!grp_fu_618975_p4.read().is_01() || !grp_fu_617295_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618975_p4.read()) + sc_biguint<16>(grp_fu_617295_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_344_fu_641404_p2() {
    add_ln703_344_fu_641404_p2 = (!reg_620111.read().is_01() || !add_ln703_343_fu_641398_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620111.read()) + sc_biguint<16>(add_ln703_343_fu_641398_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_345_fu_653560_p2() {
    add_ln703_345_fu_653560_p2 = (!grp_fu_619825_p4.read().is_01() || !reg_620807.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_619825_p4.read()) + sc_biguint<16>(reg_620807.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_346_fu_653566_p2() {
    add_ln703_346_fu_653566_p2 = (!reg_620863.read().is_01() || !add_ln703_345_fu_653560_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620863.read()) + sc_biguint<16>(add_ln703_345_fu_653560_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_347_fu_653572_p2() {
    add_ln703_347_fu_653572_p2 = (!add_ln703_344_reg_675593.read().is_01() || !add_ln703_346_fu_653566_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_344_reg_675593.read()) + sc_biguint<16>(add_ln703_346_fu_653566_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_348_fu_653577_p2() {
    add_ln703_348_fu_653577_p2 = (!add_ln703_342_reg_670646.read().is_01() || !add_ln703_347_fu_653572_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_342_reg_670646.read()) + sc_biguint<16>(add_ln703_347_fu_653572_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_349_fu_663125_p2() {
    add_ln703_349_fu_663125_p2 = (!grp_fu_616825_p4.read().is_01() || !mult_3876_V_reg_680688.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616825_p4.read()) + sc_biguint<16>(mult_3876_V_reg_680688.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_34_fu_649788_p2() {
    add_ln703_34_fu_649788_p2 = (!sext_ln203_674_fu_647827_p1.read().is_01() || !sext_ln203_510_fu_647209_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_674_fu_647827_p1.read()) + sc_bigint<15>(sext_ln203_510_fu_647209_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_350_fu_663130_p2() {
    add_ln703_350_fu_663130_p2 = (!reg_620635.read().is_01() || !add_ln703_349_fu_663125_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620635.read()) + sc_biguint<16>(add_ln703_349_fu_663125_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_351_fu_626726_p2() {
    add_ln703_351_fu_626726_p2 = (!mult_804_V_fu_625934_p1.read().is_01() || !mult_484_V_fu_625542_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_804_V_fu_625934_p1.read()) + sc_bigint<16>(mult_484_V_fu_625542_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_352_fu_626732_p2() {
    add_ln703_352_fu_626732_p2 = (!mult_420_V_fu_625509_p1.read().is_01() || !add_ln703_351_fu_626726_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_420_V_fu_625509_p1.read()) + sc_biguint<16>(add_ln703_351_fu_626726_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_353_fu_663136_p2() {
    add_ln703_353_fu_663136_p2 = (!add_ln703_350_fu_663130_p2.read().is_01() || !add_ln703_352_reg_669694.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_350_fu_663130_p2.read()) + sc_biguint<16>(add_ln703_352_reg_669694.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_354_fu_638364_p2() {
    add_ln703_354_fu_638364_p2 = (!mult_2020_V_fu_637184_p1.read().is_01() || !mult_1828_V_fu_636878_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2020_V_fu_637184_p1.read()) + sc_bigint<16>(mult_1828_V_fu_636878_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_355_fu_638370_p2() {
    add_ln703_355_fu_638370_p2 = (!mult_1444_V_fu_636612_p1.read().is_01() || !add_ln703_354_fu_638364_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1444_V_fu_636612_p1.read()) + sc_biguint<16>(add_ln703_354_fu_638364_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_356_fu_649898_p2() {
    add_ln703_356_fu_649898_p2 = (!mult_3044_V_fu_648286_p1.read().is_01() || !mult_2980_V_fu_648208_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3044_V_fu_648286_p1.read()) + sc_bigint<16>(mult_2980_V_fu_648208_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_357_fu_649904_p2() {
    add_ln703_357_fu_649904_p2 = (!mult_2084_V_fu_647194_p1.read().is_01() || !add_ln703_356_fu_649898_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2084_V_fu_647194_p1.read()) + sc_biguint<16>(add_ln703_356_fu_649898_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_358_fu_649910_p2() {
    add_ln703_358_fu_649910_p2 = (!add_ln703_355_reg_674456.read().is_01() || !add_ln703_357_fu_649904_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_355_reg_674456.read()) + sc_biguint<16>(add_ln703_357_fu_649904_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_359_fu_663141_p2() {
    add_ln703_359_fu_663141_p2 = (!add_ln703_353_fu_663136_p2.read().is_01() || !add_ln703_358_reg_678642.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_353_fu_663136_p2.read()) + sc_biguint<16>(add_ln703_358_reg_678642.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_35_fu_649798_p2() {
    add_ln703_35_fu_649798_p2 = (!sext_ln703_16_fu_649785_p1.read().is_01() || !sext_ln703_17_fu_649794_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_16_fu_649785_p1.read()) + sc_bigint<16>(sext_ln703_17_fu_649794_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_360_fu_663146_p2() {
    add_ln703_360_fu_663146_p2 = (!add_ln703_348_reg_679553.read().is_01() || !add_ln703_359_fu_663141_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_348_reg_679553.read()) + sc_biguint<16>(add_ln703_359_fu_663141_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_361_fu_656724_p2() {
    add_ln703_361_fu_656724_p2 = (!mult_3492_V_fu_655928_p1.read().is_01() || !mult_3428_V_fu_655818_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3492_V_fu_655928_p1.read()) + sc_bigint<16>(mult_3428_V_fu_655818_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_362_fu_656730_p2() {
    add_ln703_362_fu_656730_p2 = (!mult_3236_V_fu_655658_p1.read().is_01() || !add_ln703_361_fu_656724_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3236_V_fu_655658_p1.read()) + sc_biguint<16>(add_ln703_361_fu_656724_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_363_fu_659905_p2() {
    add_ln703_363_fu_659905_p2 = (!mult_164_V_fu_658606_p1.read().is_01() || !mult_3748_V_fu_659032_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_164_V_fu_658606_p1.read()) + sc_bigint<16>(mult_3748_V_fu_659032_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_364_fu_659911_p2() {
    add_ln703_364_fu_659911_p2 = (!mult_3684_V_fu_658957_p1.read().is_01() || !add_ln703_363_fu_659905_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3684_V_fu_658957_p1.read()) + sc_biguint<16>(add_ln703_363_fu_659905_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_365_fu_659917_p2() {
    add_ln703_365_fu_659917_p2 = (!add_ln703_362_reg_680253.read().is_01() || !add_ln703_364_fu_659911_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_362_reg_680253.read()) + sc_biguint<16>(add_ln703_364_fu_659911_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_366_fu_624822_p2() {
    add_ln703_366_fu_624822_p2 = (!sext_ln203_112_fu_623937_p1.read().is_01() || !sext_ln203_69_fu_623571_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_112_fu_623937_p1.read()) + sc_bigint<15>(sext_ln203_69_fu_623571_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_367_fu_624832_p2() {
    add_ln703_367_fu_624832_p2 = (!mult_292_V_fu_623498_p1.read().is_01() || !sext_ln703_83_fu_624828_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_292_V_fu_623498_p1.read()) + sc_bigint<16>(sext_ln703_83_fu_624828_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_368_fu_635066_p2() {
    add_ln703_368_fu_635066_p2 = (!sext_ln203_421_fu_633949_p1.read().is_01() || !sext_ln203_292_fu_633081_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_421_fu_633949_p1.read()) + sc_bigint<15>(sext_ln203_292_fu_633081_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_369_fu_635076_p2() {
    add_ln703_369_fu_635076_p2 = (!mult_996_V_fu_632826_p1.read().is_01() || !sext_ln703_84_fu_635072_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_996_V_fu_632826_p1.read()) + sc_bigint<16>(sext_ln703_84_fu_635072_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_36_fu_649804_p2() {
    add_ln703_36_fu_649804_p2 = (!add_ln703_32_reg_673174.read().is_01() || !add_ln703_35_fu_649798_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_32_reg_673174.read()) + sc_biguint<16>(add_ln703_35_fu_649798_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_370_fu_635082_p2() {
    add_ln703_370_fu_635082_p2 = (!add_ln703_367_reg_668856.read().is_01() || !add_ln703_369_fu_635076_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_367_reg_668856.read()) + sc_biguint<16>(add_ln703_369_fu_635076_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_371_fu_659922_p2() {
    add_ln703_371_fu_659922_p2 = (!add_ln703_365_fu_659917_p2.read().is_01() || !add_ln703_370_reg_673219.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_365_fu_659917_p2.read()) + sc_biguint<16>(add_ln703_370_reg_673219.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_372_fu_656736_p2() {
    add_ln703_372_fu_656736_p2 = (!sext_ln203_868_fu_656158_p1.read().is_01() || !sext_ln203_653_fu_655535_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_868_fu_656158_p1.read()) + sc_bigint<15>(sext_ln203_653_fu_655535_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_373_fu_656746_p2() {
    add_ln703_373_fu_656746_p2 = (!mult_2404_V_fu_655495_p1.read().is_01() || !sext_ln703_85_fu_656742_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2404_V_fu_655495_p1.read()) + sc_bigint<16>(sext_ln703_85_fu_656742_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_374_fu_649915_p2() {
    add_ln703_374_fu_649915_p2 = (!sext_ln203_523_fu_647276_p1.read().is_01() || !sext_ln203_334_fu_647149_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_523_fu_647276_p1.read()) + sc_bigint<14>(sext_ln203_334_fu_647149_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_375_fu_659930_p2() {
    add_ln703_375_fu_659930_p2 = (!sext_ln203_948_fu_659397_p1.read().is_01() || !sext_ln703_86_fu_659927_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_948_fu_659397_p1.read()) + sc_bigint<15>(sext_ln703_86_fu_659927_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_376_fu_659940_p2() {
    add_ln703_376_fu_659940_p2 = (!add_ln703_373_reg_680258.read().is_01() || !sext_ln703_87_fu_659936_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_373_reg_680258.read()) + sc_bigint<16>(sext_ln703_87_fu_659936_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_377_fu_649921_p2() {
    add_ln703_377_fu_649921_p2 = (!sext_ln203_680_fu_647896_p1.read().is_01() || !sext_ln203_668_fu_647748_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_680_fu_647896_p1.read()) + sc_bigint<14>(sext_ln203_668_fu_647748_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_378_fu_649931_p2() {
    add_ln703_378_fu_649931_p2 = (!sext_ln203_569_fu_647346_p1.read().is_01() || !sext_ln703_88_fu_649927_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_569_fu_647346_p1.read()) + sc_bigint<15>(sext_ln703_88_fu_649927_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_379_fu_653585_p2() {
    add_ln703_379_fu_653585_p2 = (!sext_ln203_785_fu_652499_p1.read().is_01() || !sext_ln203_752_fu_652245_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_785_fu_652499_p1.read()) + sc_bigint<14>(sext_ln203_752_fu_652245_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_37_fu_656399_p2() {
    add_ln703_37_fu_656399_p2 = (!add_ln703_30_fu_656394_p2.read().is_01() || !add_ln703_36_reg_678602.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_30_fu_656394_p2.read()) + sc_biguint<16>(add_ln703_36_reg_678602.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_380_fu_653595_p2() {
    add_ln703_380_fu_653595_p2 = (!sext_ln203_374_fu_651587_p1.read().is_01() || !ap_const_lv11_75F.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_374_fu_651587_p1.read()) + sc_bigint<11>(ap_const_lv11_75F));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_381_fu_653605_p2() {
    add_ln703_381_fu_653605_p2 = (!sext_ln703_90_fu_653591_p1.read().is_01() || !sext_ln703_91_fu_653601_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_90_fu_653591_p1.read()) + sc_bigint<15>(sext_ln703_91_fu_653601_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_382_fu_653615_p2() {
    add_ln703_382_fu_653615_p2 = (!sext_ln703_89_fu_653582_p1.read().is_01() || !sext_ln703_92_fu_653611_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_89_fu_653582_p1.read()) + sc_bigint<16>(sext_ln703_92_fu_653611_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_383_fu_659945_p2() {
    add_ln703_383_fu_659945_p2 = (!add_ln703_376_fu_659940_p2.read().is_01() || !add_ln703_382_reg_679558.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_376_fu_659940_p2.read()) + sc_biguint<16>(add_ln703_382_reg_679558.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_384_fu_659950_p2() {
    add_ln703_384_fu_659950_p2 = (!add_ln703_371_fu_659922_p2.read().is_01() || !add_ln703_383_fu_659945_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_371_fu_659922_p2.read()) + sc_biguint<16>(add_ln703_383_fu_659945_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_386_fu_624838_p2() {
    add_ln703_386_fu_624838_p2 = (!grp_fu_617095_p4.read().is_01() || !grp_fu_616885_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_617095_p4.read()) + sc_biguint<16>(grp_fu_616885_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_387_fu_624844_p2() {
    add_ln703_387_fu_624844_p2 = (!reg_619935.read().is_01() || !add_ln703_386_fu_624838_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_619935.read()) + sc_biguint<16>(add_ln703_386_fu_624838_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_388_fu_628842_p2() {
    add_ln703_388_fu_628842_p2 = (!grp_fu_616995_p4.read().is_01() || !reg_619935.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616995_p4.read()) + sc_biguint<16>(reg_619935.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_389_fu_628848_p2() {
    add_ln703_389_fu_628848_p2 = (!reg_620635.read().is_01() || !add_ln703_388_fu_628842_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620635.read()) + sc_biguint<16>(add_ln703_388_fu_628842_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_38_fu_653368_p2() {
    add_ln703_38_fu_653368_p2 = (!sext_ln203_759_fu_652303_p1.read().is_01() || !sext_ln203_732_fu_652016_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_759_fu_652303_p1.read()) + sc_bigint<15>(sext_ln203_732_fu_652016_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_390_fu_628854_p2() {
    add_ln703_390_fu_628854_p2 = (!add_ln703_387_reg_668861.read().is_01() || !add_ln703_389_fu_628848_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_387_reg_668861.read()) + sc_biguint<16>(add_ln703_389_fu_628848_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_391_fu_641410_p2() {
    add_ln703_391_fu_641410_p2 = (!grp_fu_617565_p4.read().is_01() || !reg_620295.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_617565_p4.read()) + sc_biguint<16>(reg_620295.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_392_fu_641416_p2() {
    add_ln703_392_fu_641416_p2 = (!reg_620835.read().is_01() || !add_ln703_391_fu_641410_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620835.read()) + sc_biguint<16>(add_ln703_391_fu_641410_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_393_fu_649937_p2() {
    add_ln703_393_fu_649937_p2 = (!grp_fu_616445_p4.read().is_01() || !reg_621071.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616445_p4.read()) + sc_biguint<16>(reg_621071.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_394_fu_649943_p2() {
    add_ln703_394_fu_649943_p2 = (!grp_fu_618335_p4.read().is_01() || !grp_fu_616665_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618335_p4.read()) + sc_biguint<16>(grp_fu_616665_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_395_fu_649949_p2() {
    add_ln703_395_fu_649949_p2 = (!add_ln703_393_fu_649937_p2.read().is_01() || !add_ln703_394_fu_649943_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_393_fu_649937_p2.read()) + sc_biguint<16>(add_ln703_394_fu_649943_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_396_fu_649955_p2() {
    add_ln703_396_fu_649955_p2 = (!add_ln703_392_reg_675598.read().is_01() || !add_ln703_395_fu_649949_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_392_reg_675598.read()) + sc_biguint<16>(add_ln703_395_fu_649949_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_397_fu_649960_p2() {
    add_ln703_397_fu_649960_p2 = (!add_ln703_390_reg_670651.read().is_01() || !add_ln703_396_fu_649955_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_390_reg_670651.read()) + sc_biguint<16>(add_ln703_396_fu_649955_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_398_fu_659956_p2() {
    add_ln703_398_fu_659956_p2 = (!mult_229_V_fu_658619_p1.read().is_01() || !grp_fu_617605_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_229_V_fu_658619_p1.read()) + sc_biguint<16>(grp_fu_617605_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_399_fu_659962_p2() {
    add_ln703_399_fu_659962_p2 = (!reg_620007.read().is_01() || !add_ln703_398_fu_659956_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620007.read()) + sc_biguint<16>(add_ln703_398_fu_659956_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_39_fu_653378_p2() {
    add_ln703_39_fu_653378_p2 = (!mult_2952_V_fu_651924_p1.read().is_01() || !sext_ln703_18_fu_653374_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2952_V_fu_651924_p1.read()) + sc_bigint<16>(sext_ln703_18_fu_653374_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_3_fu_631410_p2() {
    add_ln703_3_fu_631410_p2 = (!grp_fu_616265_p4.read().is_01() || !grp_fu_616755_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616265_p4.read()) + sc_biguint<16>(grp_fu_616755_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_400_fu_628859_p2() {
    add_ln703_400_fu_628859_p2 = (!mult_788_V_fu_627774_p1.read().is_01() || !mult_677_V_fu_627590_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_788_V_fu_627774_p1.read()) + sc_bigint<16>(mult_677_V_fu_627590_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_401_fu_628865_p2() {
    add_ln703_401_fu_628865_p2 = (!mult_1125_V_fu_628102_p1.read().is_01() || !mult_1061_V_fu_628036_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1125_V_fu_628102_p1.read()) + sc_bigint<16>(mult_1061_V_fu_628036_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_402_fu_628871_p2() {
    add_ln703_402_fu_628871_p2 = (!add_ln703_400_fu_628859_p2.read().is_01() || !add_ln703_401_fu_628865_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_400_fu_628859_p2.read()) + sc_biguint<16>(add_ln703_401_fu_628865_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_403_fu_659968_p2() {
    add_ln703_403_fu_659968_p2 = (!add_ln703_399_fu_659962_p2.read().is_01() || !add_ln703_402_reg_670656.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_399_fu_659962_p2.read()) + sc_biguint<16>(add_ln703_402_reg_670656.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_404_fu_631568_p2() {
    add_ln703_404_fu_631568_p2 = (!mult_1509_V_fu_630623_p1.read().is_01() || !mult_1445_V_fu_630532_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1509_V_fu_630623_p1.read()) + sc_bigint<16>(mult_1445_V_fu_630532_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_405_fu_631574_p2() {
    add_ln703_405_fu_631574_p2 = (!mult_1381_V_fu_630369_p1.read().is_01() || !add_ln703_404_fu_631568_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1381_V_fu_630369_p1.read()) + sc_biguint<16>(add_ln703_404_fu_631568_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_406_fu_635087_p2() {
    add_ln703_406_fu_635087_p2 = (!mult_1829_V_fu_634134_p1.read().is_01() || !mult_1573_V_fu_633510_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1829_V_fu_634134_p1.read()) + sc_bigint<16>(mult_1573_V_fu_633510_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_407_fu_641422_p2() {
    add_ln703_407_fu_641422_p2 = (!mult_2149_V_fu_640170_p1.read().is_01() || !mult_1957_V_fu_639933_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2149_V_fu_640170_p1.read()) + sc_bigint<16>(mult_1957_V_fu_639933_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_408_fu_641428_p2() {
    add_ln703_408_fu_641428_p2 = (!add_ln703_406_reg_673224.read().is_01() || !add_ln703_407_fu_641422_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_406_reg_673224.read()) + sc_biguint<16>(add_ln703_407_fu_641422_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_409_fu_641433_p2() {
    add_ln703_409_fu_641433_p2 = (!add_ln703_405_reg_671808.read().is_01() || !add_ln703_408_fu_641428_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_405_reg_671808.read()) + sc_biguint<16>(add_ln703_408_fu_641428_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_40_fu_659519_p2() {
    add_ln703_40_fu_659519_p2 = (!sext_ln203_922_fu_659216_p1.read().is_01() || !sext_ln203_881_fu_658936_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_922_fu_659216_p1.read()) + sc_bigint<15>(sext_ln203_881_fu_658936_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_410_fu_659973_p2() {
    add_ln703_410_fu_659973_p2 = (!add_ln703_403_fu_659968_p2.read().is_01() || !add_ln703_409_reg_675603.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_403_fu_659968_p2.read()) + sc_biguint<16>(add_ln703_409_reg_675603.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_411_fu_659978_p2() {
    add_ln703_411_fu_659978_p2 = (!add_ln703_397_reg_678657.read().is_01() || !add_ln703_410_fu_659973_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_397_reg_678657.read()) + sc_biguint<16>(add_ln703_410_fu_659973_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_412_fu_645459_p2() {
    add_ln703_412_fu_645459_p2 = (!mult_2533_V_fu_643385_p1.read().is_01() || !mult_2405_V_fu_643112_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2533_V_fu_643385_p1.read()) + sc_bigint<16>(mult_2405_V_fu_643112_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_413_fu_645465_p2() {
    add_ln703_413_fu_645465_p2 = (!mult_2277_V_fu_643007_p1.read().is_01() || !add_ln703_412_fu_645459_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2277_V_fu_643007_p1.read()) + sc_biguint<16>(add_ln703_412_fu_645459_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_414_fu_653621_p2() {
    add_ln703_414_fu_653621_p2 = (!mult_3365_V_fu_652635_p1.read().is_01() || !mult_2597_V_fu_651730_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3365_V_fu_652635_p1.read()) + sc_bigint<16>(mult_2597_V_fu_651730_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_415_fu_659983_p2() {
    add_ln703_415_fu_659983_p2 = (!mult_3941_V_fu_659401_p1.read().is_01() || !mult_3493_V_fu_658846_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3941_V_fu_659401_p1.read()) + sc_bigint<16>(mult_3493_V_fu_658846_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_416_fu_659989_p2() {
    add_ln703_416_fu_659989_p2 = (!add_ln703_414_reg_679563.read().is_01() || !add_ln703_415_fu_659983_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_414_reg_679563.read()) + sc_biguint<16>(add_ln703_415_fu_659983_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_417_fu_659994_p2() {
    add_ln703_417_fu_659994_p2 = (!add_ln703_413_reg_677074.read().is_01() || !add_ln703_416_fu_659989_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_413_reg_677074.read()) + sc_biguint<16>(add_ln703_416_fu_659989_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_418_fu_645471_p2() {
    add_ln703_418_fu_645471_p2 = (!sext_ln203_113_fu_642697_p1.read().is_01() || !sext_ln203_42_fu_642647_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_113_fu_642697_p1.read()) + sc_bigint<15>(sext_ln203_42_fu_642647_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_419_fu_649968_p2() {
    add_ln703_419_fu_649968_p2 = (!mult_37_V_fu_646836_p1.read().is_01() || !sext_ln703_93_fu_649965_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_37_V_fu_646836_p1.read()) + sc_bigint<16>(sext_ln703_93_fu_649965_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_41_fu_659529_p2() {
    add_ln703_41_fu_659529_p2 = (!mult_3528_V_fu_658882_p1.read().is_01() || !sext_ln703_19_fu_659525_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3528_V_fu_658882_p1.read()) + sc_bigint<16>(sext_ln703_19_fu_659525_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_420_fu_631580_p2() {
    add_ln703_420_fu_631580_p2 = (!sext_ln203_310_fu_630224_p1.read().is_01() || !sext_ln203_160_fu_629726_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_310_fu_630224_p1.read()) + sc_bigint<15>(sext_ln203_160_fu_629726_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_421_fu_635096_p2() {
    add_ln703_421_fu_635096_p2 = (!sext_ln203_422_fu_633953_p1.read().is_01() || !sext_ln203_404_fu_633774_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_422_fu_633953_p1.read()) + sc_bigint<15>(sext_ln203_404_fu_633774_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_422_fu_635106_p2() {
    add_ln703_422_fu_635106_p2 = (!sext_ln703_94_fu_635093_p1.read().is_01() || !sext_ln703_95_fu_635102_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_94_fu_635093_p1.read()) + sc_bigint<16>(sext_ln703_95_fu_635102_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_423_fu_649974_p2() {
    add_ln703_423_fu_649974_p2 = (!add_ln703_419_fu_649968_p2.read().is_01() || !add_ln703_422_reg_673229.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_419_fu_649968_p2.read()) + sc_biguint<16>(add_ln703_422_reg_673229.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_424_fu_659999_p2() {
    add_ln703_424_fu_659999_p2 = (!add_ln703_417_fu_659994_p2.read().is_01() || !add_ln703_423_reg_678662.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_417_fu_659994_p2.read()) + sc_biguint<16>(add_ln703_423_reg_678662.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_425_fu_649979_p2() {
    add_ln703_425_fu_649979_p2 = (!sext_ln203_745_fu_648397_p1.read().is_01() || !sext_ln203_594_fu_647416_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_745_fu_648397_p1.read()) + sc_bigint<15>(sext_ln203_594_fu_647416_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_426_fu_649989_p2() {
    add_ln703_426_fu_649989_p2 = (!mult_2341_V_fu_647350_p1.read().is_01() || !sext_ln703_96_fu_649985_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2341_V_fu_647350_p1.read()) + sc_bigint<16>(sext_ln703_96_fu_649985_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_427_fu_663157_p2() {
    add_ln703_427_fu_663157_p2 = (!sext_ln203_967_fu_662845_p1.read().is_01() || !sext_ln203_851_fu_662705_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_967_fu_662845_p1.read()) + sc_bigint<15>(sext_ln203_851_fu_662705_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_428_fu_628877_p2() {
    add_ln703_428_fu_628877_p2 = (!sext_ln203_222_fu_627918_p1.read().is_01() || !sext_ln203_129_fu_627573_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_222_fu_627918_p1.read()) + sc_bigint<14>(sext_ln203_129_fu_627573_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_429_fu_663170_p2() {
    add_ln703_429_fu_663170_p2 = (!sext_ln703_97_fu_663163_p1.read().is_01() || !sext_ln703_98_fu_663167_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_97_fu_663163_p1.read()) + sc_bigint<16>(sext_ln703_98_fu_663167_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_42_fu_659535_p2() {
    add_ln703_42_fu_659535_p2 = (!add_ln703_39_reg_679508.read().is_01() || !add_ln703_41_fu_659529_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_39_reg_679508.read()) + sc_biguint<16>(add_ln703_41_fu_659529_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_430_fu_663176_p2() {
    add_ln703_430_fu_663176_p2 = (!add_ln703_426_reg_678667.read().is_01() || !add_ln703_429_fu_663170_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_426_reg_678667.read()) + sc_biguint<16>(add_ln703_429_fu_663170_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_431_fu_649995_p2() {
    add_ln703_431_fu_649995_p2 = (!sext_ln203_767_fu_648495_p1.read().is_01() || !sext_ln203_669_fu_647752_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_767_fu_648495_p1.read()) + sc_bigint<14>(sext_ln203_669_fu_647752_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_432_fu_650005_p2() {
    add_ln703_432_fu_650005_p2 = (!sext_ln203_496_fu_647198_p1.read().is_01() || !sext_ln703_99_fu_650001_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_496_fu_647198_p1.read()) + sc_bigint<15>(sext_ln703_99_fu_650001_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_433_fu_656755_p2() {
    add_ln703_433_fu_656755_p2 = (!sext_ln203_898_fu_656261_p1.read().is_01() || !sext_ln203_820_fu_655822_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_898_fu_656261_p1.read()) + sc_bigint<14>(sext_ln203_820_fu_655822_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_434_fu_656765_p2() {
    add_ln703_434_fu_656765_p2 = (!sext_ln203_869_fu_656162_p1.read().is_01() || !ap_const_lv13_1E98.is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_869_fu_656162_p1.read()) + sc_bigint<13>(ap_const_lv13_1E98));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_435_fu_656775_p2() {
    add_ln703_435_fu_656775_p2 = (!sext_ln703_101_fu_656761_p1.read().is_01() || !sext_ln703_102_fu_656771_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_101_fu_656761_p1.read()) + sc_bigint<15>(sext_ln703_102_fu_656771_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_436_fu_656785_p2() {
    add_ln703_436_fu_656785_p2 = (!sext_ln703_100_fu_656752_p1.read().is_01() || !sext_ln703_103_fu_656781_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_100_fu_656752_p1.read()) + sc_bigint<16>(sext_ln703_103_fu_656781_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_437_fu_663181_p2() {
    add_ln703_437_fu_663181_p2 = (!add_ln703_430_fu_663176_p2.read().is_01() || !add_ln703_436_reg_680263.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_430_fu_663176_p2.read()) + sc_biguint<16>(add_ln703_436_reg_680263.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_438_fu_663186_p2() {
    add_ln703_438_fu_663186_p2 = (!add_ln703_424_reg_680763.read().is_01() || !add_ln703_437_fu_663181_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_424_reg_680763.read()) + sc_biguint<16>(add_ln703_437_fu_663181_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_43_fu_641281_p2() {
    add_ln703_43_fu_641281_p2 = (!sext_ln203_586_fu_640650_p1.read().is_01() || !sext_ln203_527_fu_640212_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_586_fu_640650_p1.read()) + sc_bigint<14>(sext_ln203_527_fu_640212_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_440_fu_623136_p2() {
    add_ln703_440_fu_623136_p2 = (!grp_fu_616495_p4.read().is_01() || !grp_fu_616125_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616495_p4.read()) + sc_biguint<16>(grp_fu_616125_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_441_fu_623142_p2() {
    add_ln703_441_fu_623142_p2 = (!grp_fu_615105_p4.read().is_01() || !add_ln703_440_fu_623136_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615105_p4.read()) + sc_biguint<16>(add_ln703_440_fu_623136_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_442_fu_626738_p2() {
    add_ln703_442_fu_626738_p2 = (!grp_fu_616315_p4.read().is_01() || !reg_620399.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616315_p4.read()) + sc_biguint<16>(reg_620399.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_443_fu_626744_p2() {
    add_ln703_443_fu_626744_p2 = (!reg_620295.read().is_01() || !add_ln703_442_fu_626738_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620295.read()) + sc_biguint<16>(add_ln703_442_fu_626738_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_444_fu_626750_p2() {
    add_ln703_444_fu_626750_p2 = (!add_ln703_441_reg_667873.read().is_01() || !add_ln703_443_fu_626744_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_441_reg_667873.read()) + sc_biguint<16>(add_ln703_443_fu_626744_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_445_fu_628883_p2() {
    add_ln703_445_fu_628883_p2 = (!grp_fu_618715_p4.read().is_01() || !reg_620399.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618715_p4.read()) + sc_biguint<16>(reg_620399.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_446_fu_628889_p2() {
    add_ln703_446_fu_628889_p2 = (!reg_620639.read().is_01() || !add_ln703_445_fu_628883_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620639.read()) + sc_biguint<16>(add_ln703_445_fu_628883_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_447_fu_638376_p2() {
    add_ln703_447_fu_638376_p2 = (!grp_fu_617065_p4.read().is_01() || !grp_fu_619035_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_617065_p4.read()) + sc_biguint<16>(grp_fu_619035_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_448_fu_638382_p2() {
    add_ln703_448_fu_638382_p2 = (!grp_fu_618875_p4.read().is_01() || !add_ln703_447_fu_638376_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618875_p4.read()) + sc_biguint<16>(add_ln703_447_fu_638376_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_449_fu_638388_p2() {
    add_ln703_449_fu_638388_p2 = (!add_ln703_446_reg_670666.read().is_01() || !add_ln703_448_fu_638382_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_446_reg_670666.read()) + sc_biguint<16>(add_ln703_448_fu_638382_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_44_fu_641291_p2() {
    add_ln703_44_fu_641291_p2 = (!sext_ln203_489_fu_640015_p1.read().is_01() || !sext_ln703_20_fu_641287_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_489_fu_640015_p1.read()) + sc_bigint<15>(sext_ln703_20_fu_641287_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_450_fu_638393_p2() {
    add_ln703_450_fu_638393_p2 = (!add_ln703_444_reg_669699.read().is_01() || !add_ln703_449_fu_638388_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_444_reg_669699.read()) + sc_biguint<16>(add_ln703_449_fu_638388_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_451_fu_653627_p2() {
    add_ln703_451_fu_653627_p2 = (!grp_fu_618925_p4.read().is_01() || !reg_620835.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618925_p4.read()) + sc_biguint<16>(reg_620835.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_452_fu_653633_p2() {
    add_ln703_452_fu_653633_p2 = (!reg_620715.read().is_01() || !add_ln703_451_fu_653627_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620715.read()) + sc_biguint<16>(add_ln703_451_fu_653627_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_453_fu_660004_p2() {
    add_ln703_453_fu_660004_p2 = (!grp_fu_618925_p4.read().is_01() || !grp_fu_617795_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618925_p4.read()) + sc_biguint<16>(grp_fu_617795_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_454_fu_660010_p2() {
    add_ln703_454_fu_660010_p2 = (!reg_620123.read().is_01() || !add_ln703_453_fu_660004_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620123.read()) + sc_biguint<16>(add_ln703_453_fu_660004_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_455_fu_660016_p2() {
    add_ln703_455_fu_660016_p2 = (!add_ln703_452_reg_679568.read().is_01() || !add_ln703_454_fu_660010_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_452_reg_679568.read()) + sc_biguint<16>(add_ln703_454_fu_660010_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_456_fu_626755_p2() {
    add_ln703_456_fu_626755_p2 = (!mult_808_V_fu_625938_p1.read().is_01() || !mult_680_V_fu_625732_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_808_V_fu_625938_p1.read()) + sc_bigint<16>(mult_680_V_fu_625732_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_457_fu_626761_p2() {
    add_ln703_457_fu_626761_p2 = (!mult_104_V_fu_625367_p1.read().is_01() || !add_ln703_456_fu_626755_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_104_V_fu_625367_p1.read()) + sc_biguint<16>(add_ln703_456_fu_626755_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_458_fu_631586_p2() {
    add_ln703_458_fu_631586_p2 = (!mult_1384_V_fu_630383_p1.read().is_01() || !mult_1064_V_fu_629955_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1384_V_fu_630383_p1.read()) + sc_bigint<16>(mult_1064_V_fu_629955_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_459_fu_631592_p2() {
    add_ln703_459_fu_631592_p2 = (!mult_1000_V_fu_629872_p1.read().is_01() || !add_ln703_458_fu_631586_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1000_V_fu_629872_p1.read()) + sc_biguint<16>(add_ln703_458_fu_631586_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_45_fu_653387_p2() {
    add_ln703_45_fu_653387_p2 = (!sext_ln203_779_fu_652443_p1.read().is_01() || !sext_ln203_664_fu_651752_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_779_fu_652443_p1.read()) + sc_bigint<14>(sext_ln203_664_fu_651752_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_460_fu_631598_p2() {
    add_ln703_460_fu_631598_p2 = (!add_ln703_457_reg_669704.read().is_01() || !add_ln703_459_fu_631592_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_457_reg_669704.read()) + sc_biguint<16>(add_ln703_459_fu_631592_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_461_fu_660021_p2() {
    add_ln703_461_fu_660021_p2 = (!add_ln703_455_fu_660016_p2.read().is_01() || !add_ln703_460_reg_671818.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_455_fu_660016_p2.read()) + sc_biguint<16>(add_ln703_460_reg_671818.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_462_fu_660026_p2() {
    add_ln703_462_fu_660026_p2 = (!add_ln703_450_reg_674461.read().is_01() || !add_ln703_461_fu_660021_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_450_reg_674461.read()) + sc_biguint<16>(add_ln703_461_fu_660021_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_463_fu_638398_p2() {
    add_ln703_463_fu_638398_p2 = (!mult_2024_V_fu_637188_p1.read().is_01() || !mult_1832_V_fu_636882_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2024_V_fu_637188_p1.read()) + sc_bigint<16>(mult_1832_V_fu_636882_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_464_fu_638404_p2() {
    add_ln703_464_fu_638404_p2 = (!mult_1768_V_fu_636799_p1.read().is_01() || !add_ln703_463_fu_638398_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1768_V_fu_636799_p1.read()) + sc_biguint<16>(add_ln703_463_fu_638398_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_465_fu_650011_p2() {
    add_ln703_465_fu_650011_p2 = (!mult_2984_V_fu_648212_p1.read().is_01() || !mult_2536_V_fu_647495_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2984_V_fu_648212_p1.read()) + sc_bigint<16>(mult_2536_V_fu_647495_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_466_fu_650017_p2() {
    add_ln703_466_fu_650017_p2 = (!mult_2216_V_fu_647295_p1.read().is_01() || !add_ln703_465_fu_650011_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2216_V_fu_647295_p1.read()) + sc_biguint<16>(add_ln703_465_fu_650011_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_467_fu_650023_p2() {
    add_ln703_467_fu_650023_p2 = (!add_ln703_464_reg_674466.read().is_01() || !add_ln703_466_fu_650017_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_464_reg_674466.read()) + sc_biguint<16>(add_ln703_466_fu_650017_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_468_fu_663197_p2() {
    add_ln703_468_fu_663197_p2 = (!mult_168_V_fu_662612_p1.read().is_01() || !mult_4008_V_fu_662849_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_168_V_fu_662612_p1.read()) + sc_bigint<16>(mult_4008_V_fu_662849_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_469_fu_663203_p2() {
    add_ln703_469_fu_663203_p2 = (!mult_3176_V_fu_662670_p1.read().is_01() || !add_ln703_468_fu_663197_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3176_V_fu_662670_p1.read()) + sc_biguint<16>(add_ln703_468_fu_663197_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_46_fu_653397_p2() {
    add_ln703_46_fu_653397_p2 = (!sext_ln203_105_fu_651456_p1.read().is_01() || !ap_const_lv13_1F29.is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_105_fu_651456_p1.read()) + sc_bigint<13>(ap_const_lv13_1F29));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_470_fu_638410_p2() {
    add_ln703_470_fu_638410_p2 = (!sext_ln203_582_fu_637799_p1.read().is_01() || !sext_ln203_376_fu_636658_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_582_fu_637799_p1.read()) + sc_bigint<15>(sext_ln203_376_fu_636658_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_471_fu_638420_p2() {
    add_ln703_471_fu_638420_p2 = (!mult_488_V_fu_636200_p1.read().is_01() || !sext_ln703_104_fu_638416_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_488_V_fu_636200_p1.read()) + sc_bigint<16>(sext_ln703_104_fu_638416_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_472_fu_663209_p2() {
    add_ln703_472_fu_663209_p2 = (!add_ln703_469_fu_663203_p2.read().is_01() || !add_ln703_471_reg_674471.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_469_fu_663203_p2.read()) + sc_biguint<16>(add_ln703_471_reg_674471.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_473_fu_663214_p2() {
    add_ln703_473_fu_663214_p2 = (!add_ln703_467_reg_678677.read().is_01() || !add_ln703_472_fu_663209_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_467_reg_678677.read()) + sc_biguint<16>(add_ln703_472_fu_663209_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_474_fu_645477_p2() {
    add_ln703_474_fu_645477_p2 = (!sext_ln203_638_fu_643623_p1.read().is_01() || !sext_ln203_628_fu_643505_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_638_fu_643623_p1.read()) + sc_bigint<15>(sext_ln203_628_fu_643505_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_475_fu_645487_p2() {
    add_ln703_475_fu_645487_p2 = (!mult_2472_V_fu_643244_p1.read().is_01() || !sext_ln703_105_fu_645483_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2472_V_fu_643244_p1.read()) + sc_bigint<16>(sext_ln703_105_fu_645483_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_476_fu_653639_p2() {
    add_ln703_476_fu_653639_p2 = (!sext_ln203_787_fu_652517_p1.read().is_01() || !sext_ln203_768_fu_652354_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_787_fu_652517_p1.read()) + sc_bigint<15>(sext_ln203_768_fu_652354_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_477_fu_653649_p2() {
    add_ln703_477_fu_653649_p2 = (!mult_3048_V_fu_651990_p1.read().is_01() || !sext_ln703_106_fu_653645_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3048_V_fu_651990_p1.read()) + sc_bigint<16>(sext_ln703_106_fu_653645_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_478_fu_653655_p2() {
    add_ln703_478_fu_653655_p2 = (!add_ln703_475_reg_677084.read().is_01() || !add_ln703_477_fu_653649_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_475_reg_677084.read()) + sc_biguint<16>(add_ln703_477_fu_653649_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_479_fu_660031_p2() {
    add_ln703_479_fu_660031_p2 = (!sext_ln203_274_fu_658678_p1.read().is_01() || !sext_ln203_71_fu_658628_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_274_fu_658678_p1.read()) + sc_bigint<14>(sext_ln203_71_fu_658628_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_47_fu_653407_p2() {
    add_ln703_47_fu_653407_p2 = (!sext_ln703_22_fu_653393_p1.read().is_01() || !sext_ln703_23_fu_653403_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_22_fu_653393_p1.read()) + sc_bigint<15>(sext_ln703_23_fu_653403_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_480_fu_660041_p2() {
    add_ln703_480_fu_660041_p2 = (!sext_ln203_950_fu_659418_p1.read().is_01() || !sext_ln703_107_fu_660037_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_950_fu_659418_p1.read()) + sc_bigint<15>(sext_ln703_107_fu_660037_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_481_fu_656791_p2() {
    add_ln703_481_fu_656791_p2 = (!sext_ln203_835_fu_655932_p1.read().is_01() || !sext_ln203_391_fu_655464_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_835_fu_655932_p1.read()) + sc_bigint<14>(sext_ln203_391_fu_655464_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_482_fu_656801_p2() {
    add_ln703_482_fu_656801_p2 = (!sext_ln203_406_fu_655470_p1.read().is_01() || !ap_const_lv13_1FED.is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_406_fu_655470_p1.read()) + sc_bigint<13>(ap_const_lv13_1FED));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_483_fu_656811_p2() {
    add_ln703_483_fu_656811_p2 = (!sext_ln703_109_fu_656797_p1.read().is_01() || !sext_ln703_110_fu_656807_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_109_fu_656797_p1.read()) + sc_bigint<15>(sext_ln703_110_fu_656807_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_484_fu_660054_p2() {
    add_ln703_484_fu_660054_p2 = (!sext_ln703_108_fu_660047_p1.read().is_01() || !sext_ln703_111_fu_660051_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_108_fu_660047_p1.read()) + sc_bigint<16>(sext_ln703_111_fu_660051_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_485_fu_660060_p2() {
    add_ln703_485_fu_660060_p2 = (!add_ln703_478_reg_679573.read().is_01() || !add_ln703_484_fu_660054_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_478_reg_679573.read()) + sc_biguint<16>(add_ln703_484_fu_660054_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_486_fu_663219_p2() {
    add_ln703_486_fu_663219_p2 = (!add_ln703_473_fu_663214_p2.read().is_01() || !add_ln703_485_reg_680773.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_473_fu_663214_p2.read()) + sc_biguint<16>(add_ln703_485_reg_680773.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_488_fu_624850_p2() {
    add_ln703_488_fu_624850_p2 = (!grp_fu_617715_p4.read().is_01() || !grp_fu_616905_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_617715_p4.read()) + sc_biguint<16>(grp_fu_616905_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_489_fu_638426_p2() {
    add_ln703_489_fu_638426_p2 = (!mult_235_V_fu_636180_p4.read().is_01() || !add_ln703_488_reg_668866.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_235_V_fu_636180_p4.read()) + sc_biguint<16>(add_ln703_488_reg_668866.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_48_fu_653417_p2() {
    add_ln703_48_fu_653417_p2 = (!sext_ln703_21_fu_653384_p1.read().is_01() || !sext_ln703_24_fu_653413_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_21_fu_653384_p1.read()) + sc_bigint<16>(sext_ln703_24_fu_653413_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_490_fu_631603_p2() {
    add_ln703_490_fu_631603_p2 = (!grp_fu_618585_p4.read().is_01() || !reg_620375.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618585_p4.read()) + sc_biguint<16>(reg_620375.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_491_fu_631609_p2() {
    add_ln703_491_fu_631609_p2 = (!reg_620643.read().is_01() || !add_ln703_490_fu_631603_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620643.read()) + sc_biguint<16>(add_ln703_490_fu_631603_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_492_fu_638431_p2() {
    add_ln703_492_fu_638431_p2 = (!add_ln703_489_fu_638426_p2.read().is_01() || !add_ln703_491_reg_671823.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_489_fu_638426_p2.read()) + sc_biguint<16>(add_ln703_491_reg_671823.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_493_fu_645493_p2() {
    add_ln703_493_fu_645493_p2 = (!grp_fu_618555_p4.read().is_01() || !mult_1707_V_reg_672528.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618555_p4.read()) + sc_biguint<16>(mult_1707_V_reg_672528.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_494_fu_645498_p2() {
    add_ln703_494_fu_645498_p2 = (!reg_620939.read().is_01() || !add_ln703_493_fu_645493_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620939.read()) + sc_biguint<16>(add_ln703_493_fu_645493_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_495_fu_650028_p2() {
    add_ln703_495_fu_650028_p2 = (!grp_fu_615585_p4.read().is_01() || !grp_fu_619645_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615585_p4.read()) + sc_biguint<16>(grp_fu_619645_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_496_fu_656817_p2() {
    add_ln703_496_fu_656817_p2 = (!grp_fu_618415_p4.read().is_01() || !reg_621079.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618415_p4.read()) + sc_biguint<16>(reg_621079.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_497_fu_656823_p2() {
    add_ln703_497_fu_656823_p2 = (!add_ln703_495_reg_678682.read().is_01() || !add_ln703_496_fu_656817_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_495_reg_678682.read()) + sc_biguint<16>(add_ln703_496_fu_656817_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_498_fu_656828_p2() {
    add_ln703_498_fu_656828_p2 = (!add_ln703_494_reg_677089.read().is_01() || !add_ln703_497_fu_656823_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_494_reg_677089.read()) + sc_biguint<16>(add_ln703_497_fu_656823_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_499_fu_656833_p2() {
    add_ln703_499_fu_656833_p2 = (!add_ln703_492_reg_674476.read().is_01() || !add_ln703_498_fu_656828_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_492_reg_674476.read()) + sc_biguint<16>(add_ln703_498_fu_656828_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_49_fu_659540_p2() {
    add_ln703_49_fu_659540_p2 = (!add_ln703_42_fu_659535_p2.read().is_01() || !add_ln703_48_reg_679513.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_42_fu_659535_p2.read()) + sc_biguint<16>(add_ln703_48_reg_679513.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_4_fu_631416_p2() {
    add_ln703_4_fu_631416_p2 = (!mult_1224_V_reg_670201.read().is_01() || !add_ln703_3_fu_631410_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1224_V_reg_670201.read()) + sc_biguint<16>(add_ln703_3_fu_631410_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_500_fu_660065_p2() {
    add_ln703_500_fu_660065_p2 = (!mult_171_V_fu_658610_p1.read().is_01() || !grp_fu_616445_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_171_V_fu_658610_p1.read()) + sc_biguint<16>(grp_fu_616445_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_501_fu_660071_p2() {
    add_ln703_501_fu_660071_p2 = (!mult_3542_V_reg_680098.read().is_01() || !add_ln703_500_fu_660065_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_3542_V_reg_680098.read()) + sc_biguint<16>(add_ln703_500_fu_660065_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_502_fu_631615_p2() {
    add_ln703_502_fu_631615_p2 = (!mult_1451_V_fu_630540_p1.read().is_01() || !mult_1323_V_fu_630232_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1451_V_fu_630540_p1.read()) + sc_bigint<16>(mult_1323_V_fu_630232_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_503_fu_631621_p2() {
    add_ln703_503_fu_631621_p2 = (!mult_747_V_fu_629729_p1.read().is_01() || !add_ln703_502_fu_631615_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_747_V_fu_629729_p1.read()) + sc_biguint<16>(add_ln703_502_fu_631615_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_504_fu_660076_p2() {
    add_ln703_504_fu_660076_p2 = (!add_ln703_501_fu_660071_p2.read().is_01() || !add_ln703_503_reg_671828.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_501_fu_660071_p2.read()) + sc_biguint<16>(add_ln703_503_reg_671828.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_505_fu_638436_p2() {
    add_ln703_505_fu_638436_p2 = (!mult_2091_V_fu_637332_p1.read().is_01() || !mult_2027_V_fu_637192_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2091_V_fu_637332_p1.read()) + sc_bigint<16>(mult_2027_V_fu_637192_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_506_fu_638442_p2() {
    add_ln703_506_fu_638442_p2 = (!mult_1579_V_fu_636661_p1.read().is_01() || !add_ln703_505_fu_638436_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1579_V_fu_636661_p1.read()) + sc_biguint<16>(add_ln703_505_fu_638436_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_507_fu_645504_p2() {
    add_ln703_507_fu_645504_p2 = (!mult_2731_V_fu_643807_p1.read().is_01() || !mult_2283_V_fu_643011_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2731_V_fu_643807_p1.read()) + sc_bigint<16>(mult_2283_V_fu_643011_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_508_fu_660081_p2() {
    add_ln703_508_fu_660081_p2 = (!mult_3883_V_fu_659279_p1.read().is_01() || !mult_3627_V_fu_658923_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3883_V_fu_659279_p1.read()) + sc_bigint<16>(mult_3627_V_fu_658923_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_509_fu_660087_p2() {
    add_ln703_509_fu_660087_p2 = (!add_ln703_507_reg_677094.read().is_01() || !add_ln703_508_fu_660081_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_507_reg_677094.read()) + sc_biguint<16>(add_ln703_508_fu_660081_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_50_fu_659545_p2() {
    add_ln703_50_fu_659545_p2 = (!add_ln703_37_reg_680188.read().is_01() || !add_ln703_49_fu_659540_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_37_reg_680188.read()) + sc_biguint<16>(add_ln703_49_fu_659540_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_510_fu_660092_p2() {
    add_ln703_510_fu_660092_p2 = (!add_ln703_506_reg_674481.read().is_01() || !add_ln703_509_fu_660087_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_506_reg_674481.read()) + sc_biguint<16>(add_ln703_509_fu_660087_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_511_fu_660097_p2() {
    add_ln703_511_fu_660097_p2 = (!add_ln703_504_fu_660076_p2.read().is_01() || !add_ln703_510_fu_660092_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_504_fu_660076_p2.read()) + sc_biguint<16>(add_ln703_510_fu_660092_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_512_fu_660103_p2() {
    add_ln703_512_fu_660103_p2 = (!add_ln703_499_reg_680273.read().is_01() || !add_ln703_511_fu_660097_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_499_reg_680273.read()) + sc_biguint<16>(add_ln703_511_fu_660097_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_513_fu_626767_p2() {
    add_ln703_513_fu_626767_p2 = (!sext_ln203_143_fu_625736_p1.read().is_01() || !sext_ln203_83_fu_625513_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_143_fu_625736_p1.read()) + sc_bigint<15>(sext_ln203_83_fu_625513_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_514_fu_626777_p2() {
    add_ln703_514_fu_626777_p2 = (!mult_299_V_fu_625451_p1.read().is_01() || !sext_ln703_112_fu_626773_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_299_V_fu_625451_p1.read()) + sc_bigint<16>(sext_ln703_112_fu_626773_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_515_fu_626783_p2() {
    add_ln703_515_fu_626783_p2 = (!sext_ln203_254_fu_626165_p1.read().is_01() || !sext_ln203_210_fu_626113_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_254_fu_626165_p1.read()) + sc_bigint<15>(sext_ln203_210_fu_626113_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_516_fu_626793_p2() {
    add_ln703_516_fu_626793_p2 = (!mult_811_V_fu_625946_p1.read().is_01() || !sext_ln703_113_fu_626789_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_811_V_fu_625946_p1.read()) + sc_bigint<16>(sext_ln703_113_fu_626789_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_517_fu_626799_p2() {
    add_ln703_517_fu_626799_p2 = (!add_ln703_514_fu_626777_p2.read().is_01() || !add_ln703_516_fu_626793_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_514_fu_626777_p2.read()) + sc_biguint<16>(add_ln703_516_fu_626793_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_518_fu_635112_p2() {
    add_ln703_518_fu_635112_p2 = (!sext_ln203_440_fu_634142_p1.read().is_01() || !sext_ln203_423_fu_633971_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_440_fu_634142_p1.read()) + sc_bigint<15>(sext_ln203_423_fu_633971_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_519_fu_635122_p2() {
    add_ln703_519_fu_635122_p2 = (!mult_1515_V_fu_633425_p1.read().is_01() || !sext_ln703_114_fu_635118_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1515_V_fu_633425_p1.read()) + sc_bigint<16>(sext_ln703_114_fu_635118_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_520_fu_641438_p2() {
    add_ln703_520_fu_641438_p2 = (!sext_ln203_538_fu_640310_p1.read().is_01() || !sext_ln203_468_fu_639941_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_538_fu_640310_p1.read()) + sc_bigint<15>(sext_ln203_468_fu_639941_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_521_fu_641448_p2() {
    add_ln703_521_fu_641448_p2 = (!sext_ln203_591_fu_640658_p1.read().is_01() || !sext_ln203_571_fu_640544_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_591_fu_640658_p1.read()) + sc_bigint<15>(sext_ln203_571_fu_640544_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_522_fu_641458_p2() {
    add_ln703_522_fu_641458_p2 = (!sext_ln703_115_fu_641444_p1.read().is_01() || !sext_ln703_116_fu_641454_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_115_fu_641444_p1.read()) + sc_bigint<16>(sext_ln703_116_fu_641454_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_523_fu_641464_p2() {
    add_ln703_523_fu_641464_p2 = (!add_ln703_519_reg_673234.read().is_01() || !add_ln703_522_fu_641458_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_519_reg_673234.read()) + sc_biguint<16>(add_ln703_522_fu_641458_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_524_fu_641469_p2() {
    add_ln703_524_fu_641469_p2 = (!add_ln703_517_reg_669709.read().is_01() || !add_ln703_523_fu_641464_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_517_reg_669709.read()) + sc_biguint<16>(add_ln703_523_fu_641464_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_525_fu_663230_p2() {
    add_ln703_525_fu_663230_p2 = (!sext_ln203_962_fu_662813_p1.read().is_01() || !sext_ln203_803_fu_662681_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_962_fu_662813_p1.read()) + sc_bigint<15>(sext_ln203_803_fu_662681_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_526_fu_663240_p2() {
    add_ln703_526_fu_663240_p2 = (!mult_2859_V_fu_662666_p1.read().is_01() || !sext_ln703_117_fu_663236_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2859_V_fu_662666_p1.read()) + sc_bigint<16>(sext_ln703_117_fu_663236_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_527_fu_626805_p2() {
    add_ln703_527_fu_626805_p2 = (!sext_ln203_293_fu_626227_p1.read().is_01() || !sext_ln203_275_fu_626179_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_293_fu_626227_p1.read()) + sc_bigint<14>(sext_ln203_275_fu_626179_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_528_fu_626815_p2() {
    add_ln703_528_fu_626815_p2 = (!sext_ln203_22_fu_625381_p1.read().is_01() || !sext_ln703_118_fu_626811_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_22_fu_625381_p1.read()) + sc_bigint<15>(sext_ln703_118_fu_626811_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_529_fu_663249_p2() {
    add_ln703_529_fu_663249_p2 = (!add_ln703_526_fu_663240_p2.read().is_01() || !sext_ln703_119_fu_663246_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_526_fu_663240_p2.read()) + sc_bigint<16>(sext_ln703_119_fu_663246_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_52_fu_624776_p2() {
    add_ln703_52_fu_624776_p2 = (!grp_fu_617365_p4.read().is_01() || !grp_fu_616125_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_617365_p4.read()) + sc_biguint<16>(grp_fu_616125_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_530_fu_660108_p2() {
    add_ln703_530_fu_660108_p2 = (!sext_ln203_952_fu_659422_p1.read().is_01() || !sext_ln203_821_fu_658820_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_952_fu_659422_p1.read()) + sc_bigint<14>(sext_ln203_821_fu_658820_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_531_fu_660118_p2() {
    add_ln703_531_fu_660118_p2 = (!sext_ln203_700_fu_658736_p1.read().is_01() || !sext_ln703_120_fu_660114_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_700_fu_658736_p1.read()) + sc_bigint<15>(sext_ln703_120_fu_660114_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_532_fu_653660_p2() {
    add_ln703_532_fu_653660_p2 = (!sext_ln203_770_fu_652371_p1.read().is_01() || !sext_ln203_616_fu_651727_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_770_fu_652371_p1.read()) + sc_bigint<13>(sext_ln203_616_fu_651727_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_533_fu_653670_p2() {
    add_ln703_533_fu_653670_p2 = (!sext_ln203_901_fu_652965_p1.read().is_01() || !ap_const_lv13_1F99.is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_901_fu_652965_p1.read()) + sc_bigint<13>(ap_const_lv13_1F99));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_534_fu_653680_p2() {
    add_ln703_534_fu_653680_p2 = (!sext_ln703_122_fu_653666_p1.read().is_01() || !sext_ln703_123_fu_653676_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_122_fu_653666_p1.read()) + sc_bigint<14>(sext_ln703_123_fu_653676_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_535_fu_660131_p2() {
    add_ln703_535_fu_660131_p2 = (!sext_ln703_121_fu_660124_p1.read().is_01() || !sext_ln703_124_fu_660128_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_121_fu_660124_p1.read()) + sc_bigint<16>(sext_ln703_124_fu_660128_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_536_fu_663255_p2() {
    add_ln703_536_fu_663255_p2 = (!add_ln703_529_fu_663249_p2.read().is_01() || !add_ln703_535_reg_680783.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_529_fu_663249_p2.read()) + sc_biguint<16>(add_ln703_535_reg_680783.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_537_fu_663260_p2() {
    add_ln703_537_fu_663260_p2 = (!add_ln703_524_reg_675608.read().is_01() || !add_ln703_536_fu_663255_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_524_reg_675608.read()) + sc_biguint<16>(add_ln703_536_fu_663255_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_539_fu_626821_p2() {
    add_ln703_539_fu_626821_p2 = (!grp_fu_618205_p4.read().is_01() || !reg_620011.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618205_p4.read()) + sc_biguint<16>(reg_620011.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_53_fu_624782_p2() {
    add_ln703_53_fu_624782_p2 = (!grp_fu_616835_p4.read().is_01() || !add_ln703_52_fu_624776_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616835_p4.read()) + sc_biguint<16>(add_ln703_52_fu_624776_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_540_fu_626827_p2() {
    add_ln703_540_fu_626827_p2 = (!reg_620187.read().is_01() || !add_ln703_539_fu_626821_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620187.read()) + sc_biguint<16>(add_ln703_539_fu_626821_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_542_fu_641474_p2() {
    add_ln703_542_fu_641474_p2 = (!reg_620855.read().is_01() || !grp_fu_621111_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620855.read()) + sc_biguint<16>(grp_fu_621111_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_543_fu_641480_p2() {
    add_ln703_543_fu_641480_p2 = (!add_ln703_540_reg_669719.read().is_01() || !add_ln703_542_fu_641474_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_540_reg_669719.read()) + sc_biguint<16>(add_ln703_542_fu_641474_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_544_fu_645510_p2() {
    add_ln703_544_fu_645510_p2 = (!grp_fu_616635_p4.read().is_01() || !grp_fu_614875_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616635_p4.read()) + sc_biguint<16>(grp_fu_614875_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_545_fu_645516_p2() {
    add_ln703_545_fu_645516_p2 = (!grp_fu_616355_p4.read().is_01() || !add_ln703_544_fu_645510_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616355_p4.read()) + sc_biguint<16>(add_ln703_544_fu_645510_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_546_fu_656838_p2() {
    add_ln703_546_fu_656838_p2 = (!grp_fu_616835_p4.read().is_01() || !grp_fu_617065_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616835_p4.read()) + sc_biguint<16>(grp_fu_617065_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_547_fu_656844_p2() {
    add_ln703_547_fu_656844_p2 = (!mult_3191_V_reg_679197.read().is_01() || !add_ln703_546_fu_656838_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_3191_V_reg_679197.read()) + sc_biguint<16>(add_ln703_546_fu_656838_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_548_fu_656849_p2() {
    add_ln703_548_fu_656849_p2 = (!add_ln703_545_reg_677099.read().is_01() || !add_ln703_547_fu_656844_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_545_reg_677099.read()) + sc_biguint<16>(add_ln703_547_fu_656844_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_549_fu_656854_p2() {
    add_ln703_549_fu_656854_p2 = (!add_ln703_543_reg_675613.read().is_01() || !add_ln703_548_fu_656849_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_543_reg_675613.read()) + sc_biguint<16>(add_ln703_548_fu_656849_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_54_fu_628729_p2() {
    add_ln703_54_fu_628729_p2 = (!grp_fu_618875_p4.read().is_01() || !grp_fu_618545_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618875_p4.read()) + sc_biguint<16>(grp_fu_618545_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_550_fu_663271_p2() {
    add_ln703_550_fu_663271_p2 = (!mult_55_V_fu_662597_p1.read().is_01() || !grp_fu_614965_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_55_V_fu_662597_p1.read()) + sc_biguint<16>(grp_fu_614965_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_551_fu_663277_p2() {
    add_ln703_551_fu_663277_p2 = (!mult_3703_V_reg_680663.read().is_01() || !add_ln703_550_fu_663271_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_3703_V_reg_680663.read()) + sc_biguint<16>(add_ln703_550_fu_663271_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_552_fu_624856_p2() {
    add_ln703_552_fu_624856_p2 = (!mult_631_V_fu_624073_p1.read().is_01() || !mult_375_V_fu_623609_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_631_V_fu_624073_p1.read()) + sc_bigint<16>(mult_375_V_fu_623609_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_553_fu_624862_p2() {
    add_ln703_553_fu_624862_p2 = (!mult_183_V_fu_623429_p1.read().is_01() || !add_ln703_552_fu_624856_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_183_V_fu_623429_p1.read()) + sc_biguint<16>(add_ln703_552_fu_624856_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_554_fu_663282_p2() {
    add_ln703_554_fu_663282_p2 = (!add_ln703_551_fu_663277_p2.read().is_01() || !add_ln703_553_reg_668871.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_551_fu_663277_p2.read()) + sc_biguint<16>(add_ln703_553_reg_668871.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_555_fu_631627_p2() {
    add_ln703_555_fu_631627_p2 = (!mult_1399_V_fu_630416_p1.read().is_01() || !mult_1153_V_fu_630061_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1399_V_fu_630416_p1.read()) + sc_bigint<16>(mult_1153_V_fu_630061_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_556_fu_631633_p2() {
    add_ln703_556_fu_631633_p2 = (!mult_887_V_fu_629802_p1.read().is_01() || !add_ln703_555_fu_631627_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_887_V_fu_629802_p1.read()) + sc_biguint<16>(add_ln703_555_fu_631627_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_557_fu_635128_p2() {
    add_ln703_557_fu_635128_p2 = (!mult_1719_V_fu_633810_p1.read().is_01() || !mult_1655_V_fu_633626_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1719_V_fu_633810_p1.read()) + sc_bigint<16>(mult_1655_V_fu_633626_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_558_fu_635134_p2() {
    add_ln703_558_fu_635134_p2 = (!mult_1527_V_fu_633433_p1.read().is_01() || !add_ln703_557_fu_635128_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1527_V_fu_633433_p1.read()) + sc_biguint<16>(add_ln703_557_fu_635128_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_559_fu_635140_p2() {
    add_ln703_559_fu_635140_p2 = (!add_ln703_556_reg_671833.read().is_01() || !add_ln703_558_fu_635134_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_556_reg_671833.read()) + sc_biguint<16>(add_ln703_558_fu_635134_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_55_fu_628735_p2() {
    add_ln703_55_fu_628735_p2 = (!reg_620615.read().is_01() || !add_ln703_54_fu_628729_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620615.read()) + sc_biguint<16>(add_ln703_54_fu_628729_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_560_fu_663287_p2() {
    add_ln703_560_fu_663287_p2 = (!add_ln703_554_fu_663282_p2.read().is_01() || !add_ln703_559_reg_673239.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_554_fu_663282_p2.read()) + sc_biguint<16>(add_ln703_559_reg_673239.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_561_fu_663292_p2() {
    add_ln703_561_fu_663292_p2 = (!add_ln703_549_reg_680278.read().is_01() || !add_ln703_560_fu_663287_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_549_reg_680278.read()) + sc_biguint<16>(add_ln703_560_fu_663287_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_562_fu_650034_p2() {
    add_ln703_562_fu_650034_p2 = (!mult_2807_V_fu_647774_p1.read().is_01() || !mult_2231_V_fu_647298_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2807_V_fu_647774_p1.read()) + sc_bigint<16>(mult_2231_V_fu_647298_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_563_fu_650040_p2() {
    add_ln703_563_fu_650040_p2 = (!mult_1783_V_fu_647165_p1.read().is_01() || !add_ln703_562_fu_650034_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1783_V_fu_647165_p1.read()) + sc_biguint<16>(add_ln703_562_fu_650034_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_564_fu_653686_p2() {
    add_ln703_564_fu_653686_p2 = (!mult_3127_V_fu_652087_p1.read().is_01() || !mult_2999_V_fu_651959_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3127_V_fu_652087_p1.read()) + sc_bigint<16>(mult_2999_V_fu_651959_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_565_fu_653692_p2() {
    add_ln703_565_fu_653692_p2 = (!mult_2935_V_fu_651914_p1.read().is_01() || !add_ln703_564_fu_653686_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2935_V_fu_651914_p1.read()) + sc_biguint<16>(add_ln703_564_fu_653686_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_566_fu_653698_p2() {
    add_ln703_566_fu_653698_p2 = (!add_ln703_563_reg_678687.read().is_01() || !add_ln703_565_fu_653692_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_563_reg_678687.read()) + sc_biguint<16>(add_ln703_565_fu_653692_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_567_fu_641485_p2() {
    add_ln703_567_fu_641485_p2 = (!sext_ln203_49_fu_639662_p1.read().is_01() || !sext_ln203_25_fu_639513_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_49_fu_639662_p1.read()) + sc_bigint<15>(sext_ln203_25_fu_639513_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_568_fu_660140_p2() {
    add_ln703_568_fu_660140_p2 = (!mult_3767_V_fu_659078_p1.read().is_01() || !sext_ln703_125_fu_660137_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3767_V_fu_659078_p1.read()) + sc_bigint<16>(sext_ln703_125_fu_660137_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_569_fu_626833_p2() {
    add_ln703_569_fu_626833_p2 = (!sext_ln203_166_fu_625847_p1.read().is_01() || !sext_ln203_145_fu_625744_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_166_fu_625847_p1.read()) + sc_bigint<15>(sext_ln203_145_fu_625744_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_56_fu_628741_p2() {
    add_ln703_56_fu_628741_p2 = (!add_ln703_53_reg_668826.read().is_01() || !add_ln703_55_fu_628735_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_53_reg_668826.read()) + sc_biguint<16>(add_ln703_55_fu_628735_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_570_fu_626843_p2() {
    add_ln703_570_fu_626843_p2 = (!mult_567_V_fu_625658_p1.read().is_01() || !sext_ln703_126_fu_626839_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_567_V_fu_625658_p1.read()) + sc_bigint<16>(sext_ln703_126_fu_626839_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_571_fu_660146_p2() {
    add_ln703_571_fu_660146_p2 = (!add_ln703_568_fu_660140_p2.read().is_01() || !add_ln703_570_reg_669724.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_568_fu_660140_p2.read()) + sc_biguint<16>(add_ln703_570_reg_669724.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_572_fu_660151_p2() {
    add_ln703_572_fu_660151_p2 = (!add_ln703_566_reg_679583.read().is_01() || !add_ln703_571_fu_660146_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_566_reg_679583.read()) + sc_biguint<16>(add_ln703_571_fu_660146_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_573_fu_631639_p2() {
    add_ln703_573_fu_631639_p2 = (!sext_ln203_298_fu_630143_p1.read().is_01() || !sext_ln203_257_fu_630051_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_298_fu_630143_p1.read()) + sc_bigint<15>(sext_ln203_257_fu_630051_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_574_fu_631649_p2() {
    add_ln703_574_fu_631649_p2 = (!mult_1079_V_fu_629971_p1.read().is_01() || !sext_ln703_127_fu_631645_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1079_V_fu_629971_p1.read()) + sc_bigint<16>(sext_ln703_127_fu_631645_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_575_fu_645522_p2() {
    add_ln703_575_fu_645522_p2 = (!sext_ln203_613_fu_643365_p1.read().is_01() || !sext_ln203_583_fu_643127_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_613_fu_643365_p1.read()) + sc_bigint<15>(sext_ln203_583_fu_643127_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_576_fu_645532_p2() {
    add_ln703_576_fu_645532_p2 = (!mult_2295_V_fu_643015_p1.read().is_01() || !sext_ln703_128_fu_645528_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2295_V_fu_643015_p1.read()) + sc_bigint<16>(sext_ln703_128_fu_645528_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_577_fu_645538_p2() {
    add_ln703_577_fu_645538_p2 = (!add_ln703_574_reg_671838.read().is_01() || !add_ln703_576_fu_645532_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_574_reg_671838.read()) + sc_biguint<16>(add_ln703_576_fu_645532_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_578_fu_660156_p2() {
    add_ln703_578_fu_660156_p2 = (!sext_ln203_937_fu_659295_p1.read().is_01() || !sext_ln203_843_fu_658860_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_937_fu_659295_p1.read()) + sc_bigint<15>(sext_ln203_843_fu_658860_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_579_fu_660166_p2() {
    add_ln703_579_fu_660166_p2 = (!mult_2871_V_fu_658728_p1.read().is_01() || !sext_ln703_129_fu_660162_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2871_V_fu_658728_p1.read()) + sc_bigint<16>(sext_ln703_129_fu_660162_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_57_fu_638245_p2() {
    add_ln703_57_fu_638245_p2 = (!mult_2394_V_fu_637769_p4.read().is_01() || !reg_620295.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_2394_V_fu_637769_p4.read()) + sc_biguint<16>(reg_620295.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_580_fu_656859_p2() {
    add_ln703_580_fu_656859_p2 = (!sext_ln203_824_fu_655862_p1.read().is_01() || !sext_ln203_729_fu_655592_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_824_fu_655862_p1.read()) + sc_bigint<14>(sext_ln203_729_fu_655592_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_581_fu_656869_p2() {
    add_ln703_581_fu_656869_p2 = (!sext_ln203_956_fu_656320_p1.read().is_01() || !ap_const_lv13_1F17.is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_956_fu_656320_p1.read()) + sc_bigint<13>(ap_const_lv13_1F17));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_582_fu_656879_p2() {
    add_ln703_582_fu_656879_p2 = (!sext_ln703_130_fu_656865_p1.read().is_01() || !sext_ln703_131_fu_656875_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_130_fu_656865_p1.read()) + sc_bigint<15>(sext_ln703_131_fu_656875_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_583_fu_660175_p2() {
    add_ln703_583_fu_660175_p2 = (!add_ln703_579_fu_660166_p2.read().is_01() || !sext_ln703_132_fu_660172_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_579_fu_660166_p2.read()) + sc_bigint<16>(sext_ln703_132_fu_660172_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_584_fu_660181_p2() {
    add_ln703_584_fu_660181_p2 = (!add_ln703_577_reg_677104.read().is_01() || !add_ln703_583_fu_660175_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_577_reg_677104.read()) + sc_biguint<16>(add_ln703_583_fu_660175_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_585_fu_660186_p2() {
    add_ln703_585_fu_660186_p2 = (!add_ln703_572_fu_660151_p2.read().is_01() || !add_ln703_584_fu_660181_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_572_fu_660151_p2.read()) + sc_biguint<16>(add_ln703_584_fu_660181_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_587_fu_628895_p2() {
    add_ln703_587_fu_628895_p2 = (!grp_fu_615105_p4.read().is_01() || !reg_620051.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615105_p4.read()) + sc_biguint<16>(reg_620051.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_588_fu_635145_p2() {
    add_ln703_588_fu_635145_p2 = (!grp_fu_617845_p4.read().is_01() || !mult_1465_V_reg_671191.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_617845_p4.read()) + sc_biguint<16>(mult_1465_V_reg_671191.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_589_fu_635150_p2() {
    add_ln703_589_fu_635150_p2 = (!reg_620635.read().is_01() || !add_ln703_588_fu_635145_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620635.read()) + sc_biguint<16>(add_ln703_588_fu_635145_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_58_fu_638251_p2() {
    add_ln703_58_fu_638251_p2 = (!mult_1498_V_reg_671221.read().is_01() || !add_ln703_57_fu_638245_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1498_V_reg_671221.read()) + sc_biguint<16>(add_ln703_57_fu_638245_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_590_fu_635156_p2() {
    add_ln703_590_fu_635156_p2 = (!add_ln703_587_reg_670671.read().is_01() || !add_ln703_589_fu_635150_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_587_reg_670671.read()) + sc_biguint<16>(add_ln703_589_fu_635150_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_591_fu_650046_p2() {
    add_ln703_591_fu_650046_p2 = (!grp_fu_615015_p4.read().is_01() || !reg_620111.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615015_p4.read()) + sc_biguint<16>(reg_620111.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_592_fu_650052_p2() {
    add_ln703_592_fu_650052_p2 = (!mult_2361_V_reg_675084.read().is_01() || !add_ln703_591_fu_650046_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_2361_V_reg_675084.read()) + sc_biguint<16>(add_ln703_591_fu_650046_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_593_fu_656885_p2() {
    add_ln703_593_fu_656885_p2 = (!grp_fu_615155_p4.read().is_01() || !reg_620863.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615155_p4.read()) + sc_biguint<16>(reg_620863.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_594_fu_656891_p2() {
    add_ln703_594_fu_656891_p2 = (!mult_3193_V_reg_679202.read().is_01() || !add_ln703_593_fu_656885_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_3193_V_reg_679202.read()) + sc_biguint<16>(add_ln703_593_fu_656885_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_595_fu_656896_p2() {
    add_ln703_595_fu_656896_p2 = (!add_ln703_592_reg_678692.read().is_01() || !add_ln703_594_fu_656891_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_592_reg_678692.read()) + sc_biguint<16>(add_ln703_594_fu_656891_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_596_fu_656901_p2() {
    add_ln703_596_fu_656901_p2 = (!add_ln703_590_reg_673244.read().is_01() || !add_ln703_595_fu_656896_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_590_reg_673244.read()) + sc_biguint<16>(add_ln703_595_fu_656896_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_597_fu_660192_p2() {
    add_ln703_597_fu_660192_p2 = (!mult_441_V_fu_658647_p1.read().is_01() || !grp_fu_616865_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_441_V_fu_658647_p1.read()) + sc_biguint<16>(grp_fu_616865_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_598_fu_660198_p2() {
    add_ln703_598_fu_660198_p2 = (!grp_fu_619825_p4.read().is_01() || !add_ln703_597_fu_660192_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_619825_p4.read()) + sc_biguint<16>(add_ln703_597_fu_660192_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_599_fu_626849_p2() {
    add_ln703_599_fu_626849_p2 = (!mult_697_V_fu_625748_p1.read().is_01() || !mult_569_V_fu_625662_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_697_V_fu_625748_p1.read()) + sc_bigint<16>(mult_569_V_fu_625662_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_59_fu_656404_p2() {
    add_ln703_59_fu_656404_p2 = (!grp_fu_619645_p4.read().is_01() || !reg_620839.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_619645_p4.read()) + sc_biguint<16>(reg_620839.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_5_fu_631421_p2() {
    add_ln703_5_fu_631421_p2 = (!add_ln703_2_reg_669654.read().is_01() || !add_ln703_4_fu_631416_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2_reg_669654.read()) + sc_biguint<16>(add_ln703_4_fu_631416_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_600_fu_626855_p2() {
    add_ln703_600_fu_626855_p2 = (!mult_505_V_fu_625556_p1.read().is_01() || !add_ln703_599_fu_626849_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_505_V_fu_625556_p1.read()) + sc_biguint<16>(add_ln703_599_fu_626849_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_601_fu_660204_p2() {
    add_ln703_601_fu_660204_p2 = (!add_ln703_598_fu_660198_p2.read().is_01() || !add_ln703_600_reg_669729.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_598_fu_660198_p2.read()) + sc_biguint<16>(add_ln703_600_reg_669729.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_602_fu_628901_p2() {
    add_ln703_602_fu_628901_p2 = (!mult_1145_V_fu_628118_p1.read().is_01() || !mult_889_V_fu_627861_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1145_V_fu_628118_p1.read()) + sc_bigint<16>(mult_889_V_fu_627861_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_603_fu_628907_p2() {
    add_ln703_603_fu_628907_p2 = (!mult_825_V_fu_627828_p1.read().is_01() || !add_ln703_602_fu_628901_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_825_V_fu_627828_p1.read()) + sc_biguint<16>(add_ln703_602_fu_628901_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_604_fu_641491_p2() {
    add_ln703_604_fu_641491_p2 = (!mult_2297_V_fu_640462_p1.read().is_01() || !mult_2105_V_fu_640109_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2297_V_fu_640462_p1.read()) + sc_bigint<16>(mult_2105_V_fu_640109_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_605_fu_641497_p2() {
    add_ln703_605_fu_641497_p2 = (!mult_2041_V_fu_639979_p1.read().is_01() || !add_ln703_604_fu_641491_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2041_V_fu_639979_p1.read()) + sc_biguint<16>(add_ln703_604_fu_641491_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_606_fu_641503_p2() {
    add_ln703_606_fu_641503_p2 = (!add_ln703_603_reg_670676.read().is_01() || !add_ln703_605_fu_641497_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_603_reg_670676.read()) + sc_biguint<16>(add_ln703_605_fu_641497_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_607_fu_660209_p2() {
    add_ln703_607_fu_660209_p2 = (!add_ln703_601_fu_660204_p2.read().is_01() || !add_ln703_606_reg_675623.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_601_fu_660204_p2.read()) + sc_biguint<16>(add_ln703_606_reg_675623.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_608_fu_660214_p2() {
    add_ln703_608_fu_660214_p2 = (!add_ln703_596_reg_680288.read().is_01() || !add_ln703_607_fu_660209_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_596_reg_680288.read()) + sc_biguint<16>(add_ln703_607_fu_660209_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_609_fu_656906_p2() {
    add_ln703_609_fu_656906_p2 = (!mult_3577_V_fu_656060_p1.read().is_01() || !mult_3385_V_fu_655744_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3577_V_fu_656060_p1.read()) + sc_bigint<16>(mult_3385_V_fu_655744_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_60_fu_656410_p2() {
    add_ln703_60_fu_656410_p2 = (!mult_2650_V_reg_676229.read().is_01() || !add_ln703_59_fu_656404_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_2650_V_reg_676229.read()) + sc_biguint<16>(add_ln703_59_fu_656404_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_610_fu_656912_p2() {
    add_ln703_610_fu_656912_p2 = (!mult_2937_V_fu_655574_p1.read().is_01() || !add_ln703_609_fu_656906_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2937_V_fu_655574_p1.read()) + sc_biguint<16>(add_ln703_609_fu_656906_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_611_fu_663303_p2() {
    add_ln703_611_fu_663303_p2 = (!mult_35_V_fu_662585_p1.read().is_01() || !mult_4025_V_fu_662876_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_35_V_fu_662585_p1.read()) + sc_bigint<16>(mult_4025_V_fu_662876_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_612_fu_663309_p2() {
    add_ln703_612_fu_663309_p2 = (!mult_3897_V_fu_662787_p1.read().is_01() || !add_ln703_611_fu_663303_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3897_V_fu_662787_p1.read()) + sc_biguint<16>(add_ln703_611_fu_663303_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_613_fu_663315_p2() {
    add_ln703_613_fu_663315_p2 = (!add_ln703_610_reg_680293.read().is_01() || !add_ln703_612_fu_663309_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_610_reg_680293.read()) + sc_biguint<16>(add_ln703_612_fu_663309_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_614_fu_626861_p2() {
    add_ln703_614_fu_626861_p2 = (!sext_ln203_299_fu_626241_p1.read().is_01() || !sext_ln203_167_fu_625851_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_299_fu_626241_p1.read()) + sc_bigint<15>(sext_ln203_167_fu_625851_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_615_fu_626871_p2() {
    add_ln703_615_fu_626871_p2 = (!mult_121_V_fu_625389_p1.read().is_01() || !sext_ln703_133_fu_626867_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_121_V_fu_625389_p1.read()) + sc_bigint<16>(sext_ln703_133_fu_626867_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_616_fu_635161_p2() {
    add_ln703_616_fu_635161_p2 = (!sext_ln203_398_fu_633652_p1.read().is_01() || !sext_ln203_379_fu_633550_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_398_fu_633652_p1.read()) + sc_bigint<15>(sext_ln203_379_fu_633550_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_617_fu_635171_p2() {
    add_ln703_617_fu_635171_p2 = (!mult_1529_V_fu_633437_p1.read().is_01() || !sext_ln703_134_fu_635167_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1529_V_fu_633437_p1.read()) + sc_bigint<16>(sext_ln703_134_fu_635167_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_618_fu_635177_p2() {
    add_ln703_618_fu_635177_p2 = (!add_ln703_615_reg_669734.read().is_01() || !add_ln703_617_fu_635171_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_615_reg_669734.read()) + sc_biguint<16>(add_ln703_617_fu_635171_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_619_fu_663320_p2() {
    add_ln703_619_fu_663320_p2 = (!add_ln703_613_fu_663315_p2.read().is_01() || !add_ln703_618_reg_673249.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_613_fu_663315_p2.read()) + sc_biguint<16>(add_ln703_618_reg_673249.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_61_fu_656415_p2() {
    add_ln703_61_fu_656415_p2 = (!add_ln703_58_reg_674416.read().is_01() || !add_ln703_60_fu_656410_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_58_reg_674416.read()) + sc_biguint<16>(add_ln703_60_fu_656410_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_620_fu_641508_p2() {
    add_ln703_620_fu_641508_p2 = (!sext_ln203_542_fu_640338_p1.read().is_01() || !sext_ln203_443_fu_639881_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_542_fu_640338_p1.read()) + sc_bigint<15>(sext_ln203_443_fu_639881_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_621_fu_641518_p2() {
    add_ln703_621_fu_641518_p2 = (!mult_1748_V_fu_639856_p1.read().is_01() || !sext_ln703_135_fu_641514_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1748_V_fu_639856_p1.read()) + sc_bigint<16>(sext_ln703_135_fu_641514_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_622_fu_645543_p2() {
    add_ln703_622_fu_645543_p2 = (!sext_ln203_740_fu_644351_p1.read().is_01() || !sext_ln203_641_fu_643650_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_740_fu_644351_p1.read()) + sc_bigint<15>(sext_ln203_641_fu_643650_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_623_fu_645553_p2() {
    add_ln703_623_fu_645553_p2 = (!mult_2425_V_fu_643130_p1.read().is_01() || !sext_ln703_136_fu_645549_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2425_V_fu_643130_p1.read()) + sc_bigint<16>(sext_ln703_136_fu_645549_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_624_fu_645559_p2() {
    add_ln703_624_fu_645559_p2 = (!add_ln703_621_reg_675628.read().is_01() || !add_ln703_623_fu_645553_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_621_reg_675628.read()) + sc_biguint<16>(add_ln703_623_fu_645553_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_625_fu_650057_p2() {
    add_ln703_625_fu_650057_p2 = (!sext_ln203_620_fu_647550_p1.read().is_01() || !sext_ln203_588_fu_647388_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_620_fu_647550_p1.read()) + sc_bigint<14>(sext_ln203_588_fu_647388_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_626_fu_650067_p2() {
    add_ln703_626_fu_650067_p2 = (!sext_ln203_874_fu_649001_p1.read().is_01() || !sext_ln703_137_fu_650063_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_874_fu_649001_p1.read()) + sc_bigint<15>(sext_ln703_137_fu_650063_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_627_fu_650077_p2() {
    add_ln703_627_fu_650077_p2 = (!sext_ln203_53_fu_646920_p1.read().is_01() || !ap_const_lv13_7C.is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_53_fu_646920_p1.read()) + sc_biguint<13>(ap_const_lv13_7C));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_628_fu_650087_p2() {
    add_ln703_628_fu_650087_p2 = (!sext_ln203_892_fu_649119_p1.read().is_01() || !sext_ln703_139_fu_650083_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_892_fu_649119_p1.read()) + sc_bigint<14>(sext_ln703_139_fu_650083_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_629_fu_650097_p2() {
    add_ln703_629_fu_650097_p2 = (!sext_ln703_138_fu_650073_p1.read().is_01() || !sext_ln703_140_fu_650093_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_138_fu_650073_p1.read()) + sc_bigint<16>(sext_ln703_140_fu_650093_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_62_fu_656420_p2() {
    add_ln703_62_fu_656420_p2 = (!add_ln703_56_reg_670611.read().is_01() || !add_ln703_61_fu_656415_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_56_reg_670611.read()) + sc_biguint<16>(add_ln703_61_fu_656415_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_630_fu_650103_p2() {
    add_ln703_630_fu_650103_p2 = (!add_ln703_624_reg_677109.read().is_01() || !add_ln703_629_fu_650097_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_624_reg_677109.read()) + sc_biguint<16>(add_ln703_629_fu_650097_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_631_fu_663325_p2() {
    add_ln703_631_fu_663325_p2 = (!add_ln703_619_fu_663320_p2.read().is_01() || !add_ln703_630_reg_678697.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_619_fu_663320_p2.read()) + sc_biguint<16>(add_ln703_630_reg_678697.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_633_fu_628913_p2() {
    add_ln703_633_fu_628913_p2 = (!grp_fu_618585_p4.read().is_01() || !reg_620527.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618585_p4.read()) + sc_biguint<16>(reg_620527.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_634_fu_641524_p2() {
    add_ln703_634_fu_641524_p2 = (!grp_fu_619595_p4.read().is_01() || !grp_fu_617395_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_619595_p4.read()) + sc_biguint<16>(grp_fu_617395_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_635_fu_641530_p2() {
    add_ln703_635_fu_641530_p2 = (!reg_620159.read().is_01() || !add_ln703_634_fu_641524_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620159.read()) + sc_biguint<16>(add_ln703_634_fu_641524_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_636_fu_641536_p2() {
    add_ln703_636_fu_641536_p2 = (!add_ln703_633_reg_670681.read().is_01() || !add_ln703_635_fu_641530_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_633_reg_670681.read()) + sc_biguint<16>(add_ln703_635_fu_641530_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_637_fu_645564_p2() {
    add_ln703_637_fu_645564_p2 = (!grp_fu_615815_p4.read().is_01() || !reg_621083.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615815_p4.read()) + sc_biguint<16>(reg_621083.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_638_fu_660219_p2() {
    add_ln703_638_fu_660219_p2 = (!grp_fu_619615_p4.read().is_01() || !reg_620879.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_619615_p4.read()) + sc_biguint<16>(reg_620879.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_639_fu_660225_p2() {
    add_ln703_639_fu_660225_p2 = (!reg_620855.read().is_01() || !add_ln703_638_fu_660219_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620855.read()) + sc_biguint<16>(add_ln703_638_fu_660219_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_63_fu_623130_p2() {
    add_ln703_63_fu_623130_p2 = (!mult_282_V_fu_622573_p1.read().is_01() || !mult_218_V_fu_622522_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_282_V_fu_622573_p1.read()) + sc_bigint<16>(mult_218_V_fu_622522_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_640_fu_660231_p2() {
    add_ln703_640_fu_660231_p2 = (!add_ln703_637_reg_677114.read().is_01() || !add_ln703_639_fu_660225_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_637_reg_677114.read()) + sc_biguint<16>(add_ln703_639_fu_660225_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_641_fu_660236_p2() {
    add_ln703_641_fu_660236_p2 = (!add_ln703_636_reg_675633.read().is_01() || !add_ln703_640_fu_660231_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_636_reg_675633.read()) + sc_biguint<16>(add_ln703_640_fu_660231_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_642_fu_663336_p2() {
    add_ln703_642_fu_663336_p2 = (!mult_60_V_fu_662600_p1.read().is_01() || !grp_fu_616485_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_60_V_fu_662600_p1.read()) + sc_biguint<16>(grp_fu_616485_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_643_fu_628919_p2() {
    add_ln703_643_fu_628919_p2 = (!mult_1212_V_fu_628186_p1.read().is_01() || !mult_493_V_fu_627529_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1212_V_fu_628186_p1.read()) + sc_bigint<16>(mult_493_V_fu_627529_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_644_fu_628925_p2() {
    add_ln703_644_fu_628925_p2 = (!mult_252_V_fu_627500_p1.read().is_01() || !add_ln703_643_fu_628919_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_252_V_fu_627500_p1.read()) + sc_biguint<16>(add_ln703_643_fu_628919_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_645_fu_663342_p2() {
    add_ln703_645_fu_663342_p2 = (!add_ln703_642_fu_663336_p2.read().is_01() || !add_ln703_644_reg_670686.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_642_fu_663336_p2.read()) + sc_biguint<16>(add_ln703_644_reg_670686.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_646_fu_638448_p2() {
    add_ln703_646_fu_638448_p2 = (!mult_1724_V_fu_636719_p1.read().is_01() || !mult_1404_V_fu_636575_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1724_V_fu_636719_p1.read()) + sc_bigint<16>(mult_1404_V_fu_636575_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_647_fu_660241_p2() {
    add_ln703_647_fu_660241_p2 = (!mult_572_V_fu_658660_p1.read().is_01() || !mult_3836_V_fu_659197_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_572_V_fu_658660_p1.read()) + sc_bigint<16>(mult_3836_V_fu_659197_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_648_fu_660247_p2() {
    add_ln703_648_fu_660247_p2 = (!mult_2108_V_fu_658699_p1.read().is_01() || !add_ln703_647_fu_660241_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2108_V_fu_658699_p1.read()) + sc_biguint<16>(add_ln703_647_fu_660241_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_649_fu_660253_p2() {
    add_ln703_649_fu_660253_p2 = (!add_ln703_646_reg_674486.read().is_01() || !add_ln703_648_fu_660247_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_646_reg_674486.read()) + sc_biguint<16>(add_ln703_648_fu_660247_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_64_fu_656425_p2() {
    add_ln703_64_fu_656425_p2 = (!grp_fu_616205_p4.read().is_01() || !add_ln703_63_reg_667868.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616205_p4.read()) + sc_biguint<16>(add_ln703_63_reg_667868.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_650_fu_663347_p2() {
    add_ln703_650_fu_663347_p2 = (!add_ln703_645_fu_663342_p2.read().is_01() || !add_ln703_649_reg_680803.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_645_fu_663342_p2.read()) + sc_biguint<16>(add_ln703_649_reg_680803.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_651_fu_663352_p2() {
    add_ln703_651_fu_663352_p2 = (!add_ln703_641_reg_680798.read().is_01() || !add_ln703_650_fu_663347_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_641_reg_680798.read()) + sc_biguint<16>(add_ln703_650_fu_663347_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_652_fu_626877_p2() {
    add_ln703_652_fu_626877_p2 = (!sext_ln203_184_fu_625969_p1.read().is_01() || !sext_ln203_146_fu_625756_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_184_fu_625969_p1.read()) + sc_bigint<15>(sext_ln203_146_fu_625756_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_653_fu_631658_p2() {
    add_ln703_653_fu_631658_p2 = (!sext_ln203_367_fu_630645_p1.read().is_01() || !sext_ln203_354_fu_630577_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_367_fu_630645_p1.read()) + sc_bigint<15>(sext_ln203_354_fu_630577_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_654_fu_631668_p2() {
    add_ln703_654_fu_631668_p2 = (!mult_1276_V_fu_630155_p1.read().is_01() || !sext_ln703_142_fu_631664_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1276_V_fu_630155_p1.read()) + sc_bigint<16>(sext_ln703_142_fu_631664_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_655_fu_631674_p2() {
    add_ln703_655_fu_631674_p2 = (!sext_ln703_141_fu_631655_p1.read().is_01() || !add_ln703_654_fu_631668_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_141_fu_631655_p1.read()) + sc_biguint<16>(add_ln703_654_fu_631668_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_656_fu_635182_p2() {
    add_ln703_656_fu_635182_p2 = (!sext_ln203_397_fu_633634_p1.read().is_01() || !sext_ln203_381_fu_633554_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_397_fu_633634_p1.read()) + sc_bigint<15>(sext_ln203_381_fu_633554_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_657_fu_650111_p2() {
    add_ln703_657_fu_650111_p2 = (!sext_ln203_686_fu_647958_p1.read().is_01() || !sext_ln203_485_fu_647190_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_686_fu_647958_p1.read()) + sc_bigint<15>(sext_ln203_485_fu_647190_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_658_fu_650121_p2() {
    add_ln703_658_fu_650121_p2 = (!mult_1980_V_fu_647176_p1.read().is_01() || !sext_ln703_144_fu_650117_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1980_V_fu_647176_p1.read()) + sc_bigint<16>(sext_ln703_144_fu_650117_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_659_fu_650127_p2() {
    add_ln703_659_fu_650127_p2 = (!sext_ln703_143_fu_650108_p1.read().is_01() || !add_ln703_658_fu_650121_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_143_fu_650108_p1.read()) + sc_biguint<16>(add_ln703_658_fu_650121_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_65_fu_628746_p2() {
    add_ln703_65_fu_628746_p2 = (!mult_1178_V_fu_628166_p1.read().is_01() || !mult_794_V_fu_627782_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1178_V_fu_628166_p1.read()) + sc_bigint<16>(mult_794_V_fu_627782_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_660_fu_650133_p2() {
    add_ln703_660_fu_650133_p2 = (!add_ln703_655_reg_671843.read().is_01() || !add_ln703_659_fu_650127_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_655_reg_671843.read()) + sc_biguint<16>(add_ln703_659_fu_650127_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_661_fu_656918_p2() {
    add_ln703_661_fu_656918_p2 = (!sext_ln203_858_fu_656074_p1.read().is_01() || !sext_ln203_774_fu_655669_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_858_fu_656074_p1.read()) + sc_bigint<15>(sext_ln203_774_fu_655669_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_662_fu_660261_p2() {
    add_ln703_662_fu_660261_p2 = (!sext_ln203_316_fu_658686_p1.read().is_01() || !sext_ln203_27_fu_658600_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_316_fu_658686_p1.read()) + sc_bigint<14>(sext_ln203_27_fu_658600_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_663_fu_660271_p2() {
    add_ln703_663_fu_660271_p2 = (!sext_ln203_938_fu_659313_p1.read().is_01() || !sext_ln703_146_fu_660267_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_938_fu_659313_p1.read()) + sc_bigint<15>(sext_ln703_146_fu_660267_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_664_fu_660281_p2() {
    add_ln703_664_fu_660281_p2 = (!sext_ln703_145_fu_660258_p1.read().is_01() || !sext_ln703_147_fu_660277_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_145_fu_660258_p1.read()) + sc_bigint<16>(sext_ln703_147_fu_660277_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_665_fu_653703_p2() {
    add_ln703_665_fu_653703_p2 = (!sext_ln203_826_fu_652702_p1.read().is_01() || !sext_ln203_756_fu_652287_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_826_fu_652702_p1.read()) + sc_bigint<14>(sext_ln203_756_fu_652287_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_666_fu_653713_p2() {
    add_ln703_666_fu_653713_p2 = (!sext_ln203_644_fu_651738_p1.read().is_01() || !sext_ln703_148_fu_653709_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_644_fu_651738_p1.read()) + sc_bigint<15>(sext_ln703_148_fu_653709_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_667_fu_660290_p2() {
    add_ln703_667_fu_660290_p2 = (!sext_ln203_216_fu_658675_p1.read().is_01() || !ap_const_lv13_B2.is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_216_fu_658675_p1.read()) + sc_biguint<13>(ap_const_lv13_B2));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_668_fu_660300_p2() {
    add_ln703_668_fu_660300_p2 = (!sext_ln203_907_fu_659096_p1.read().is_01() || !sext_ln703_150_fu_660296_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_907_fu_659096_p1.read()) + sc_bigint<14>(sext_ln703_150_fu_660296_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_669_fu_660310_p2() {
    add_ln703_669_fu_660310_p2 = (!sext_ln703_149_fu_660287_p1.read().is_01() || !sext_ln703_151_fu_660306_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_149_fu_660287_p1.read()) + sc_bigint<16>(sext_ln703_151_fu_660306_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_66_fu_628752_p2() {
    add_ln703_66_fu_628752_p2 = (!mult_730_V_fu_627670_p1.read().is_01() || !add_ln703_65_fu_628746_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_730_V_fu_627670_p1.read()) + sc_biguint<16>(add_ln703_65_fu_628746_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_670_fu_660316_p2() {
    add_ln703_670_fu_660316_p2 = (!add_ln703_664_fu_660281_p2.read().is_01() || !add_ln703_669_fu_660310_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_664_fu_660281_p2.read()) + sc_biguint<16>(add_ln703_669_fu_660310_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_671_fu_660322_p2() {
    add_ln703_671_fu_660322_p2 = (!add_ln703_660_reg_678702.read().is_01() || !add_ln703_670_fu_660316_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_660_reg_678702.read()) + sc_biguint<16>(add_ln703_670_fu_660316_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_673_fu_635188_p2() {
    add_ln703_673_fu_635188_p2 = (!grp_fu_615445_p4.read().is_01() || !mult_1470_V_reg_671196.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615445_p4.read()) + sc_biguint<16>(mult_1470_V_reg_671196.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_674_fu_635193_p2() {
    add_ln703_674_fu_635193_p2 = (!mult_894_V_reg_669283.read().is_01() || !add_ln703_673_fu_635188_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_894_V_reg_669283.read()) + sc_biguint<16>(add_ln703_673_fu_635188_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_675_fu_645570_p2() {
    add_ln703_675_fu_645570_p2 = (!grp_fu_618785_p4.read().is_01() || !mult_2430_V_reg_675104.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618785_p4.read()) + sc_biguint<16>(mult_2430_V_reg_675104.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_676_fu_645575_p2() {
    add_ln703_676_fu_645575_p2 = (!mult_1982_V_reg_673781.read().is_01() || !add_ln703_675_fu_645570_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1982_V_reg_673781.read()) + sc_biguint<16>(add_ln703_675_fu_645570_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_677_fu_645580_p2() {
    add_ln703_677_fu_645580_p2 = (!add_ln703_674_reg_673259.read().is_01() || !add_ln703_676_fu_645575_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_674_reg_673259.read()) + sc_biguint<16>(add_ln703_676_fu_645575_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_678_fu_656924_p2() {
    add_ln703_678_fu_656924_p2 = (!grp_fu_617665_p4.read().is_01() || !reg_620479.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_617665_p4.read()) + sc_biguint<16>(reg_620479.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_679_fu_656930_p2() {
    add_ln703_679_fu_656930_p2 = (!reg_620551.read().is_01() || !add_ln703_678_fu_656924_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620551.read()) + sc_biguint<16>(add_ln703_678_fu_656924_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_67_fu_656430_p2() {
    add_ln703_67_fu_656430_p2 = (!add_ln703_64_fu_656425_p2.read().is_01() || !add_ln703_66_reg_670616.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_64_fu_656425_p2.read()) + sc_biguint<16>(add_ln703_66_reg_670616.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_680_fu_660327_p2() {
    add_ln703_680_fu_660327_p2 = (!mult_446_V_fu_658650_p1.read().is_01() || !mult_3902_V_fu_659317_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_446_V_fu_658650_p1.read()) + sc_biguint<16>(mult_3902_V_fu_659317_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_681_fu_660333_p2() {
    add_ln703_681_fu_660333_p2 = (!mult_3454_V_reg_679292.read().is_01() || !add_ln703_680_fu_660327_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_3454_V_reg_679292.read()) + sc_biguint<16>(add_ln703_680_fu_660327_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_682_fu_660338_p2() {
    add_ln703_682_fu_660338_p2 = (!add_ln703_679_reg_680303.read().is_01() || !add_ln703_681_fu_660333_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_679_reg_680303.read()) + sc_biguint<16>(add_ln703_681_fu_660333_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_683_fu_660343_p2() {
    add_ln703_683_fu_660343_p2 = (!add_ln703_677_reg_677119.read().is_01() || !add_ln703_682_fu_660338_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_677_reg_677119.read()) + sc_biguint<16>(add_ln703_682_fu_660338_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_684_fu_631680_p2() {
    add_ln703_684_fu_631680_p2 = (!mult_1278_V_fu_630159_p1.read().is_01() || !mult_1150_V_fu_630057_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1278_V_fu_630159_p1.read()) + sc_bigint<16>(mult_1150_V_fu_630057_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_685_fu_631686_p2() {
    add_ln703_685_fu_631686_p2 = (!mult_766_V_fu_629756_p1.read().is_01() || !add_ln703_684_fu_631680_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_766_V_fu_629756_p1.read()) + sc_biguint<16>(add_ln703_684_fu_631680_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_686_fu_638454_p2() {
    add_ln703_686_fu_638454_p2 = (!mult_2110_V_fu_637382_p1.read().is_01() || !mult_1854_V_fu_636912_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2110_V_fu_637382_p1.read()) + sc_bigint<16>(mult_1854_V_fu_636912_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_687_fu_638460_p2() {
    add_ln703_687_fu_638460_p2 = (!mult_1726_V_fu_636722_p1.read().is_01() || !add_ln703_686_fu_638454_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1726_V_fu_636722_p1.read()) + sc_biguint<16>(add_ln703_686_fu_638454_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_688_fu_638466_p2() {
    add_ln703_688_fu_638466_p2 = (!add_ln703_685_reg_671848.read().is_01() || !add_ln703_687_fu_638460_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_685_reg_671848.read()) + sc_biguint<16>(add_ln703_687_fu_638460_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_689_fu_653719_p2() {
    add_ln703_689_fu_653719_p2 = (!mult_3120_V_fu_652079_p1.read().is_01() || !mult_3006_V_fu_651963_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3120_V_fu_652079_p1.read()) + sc_bigint<16>(mult_3006_V_fu_651963_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_68_fu_645247_p2() {
    add_ln703_68_fu_645247_p2 = (!mult_2586_V_fu_643493_p1.read().is_01() || !mult_1946_V_fu_642799_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2586_V_fu_643493_p1.read()) + sc_bigint<16>(mult_1946_V_fu_642799_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_690_fu_653725_p2() {
    add_ln703_690_fu_653725_p2 = (!mult_2302_V_fu_651675_p1.read().is_01() || !add_ln703_689_fu_653719_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2302_V_fu_651675_p1.read()) + sc_biguint<16>(add_ln703_689_fu_653719_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_691_fu_656936_p2() {
    add_ln703_691_fu_656936_p2 = (!mult_3582_V_fu_656078_p1.read().is_01() || !mult_3518_V_fu_655964_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3582_V_fu_656078_p1.read()) + sc_bigint<16>(mult_3518_V_fu_655964_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_692_fu_656942_p2() {
    add_ln703_692_fu_656942_p2 = (!mult_3198_V_fu_655639_p1.read().is_01() || !add_ln703_691_fu_656936_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3198_V_fu_655639_p1.read()) + sc_biguint<16>(add_ln703_691_fu_656936_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_693_fu_656948_p2() {
    add_ln703_693_fu_656948_p2 = (!add_ln703_690_reg_679593.read().is_01() || !add_ln703_692_fu_656942_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_690_reg_679593.read()) + sc_biguint<16>(add_ln703_692_fu_656942_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_694_fu_656953_p2() {
    add_ln703_694_fu_656953_p2 = (!add_ln703_688_reg_674491.read().is_01() || !add_ln703_693_fu_656948_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_688_reg_674491.read()) + sc_biguint<16>(add_ln703_693_fu_656948_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_695_fu_660348_p2() {
    add_ln703_695_fu_660348_p2 = (!add_ln703_683_fu_660343_p2.read().is_01() || !add_ln703_694_reg_680308.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_683_fu_660343_p2.read()) + sc_biguint<16>(add_ln703_694_reg_680308.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_696_fu_623148_p2() {
    add_ln703_696_fu_623148_p2 = (!sext_ln203_29_fu_622490_p1.read().is_01() || !sext_ln203_12_fu_622431_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_29_fu_622490_p1.read()) + sc_bigint<15>(sext_ln203_12_fu_622431_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_697_fu_663366_p2() {
    add_ln703_697_fu_663366_p2 = (!mult_4030_V_fu_662884_p1.read().is_01() || !sext_ln703_152_fu_663363_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_4030_V_fu_662884_p1.read()) + sc_bigint<16>(sext_ln703_152_fu_663363_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_698_fu_628931_p2() {
    add_ln703_698_fu_628931_p2 = (!sext_ln203_228_fu_627948_p1.read().is_01() || !sext_ln203_133_fu_627584_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_228_fu_627948_p1.read()) + sc_bigint<15>(sext_ln203_133_fu_627584_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_699_fu_628941_p2() {
    add_ln703_699_fu_628941_p2 = (!mult_254_V_fu_627504_p1.read().is_01() || !sext_ln703_153_fu_628937_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_254_V_fu_627504_p1.read()) + sc_bigint<16>(sext_ln703_153_fu_628937_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_69_fu_645253_p2() {
    add_ln703_69_fu_645253_p2 = (!mult_1882_V_fu_642789_p1.read().is_01() || !add_ln703_68_fu_645247_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1882_V_fu_642789_p1.read()) + sc_biguint<16>(add_ln703_68_fu_645247_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_6_fu_641269_p2() {
    add_ln703_6_fu_641269_p2 = (!grp_fu_619635_p4.read().is_01() || !grp_fu_616245_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_619635_p4.read()) + sc_biguint<16>(grp_fu_616245_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_700_fu_663372_p2() {
    add_ln703_700_fu_663372_p2 = (!add_ln703_697_fu_663366_p2.read().is_01() || !add_ln703_699_reg_670691.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_697_fu_663366_p2.read()) + sc_biguint<16>(add_ln703_699_reg_670691.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_701_fu_628947_p2() {
    add_ln703_701_fu_628947_p2 = (!sext_ln203_318_fu_628315_p1.read().is_01() || !sext_ln203_280_fu_628194_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_318_fu_628315_p1.read()) + sc_bigint<15>(sext_ln203_280_fu_628194_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_702_fu_628957_p2() {
    add_ln703_702_fu_628957_p2 = (!mult_1086_V_fu_628060_p1.read().is_01() || !sext_ln703_154_fu_628953_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1086_V_fu_628060_p1.read()) + sc_bigint<16>(sext_ln703_154_fu_628953_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_703_fu_635198_p2() {
    add_ln703_703_fu_635198_p2 = (!sext_ln203_382_fu_633558_p1.read().is_01() || !sext_ln203_368_fu_633447_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_382_fu_633558_p1.read()) + sc_bigint<15>(sext_ln203_368_fu_633447_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_704_fu_635208_p2() {
    add_ln703_704_fu_635208_p2 = (!mult_1391_V_fu_633244_p1.read().is_01() || !sext_ln703_155_fu_635204_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1391_V_fu_633244_p1.read()) + sc_bigint<16>(sext_ln703_155_fu_635204_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_705_fu_635214_p2() {
    add_ln703_705_fu_635214_p2 = (!add_ln703_702_reg_670696.read().is_01() || !add_ln703_704_fu_635208_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_702_reg_670696.read()) + sc_biguint<16>(add_ln703_704_fu_635208_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_706_fu_663377_p2() {
    add_ln703_706_fu_663377_p2 = (!add_ln703_700_fu_663372_p2.read().is_01() || !add_ln703_705_reg_673264.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_700_fu_663372_p2.read()) + sc_biguint<16>(add_ln703_705_reg_673264.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_707_fu_645585_p2() {
    add_ln703_707_fu_645585_p2 = (!sext_ln203_645_fu_643658_p1.read().is_01() || !sext_ln203_621_fu_643447_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_645_fu_643658_p1.read()) + sc_bigint<15>(sext_ln203_621_fu_643447_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_708_fu_645595_p2() {
    add_ln703_708_fu_645595_p2 = (!mult_2366_V_fu_643093_p1.read().is_01() || !sext_ln703_156_fu_645591_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2366_V_fu_643093_p1.read()) + sc_bigint<16>(sext_ln703_156_fu_645591_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_709_fu_650138_p2() {
    add_ln703_709_fu_650138_p2 = (!sext_ln203_703_fu_648122_p1.read().is_01() || !sext_ln203_687_fu_647976_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_703_fu_648122_p1.read()) + sc_bigint<15>(sext_ln203_687_fu_647976_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_70_fu_653423_p2() {
    add_ln703_70_fu_653423_p2 = (!mult_1434_V_fu_651581_p1.read().is_01() || !mult_3354_V_fu_652627_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1434_V_fu_651581_p1.read()) + sc_bigint<16>(mult_3354_V_fu_652627_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_710_fu_650148_p2() {
    add_ln703_710_fu_650148_p2 = (!mult_2750_V_fu_647685_p1.read().is_01() || !sext_ln703_157_fu_650144_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2750_V_fu_647685_p1.read()) + sc_bigint<16>(sext_ln703_157_fu_650144_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_711_fu_650154_p2() {
    add_ln703_711_fu_650154_p2 = (!add_ln703_708_reg_677124.read().is_01() || !add_ln703_710_fu_650148_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_708_reg_677124.read()) + sc_biguint<16>(add_ln703_710_fu_650148_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_712_fu_645601_p2() {
    add_ln703_712_fu_645601_p2 = (!sext_ln203_147_fu_642704_p1.read().is_01() || !sext_ln203_40_fu_642633_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_147_fu_642704_p1.read()) + sc_bigint<14>(sext_ln203_40_fu_642633_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_713_fu_660356_p2() {
    add_ln703_713_fu_660356_p2 = (!sext_ln203_921_fu_659201_p1.read().is_01() || !sext_ln703_158_fu_660353_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_921_fu_659201_p1.read()) + sc_bigint<15>(sext_ln703_158_fu_660353_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_714_fu_656958_p2() {
    add_ln703_714_fu_656958_p2 = (!sext_ln203_526_fu_655486_p1.read().is_01() || !ap_const_lv12_CD.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_526_fu_655486_p1.read()) + sc_biguint<12>(ap_const_lv12_CD));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_715_fu_656968_p2() {
    add_ln703_715_fu_656968_p2 = (!sext_ln203_876_fu_656191_p1.read().is_01() || !sext_ln703_160_fu_656964_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_876_fu_656191_p1.read()) + sc_bigint<14>(sext_ln703_160_fu_656964_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_716_fu_660369_p2() {
    add_ln703_716_fu_660369_p2 = (!sext_ln703_159_fu_660362_p1.read().is_01() || !sext_ln703_161_fu_660366_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_159_fu_660362_p1.read()) + sc_bigint<16>(sext_ln703_161_fu_660366_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_717_fu_660375_p2() {
    add_ln703_717_fu_660375_p2 = (!add_ln703_711_reg_678707.read().is_01() || !add_ln703_716_fu_660369_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_711_reg_678707.read()) + sc_biguint<16>(add_ln703_716_fu_660369_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_718_fu_663382_p2() {
    add_ln703_718_fu_663382_p2 = (!add_ln703_706_fu_663377_p2.read().is_01() || !add_ln703_717_reg_680818.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_706_fu_663377_p2.read()) + sc_biguint<16>(add_ln703_717_reg_680818.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_71_fu_653429_p2() {
    add_ln703_71_fu_653429_p2 = (!mult_3290_V_fu_652473_p1.read().is_01() || !add_ln703_70_fu_653423_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3290_V_fu_652473_p1.read()) + sc_biguint<16>(add_ln703_70_fu_653423_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_720_fu_628963_p2() {
    add_ln703_720_fu_628963_p2 = (!grp_fu_616825_p4.read().is_01() || !reg_620007.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616825_p4.read()) + sc_biguint<16>(reg_620007.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_721_fu_628969_p2() {
    add_ln703_721_fu_628969_p2 = (!mult_384_V_reg_668086.read().is_01() || !add_ln703_720_fu_628963_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_384_V_reg_668086.read()) + sc_biguint<16>(add_ln703_720_fu_628963_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_722_fu_638471_p2() {
    add_ln703_722_fu_638471_p2 = (!grp_fu_619395_p4.read().is_01() || !mult_1728_V_reg_672543.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_619395_p4.read()) + sc_biguint<16>(mult_1728_V_reg_672543.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_723_fu_638476_p2() {
    add_ln703_723_fu_638476_p2 = (!mult_1600_V_reg_670256.read().is_01() || !add_ln703_722_fu_638471_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1600_V_reg_670256.read()) + sc_biguint<16>(add_ln703_722_fu_638471_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_724_fu_638481_p2() {
    add_ln703_724_fu_638481_p2 = (!add_ln703_721_reg_670701.read().is_01() || !add_ln703_723_fu_638476_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_721_reg_670701.read()) + sc_biguint<16>(add_ln703_723_fu_638476_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_725_fu_650159_p2() {
    add_ln703_725_fu_650159_p2 = (!grp_fu_616125_p4.read().is_01() || !reg_620983.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616125_p4.read()) + sc_biguint<16>(reg_620983.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_726_fu_650165_p2() {
    add_ln703_726_fu_650165_p2 = (!mult_2304_V_reg_675044.read().is_01() || !add_ln703_725_fu_650159_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_2304_V_reg_675044.read()) + sc_biguint<16>(add_ln703_725_fu_650159_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_727_fu_626883_p2() {
    add_ln703_727_fu_626883_p2 = (!mult_704_V_fu_625760_p1.read().is_01() || !mult_320_V_fu_625455_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_704_V_fu_625760_p1.read()) + sc_bigint<16>(mult_320_V_fu_625455_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_728_fu_626889_p2() {
    add_ln703_728_fu_626889_p2 = (!mult_0_V_fu_625306_p1.read().is_01() || !add_ln703_727_fu_626883_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_0_V_fu_625306_p1.read()) + sc_biguint<16>(add_ln703_727_fu_626883_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_729_fu_650170_p2() {
    add_ln703_729_fu_650170_p2 = (!add_ln703_726_fu_650165_p2.read().is_01() || !add_ln703_728_reg_669744.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_726_fu_650165_p2.read()) + sc_biguint<16>(add_ln703_728_reg_669744.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_72_fu_653435_p2() {
    add_ln703_72_fu_653435_p2 = (!add_ln703_69_reg_677009.read().is_01() || !add_ln703_71_fu_653429_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_69_reg_677009.read()) + sc_biguint<16>(add_ln703_71_fu_653429_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_730_fu_650175_p2() {
    add_ln703_730_fu_650175_p2 = (!add_ln703_724_reg_674496.read().is_01() || !add_ln703_729_fu_650170_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_724_reg_674496.read()) + sc_biguint<16>(add_ln703_729_fu_650170_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_731_fu_631692_p2() {
    add_ln703_731_fu_631692_p2 = (!mult_1344_V_fu_630252_p1.read().is_01() || !mult_960_V_fu_629815_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1344_V_fu_630252_p1.read()) + sc_bigint<16>(mult_960_V_fu_629815_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_732_fu_631698_p2() {
    add_ln703_732_fu_631698_p2 = (!mult_768_V_fu_629760_p1.read().is_01() || !add_ln703_731_fu_631692_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_768_V_fu_629760_p1.read()) + sc_biguint<16>(add_ln703_731_fu_631692_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_733_fu_638486_p2() {
    add_ln703_733_fu_638486_p2 = (!mult_1856_V_fu_636915_p1.read().is_01() || !mult_1792_V_fu_636816_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1856_V_fu_636915_p1.read()) + sc_bigint<16>(mult_1792_V_fu_636816_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_734_fu_638492_p2() {
    add_ln703_734_fu_638492_p2 = (!mult_1472_V_fu_636634_p1.read().is_01() || !add_ln703_733_fu_638486_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1472_V_fu_636634_p1.read()) + sc_biguint<16>(add_ln703_733_fu_638486_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_735_fu_638498_p2() {
    add_ln703_735_fu_638498_p2 = (!add_ln703_732_reg_671853.read().is_01() || !add_ln703_734_fu_638492_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_732_reg_671853.read()) + sc_biguint<16>(add_ln703_734_fu_638492_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_736_fu_645607_p2() {
    add_ln703_736_fu_645607_p2 = (!mult_2560_V_fu_643455_p1.read().is_01() || !mult_2496_V_fu_643282_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2560_V_fu_643455_p1.read()) + sc_bigint<16>(mult_2496_V_fu_643282_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_737_fu_645613_p2() {
    add_ln703_737_fu_645613_p2 = (!mult_2368_V_fu_643097_p1.read().is_01() || !add_ln703_736_fu_645607_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2368_V_fu_643097_p1.read()) + sc_biguint<16>(add_ln703_736_fu_645607_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_738_fu_650180_p2() {
    add_ln703_738_fu_650180_p2 = (!mult_2944_V_fu_648126_p1.read().is_01() || !mult_2816_V_fu_647790_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2944_V_fu_648126_p1.read()) + sc_bigint<16>(mult_2816_V_fu_647790_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_739_fu_653731_p2() {
    add_ln703_739_fu_653731_p2 = (!mult_3328_V_fu_652567_p1.read().is_01() || !mult_3264_V_fu_652393_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3328_V_fu_652567_p1.read()) + sc_bigint<16>(mult_3264_V_fu_652393_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_73_fu_656435_p2() {
    add_ln703_73_fu_656435_p2 = (!add_ln703_67_fu_656430_p2.read().is_01() || !add_ln703_72_reg_679518.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_67_fu_656430_p2.read()) + sc_biguint<16>(add_ln703_72_reg_679518.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_740_fu_653737_p2() {
    add_ln703_740_fu_653737_p2 = (!add_ln703_738_reg_678717.read().is_01() || !add_ln703_739_fu_653731_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_738_reg_678717.read()) + sc_biguint<16>(add_ln703_739_fu_653731_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_741_fu_653742_p2() {
    add_ln703_741_fu_653742_p2 = (!add_ln703_737_reg_677134.read().is_01() || !add_ln703_740_fu_653737_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_737_reg_677134.read()) + sc_biguint<16>(add_ln703_740_fu_653737_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_742_fu_653747_p2() {
    add_ln703_742_fu_653747_p2 = (!add_ln703_735_reg_674501.read().is_01() || !add_ln703_741_fu_653742_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_735_reg_674501.read()) + sc_biguint<16>(add_ln703_741_fu_653742_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_743_fu_653752_p2() {
    add_ln703_743_fu_653752_p2 = (!add_ln703_730_reg_678712.read().is_01() || !add_ln703_742_fu_653747_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_730_reg_678712.read()) + sc_biguint<16>(add_ln703_742_fu_653747_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_744_fu_656974_p2() {
    add_ln703_744_fu_656974_p2 = (!mult_3776_V_fu_656264_p1.read().is_01() || !mult_3456_V_fu_655874_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3776_V_fu_656264_p1.read()) + sc_bigint<16>(mult_3456_V_fu_655874_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_745_fu_656980_p2() {
    add_ln703_745_fu_656980_p2 = (!mult_3392_V_fu_655752_p1.read().is_01() || !add_ln703_744_fu_656974_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3392_V_fu_655752_p1.read()) + sc_biguint<16>(add_ln703_744_fu_656974_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_746_fu_660380_p2() {
    add_ln703_746_fu_660380_p2 = (!mult_64_V_fu_658591_p1.read().is_01() || !mult_3904_V_fu_659327_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_64_V_fu_658591_p1.read()) + sc_bigint<16>(mult_3904_V_fu_659327_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_747_fu_660386_p2() {
    add_ln703_747_fu_660386_p2 = (!mult_3840_V_fu_659205_p1.read().is_01() || !add_ln703_746_fu_660380_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3840_V_fu_659205_p1.read()) + sc_biguint<16>(add_ln703_746_fu_660380_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_748_fu_660392_p2() {
    add_ln703_748_fu_660392_p2 = (!add_ln703_745_reg_680318.read().is_01() || !add_ln703_747_fu_660386_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_745_reg_680318.read()) + sc_biguint<16>(add_ln703_747_fu_660386_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_749_fu_624868_p2() {
    add_ln703_749_fu_624868_p2 = (!sext_ln203_120_fu_623975_p1.read().is_01() || !sext_ln203_89_fu_623681_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_120_fu_623975_p1.read()) + sc_bigint<15>(sext_ln203_89_fu_623681_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_74_fu_656440_p2() {
    add_ln703_74_fu_656440_p2 = (!add_ln703_62_fu_656420_p2.read().is_01() || !add_ln703_73_fu_656435_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_62_fu_656420_p2.read()) + sc_biguint<16>(add_ln703_73_fu_656435_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_750_fu_624878_p2() {
    add_ln703_750_fu_624878_p2 = (!mult_256_V_fu_623460_p1.read().is_01() || !sext_ln703_162_fu_624874_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_256_V_fu_623460_p1.read()) + sc_bigint<16>(sext_ln703_162_fu_624874_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_751_fu_628974_p2() {
    add_ln703_751_fu_628974_p2 = (!sext_ln203_260_fu_628126_p1.read().is_01() || !sext_ln203_239_fu_628064_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_260_fu_628126_p1.read()) + sc_bigint<15>(sext_ln203_239_fu_628064_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_752_fu_638506_p2() {
    add_ln703_752_fu_638506_p2 = (!sext_ln203_486_fu_637214_p1.read().is_01() || !sext_ln203_471_fu_637137_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_486_fu_637214_p1.read()) + sc_bigint<15>(sext_ln203_471_fu_637137_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_753_fu_638516_p2() {
    add_ln703_753_fu_638516_p2 = (!sext_ln703_163_fu_638503_p1.read().is_01() || !sext_ln703_164_fu_638512_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_163_fu_638503_p1.read()) + sc_bigint<16>(sext_ln703_164_fu_638512_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_754_fu_638522_p2() {
    add_ln703_754_fu_638522_p2 = (!add_ln703_750_reg_668876.read().is_01() || !add_ln703_753_fu_638516_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_750_reg_668876.read()) + sc_biguint<16>(add_ln703_753_fu_638516_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_755_fu_660397_p2() {
    add_ln703_755_fu_660397_p2 = (!add_ln703_748_fu_660392_p2.read().is_01() || !add_ln703_754_reg_674506.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_748_fu_660392_p2.read()) + sc_biguint<16>(add_ln703_754_reg_674506.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_756_fu_650186_p2() {
    add_ln703_756_fu_650186_p2 = (!sext_ln203_688_fu_647980_p1.read().is_01() || !sext_ln203_661_reg_676308.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_688_fu_647980_p1.read()) + sc_bigint<15>(sext_ln203_661_reg_676308.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_757_fu_650195_p2() {
    add_ln703_757_fu_650195_p2 = (!mult_2688_V_fu_647601_p1.read().is_01() || !sext_ln703_165_fu_650191_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2688_V_fu_647601_p1.read()) + sc_bigint<16>(sext_ln703_165_fu_650191_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_758_fu_656986_p2() {
    add_ln703_758_fu_656986_p2 = (!sext_ln203_877_fu_656195_p1.read().is_01() || !sext_ln203_859_fu_656086_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_877_fu_656195_p1.read()) + sc_bigint<15>(sext_ln203_859_fu_656086_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_759_fu_656996_p2() {
    add_ln703_759_fu_656996_p2 = (!mult_3072_V_fu_655599_p1.read().is_01() || !sext_ln703_166_fu_656992_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3072_V_fu_655599_p1.read()) + sc_bigint<16>(sext_ln703_166_fu_656992_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_75_fu_641297_p2() {
    add_ln703_75_fu_641297_p2 = (!sext_ln203_533_fu_640278_p1.read().is_01() || !sext_ln203_519_fu_640145_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_533_fu_640278_p1.read()) + sc_bigint<15>(sext_ln203_519_fu_640145_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_760_fu_657002_p2() {
    add_ln703_760_fu_657002_p2 = (!add_ln703_757_reg_678722.read().is_01() || !add_ln703_759_fu_656996_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_757_reg_678722.read()) + sc_biguint<16>(add_ln703_759_fu_656996_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_761_fu_645619_p2() {
    add_ln703_761_fu_645619_p2 = (!sext_ln203_302_fu_642730_p1.read().is_01() || !sext_ln203_30_fu_642558_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_302_fu_642730_p1.read()) + sc_bigint<14>(sext_ln203_30_fu_642558_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_762_fu_663396_p2() {
    add_ln703_762_fu_663396_p2 = (!sext_ln203_974_fu_662892_p1.read().is_01() || !sext_ln703_167_fu_663393_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_974_fu_662892_p1.read()) + sc_bigint<15>(sext_ln703_167_fu_663393_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_763_fu_653757_p2() {
    add_ln703_763_fu_653757_p2 = (!sext_ln203_957_fu_653177_p1.read().is_01() || !sext_ln203_757_fu_652291_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_957_fu_653177_p1.read()) + sc_bigint<14>(sext_ln203_757_fu_652291_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_764_fu_653767_p2() {
    add_ln703_764_fu_653767_p2 = (!sext_ln203_895_fu_652903_p1.read().is_01() || !ap_const_lv12_89.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_895_fu_652903_p1.read()) + sc_biguint<12>(ap_const_lv12_89));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_765_fu_653777_p2() {
    add_ln703_765_fu_653777_p2 = (!sext_ln703_169_fu_653763_p1.read().is_01() || !sext_ln703_170_fu_653773_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_169_fu_653763_p1.read()) + sc_bigint<15>(sext_ln703_170_fu_653773_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_766_fu_663409_p2() {
    add_ln703_766_fu_663409_p2 = (!sext_ln703_168_fu_663402_p1.read().is_01() || !sext_ln703_171_fu_663406_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_168_fu_663402_p1.read()) + sc_bigint<16>(sext_ln703_171_fu_663406_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_767_fu_663415_p2() {
    add_ln703_767_fu_663415_p2 = (!add_ln703_760_reg_680323.read().is_01() || !add_ln703_766_fu_663409_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_760_reg_680323.read()) + sc_biguint<16>(add_ln703_766_fu_663409_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_768_fu_663420_p2() {
    add_ln703_768_fu_663420_p2 = (!add_ln703_755_reg_680823.read().is_01() || !add_ln703_767_fu_663415_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_755_reg_680823.read()) + sc_biguint<16>(add_ln703_767_fu_663415_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_76_fu_641307_p2() {
    add_ln703_76_fu_641307_p2 = (!mult_1562_V_fu_639815_p1.read().is_01() || !sext_ln703_25_fu_641303_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1562_V_fu_639815_p1.read()) + sc_bigint<16>(sext_ln703_25_fu_641303_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_770_fu_623154_p2() {
    add_ln703_770_fu_623154_p2 = (!grp_fu_615885_p4.read().is_01() || !grp_fu_615585_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615885_p4.read()) + sc_biguint<16>(grp_fu_615585_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_771_fu_626895_p2() {
    add_ln703_771_fu_626895_p2 = (!grp_fu_618365_p4.read().is_01() || !reg_620359.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618365_p4.read()) + sc_biguint<16>(reg_620359.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_772_fu_626901_p2() {
    add_ln703_772_fu_626901_p2 = (!reg_620207.read().is_01() || !add_ln703_771_fu_626895_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620207.read()) + sc_biguint<16>(add_ln703_771_fu_626895_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_773_fu_626907_p2() {
    add_ln703_773_fu_626907_p2 = (!add_ln703_770_reg_667883.read().is_01() || !add_ln703_772_fu_626901_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_770_reg_667883.read()) + sc_biguint<16>(add_ln703_772_fu_626901_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_774_fu_638527_p2() {
    add_ln703_774_fu_638527_p2 = (!grp_fu_615585_p4.read().is_01() || !reg_620743.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615585_p4.read()) + sc_biguint<16>(reg_620743.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_775_fu_638533_p2() {
    add_ln703_775_fu_638533_p2 = (!reg_620715.read().is_01() || !add_ln703_774_fu_638527_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620715.read()) + sc_biguint<16>(add_ln703_774_fu_638527_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_776_fu_645625_p2() {
    add_ln703_776_fu_645625_p2 = (!grp_fu_619645_p4.read().is_01() || !reg_620335.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_619645_p4.read()) + sc_biguint<16>(reg_620335.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_777_fu_645631_p2() {
    add_ln703_777_fu_645631_p2 = (!mult_2049_V_reg_673816.read().is_01() || !add_ln703_776_fu_645625_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_2049_V_reg_673816.read()) + sc_biguint<16>(add_ln703_776_fu_645625_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_778_fu_645636_p2() {
    add_ln703_778_fu_645636_p2 = (!add_ln703_775_reg_674511.read().is_01() || !add_ln703_777_fu_645631_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_775_reg_674511.read()) + sc_biguint<16>(add_ln703_777_fu_645631_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_779_fu_645641_p2() {
    add_ln703_779_fu_645641_p2 = (!add_ln703_773_reg_669749.read().is_01() || !add_ln703_778_fu_645636_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_773_reg_669749.read()) + sc_biguint<16>(add_ln703_778_fu_645636_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_77_fu_649809_p2() {
    add_ln703_77_fu_649809_p2 = (!sext_ln203_724_fu_648274_p1.read().is_01() || !sext_ln203_712_fu_648176_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_724_fu_648274_p1.read()) + sc_bigint<15>(sext_ln203_712_fu_648176_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_780_fu_660402_p2() {
    add_ln703_780_fu_660402_p2 = (!grp_fu_617715_p4.read().is_01() || !grp_fu_618275_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_617715_p4.read()) + sc_biguint<16>(grp_fu_618275_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_781_fu_631704_p2() {
    add_ln703_781_fu_631704_p2 = (!mult_1153_V_fu_630061_p1.read().is_01() || !mult_65_V_fu_629605_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1153_V_fu_630061_p1.read()) + sc_bigint<16>(mult_65_V_fu_629605_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_782_fu_660408_p2() {
    add_ln703_782_fu_660408_p2 = (!grp_fu_616825_p4.read().is_01() || !add_ln703_781_reg_671858.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616825_p4.read()) + sc_biguint<16>(add_ln703_781_reg_671858.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_783_fu_660413_p2() {
    add_ln703_783_fu_660413_p2 = (!add_ln703_780_fu_660402_p2.read().is_01() || !add_ln703_782_fu_660408_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_780_fu_660402_p2.read()) + sc_biguint<16>(add_ln703_782_fu_660408_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_784_fu_641541_p2() {
    add_ln703_784_fu_641541_p2 = (!mult_2369_V_fu_640576_p1.read().is_01() || !mult_1921_V_fu_639898_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2369_V_fu_640576_p1.read()) + sc_bigint<16>(mult_1921_V_fu_639898_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_785_fu_641547_p2() {
    add_ln703_785_fu_641547_p2 = (!mult_1601_V_fu_639823_p1.read().is_01() || !add_ln703_784_fu_641541_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1601_V_fu_639823_p1.read()) + sc_biguint<16>(add_ln703_784_fu_641541_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_786_fu_650201_p2() {
    add_ln703_786_fu_650201_p2 = (!mult_2881_V_fu_647984_p1.read().is_01() || !mult_2817_V_fu_647794_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2881_V_fu_647984_p1.read()) + sc_bigint<16>(mult_2817_V_fu_647794_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_787_fu_650207_p2() {
    add_ln703_787_fu_650207_p2 = (!mult_2625_V_fu_647569_p1.read().is_01() || !add_ln703_786_fu_650201_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2625_V_fu_647569_p1.read()) + sc_biguint<16>(add_ln703_786_fu_650201_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_788_fu_650213_p2() {
    add_ln703_788_fu_650213_p2 = (!add_ln703_785_reg_675638.read().is_01() || !add_ln703_787_fu_650207_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_785_reg_675638.read()) + sc_biguint<16>(add_ln703_787_fu_650207_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_789_fu_660419_p2() {
    add_ln703_789_fu_660419_p2 = (!add_ln703_783_fu_660413_p2.read().is_01() || !add_ln703_788_reg_678727.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_783_fu_660413_p2.read()) + sc_biguint<16>(add_ln703_788_reg_678727.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_78_fu_649819_p2() {
    add_ln703_78_fu_649819_p2 = (!mult_2714_V_fu_647660_p1.read().is_01() || !sext_ln703_26_fu_649815_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2714_V_fu_647660_p1.read()) + sc_bigint<16>(sext_ln703_26_fu_649815_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_790_fu_660424_p2() {
    add_ln703_790_fu_660424_p2 = (!add_ln703_779_reg_677144.read().is_01() || !add_ln703_789_fu_660419_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_779_reg_677144.read()) + sc_biguint<16>(add_ln703_789_fu_660419_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_791_fu_653783_p2() {
    add_ln703_791_fu_653783_p2 = (!mult_3329_V_fu_652571_p1.read().is_01() || !mult_3201_V_fu_652295_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3329_V_fu_652571_p1.read()) + sc_bigint<16>(mult_3201_V_fu_652295_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_792_fu_663431_p2() {
    add_ln703_792_fu_663431_p2 = (!mult_4033_V_fu_662896_p1.read().is_01() || !mult_3841_V_fu_662773_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_4033_V_fu_662896_p1.read()) + sc_bigint<16>(mult_3841_V_fu_662773_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_793_fu_663437_p2() {
    add_ln703_793_fu_663437_p2 = (!mult_3393_V_fu_662689_p1.read().is_01() || !add_ln703_792_fu_663431_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3393_V_fu_662689_p1.read()) + sc_biguint<16>(add_ln703_792_fu_663431_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_794_fu_663443_p2() {
    add_ln703_794_fu_663443_p2 = (!add_ln703_791_reg_679608.read().is_01() || !add_ln703_793_fu_663437_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_791_reg_679608.read()) + sc_biguint<16>(add_ln703_793_fu_663437_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_795_fu_631710_p2() {
    add_ln703_795_fu_631710_p2 = (!sext_ln203_355_fu_630595_p1.read().is_01() || !sext_ln203_281_fu_630094_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_355_fu_630595_p1.read()) + sc_bigint<15>(sext_ln203_281_fu_630094_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_796_fu_631720_p2() {
    add_ln703_796_fu_631720_p2 = (!mult_769_V_fu_629764_p1.read().is_01() || !sext_ln703_172_fu_631716_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_769_V_fu_629764_p1.read()) + sc_bigint<16>(sext_ln703_172_fu_631716_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_797_fu_641553_p2() {
    add_ln703_797_fu_641553_p2 = (!sext_ln203_562_fu_640480_p1.read().is_01() || !sext_ln203_508_fu_640127_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_562_fu_640480_p1.read()) + sc_bigint<15>(sext_ln203_508_fu_640127_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_798_fu_641563_p2() {
    add_ln703_798_fu_641563_p2 = (!mult_1665_V_fu_639842_p1.read().is_01() || !sext_ln703_173_fu_641559_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1665_V_fu_639842_p1.read()) + sc_bigint<16>(sext_ln703_173_fu_641559_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_799_fu_641569_p2() {
    add_ln703_799_fu_641569_p2 = (!add_ln703_796_reg_671863.read().is_01() || !add_ln703_798_fu_641563_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_796_reg_671863.read()) + sc_biguint<16>(add_ln703_798_fu_641563_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_79_fu_649825_p2() {
    add_ln703_79_fu_649825_p2 = (!add_ln703_76_reg_675568.read().is_01() || !add_ln703_78_fu_649819_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_76_reg_675568.read()) + sc_biguint<16>(add_ln703_78_fu_649819_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_7_fu_641275_p2() {
    add_ln703_7_fu_641275_p2 = (!mult_1928_V_fu_639909_p4.read().is_01() || !add_ln703_6_fu_641269_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1928_V_fu_639909_p4.read()) + sc_biguint<16>(add_ln703_6_fu_641269_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_800_fu_663448_p2() {
    add_ln703_800_fu_663448_p2 = (!add_ln703_794_fu_663443_p2.read().is_01() || !add_ln703_799_reg_675643.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_794_fu_663443_p2.read()) + sc_biguint<16>(add_ln703_799_reg_675643.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_801_fu_650218_p2() {
    add_ln703_801_fu_650218_p2 = (!sext_ln203_121_fu_646985_p1.read().is_01() || !sext_ln203_721_fu_648256_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_121_fu_646985_p1.read()) + sc_bigint<15>(sext_ln203_721_fu_648256_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_802_fu_650228_p2() {
    add_ln703_802_fu_650228_p2 = (!mult_2497_V_fu_647449_p1.read().is_01() || !sext_ln703_174_fu_650224_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2497_V_fu_647449_p1.read()) + sc_bigint<16>(sext_ln703_174_fu_650224_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_803_fu_626912_p2() {
    add_ln703_803_fu_626912_p2 = (!sext_ln203_369_fu_626370_p1.read().is_01() || !sext_ln203_148_fu_625764_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_369_fu_626370_p1.read()) + sc_bigint<14>(sext_ln203_148_fu_625764_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_804_fu_626922_p2() {
    add_ln703_804_fu_626922_p2 = (!sext_ln203_134_fu_625717_p1.read().is_01() || !sext_ln703_175_fu_626918_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_134_fu_625717_p1.read()) + sc_bigint<15>(sext_ln703_175_fu_626918_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_805_fu_650237_p2() {
    add_ln703_805_fu_650237_p2 = (!add_ln703_802_fu_650228_p2.read().is_01() || !sext_ln703_176_fu_650234_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_802_fu_650228_p2.read()) + sc_bigint<16>(sext_ln703_176_fu_650234_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_806_fu_653789_p2() {
    add_ln703_806_fu_653789_p2 = (!sext_ln203_742_fu_652113_p1.read().is_01() || !sext_ln203_731_fu_652012_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_742_fu_652113_p1.read()) + sc_bigint<14>(sext_ln203_731_fu_652012_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_807_fu_653799_p2() {
    add_ln703_807_fu_653799_p2 = (!sext_ln203_585_fu_651693_p1.read().is_01() || !sext_ln703_177_fu_653795_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_585_fu_651693_p1.read()) + sc_bigint<15>(sext_ln703_177_fu_653795_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_808_fu_657010_p2() {
    add_ln703_808_fu_657010_p2 = (!sext_ln203_841_fu_655968_p1.read().is_01() || !ap_const_lv14_A3.is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_841_fu_655968_p1.read()) + sc_biguint<14>(ap_const_lv14_A3));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_809_fu_657020_p2() {
    add_ln703_809_fu_657020_p2 = (!sext_ln203_775_fu_655677_p1.read().is_01() || !sext_ln703_179_fu_657016_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_775_fu_655677_p1.read()) + sc_bigint<15>(sext_ln703_179_fu_657016_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_80_fu_656446_p2() {
    add_ln703_80_fu_656446_p2 = (!sext_ln203_847_fu_656020_p1.read().is_01() || !sext_ln203_764_fu_655650_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_847_fu_656020_p1.read()) + sc_bigint<15>(sext_ln203_764_fu_655650_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_810_fu_657030_p2() {
    add_ln703_810_fu_657030_p2 = (!sext_ln703_178_fu_657007_p1.read().is_01() || !sext_ln703_180_fu_657026_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_178_fu_657007_p1.read()) + sc_bigint<16>(sext_ln703_180_fu_657026_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_811_fu_657036_p2() {
    add_ln703_811_fu_657036_p2 = (!add_ln703_805_reg_678732.read().is_01() || !add_ln703_810_fu_657030_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_805_reg_678732.read()) + sc_biguint<16>(add_ln703_810_fu_657030_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_812_fu_663453_p2() {
    add_ln703_812_fu_663453_p2 = (!add_ln703_800_fu_663448_p2.read().is_01() || !add_ln703_811_reg_680328.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_800_fu_663448_p2.read()) + sc_biguint<16>(add_ln703_811_reg_680328.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_814_fu_628980_p2() {
    add_ln703_814_fu_628980_p2 = (!grp_fu_618325_p4.read().is_01() || !mult_130_V_reg_667369.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618325_p4.read()) + sc_biguint<16>(mult_130_V_reg_667369.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_815_fu_641574_p2() {
    add_ln703_815_fu_641574_p2 = (!grp_fu_618075_p4.read().is_01() || !reg_620863.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618075_p4.read()) + sc_biguint<16>(reg_620863.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_816_fu_641580_p2() {
    add_ln703_816_fu_641580_p2 = (!reg_620615.read().is_01() || !add_ln703_815_fu_641574_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620615.read()) + sc_biguint<16>(add_ln703_815_fu_641574_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_817_fu_641586_p2() {
    add_ln703_817_fu_641586_p2 = (!add_ln703_814_reg_670711.read().is_01() || !add_ln703_816_fu_641580_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_814_reg_670711.read()) + sc_biguint<16>(add_ln703_816_fu_641580_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_818_fu_645646_p2() {
    add_ln703_818_fu_645646_p2 = (!grp_fu_615255_p4.read().is_01() || !grp_fu_618325_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615255_p4.read()) + sc_biguint<16>(grp_fu_618325_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_819_fu_645652_p2() {
    add_ln703_819_fu_645652_p2 = (!reg_620839.read().is_01() || !add_ln703_818_fu_645646_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620839.read()) + sc_biguint<16>(add_ln703_818_fu_645646_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_81_fu_656456_p2() {
    add_ln703_81_fu_656456_p2 = (!mult_3162_V_fu_655617_p1.read().is_01() || !sext_ln703_27_fu_656452_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3162_V_fu_655617_p1.read()) + sc_bigint<16>(sext_ln703_27_fu_656452_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_820_fu_653805_p2() {
    add_ln703_820_fu_653805_p2 = (!grp_fu_618295_p4.read().is_01() || !grp_fu_615585_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618295_p4.read()) + sc_biguint<16>(grp_fu_615585_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_821_fu_653811_p2() {
    add_ln703_821_fu_653811_p2 = (!grp_fu_616355_p4.read().is_01() || !add_ln703_820_fu_653805_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616355_p4.read()) + sc_biguint<16>(add_ln703_820_fu_653805_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_822_fu_653817_p2() {
    add_ln703_822_fu_653817_p2 = (!add_ln703_819_reg_677149.read().is_01() || !add_ln703_821_fu_653811_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_819_reg_677149.read()) + sc_biguint<16>(add_ln703_821_fu_653811_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_823_fu_653822_p2() {
    add_ln703_823_fu_653822_p2 = (!add_ln703_817_reg_675648.read().is_01() || !add_ln703_822_fu_653817_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_817_reg_675648.read()) + sc_biguint<16>(add_ln703_822_fu_653817_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_824_fu_660429_p2() {
    add_ln703_824_fu_660429_p2 = (!grp_fu_617935_p4.read().is_01() || !grp_fu_619225_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_617935_p4.read()) + sc_biguint<16>(grp_fu_619225_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_825_fu_660435_p2() {
    add_ln703_825_fu_660435_p2 = (!grp_fu_615805_p4.read().is_01() || !add_ln703_824_fu_660429_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615805_p4.read()) + sc_biguint<16>(add_ln703_824_fu_660429_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_826_fu_663464_p2() {
    add_ln703_826_fu_663464_p2 = (!mult_2_V_fu_662579_p1.read().is_01() || !grp_fu_616315_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2_V_fu_662579_p1.read()) + sc_biguint<16>(grp_fu_616315_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_827_fu_663470_p2() {
    add_ln703_827_fu_663470_p2 = (!reg_620931.read().is_01() || !add_ln703_826_fu_663464_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620931.read()) + sc_biguint<16>(add_ln703_826_fu_663464_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_828_fu_663476_p2() {
    add_ln703_828_fu_663476_p2 = (!add_ln703_825_reg_680833.read().is_01() || !add_ln703_827_fu_663470_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_825_reg_680833.read()) + sc_biguint<16>(add_ln703_827_fu_663470_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_829_fu_624884_p2() {
    add_ln703_829_fu_624884_p2 = (!mult_642_V_fu_624077_p1.read().is_01() || !mult_322_V_fu_623529_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_642_V_fu_624077_p1.read()) + sc_bigint<16>(mult_322_V_fu_623529_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_82_fu_659556_p2() {
    add_ln703_82_fu_659556_p2 = (!sext_ln203_80_fu_658644_p1.read().is_01() || !sext_ln203_915_fu_659152_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_80_fu_658644_p1.read()) + sc_bigint<15>(sext_ln203_915_fu_659152_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_830_fu_624890_p2() {
    add_ln703_830_fu_624890_p2 = (!mult_258_V_fu_623464_p1.read().is_01() || !add_ln703_829_fu_624884_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_258_V_fu_623464_p1.read()) + sc_biguint<16>(add_ln703_829_fu_624884_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_831_fu_635219_p2() {
    add_ln703_831_fu_635219_p2 = (!mult_1602_V_fu_633562_p1.read().is_01() || !mult_1154_V_fu_632946_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1602_V_fu_633562_p1.read()) + sc_bigint<16>(mult_1154_V_fu_632946_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_832_fu_635225_p2() {
    add_ln703_832_fu_635225_p2 = (!mult_706_V_fu_632750_p1.read().is_01() || !add_ln703_831_fu_635219_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_706_V_fu_632750_p1.read()) + sc_biguint<16>(add_ln703_831_fu_635219_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_833_fu_635231_p2() {
    add_ln703_833_fu_635231_p2 = (!add_ln703_830_reg_668881.read().is_01() || !add_ln703_832_fu_635225_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_830_reg_668881.read()) + sc_biguint<16>(add_ln703_832_fu_635225_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_834_fu_663481_p2() {
    add_ln703_834_fu_663481_p2 = (!add_ln703_828_fu_663476_p2.read().is_01() || !add_ln703_833_reg_673269.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_828_fu_663476_p2.read()) + sc_biguint<16>(add_ln703_833_reg_673269.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_835_fu_663486_p2() {
    add_ln703_835_fu_663486_p2 = (!add_ln703_823_reg_679618.read().is_01() || !add_ln703_834_fu_663481_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_823_reg_679618.read()) + sc_biguint<16>(add_ln703_834_fu_663481_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_836_fu_641591_p2() {
    add_ln703_836_fu_641591_p2 = (!mult_2306_V_fu_640484_p1.read().is_01() || !mult_2050_V_fu_639983_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2306_V_fu_640484_p1.read()) + sc_bigint<16>(mult_2050_V_fu_639983_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_837_fu_641597_p2() {
    add_ln703_837_fu_641597_p2 = (!mult_1666_V_fu_639845_p1.read().is_01() || !add_ln703_836_fu_641591_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1666_V_fu_639845_p1.read()) + sc_biguint<16>(add_ln703_836_fu_641591_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_838_fu_657041_p2() {
    add_ln703_838_fu_657041_p2 = (!mult_3394_V_fu_655756_p1.read().is_01() || !mult_3074_V_fu_655603_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3394_V_fu_655756_p1.read()) + sc_bigint<16>(mult_3074_V_fu_655603_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_839_fu_657047_p2() {
    add_ln703_839_fu_657047_p2 = (!mult_2882_V_fu_655552_p1.read().is_01() || !add_ln703_838_fu_657041_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2882_V_fu_655552_p1.read()) + sc_biguint<16>(add_ln703_838_fu_657041_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_83_fu_659566_p2() {
    add_ln703_83_fu_659566_p2 = (!mult_3738_V_fu_659017_p1.read().is_01() || !sext_ln703_28_fu_659562_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3738_V_fu_659017_p1.read()) + sc_bigint<16>(sext_ln703_28_fu_659562_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_840_fu_657053_p2() {
    add_ln703_840_fu_657053_p2 = (!add_ln703_837_reg_675653.read().is_01() || !add_ln703_839_fu_657047_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_837_reg_675653.read()) + sc_biguint<16>(add_ln703_839_fu_657047_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_841_fu_628985_p2() {
    add_ln703_841_fu_628985_p2 = (!sext_ln203_168_fu_627752_p1.read().is_01() || !sext_ln203_103_fu_627533_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_168_fu_627752_p1.read()) + sc_bigint<15>(sext_ln203_103_fu_627533_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_842_fu_660444_p2() {
    add_ln703_842_fu_660444_p2 = (!mult_3906_V_fu_659331_p1.read().is_01() || !sext_ln703_181_fu_660441_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3906_V_fu_659331_p1.read()) + sc_bigint<16>(sext_ln703_181_fu_660441_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_843_fu_638539_p2() {
    add_ln703_843_fu_638539_p2 = (!sext_ln203_410_fu_636735_p1.read().is_01() || !sext_ln203_319_fu_636503_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_410_fu_636735_p1.read()) + sc_bigint<15>(sext_ln203_319_fu_636503_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_844_fu_638549_p2() {
    add_ln703_844_fu_638549_p2 = (!mult_898_V_fu_636332_p1.read().is_01() || !sext_ln703_182_fu_638545_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_898_V_fu_636332_p1.read()) + sc_bigint<16>(sext_ln703_182_fu_638545_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_845_fu_660450_p2() {
    add_ln703_845_fu_660450_p2 = (!add_ln703_842_fu_660444_p2.read().is_01() || !add_ln703_844_reg_674516.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_842_fu_660444_p2.read()) + sc_biguint<16>(add_ln703_844_reg_674516.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_846_fu_660455_p2() {
    add_ln703_846_fu_660455_p2 = (!add_ln703_840_reg_680333.read().is_01() || !add_ln703_845_fu_660450_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_840_reg_680333.read()) + sc_biguint<16>(add_ln703_845_fu_660450_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_847_fu_641603_p2() {
    add_ln703_847_fu_641603_p2 = (!sext_ln203_576_fu_640580_p1.read().is_01() || !sext_ln203_543_fu_640350_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_576_fu_640580_p1.read()) + sc_bigint<15>(sext_ln203_543_fu_640350_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_848_fu_641613_p2() {
    add_ln703_848_fu_641613_p2 = (!mult_2114_V_fu_640130_p1.read().is_01() || !sext_ln703_183_fu_641609_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2114_V_fu_640130_p1.read()) + sc_bigint<16>(sext_ln703_183_fu_641609_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_849_fu_638555_p2() {
    add_ln703_849_fu_638555_p2 = (!sext_ln203_445_fu_636919_p1.read().is_01() || !sext_ln203_90_fu_636193_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_445_fu_636919_p1.read()) + sc_bigint<14>(sext_ln203_90_fu_636193_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_84_fu_659572_p2() {
    add_ln703_84_fu_659572_p2 = (!add_ln703_81_reg_680198.read().is_01() || !add_ln703_83_fu_659566_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_81_reg_680198.read()) + sc_biguint<16>(add_ln703_83_fu_659566_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_850_fu_657061_p2() {
    add_ln703_850_fu_657061_p2 = (!sext_ln203_878_fu_656199_p1.read().is_01() || !sext_ln703_184_fu_657058_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_878_fu_656199_p1.read()) + sc_bigint<15>(sext_ln703_184_fu_657058_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_851_fu_657071_p2() {
    add_ln703_851_fu_657071_p2 = (!add_ln703_848_reg_675658.read().is_01() || !sext_ln703_185_fu_657067_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_848_reg_675658.read()) + sc_bigint<16>(sext_ln703_185_fu_657067_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_852_fu_653827_p2() {
    add_ln703_852_fu_653827_p2 = (!sext_ln203_776_fu_652397_p1.read().is_01() || !sext_ln203_722_fu_651967_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_776_fu_652397_p1.read()) + sc_bigint<14>(sext_ln203_722_fu_651967_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_853_fu_653837_p2() {
    add_ln703_853_fu_653837_p2 = (!sext_ln203_460_fu_651606_p1.read().is_01() || !sext_ln703_186_fu_653833_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_460_fu_651606_p1.read()) + sc_bigint<15>(sext_ln703_186_fu_653833_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_854_fu_657079_p2() {
    add_ln703_854_fu_657079_p2 = (!sext_ln203_842_fu_655972_p1.read().is_01() || !ap_const_lv13_1F7E.is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_842_fu_655972_p1.read()) + sc_bigint<13>(ap_const_lv13_1F7E));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_855_fu_657089_p2() {
    add_ln703_855_fu_657089_p2 = (!sext_ln203_860_fu_656090_p1.read().is_01() || !sext_ln703_188_fu_657085_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_860_fu_656090_p1.read()) + sc_bigint<14>(sext_ln703_188_fu_657085_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_856_fu_657099_p2() {
    add_ln703_856_fu_657099_p2 = (!sext_ln703_187_fu_657076_p1.read().is_01() || !sext_ln703_189_fu_657095_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_187_fu_657076_p1.read()) + sc_bigint<16>(sext_ln703_189_fu_657095_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_857_fu_657105_p2() {
    add_ln703_857_fu_657105_p2 = (!add_ln703_851_fu_657071_p2.read().is_01() || !add_ln703_856_fu_657099_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_851_fu_657071_p2.read()) + sc_biguint<16>(add_ln703_856_fu_657099_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_858_fu_660460_p2() {
    add_ln703_858_fu_660460_p2 = (!add_ln703_846_fu_660455_p2.read().is_01() || !add_ln703_857_reg_680338.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_846_fu_660455_p2.read()) + sc_biguint<16>(add_ln703_857_reg_680338.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_85_fu_659577_p2() {
    add_ln703_85_fu_659577_p2 = (!add_ln703_79_reg_678607.read().is_01() || !add_ln703_84_fu_659572_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_79_reg_678607.read()) + sc_biguint<16>(add_ln703_84_fu_659572_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_860_fu_624896_p2() {
    add_ln703_860_fu_624896_p2 = (!grp_fu_616995_p4.read().is_01() || !reg_620023.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616995_p4.read()) + sc_biguint<16>(reg_620023.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_861_fu_624902_p2() {
    add_ln703_861_fu_624902_p2 = (!reg_619895.read().is_01() || !add_ln703_860_fu_624896_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_619895.read()) + sc_biguint<16>(add_ln703_860_fu_624896_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_862_fu_635236_p2() {
    add_ln703_862_fu_635236_p2 = (!grp_fu_619225_p4.read().is_01() || !reg_619983.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_619225_p4.read()) + sc_biguint<16>(reg_619983.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_863_fu_635242_p2() {
    add_ln703_863_fu_635242_p2 = (!mult_771_V_reg_669188.read().is_01() || !add_ln703_862_fu_635236_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_771_V_reg_669188.read()) + sc_biguint<16>(add_ln703_862_fu_635236_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_864_fu_635247_p2() {
    add_ln703_864_fu_635247_p2 = (!add_ln703_861_reg_668886.read().is_01() || !add_ln703_863_fu_635242_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_861_reg_668886.read()) + sc_biguint<16>(add_ln703_863_fu_635242_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_865_fu_638561_p2() {
    add_ln703_865_fu_638561_p2 = (!grp_fu_616545_p4.read().is_01() || !grp_fu_617825_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616545_p4.read()) + sc_biguint<16>(grp_fu_617825_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_866_fu_638567_p2() {
    add_ln703_866_fu_638567_p2 = (!reg_620063.read().is_01() || !add_ln703_865_fu_638561_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620063.read()) + sc_biguint<16>(add_ln703_865_fu_638561_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_867_fu_653843_p2() {
    add_ln703_867_fu_653843_p2 = (!grp_fu_615315_p4.read().is_01() || !mult_2947_V_reg_677810.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615315_p4.read()) + sc_biguint<16>(mult_2947_V_reg_677810.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_868_fu_653848_p2() {
    add_ln703_868_fu_653848_p2 = (!mult_515_V_fu_651452_p1.read().is_01() || !grp_fu_616445_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_515_V_fu_651452_p1.read()) + sc_biguint<16>(grp_fu_616445_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_869_fu_653854_p2() {
    add_ln703_869_fu_653854_p2 = (!add_ln703_867_fu_653843_p2.read().is_01() || !add_ln703_868_fu_653848_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_867_fu_653843_p2.read()) + sc_biguint<16>(add_ln703_868_fu_653848_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_86_fu_631438_p2() {
    add_ln703_86_fu_631438_p2 = (!sext_ln203_307_fu_630206_p1.read().is_01() || !sext_ln203_220_fu_629847_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_307_fu_630206_p1.read()) + sc_bigint<14>(sext_ln203_220_fu_629847_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_870_fu_653860_p2() {
    add_ln703_870_fu_653860_p2 = (!add_ln703_866_reg_674526.read().is_01() || !add_ln703_869_fu_653854_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_866_reg_674526.read()) + sc_biguint<16>(add_ln703_869_fu_653854_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_871_fu_653865_p2() {
    add_ln703_871_fu_653865_p2 = (!add_ln703_864_reg_673274.read().is_01() || !add_ln703_870_fu_653860_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_864_reg_673274.read()) + sc_biguint<16>(add_ln703_870_fu_653860_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_872_fu_628991_p2() {
    add_ln703_872_fu_628991_p2 = (!mult_963_V_fu_627888_p1.read().is_01() || !mult_899_V_fu_627864_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_963_V_fu_627888_p1.read()) + sc_bigint<16>(mult_899_V_fu_627864_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_873_fu_631726_p2() {
    add_ln703_873_fu_631726_p2 = (!mult_835_V_fu_629782_p1.read().is_01() || !add_ln703_872_reg_670721.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_835_V_fu_629782_p1.read()) + sc_biguint<16>(add_ln703_872_reg_670721.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_874_fu_635252_p2() {
    add_ln703_874_fu_635252_p2 = (!mult_1795_V_fu_633996_p1.read().is_01() || !mult_1667_V_fu_633656_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1795_V_fu_633996_p1.read()) + sc_bigint<16>(mult_1667_V_fu_633656_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_875_fu_635258_p2() {
    add_ln703_875_fu_635258_p2 = (!mult_1347_V_fu_633114_p1.read().is_01() || !add_ln703_874_fu_635252_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1347_V_fu_633114_p1.read()) + sc_biguint<16>(add_ln703_874_fu_635252_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_876_fu_635264_p2() {
    add_ln703_876_fu_635264_p2 = (!add_ln703_873_reg_671868.read().is_01() || !add_ln703_875_fu_635258_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_873_reg_671868.read()) + sc_biguint<16>(add_ln703_875_fu_635258_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_877_fu_645658_p2() {
    add_ln703_877_fu_645658_p2 = (!mult_2563_V_fu_643459_p1.read().is_01() || !mult_2435_V_fu_643137_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2563_V_fu_643459_p1.read()) + sc_bigint<16>(mult_2435_V_fu_643137_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_878_fu_645664_p2() {
    add_ln703_878_fu_645664_p2 = (!mult_2371_V_fu_643101_p1.read().is_01() || !add_ln703_877_fu_645658_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2371_V_fu_643101_p1.read()) + sc_biguint<16>(add_ln703_877_fu_645658_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_879_fu_653870_p2() {
    add_ln703_879_fu_653870_p2 = (!mult_3267_V_fu_652411_p1.read().is_01() || !mult_2883_V_fu_651850_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3267_V_fu_652411_p1.read()) + sc_bigint<16>(mult_2883_V_fu_651850_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_87_fu_631448_p2() {
    add_ln703_87_fu_631448_p2 = (!sext_ln203_206_fu_629812_p1.read().is_01() || !sext_ln703_29_fu_631444_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_206_fu_629812_p1.read()) + sc_bigint<15>(sext_ln703_29_fu_631444_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_880_fu_660465_p2() {
    add_ln703_880_fu_660465_p2 = (!mult_3779_V_fu_659104_p1.read().is_01() || !mult_3651_V_fu_658930_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3779_V_fu_659104_p1.read()) + sc_bigint<16>(mult_3651_V_fu_658930_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_881_fu_660471_p2() {
    add_ln703_881_fu_660471_p2 = (!add_ln703_879_reg_679633.read().is_01() || !add_ln703_880_fu_660465_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_879_reg_679633.read()) + sc_biguint<16>(add_ln703_880_fu_660465_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_882_fu_660476_p2() {
    add_ln703_882_fu_660476_p2 = (!add_ln703_878_reg_677154.read().is_01() || !add_ln703_881_fu_660471_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_878_reg_677154.read()) + sc_biguint<16>(add_ln703_881_fu_660471_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_883_fu_660481_p2() {
    add_ln703_883_fu_660481_p2 = (!add_ln703_876_reg_673279.read().is_01() || !add_ln703_882_fu_660476_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_876_reg_673279.read()) + sc_biguint<16>(add_ln703_882_fu_660476_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_884_fu_660486_p2() {
    add_ln703_884_fu_660486_p2 = (!add_ln703_871_reg_679628.read().is_01() || !add_ln703_883_fu_660481_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_871_reg_679628.read()) + sc_biguint<16>(add_ln703_883_fu_660481_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_885_fu_645670_p2() {
    add_ln703_885_fu_645670_p2 = (!sext_ln203_91_fu_642693_p1.read().is_01() || !sext_ln203_31_fu_642572_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_91_fu_642693_p1.read()) + sc_bigint<15>(sext_ln203_31_fu_642572_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_886_fu_645680_p2() {
    add_ln703_886_fu_645680_p2 = (!mult_3_V_fu_642480_p1.read().is_01() || !sext_ln703_190_fu_645676_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3_V_fu_642480_p1.read()) + sc_bigint<16>(sext_ln703_190_fu_645676_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_887_fu_631731_p2() {
    add_ln703_887_fu_631731_p2 = (!sext_ln203_356_fu_630599_p1.read().is_01() || !sext_ln203_282_fu_630097_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_356_fu_630599_p1.read()) + sc_bigint<15>(sext_ln203_282_fu_630097_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_888_fu_638576_p2() {
    add_ln703_888_fu_638576_p2 = (!mult_643_V_fu_636216_p1.read().is_01() || !sext_ln703_191_fu_638573_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_643_V_fu_636216_p1.read()) + sc_bigint<16>(sext_ln703_191_fu_638573_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_889_fu_645686_p2() {
    add_ln703_889_fu_645686_p2 = (!add_ln703_886_fu_645680_p2.read().is_01() || !add_ln703_888_reg_674531.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_886_fu_645680_p2.read()) + sc_biguint<16>(add_ln703_888_reg_674531.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_88_fu_645262_p2() {
    add_ln703_88_fu_645262_p2 = (!sext_ln203_608_fu_643320_p1.read().is_01() || !sext_ln203_436_fu_642767_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_608_fu_643320_p1.read()) + sc_bigint<14>(sext_ln203_436_fu_642767_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_890_fu_641619_p2() {
    add_ln703_890_fu_641619_p2 = (!sext_ln203_487_fu_639997_p1.read().is_01() || !sext_ln203_472_fu_639949_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_487_fu_639997_p1.read()) + sc_bigint<15>(sext_ln203_472_fu_639949_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_891_fu_641629_p2() {
    add_ln703_891_fu_641629_p2 = (!mult_1923_V_fu_639902_p1.read().is_01() || !sext_ln703_192_fu_641625_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1923_V_fu_639902_p1.read()) + sc_bigint<16>(sext_ln703_192_fu_641625_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_892_fu_645691_p2() {
    add_ln703_892_fu_645691_p2 = (!sext_ln203_646_fu_643662_p1.read().is_01() || !sext_ln203_633_fu_643545_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_646_fu_643662_p1.read()) + sc_bigint<15>(sext_ln203_633_fu_643545_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_893_fu_657114_p2() {
    add_ln703_893_fu_657114_p2 = (!sext_ln203_808_fu_655760_p1.read().is_01() || !sext_ln203_743_fu_655610_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_808_fu_655760_p1.read()) + sc_bigint<15>(sext_ln203_743_fu_655610_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_894_fu_657124_p2() {
    add_ln703_894_fu_657124_p2 = (!sext_ln703_193_fu_657111_p1.read().is_01() || !sext_ln703_194_fu_657120_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_193_fu_657111_p1.read()) + sc_bigint<16>(sext_ln703_194_fu_657120_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_895_fu_657130_p2() {
    add_ln703_895_fu_657130_p2 = (!add_ln703_891_reg_675663.read().is_01() || !add_ln703_894_fu_657124_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_891_reg_675663.read()) + sc_biguint<16>(add_ln703_894_fu_657124_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_896_fu_657135_p2() {
    add_ln703_896_fu_657135_p2 = (!add_ln703_889_reg_677159.read().is_01() || !add_ln703_895_fu_657130_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_889_reg_677159.read()) + sc_biguint<16>(add_ln703_895_fu_657130_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_897_fu_660491_p2() {
    add_ln703_897_fu_660491_p2 = (!sext_ln203_939_fu_659335_p1.read().is_01() || !sext_ln203_896_fu_658993_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_939_fu_659335_p1.read()) + sc_bigint<15>(sext_ln203_896_fu_658993_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_898_fu_660501_p2() {
    add_ln703_898_fu_660501_p2 = (!mult_3523_V_fu_658856_p1.read().is_01() || !sext_ln703_195_fu_660497_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3523_V_fu_658856_p1.read()) + sc_bigint<16>(sext_ln703_195_fu_660497_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_899_fu_663497_p2() {
    add_ln703_899_fu_663497_p2 = (!sext_ln203_975_fu_662900_p1.read().is_01() || !sext_ln203_958_fu_662798_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_975_fu_662900_p1.read()) + sc_bigint<15>(sext_ln203_958_fu_662798_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_89_fu_645272_p2() {
    add_ln703_89_fu_645272_p2 = (!sext_ln203_403_fu_642754_p1.read().is_01() || !sext_ln703_31_fu_645268_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_403_fu_642754_p1.read()) + sc_bigint<15>(sext_ln703_31_fu_645268_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_8_fu_645241_p2() {
    add_ln703_8_fu_645241_p2 = (!grp_fu_619715_p4.read().is_01() || !reg_619839.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_619715_p4.read()) + sc_biguint<16>(reg_619839.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_900_fu_628997_p2() {
    add_ln703_900_fu_628997_p2 = (!sext_ln203_240_fu_628068_p1.read().is_01() || !sext_ln203_61_fu_627511_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_240_fu_628068_p1.read()) + sc_bigint<14>(sext_ln203_61_fu_627511_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_901_fu_663510_p2() {
    add_ln703_901_fu_663510_p2 = (!sext_ln703_196_fu_663503_p1.read().is_01() || !sext_ln703_197_fu_663507_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_196_fu_663503_p1.read()) + sc_bigint<16>(sext_ln703_197_fu_663507_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_902_fu_663516_p2() {
    add_ln703_902_fu_663516_p2 = (!add_ln703_898_reg_680848.read().is_01() || !add_ln703_901_fu_663510_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_898_reg_680848.read()) + sc_biguint<16>(add_ln703_901_fu_663510_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_903_fu_650243_p2() {
    add_ln703_903_fu_650243_p2 = (!sext_ln203_672_fu_647798_p1.read().is_01() || !sext_ln203_544_fu_647302_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_672_fu_647798_p1.read()) + sc_bigint<14>(sext_ln203_544_fu_647302_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_904_fu_650253_p2() {
    add_ln703_904_fu_650253_p2 = (!sext_ln203_338_fu_647152_p1.read().is_01() || !sext_ln703_198_fu_650249_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_338_fu_647152_p1.read()) + sc_bigint<15>(sext_ln703_198_fu_650249_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_905_fu_657143_p2() {
    add_ln703_905_fu_657143_p2 = (!sext_ln203_122_fu_655432_p1.read().is_01() || !sext_ln203_861_fu_656094_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_122_fu_655432_p1.read()) + sc_bigint<14>(sext_ln203_861_fu_656094_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_906_fu_657153_p2() {
    add_ln703_906_fu_657153_p2 = (!sext_ln203_303_fu_655455_p1.read().is_01() || !ap_const_lv13_1FB4.is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_303_fu_655455_p1.read()) + sc_bigint<13>(ap_const_lv13_1FB4));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_907_fu_657163_p2() {
    add_ln703_907_fu_657163_p2 = (!sext_ln703_200_fu_657149_p1.read().is_01() || !sext_ln703_201_fu_657159_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_200_fu_657149_p1.read()) + sc_bigint<15>(sext_ln703_201_fu_657159_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_908_fu_657173_p2() {
    add_ln703_908_fu_657173_p2 = (!sext_ln703_199_fu_657140_p1.read().is_01() || !sext_ln703_202_fu_657169_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_199_fu_657140_p1.read()) + sc_bigint<16>(sext_ln703_202_fu_657169_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_909_fu_663521_p2() {
    add_ln703_909_fu_663521_p2 = (!add_ln703_902_fu_663516_p2.read().is_01() || !add_ln703_908_reg_680348.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_902_fu_663516_p2.read()) + sc_biguint<16>(add_ln703_908_reg_680348.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_90_fu_645282_p2() {
    add_ln703_90_fu_645282_p2 = (!sext_ln703_30_fu_645259_p1.read().is_01() || !sext_ln703_32_fu_645278_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_30_fu_645259_p1.read()) + sc_bigint<16>(sext_ln703_32_fu_645278_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_910_fu_663526_p2() {
    add_ln703_910_fu_663526_p2 = (!add_ln703_896_reg_680343.read().is_01() || !add_ln703_909_fu_663521_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_896_reg_680343.read()) + sc_biguint<16>(add_ln703_909_fu_663521_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_912_fu_624908_p2() {
    add_ln703_912_fu_624908_p2 = (!grp_fu_617195_p4.read().is_01() || !reg_619899.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_617195_p4.read()) + sc_biguint<16>(reg_619899.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_913_fu_624914_p2() {
    add_ln703_913_fu_624914_p2 = (!reg_619839.read().is_01() || !add_ln703_912_fu_624908_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_619839.read()) + sc_biguint<16>(add_ln703_912_fu_624908_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_914_fu_631737_p2() {
    add_ln703_914_fu_631737_p2 = (!grp_fu_619155_p4.read().is_01() || !mult_1220_V_reg_670196.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_619155_p4.read()) + sc_biguint<16>(mult_1220_V_reg_670196.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_915_fu_631742_p2() {
    add_ln703_915_fu_631742_p2 = (!reg_620471.read().is_01() || !add_ln703_914_fu_631737_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620471.read()) + sc_biguint<16>(add_ln703_914_fu_631737_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_916_fu_631748_p2() {
    add_ln703_916_fu_631748_p2 = (!add_ln703_913_reg_668891.read().is_01() || !add_ln703_915_fu_631742_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_913_reg_668891.read()) + sc_biguint<16>(add_ln703_915_fu_631742_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_917_fu_641635_p2() {
    add_ln703_917_fu_641635_p2 = (!grp_fu_617145_p4.read().is_01() || !mult_1796_V_reg_672616.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_617145_p4.read()) + sc_biguint<16>(mult_1796_V_reg_672616.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_918_fu_641640_p2() {
    add_ln703_918_fu_641640_p2 = (!reg_619911.read().is_01() || !add_ln703_917_fu_641635_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_619911.read()) + sc_biguint<16>(add_ln703_917_fu_641635_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_919_fu_653876_p2() {
    add_ln703_919_fu_653876_p2 = (!mult_3140_V_fu_652127_p4.read().is_01() || !grp_fu_617785_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_3140_V_fu_652127_p4.read()) + sc_biguint<16>(grp_fu_617785_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_91_fu_649830_p2() {
    add_ln703_91_fu_649830_p2 = (!sext_ln203_249_fu_647132_p1.read().is_01() || !sext_ln203_865_fu_648953_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_249_fu_647132_p1.read()) + sc_bigint<14>(sext_ln203_865_fu_648953_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_920_fu_653882_p2() {
    add_ln703_920_fu_653882_p2 = (!mult_2692_V_reg_676239.read().is_01() || !add_ln703_919_fu_653876_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_2692_V_reg_676239.read()) + sc_biguint<16>(add_ln703_919_fu_653876_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_921_fu_653887_p2() {
    add_ln703_921_fu_653887_p2 = (!add_ln703_918_reg_675668.read().is_01() || !add_ln703_920_fu_653882_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_918_reg_675668.read()) + sc_biguint<16>(add_ln703_920_fu_653882_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_922_fu_653892_p2() {
    add_ln703_922_fu_653892_p2 = (!add_ln703_916_reg_671878.read().is_01() || !add_ln703_921_fu_653887_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_916_reg_671878.read()) + sc_biguint<16>(add_ln703_921_fu_653887_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_923_fu_653897_p2() {
    add_ln703_923_fu_653897_p2 = (!grp_fu_617245_p4.read().is_01() || !grp_fu_618205_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_617245_p4.read()) + sc_biguint<16>(grp_fu_618205_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_924_fu_653903_p2() {
    add_ln703_924_fu_653903_p2 = (!grp_fu_615425_p4.read().is_01() || !add_ln703_923_fu_653897_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615425_p4.read()) + sc_biguint<16>(add_ln703_923_fu_653897_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_925_fu_624920_p2() {
    add_ln703_925_fu_624920_p2 = (!mult_516_V_fu_623807_p1.read().is_01() || !mult_260_V_fu_623468_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_516_V_fu_623807_p1.read()) + sc_bigint<16>(mult_260_V_fu_623468_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_926_fu_663537_p2() {
    add_ln703_926_fu_663537_p2 = (!grp_fu_617295_p4.read().is_01() || !add_ln703_925_reg_668896.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_617295_p4.read()) + sc_biguint<16>(add_ln703_925_reg_668896.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_927_fu_663542_p2() {
    add_ln703_927_fu_663542_p2 = (!add_ln703_924_reg_679643.read().is_01() || !add_ln703_926_fu_663537_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_924_reg_679643.read()) + sc_biguint<16>(add_ln703_926_fu_663537_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_928_fu_629003_p2() {
    add_ln703_928_fu_629003_p2 = (!mult_1092_V_fu_628072_p1.read().is_01() || !mult_836_V_fu_627839_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1092_V_fu_628072_p1.read()) + sc_bigint<16>(mult_836_V_fu_627839_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_929_fu_629009_p2() {
    add_ln703_929_fu_629009_p2 = (!mult_708_V_fu_627601_p1.read().is_01() || !add_ln703_928_fu_629003_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_708_V_fu_627601_p1.read()) + sc_biguint<16>(add_ln703_928_fu_629003_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_92_fu_649840_p2() {
    add_ln703_92_fu_649840_p2 = (!sext_ln203_667_fu_647723_p1.read().is_01() || !sext_ln703_33_fu_649836_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_667_fu_647723_p1.read()) + sc_bigint<15>(sext_ln703_33_fu_649836_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_930_fu_631753_p2() {
    add_ln703_930_fu_631753_p2 = (!mult_1476_V_fu_630603_p1.read().is_01() || !mult_1348_V_fu_630273_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1476_V_fu_630603_p1.read()) + sc_bigint<16>(mult_1348_V_fu_630273_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_931_fu_631759_p2() {
    add_ln703_931_fu_631759_p2 = (!mult_1284_V_fu_630173_p1.read().is_01() || !add_ln703_930_fu_631753_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1284_V_fu_630173_p1.read()) + sc_biguint<16>(add_ln703_930_fu_631753_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_932_fu_631765_p2() {
    add_ln703_932_fu_631765_p2 = (!add_ln703_929_reg_670731.read().is_01() || !add_ln703_931_fu_631759_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_929_reg_670731.read()) + sc_biguint<16>(add_ln703_931_fu_631759_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_933_fu_663547_p2() {
    add_ln703_933_fu_663547_p2 = (!add_ln703_927_fu_663542_p2.read().is_01() || !add_ln703_932_reg_671883.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_927_fu_663542_p2.read()) + sc_biguint<16>(add_ln703_932_reg_671883.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_934_fu_663552_p2() {
    add_ln703_934_fu_663552_p2 = (!add_ln703_922_reg_679638.read().is_01() || !add_ln703_933_fu_663547_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_922_reg_679638.read()) + sc_biguint<16>(add_ln703_933_fu_663547_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_935_fu_638582_p2() {
    add_ln703_935_fu_638582_p2 = (!mult_2052_V_fu_637235_p1.read().is_01() || !mult_1988_V_fu_637141_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2052_V_fu_637235_p1.read()) + sc_bigint<16>(mult_1988_V_fu_637141_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_936_fu_638588_p2() {
    add_ln703_936_fu_638588_p2 = (!mult_1924_V_fu_637011_p1.read().is_01() || !add_ln703_935_fu_638582_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1924_V_fu_637011_p1.read()) + sc_biguint<16>(add_ln703_935_fu_638582_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_937_fu_650259_p2() {
    add_ln703_937_fu_650259_p2 = (!mult_2820_V_fu_647802_p1.read().is_01() || !mult_2180_V_fu_647292_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2820_V_fu_647802_p1.read()) + sc_bigint<16>(mult_2180_V_fu_647292_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_938_fu_650265_p2() {
    add_ln703_938_fu_650265_p2 = (!mult_2116_V_fu_647202_p1.read().is_01() || !add_ln703_937_fu_650259_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2116_V_fu_647202_p1.read()) + sc_biguint<16>(add_ln703_937_fu_650259_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_939_fu_650271_p2() {
    add_ln703_939_fu_650271_p2 = (!add_ln703_936_reg_674536.read().is_01() || !add_ln703_938_fu_650265_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_936_reg_674536.read()) + sc_biguint<16>(add_ln703_938_fu_650265_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_93_fu_656462_p2() {
    add_ln703_93_fu_656462_p2 = (!sext_ln203_944_fu_656297_p1.read().is_01() || !ap_const_lv9_DB.is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_944_fu_656297_p1.read()) + sc_biguint<9>(ap_const_lv9_DB));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_940_fu_660507_p2() {
    add_ln703_940_fu_660507_p2 = (!mult_3780_V_fu_659108_p1.read().is_01() || !mult_3012_V_fu_658750_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3780_V_fu_659108_p1.read()) + sc_bigint<16>(mult_3012_V_fu_658750_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_941_fu_660513_p2() {
    add_ln703_941_fu_660513_p2 = (!mult_2884_V_fu_658732_p1.read().is_01() || !add_ln703_940_fu_660507_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2884_V_fu_658732_p1.read()) + sc_biguint<16>(add_ln703_940_fu_660507_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_942_fu_624926_p2() {
    add_ln703_942_fu_624926_p2 = (!sext_ln203_74_fu_623613_p1.read().is_01() || !sext_ln203_62_fu_623533_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_74_fu_623613_p1.read()) + sc_bigint<15>(sext_ln203_62_fu_623533_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_943_fu_660522_p2() {
    add_ln703_943_fu_660522_p2 = (!mult_3972_V_fu_659452_p1.read().is_01() || !sext_ln703_203_fu_660519_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3972_V_fu_659452_p1.read()) + sc_bigint<16>(sext_ln703_203_fu_660519_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_944_fu_660528_p2() {
    add_ln703_944_fu_660528_p2 = (!add_ln703_941_fu_660513_p2.read().is_01() || !add_ln703_943_fu_660522_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_941_fu_660513_p2.read()) + sc_biguint<16>(add_ln703_943_fu_660522_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_945_fu_660534_p2() {
    add_ln703_945_fu_660534_p2 = (!add_ln703_939_reg_678742.read().is_01() || !add_ln703_944_fu_660528_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_939_reg_678742.read()) + sc_biguint<16>(add_ln703_944_fu_660528_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_946_fu_629015_p2() {
    add_ln703_946_fu_629015_p2 = (!sext_ln203_217_fu_627902_p1.read().is_01() || !sext_ln203_168_fu_627752_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_217_fu_627902_p1.read()) + sc_bigint<15>(sext_ln203_168_fu_627752_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_947_fu_629025_p2() {
    add_ln703_947_fu_629025_p2 = (!mult_580_V_fu_627567_p1.read().is_01() || !sext_ln703_204_fu_629021_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_580_V_fu_627567_p1.read()) + sc_bigint<16>(sext_ln703_204_fu_629021_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_948_fu_641646_p2() {
    add_ln703_948_fu_641646_p2 = (!sext_ln203_545_fu_640354_p1.read().is_01() || !sext_ln203_410_reg_673701.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_545_fu_640354_p1.read()) + sc_bigint<15>(sext_ln203_410_reg_673701.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_949_fu_641655_p2() {
    add_ln703_949_fu_641655_p2 = (!mult_1028_V_fu_639741_p1.read().is_01() || !sext_ln703_205_fu_641651_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1028_V_fu_639741_p1.read()) + sc_bigint<16>(sext_ln703_205_fu_641651_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_94_fu_656472_p2() {
    add_ln703_94_fu_656472_p2 = (!sext_ln203_818_fu_655810_p1.read().is_01() || !zext_ln703_fu_656468_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_818_fu_655810_p1.read()) + sc_biguint<13>(zext_ln703_fu_656468_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_950_fu_641661_p2() {
    add_ln703_950_fu_641661_p2 = (!add_ln703_947_reg_670736.read().is_01() || !add_ln703_949_fu_641655_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_947_reg_670736.read()) + sc_biguint<16>(add_ln703_949_fu_641655_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_951_fu_650276_p2() {
    add_ln703_951_fu_650276_p2 = (!sext_ln203_704_fu_648150_p1.read().is_01() || !sext_ln203_603_fu_647453_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_704_fu_648150_p1.read()) + sc_bigint<14>(sext_ln203_603_fu_647453_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_952_fu_650286_p2() {
    add_ln703_952_fu_650286_p2 = (!sext_ln203_662_fu_647688_p1.read().is_01() || !sext_ln703_206_fu_650282_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_662_fu_647688_p1.read()) + sc_bigint<15>(sext_ln703_206_fu_650282_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_953_fu_657182_p2() {
    add_ln703_953_fu_657182_p2 = (!sext_ln203_32_fu_655407_p1.read().is_01() || !sext_ln203_827_fu_655888_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_32_fu_655407_p1.read()) + sc_bigint<14>(sext_ln203_827_fu_655888_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_954_fu_657192_p2() {
    add_ln703_954_fu_657192_p2 = (!sext_ln203_43_fu_655413_p1.read().is_01() || !ap_const_lv13_64.is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_43_fu_655413_p1.read()) + sc_biguint<13>(ap_const_lv13_64));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_955_fu_657202_p2() {
    add_ln703_955_fu_657202_p2 = (!sext_ln703_208_fu_657188_p1.read().is_01() || !sext_ln703_209_fu_657198_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_208_fu_657188_p1.read()) + sc_bigint<15>(sext_ln703_209_fu_657198_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_956_fu_657212_p2() {
    add_ln703_956_fu_657212_p2 = (!sext_ln703_207_fu_657179_p1.read().is_01() || !sext_ln703_210_fu_657208_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_207_fu_657179_p1.read()) + sc_bigint<16>(sext_ln703_210_fu_657208_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_957_fu_657218_p2() {
    add_ln703_957_fu_657218_p2 = (!add_ln703_950_reg_675673.read().is_01() || !add_ln703_956_fu_657212_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_950_reg_675673.read()) + sc_biguint<16>(add_ln703_956_fu_657212_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_958_fu_660539_p2() {
    add_ln703_958_fu_660539_p2 = (!add_ln703_945_fu_660534_p2.read().is_01() || !add_ln703_957_reg_680353.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_945_fu_660534_p2.read()) + sc_biguint<16>(add_ln703_957_reg_680353.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_95_fu_656482_p2() {
    add_ln703_95_fu_656482_p2 = (!add_ln703_92_reg_678612.read().is_01() || !sext_ln703_34_fu_656478_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_92_reg_678612.read()) + sc_bigint<15>(sext_ln703_34_fu_656478_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_960_fu_626928_p2() {
    add_ln703_960_fu_626928_p2 = (!grp_fu_618215_p4.read().is_01() || !grp_fu_616575_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618215_p4.read()) + sc_biguint<16>(grp_fu_616575_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_961_fu_626934_p2() {
    add_ln703_961_fu_626934_p2 = (!mult_261_V_reg_667449.read().is_01() || !add_ln703_960_fu_626928_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_261_V_reg_667449.read()) + sc_biguint<16>(add_ln703_960_fu_626928_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_962_fu_631770_p2() {
    add_ln703_962_fu_631770_p2 = (!grp_fu_617065_p4.read().is_01() || !grp_fu_618305_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_617065_p4.read()) + sc_biguint<16>(grp_fu_618305_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_963_fu_631776_p2() {
    add_ln703_963_fu_631776_p2 = (!mult_1093_V_reg_670131.read().is_01() || !add_ln703_962_fu_631770_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1093_V_reg_670131.read()) + sc_biguint<16>(add_ln703_962_fu_631770_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_964_fu_631781_p2() {
    add_ln703_964_fu_631781_p2 = (!add_ln703_961_reg_669759.read().is_01() || !add_ln703_963_fu_631776_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_961_reg_669759.read()) + sc_biguint<16>(add_ln703_963_fu_631776_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_965_fu_638594_p2() {
    add_ln703_965_fu_638594_p2 = (!grp_fu_617615_p4.read().is_01() || !reg_620995.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_617615_p4.read()) + sc_biguint<16>(reg_620995.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_966_fu_638600_p2() {
    add_ln703_966_fu_638600_p2 = (!reg_620931.read().is_01() || !add_ln703_965_fu_638594_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620931.read()) + sc_biguint<16>(add_ln703_965_fu_638594_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_967_fu_653909_p2() {
    add_ln703_967_fu_653909_p2 = (!grp_fu_616725_p4.read().is_01() || !mult_2437_V_reg_675114.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_616725_p4.read()) + sc_biguint<16>(mult_2437_V_reg_675114.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_968_fu_653914_p2() {
    add_ln703_968_fu_653914_p2 = (!reg_620695.read().is_01() || !add_ln703_967_fu_653909_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_620695.read()) + sc_biguint<16>(add_ln703_967_fu_653909_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_969_fu_653920_p2() {
    add_ln703_969_fu_653920_p2 = (!add_ln703_966_reg_674541.read().is_01() || !add_ln703_968_fu_653914_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_966_reg_674541.read()) + sc_biguint<16>(add_ln703_968_fu_653914_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_96_fu_656491_p2() {
    add_ln703_96_fu_656491_p2 = (!add_ln703_90_reg_677014.read().is_01() || !sext_ln703_35_fu_656487_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_90_reg_677014.read()) + sc_bigint<16>(sext_ln703_35_fu_656487_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_970_fu_653925_p2() {
    add_ln703_970_fu_653925_p2 = (!add_ln703_964_reg_671888.read().is_01() || !add_ln703_969_fu_653920_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_964_reg_671888.read()) + sc_biguint<16>(add_ln703_969_fu_653920_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_971_fu_660544_p2() {
    add_ln703_971_fu_660544_p2 = (!grp_fu_618635_p4.read().is_01() || !reg_620847.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_618635_p4.read()) + sc_biguint<16>(reg_620847.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_972_fu_660550_p2() {
    add_ln703_972_fu_660550_p2 = (!reg_621047.read().is_01() || !add_ln703_971_fu_660544_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_621047.read()) + sc_biguint<16>(add_ln703_971_fu_660544_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_973_fu_660556_p2() {
    add_ln703_973_fu_660556_p2 = (!mult_517_V_fu_658656_p1.read().is_01() || !grp_fu_618335_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_517_V_fu_658656_p1.read()) + sc_biguint<16>(grp_fu_618335_p4.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_974_fu_660562_p2() {
    add_ln703_974_fu_660562_p2 = (!grp_fu_615255_p4.read().is_01() || !add_ln703_973_fu_660556_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_615255_p4.read()) + sc_biguint<16>(add_ln703_973_fu_660556_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_975_fu_660568_p2() {
    add_ln703_975_fu_660568_p2 = (!add_ln703_972_fu_660550_p2.read().is_01() || !add_ln703_974_fu_660562_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_972_fu_660550_p2.read()) + sc_biguint<16>(add_ln703_974_fu_660562_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_976_fu_626939_p2() {
    add_ln703_976_fu_626939_p2 = (!mult_901_V_fu_626069_p1.read().is_01() || !mult_773_V_fu_625869_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_901_V_fu_626069_p1.read()) + sc_bigint<16>(mult_773_V_fu_625869_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_977_fu_626945_p2() {
    add_ln703_977_fu_626945_p2 = (!mult_709_V_fu_625768_p1.read().is_01() || !add_ln703_976_fu_626939_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_709_V_fu_625768_p1.read()) + sc_biguint<16>(add_ln703_976_fu_626939_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_978_fu_635269_p2() {
    add_ln703_978_fu_635269_p2 = (!mult_1733_V_fu_633862_p1.read().is_01() || !mult_1477_V_fu_633397_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1733_V_fu_633862_p1.read()) + sc_bigint<16>(mult_1477_V_fu_633397_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_979_fu_635275_p2() {
    add_ln703_979_fu_635275_p2 = (!mult_965_V_fu_632782_p1.read().is_01() || !add_ln703_978_fu_635269_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_965_V_fu_632782_p1.read()) + sc_biguint<16>(add_ln703_978_fu_635269_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_97_fu_659582_p2() {
    add_ln703_97_fu_659582_p2 = (!add_ln703_85_fu_659577_p2.read().is_01() || !add_ln703_96_reg_680203.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_85_fu_659577_p2.read()) + sc_biguint<16>(add_ln703_96_reg_680203.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_980_fu_635281_p2() {
    add_ln703_980_fu_635281_p2 = (!add_ln703_977_reg_669764.read().is_01() || !add_ln703_979_fu_635275_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_977_reg_669764.read()) + sc_biguint<16>(add_ln703_979_fu_635275_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_981_fu_660574_p2() {
    add_ln703_981_fu_660574_p2 = (!add_ln703_975_fu_660568_p2.read().is_01() || !add_ln703_980_reg_673284.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_975_fu_660568_p2.read()) + sc_biguint<16>(add_ln703_980_reg_673284.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_982_fu_660579_p2() {
    add_ln703_982_fu_660579_p2 = (!add_ln703_970_reg_679648.read().is_01() || !add_ln703_981_fu_660574_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_970_reg_679648.read()) + sc_biguint<16>(add_ln703_981_fu_660574_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_983_fu_641666_p2() {
    add_ln703_983_fu_641666_p2 = (!mult_2373_V_fu_640584_p1.read().is_01() || !mult_2053_V_fu_640001_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2373_V_fu_640584_p1.read()) + sc_bigint<16>(mult_2053_V_fu_640001_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_984_fu_641672_p2() {
    add_ln703_984_fu_641672_p2 = (!mult_1925_V_fu_639905_p1.read().is_01() || !add_ln703_983_fu_641666_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_1925_V_fu_639905_p1.read()) + sc_biguint<16>(add_ln703_983_fu_641666_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_985_fu_653930_p2() {
    add_ln703_985_fu_653930_p2 = (!mult_3141_V_fu_652137_p1.read().is_01() || !mult_3013_V_fu_651970_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3141_V_fu_652137_p1.read()) + sc_bigint<16>(mult_3013_V_fu_651970_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_986_fu_653936_p2() {
    add_ln703_986_fu_653936_p2 = (!mult_2693_V_fu_651741_p1.read().is_01() || !add_ln703_985_fu_653930_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_2693_V_fu_651741_p1.read()) + sc_biguint<16>(add_ln703_985_fu_653930_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_987_fu_653942_p2() {
    add_ln703_987_fu_653942_p2 = (!add_ln703_984_reg_675678.read().is_01() || !add_ln703_986_fu_653936_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_984_reg_675678.read()) + sc_biguint<16>(add_ln703_986_fu_653936_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_988_fu_663563_p2() {
    add_ln703_988_fu_663563_p2 = (!mult_4037_V_fu_662904_p1.read().is_01() || !mult_3973_V_fu_662801_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_4037_V_fu_662904_p1.read()) + sc_bigint<16>(mult_3973_V_fu_662801_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_989_fu_663569_p2() {
    add_ln703_989_fu_663569_p2 = (!mult_3717_V_fu_662739_p1.read().is_01() || !add_ln703_988_fu_663563_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3717_V_fu_662739_p1.read()) + sc_biguint<16>(add_ln703_988_fu_663563_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_990_fu_650292_p2() {
    add_ln703_990_fu_650292_p2 = (!sext_ln203_705_fu_648154_p1.read().is_01() || !sext_ln203_663_fu_647702_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_705_fu_648154_p1.read()) + sc_bigint<15>(sext_ln203_663_fu_647702_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_991_fu_650302_p2() {
    add_ln703_991_fu_650302_p2 = (!mult_5_V_fu_646784_p1.read().is_01() || !sext_ln703_211_fu_650298_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_5_V_fu_646784_p1.read()) + sc_bigint<16>(sext_ln703_211_fu_650298_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_992_fu_663575_p2() {
    add_ln703_992_fu_663575_p2 = (!add_ln703_989_fu_663569_p2.read().is_01() || !add_ln703_991_reg_678752.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_989_fu_663569_p2.read()) + sc_biguint<16>(add_ln703_991_reg_678752.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_993_fu_663580_p2() {
    add_ln703_993_fu_663580_p2 = (!add_ln703_987_reg_679653.read().is_01() || !add_ln703_992_fu_663575_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_987_reg_679653.read()) + sc_biguint<16>(add_ln703_992_fu_663575_p2.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_994_fu_624932_p2() {
    add_ln703_994_fu_624932_p2 = (!sext_ln203_75_fu_623617_p1.read().is_01() || !sext_ln203_44_fu_623432_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_75_fu_623617_p1.read()) + sc_bigint<14>(sext_ln203_44_fu_623432_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_995_fu_653950_p2() {
    add_ln703_995_fu_653950_p2 = (!sext_ln203_879_fu_652772_p1.read().is_01() || !sext_ln703_212_fu_653947_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_879_fu_652772_p1.read()) + sc_bigint<15>(sext_ln703_212_fu_653947_p1.read()));
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config10_pointwise_s::thread_add_ln703_996_fu_638606_p2() {
    add_ln703_996_fu_638606_p2 = (!sext_ln203_473_fu_637145_p1.read().is_01() || !sext_ln203_446_fu_636923_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_473_fu_637145_p1.read()) + sc_bigint<14>(sext_ln203_446_fu_636923_p1.read()));
}

}

