#include "depthwise_conv_2d_cl_array_array_ap_fixed_32u_config6_depthwise_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void depthwise_conv_2d_cl_array_array_ap_fixed_32u_config6_depthwise_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ((esl_seteq<1,1,1>(icmp_ln63_reg_484667.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        indvar_flatten_reg_2234 = add_ln63_reg_484671.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        indvar_flatten_reg_2234 = ap_const_lv8_0;
    }
    if ((esl_seteq<1,1,1>(icmp_ln63_reg_484667.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln288_reg_486250.read()))) {
        pX_4 = grp_fu_478787_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(io_acc_block_signal_op662.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln288_fu_478782_p2.read()))) {
        pX_4 = ap_const_lv32_0;
    }
    if ((esl_seteq<1,1,1>(icmp_ln63_reg_484667.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln288_reg_486250.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln292_reg_486254.read()))) {
        pY_4 = grp_fu_478814_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(io_acc_block_signal_op662.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln288_fu_478782_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln292_fu_478809_p2.read()))) {
        pY_4 = ap_const_lv32_0;
    }
    if ((esl_seteq<1,1,1>(icmp_ln63_reg_484667.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln288_reg_486250.read()))) {
        sX_4 = select_ln301_fu_479469_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(io_acc_block_signal_op662.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln288_fu_478782_p2.read()))) {
        sX_4 = ap_const_lv32_0;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        start_once_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_0, internal_ap_ready.read()))) {
            start_once_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, internal_ap_ready.read())) {
            start_once_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(io_acc_block_signal_op662.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln288_fu_478782_p2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln292_fu_478809_p2.read()))) {
        storemerge_i_i_reg_2245 = ap_const_lv32_0;
    } else if ((esl_seteq<1,1,1>(icmp_ln63_reg_484667.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln288_reg_486250.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln292_reg_486254.read()))) {
        storemerge_i_i_reg_2245 = select_ln297_fu_479488_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        add_ln63_reg_484671 = add_ln63_fu_473737_p2.read();
        icmp_ln63_reg_484667 = icmp_ln63_fu_473731_p2.read();
    }
    if ((esl_seteq<1,1,1>(icmp_ln63_reg_484667.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(and_ln266_6_reg_484724.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        add_ln703_3693_reg_486588 = add_ln703_3693_fu_479439_p2.read();
        add_ln703_3701_reg_486593 = add_ln703_3701_fu_479445_p2.read();
        add_ln703_3722_reg_486598 = add_ln703_3722_fu_479451_p2.read();
        add_ln703_3877_reg_486603 = add_ln703_3877_fu_479457_p2.read();
        kernel_data_V_276_load_1_reg_486528 = kernel_data_V_276.read();
        kernel_data_V_282_load_1_reg_486558 = kernel_data_V_282.read();
        trunc_ln708_2958_reg_486258 = grp_fu_477346_p2.read().range(22, 10);
        trunc_ln708_2963_reg_486273 = grp_fu_477376_p2.read().range(23, 10);
        trunc_ln708_2968_reg_486278 = grp_fu_477403_p2.read().range(23, 10);
        trunc_ln708_2977_reg_486283 = grp_fu_477433_p2.read().range(21, 10);
        trunc_ln708_2981_reg_486288 = grp_fu_477463_p2.read().range(21, 10);
        trunc_ln708_2983_reg_486293 = grp_fu_477485_p2.read().range(21, 10);
        trunc_ln708_3006_reg_486298 = grp_fu_477675_p2.read().range(23, 10);
        trunc_ln708_3011_reg_486303 = grp_fu_477760_p2.read().range(22, 10);
        trunc_ln708_3015_reg_486308 = grp_fu_477850_p2.read().range(23, 10);
        trunc_ln708_3024_reg_486313 = grp_fu_477907_p2.read().range(24, 10);
        trunc_ln708_3057_reg_486338 = grp_fu_478059_p2.read().range(21, 10);
        trunc_ln708_3062_reg_486343 = grp_fu_478089_p2.read().range(20, 10);
        trunc_ln708_3065_reg_486368 = grp_fu_478137_p2.read().range(21, 10);
        trunc_ln708_3067_reg_486373 = grp_fu_478167_p2.read().range(21, 10);
        trunc_ln708_3070_reg_486378 = grp_fu_478229_p2.read().range(22, 10);
        trunc_ln708_3071_reg_486383 = grp_fu_478251_p2.read().range(20, 10);
        trunc_ln708_3072_reg_486388 = grp_fu_478281_p2.read().range(20, 10);
        trunc_ln708_3080_reg_486393 = grp_fu_478396_p2.read().range(24, 10);
        trunc_ln708_3082_reg_486398 = grp_fu_478423_p2.read().range(22, 10);
        trunc_ln708_3096_reg_486403 = grp_fu_478533_p2.read().range(24, 10);
        trunc_ln708_3099_reg_486408 = grp_fu_478571_p2.read().range(23, 10);
        trunc_ln708_3115_reg_486413 = grp_fu_478624_p2.read().range(24, 10);
        trunc_ln708_3117_reg_486418 = grp_fu_478641_p2.read().range(23, 10);
    }
    if ((esl_seteq<1,1,1>(icmp_ln63_reg_484667.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(and_ln266_6_reg_484724.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        add_ln703_3695_reg_486983 = add_ln703_3695_fu_481264_p2.read();
        add_ln703_3703_reg_486988 = add_ln703_3703_fu_481289_p2.read();
        add_ln703_3705_reg_486993 = add_ln703_3705_fu_481295_p2.read();
        add_ln703_3709_reg_486998 = add_ln703_3709_fu_481301_p2.read();
        add_ln703_3713_reg_487003 = add_ln703_3713_fu_481307_p2.read();
        add_ln703_3716_reg_487008 = add_ln703_3716_fu_481313_p2.read();
        add_ln703_3724_reg_487013 = add_ln703_3724_fu_481319_p2.read();
        add_ln703_3725_reg_487018 = add_ln703_3725_fu_481325_p2.read();
        add_ln703_3730_reg_487023 = add_ln703_3730_fu_481331_p2.read();
        add_ln703_3742_reg_487028 = add_ln703_3742_fu_481347_p2.read();
        add_ln703_3758_reg_487033 = add_ln703_3758_fu_481363_p2.read();
        add_ln703_3766_reg_487038 = add_ln703_3766_fu_481379_p2.read();
        add_ln703_3777_reg_487043 = add_ln703_3777_fu_481385_p2.read();
        add_ln703_3794_reg_487048 = add_ln703_3794_fu_481391_p2.read();
        add_ln703_3804_reg_487053 = add_ln703_3804_fu_481397_p2.read();
        add_ln703_3811_reg_487058 = add_ln703_3811_fu_481415_p2.read();
        add_ln703_3819_reg_487063 = add_ln703_3819_fu_481433_p2.read();
        add_ln703_3826_reg_487068 = add_ln703_3826_fu_481439_p2.read();
        add_ln703_3830_reg_487073 = add_ln703_3830_fu_481455_p2.read();
        add_ln703_3836_reg_487078 = add_ln703_3836_fu_481461_p2.read();
        add_ln703_3841_reg_487083 = add_ln703_3841_fu_481467_p2.read();
        add_ln703_3846_reg_487088 = add_ln703_3846_fu_481483_p2.read();
        add_ln703_3850_reg_487093 = add_ln703_3850_fu_481489_p2.read();
        add_ln703_3852_reg_487098 = add_ln703_3852_fu_481495_p2.read();
        add_ln703_3857_reg_487103 = add_ln703_3857_fu_481501_p2.read();
        add_ln703_3865_reg_487108 = add_ln703_3865_fu_481507_p2.read();
        add_ln703_3869_reg_487113 = add_ln703_3869_fu_481513_p2.read();
        add_ln703_3873_reg_487118 = add_ln703_3873_fu_481519_p2.read();
        add_ln703_3881_reg_487123 = add_ln703_3881_fu_481525_p2.read();
        add_ln703_3884_reg_487128 = add_ln703_3884_fu_481531_p2.read();
        add_ln703_3889_reg_487133 = add_ln703_3889_fu_481537_p2.read();
        add_ln703_3892_reg_487138 = add_ln703_3892_fu_481543_p2.read();
        add_ln703_3905_reg_487143 = add_ln703_3905_fu_481549_p2.read();
        add_ln703_3910_reg_487148 = add_ln703_3910_fu_481565_p2.read();
        add_ln703_3917_reg_487153 = add_ln703_3917_fu_481571_p2.read();
        add_ln703_3921_reg_487158 = add_ln703_3921_fu_481577_p2.read();
        add_ln703_3929_reg_487163 = add_ln703_3929_fu_481583_p2.read();
        add_ln703_3935_reg_487168 = add_ln703_3935_fu_481619_p2.read();
        add_ln703_reg_486978 = add_ln703_fu_481239_p2.read();
        kernel_data_V_231_load_1_reg_486903 = kernel_data_V_231.read();
        mult_108_V_reg_486748 = grp_fu_2692_p2.read().range(25, 10);
        mult_120_V_reg_486753 = grp_fu_2418_p2.read().range(25, 10);
        mult_133_V_reg_486788 = grp_fu_2635_p2.read().range(25, 10);
        mult_210_V_reg_486863 = grp_fu_2361_p2.read().range(25, 10);
        mult_221_V_reg_486883 = grp_fu_2550_p2.read().range(25, 10);
        mult_45_V_reg_486703 = grp_fu_2821_p2.read().range(25, 10);
        mult_7_V_reg_486623 = grp_fu_2619_p2.read().range(25, 10);
        mult_8_V_reg_486628 = grp_fu_2807_p2.read().range(25, 10);
        trunc_ln708_2948_reg_486613 = grp_fu_2269_p2.read().range(24, 10);
        trunc_ln708_2949_reg_486618 = grp_fu_2716_p2.read().range(23, 10);
        trunc_ln708_2951_reg_486633 = grp_fu_2823_p2.read().range(22, 10);
        trunc_ln708_2952_reg_486638 = grp_fu_2712_p2.read().range(21, 10);
        trunc_ln708_2953_reg_486643 = grp_fu_2384_p2.read().range(24, 10);
        trunc_ln708_2954_reg_486648 = grp_fu_2829_p2.read().range(23, 10);
        trunc_ln708_2957_reg_486653 = grp_fu_2332_p2.read().range(23, 10);
        trunc_ln708_2959_reg_486658 = grp_fu_2615_p2.read().range(24, 10);
        trunc_ln708_2960_reg_486663 = grp_fu_2442_p2.read().range(23, 10);
        trunc_ln708_2966_reg_486668 = grp_fu_2358_p2.read().range(24, 10);
        trunc_ln708_2971_reg_486673 = grp_fu_2755_p2.read().range(24, 10);
        trunc_ln708_2972_reg_486678 = grp_fu_2749_p2.read().range(24, 10);
        trunc_ln708_2973_reg_486683 = grp_fu_2375_p2.read().range(22, 10);
        trunc_ln708_2974_reg_486688 = grp_fu_2376_p2.read().range(22, 10);
        trunc_ln708_2975_reg_486693 = grp_fu_2782_p2.read().range(23, 10);
        trunc_ln708_2976_reg_486698 = grp_fu_2795_p2.read().range(21, 10);
        trunc_ln708_2978_reg_486708 = grp_fu_2447_p2.read().range(24, 10);
        trunc_ln708_2989_reg_486713 = grp_fu_2472_p2.read().range(24, 10);
        trunc_ln708_2991_reg_486718 = grp_fu_2346_p2.read().range(24, 10);
        trunc_ln708_2992_reg_486723 = grp_fu_2347_p2.read().range(23, 10);
        trunc_ln708_2994_reg_486728 = grp_fu_2378_p2.read().range(23, 10);
        trunc_ln708_3029_reg_486733 = grp_fu_2759_p2.read().range(21, 10);
        trunc_ln708_3030_reg_486738 = grp_fu_2338_p2.read().range(24, 10);
        trunc_ln708_3032_reg_486743 = grp_fu_2271_p2.read().range(23, 10);
        trunc_ln708_3044_reg_486758 = grp_fu_2276_p2.read().range(24, 10);
        trunc_ln708_3045_reg_486763 = grp_fu_2747_p2.read().range(23, 10);
        trunc_ln708_3046_reg_486768 = grp_fu_2260_p2.read().range(24, 10);
        trunc_ln708_3047_reg_486773 = grp_fu_2362_p2.read().range(22, 10);
        trunc_ln708_3050_reg_486778 = grp_fu_2288_p2.read().range(24, 10);
        trunc_ln708_3052_reg_486783 = grp_fu_479031_p2.read().range(23, 10);
        trunc_ln708_3055_reg_486793 = grp_fu_2594_p2.read().range(24, 10);
        trunc_ln708_3058_reg_486798 = grp_fu_2328_p2.read().range(24, 10);
        trunc_ln708_3060_reg_486803 = grp_fu_2385_p2.read().range(24, 10);
        trunc_ln708_3064_reg_486808 = grp_fu_479060_p2.read().range(23, 10);
        trunc_ln708_3066_reg_486813 = grp_fu_2691_p2.read().range(22, 10);
        trunc_ln708_3074_reg_486818 = grp_fu_2811_p2.read().range(24, 10);
        trunc_ln708_3102_reg_486823 = grp_fu_2819_p2.read().range(24, 10);
        trunc_ln708_3104_reg_486828 = grp_fu_2678_p2.read().range(21, 10);
        trunc_ln708_3107_reg_486833 = grp_fu_2606_p2.read().range(24, 10);
        trunc_ln708_3109_reg_486838 = grp_fu_2617_p2.read().range(24, 10);
        trunc_ln708_3111_reg_486843 = grp_fu_2563_p2.read().range(23, 10);
        trunc_ln708_3112_reg_486848 = grp_fu_2780_p2.read().range(23, 10);
        trunc_ln708_3113_reg_486853 = grp_fu_2757_p2.read().range(23, 10);
        trunc_ln708_3114_reg_486858 = grp_fu_2367_p2.read().range(24, 10);
        trunc_ln708_3118_reg_486868 = grp_fu_2377_p2.read().range(24, 10);
        trunc_ln708_3120_reg_486873 = grp_fu_2451_p2.read().range(20, 10);
        trunc_ln708_3121_reg_486878 = grp_fu_2790_p2.read().range(22, 10);
        trunc_ln708_3128_reg_486898 = grp_fu_2479_p2.read().range(24, 10);
    }
    if ((esl_seteq<1,1,1>(icmp_ln63_reg_484667.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(and_ln266_6_reg_484724.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        add_ln703_3697_reg_487258 = add_ln703_3697_fu_482848_p2.read();
        add_ln703_3707_reg_487263 = add_ln703_3707_fu_482860_p2.read();
        add_ln703_3708_reg_487268 = add_ln703_3708_fu_482865_p2.read();
        add_ln703_3719_reg_487273 = add_ln703_3719_fu_482894_p2.read();
        add_ln703_3723_reg_487278 = add_ln703_3723_fu_482906_p2.read();
        add_ln703_3731_reg_487283 = add_ln703_3731_fu_482916_p2.read();
        add_ln703_3732_reg_487288 = add_ln703_3732_fu_482921_p2.read();
        add_ln703_3739_reg_487293 = add_ln703_3739_fu_482939_p2.read();
        add_ln703_3746_reg_487298 = add_ln703_3746_fu_482945_p2.read();
        add_ln703_3750_reg_487303 = add_ln703_3750_fu_482961_p2.read();
        add_ln703_3755_reg_487308 = add_ln703_3755_fu_482978_p2.read();
        add_ln703_3762_reg_487313 = add_ln703_3762_fu_482984_p2.read();
        add_ln703_3767_reg_487318 = add_ln703_3767_fu_483003_p2.read();
        add_ln703_3771_reg_487323 = add_ln703_3771_fu_483021_p2.read();
        add_ln703_3787_reg_487333 = add_ln703_3787_fu_483095_p2.read();
        add_ln703_3788_reg_487338 = add_ln703_3788_fu_483101_p2.read();
        add_ln703_3795_reg_487343 = add_ln703_3795_fu_483112_p2.read();
        add_ln703_3798_reg_487348 = add_ln703_3798_fu_483127_p2.read();
        add_ln703_3801_reg_487353 = add_ln703_3801_fu_483133_p2.read();
        add_ln703_3807_reg_487358 = add_ln703_3807_fu_483162_p2.read();
        add_ln703_3812_reg_487363 = add_ln703_3812_fu_483168_p2.read();
        add_ln703_3820_reg_487368 = add_ln703_3820_fu_483174_p2.read();
        add_ln703_3827_reg_487373 = add_ln703_3827_fu_483186_p2.read();
        add_ln703_3835_reg_487378 = add_ln703_3835_fu_483202_p2.read();
        add_ln703_3847_reg_487383 = add_ln703_3847_fu_483221_p2.read();
        add_ln703_3859_reg_487393 = add_ln703_3859_fu_483275_p2.read();
        add_ln703_3860_reg_487398 = add_ln703_3860_fu_483280_p2.read();
        add_ln703_3875_reg_487408 = add_ln703_3875_fu_483338_p2.read();
        add_ln703_3876_reg_487413 = add_ln703_3876_fu_483343_p2.read();
        add_ln703_3887_reg_487418 = add_ln703_3887_fu_483365_p2.read();
        add_ln703_3891_reg_487423 = add_ln703_3891_fu_483376_p2.read();
        add_ln703_3907_reg_487433 = add_ln703_3907_fu_483447_p2.read();
        add_ln703_3914_reg_487438 = add_ln703_3914_fu_483452_p2.read();
        add_ln703_3919_reg_487443 = add_ln703_3919_fu_483473_p2.read();
        add_ln703_3938_reg_487453 = add_ln703_3938_fu_483527_p2.read();
        add_ln703_3943_reg_487458 = add_ln703_3943_fu_483559_p2.read();
        mult_233_V_reg_487208 = grp_fu_2662_p2.read().range(25, 10);
        tmp_data_11_V_reg_487328 = tmp_data_11_V_fu_483078_p2.read();
        tmp_data_20_V_reg_487388 = tmp_data_20_V_fu_483263_p2.read();
        tmp_data_22_V_reg_487403 = tmp_data_22_V_fu_483326_p2.read();
        tmp_data_26_V_reg_487428 = tmp_data_26_V_fu_483435_p2.read();
        tmp_data_29_V_reg_487448 = tmp_data_29_V_fu_483521_p2.read();
        trunc_ln708_3007_reg_487173 = grp_fu_2622_p2.read().range(22, 10);
        trunc_ln708_3010_reg_487178 = grp_fu_2508_p2.read().range(22, 10);
        trunc_ln708_3021_reg_487183 = grp_fu_2373_p2.read().range(24, 10);
        trunc_ln708_3091_reg_487188 = grp_fu_2687_p2.read().range(24, 10);
        trunc_ln708_3129_reg_487193 = grp_fu_2587_p2.read().range(23, 10);
        trunc_ln708_3135_reg_487223 = grp_fu_2664_p2.read().range(24, 10);
        trunc_ln708_3138_reg_487238 = grp_fu_2334_p2.read().range(22, 10);
        trunc_ln708_3139_reg_487243 = grp_fu_2544_p2.read().range(24, 10);
        trunc_ln708_3146_reg_487248 = grp_fu_2632_p2.read().range(23, 10);
        trunc_ln708_3147_reg_487253 = grp_fu_2599_p2.read().range(24, 10);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln63_fu_473731_p2.read()))) {
        and_ln266_6_reg_484724 = and_ln266_6_fu_474727_p2.read();
        icmp_ln266_7_reg_484707 = icmp_ln266_7_fu_474669_p2.read();
        icmp_ln266_reg_484697 = icmp_ln266_fu_474659_p2.read();
        kernel_data_V_128 = kernel_data_V_160.read();
        kernel_data_V_131 = kernel_data_V_163.read();
        kernel_data_V_132 = kernel_data_V_164.read();
        kernel_data_V_133 = kernel_data_V_165.read();
        kernel_data_V_134 = kernel_data_V_166.read();
        kernel_data_V_135 = kernel_data_V_167.read();
        kernel_data_V_138 = kernel_data_V_170.read();
        kernel_data_V_139 = kernel_data_V_171.read();
        kernel_data_V_140 = kernel_data_V_172.read();
        kernel_data_V_141 = kernel_data_V_173.read();
        kernel_data_V_143 = kernel_data_V_175.read();
        kernel_data_V_144 = kernel_data_V_176.read();
        kernel_data_V_145 = kernel_data_V_177.read();
        kernel_data_V_149 = kernel_data_V_181.read();
        kernel_data_V_152 = kernel_data_V_184.read();
        kernel_data_V_153 = kernel_data_V_185.read();
        kernel_data_V_157 = kernel_data_V_189.read();
        kernel_data_V_158 = kernel_data_V_190.read();
        kernel_data_V_159 = kernel_data_V_191.read();
        kernel_data_V_224 = kernel_data_V_256.read();
        kernel_data_V_226 = kernel_data_V_258.read();
        kernel_data_V_227 = kernel_data_V_259.read();
        kernel_data_V_228 = kernel_data_V_260.read();
        kernel_data_V_229 = kernel_data_V_261.read();
        kernel_data_V_230 = kernel_data_V_262.read();
        kernel_data_V_231 = kernel_data_V_263.read();
        kernel_data_V_232 = kernel_data_V_264.read();
        kernel_data_V_233 = kernel_data_V_265.read();
        kernel_data_V_234 = kernel_data_V_266.read();
        kernel_data_V_235 = kernel_data_V_267.read();
        kernel_data_V_236 = kernel_data_V_268.read();
        kernel_data_V_237 = kernel_data_V_269.read();
        kernel_data_V_238 = kernel_data_V_270.read();
        kernel_data_V_239 = kernel_data_V_271.read();
        kernel_data_V_240 = kernel_data_V_272.read();
        kernel_data_V_241 = kernel_data_V_273.read();
        kernel_data_V_242 = kernel_data_V_274.read();
        kernel_data_V_243 = kernel_data_V_275.read();
        kernel_data_V_244 = kernel_data_V_276.read();
        kernel_data_V_244_load_reg_484687 = kernel_data_V_244.read();
        kernel_data_V_245 = kernel_data_V_277.read();
        kernel_data_V_246 = kernel_data_V_278.read();
        kernel_data_V_247 = kernel_data_V_279.read();
        kernel_data_V_248 = kernel_data_V_280.read();
        kernel_data_V_249 = kernel_data_V_281.read();
        kernel_data_V_250 = kernel_data_V_282.read();
        kernel_data_V_251 = kernel_data_V_283.read();
        kernel_data_V_252 = kernel_data_V_284.read();
        kernel_data_V_253 = kernel_data_V_285.read();
        kernel_data_V_254 = kernel_data_V_286.read();
        kernel_data_V_255 = kernel_data_V_287.read();
        kernel_data_V_32 = kernel_data_V_64.read();
        kernel_data_V_33 = kernel_data_V_65.read();
        kernel_data_V_34 = kernel_data_V_66.read();
        kernel_data_V_35 = kernel_data_V_67.read();
        kernel_data_V_36 = kernel_data_V_68.read();
        kernel_data_V_37 = kernel_data_V_69.read();
        kernel_data_V_38 = kernel_data_V_70.read();
        kernel_data_V_39 = kernel_data_V_71.read();
        kernel_data_V_40 = kernel_data_V_72.read();
        kernel_data_V_41 = kernel_data_V_73.read();
        kernel_data_V_42 = kernel_data_V_74.read();
        kernel_data_V_43 = kernel_data_V_75.read();
        kernel_data_V_45 = kernel_data_V_77.read();
        kernel_data_V_46 = kernel_data_V_78.read();
        kernel_data_V_47 = kernel_data_V_79.read();
        kernel_data_V_48 = kernel_data_V_80.read();
        kernel_data_V_50 = kernel_data_V_82.read();
        kernel_data_V_52 = kernel_data_V_84.read();
        kernel_data_V_53 = kernel_data_V_85.read();
        kernel_data_V_53_load_reg_484676 = kernel_data_V_53.read();
        kernel_data_V_54 = kernel_data_V_86.read();
        kernel_data_V_56 = kernel_data_V_88.read();
        kernel_data_V_57 = kernel_data_V_89.read();
        kernel_data_V_58 = kernel_data_V_90.read();
        kernel_data_V_59 = kernel_data_V_91.read();
        kernel_data_V_60 = kernel_data_V_92.read();
        kernel_data_V_61 = kernel_data_V_93.read();
        kernel_data_V_62 = kernel_data_V_94.read();
        kernel_data_V_63 = kernel_data_V_95.read();
        kernel_data_V_63_load_reg_484682 = kernel_data_V_63.read();
        pX_4_load_reg_484718 = pX_4.read();
        pY_4_load_reg_484712 = pY_4.read();
        sX_4_load_reg_484692 = sX_4.read();
        sY_4_load_reg_484702 = sY_4.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(io_acc_block_signal_op662.read(), ap_const_logic_1))) {
        icmp_ln288_reg_486250 = icmp_ln288_fu_478782_p2.read();
        kernel_data_V_129 = kernel_data_V_161.read();
        kernel_data_V_130 = kernel_data_V_162.read();
        kernel_data_V_136 = kernel_data_V_168.read();
        kernel_data_V_137 = kernel_data_V_169.read();
        kernel_data_V_142 = kernel_data_V_174.read();
        kernel_data_V_146 = kernel_data_V_178.read();
        kernel_data_V_147 = kernel_data_V_179.read();
        kernel_data_V_148 = kernel_data_V_180.read();
        kernel_data_V_148_load_reg_485488 = kernel_data_V_148.read();
        kernel_data_V_150 = kernel_data_V_182.read();
        kernel_data_V_151 = kernel_data_V_183.read();
        kernel_data_V_154 = kernel_data_V_186.read();
        kernel_data_V_155 = kernel_data_V_187.read();
        kernel_data_V_156 = kernel_data_V_188.read();
        kernel_data_V_160 = line_buffer_Array_V_0_0_q0.read();
        kernel_data_V_161 = line_buffer_Array_V_0_1_q0.read();
        kernel_data_V_162 = line_buffer_Array_V_0_2_q0.read();
        kernel_data_V_162_load_reg_485493 = kernel_data_V_162.read();
        kernel_data_V_163 = line_buffer_Array_V_0_3_q0.read();
        kernel_data_V_164 = line_buffer_Array_V_0_4_q0.read();
        kernel_data_V_165 = line_buffer_Array_V_0_5_q0.read();
        kernel_data_V_166 = line_buffer_Array_V_0_6_q0.read();
        kernel_data_V_167 = line_buffer_Array_V_0_7_q0.read();
        kernel_data_V_168 = line_buffer_Array_V_0_8_q0.read();
        kernel_data_V_169 = line_buffer_Array_V_0_9_q0.read();
        kernel_data_V_170 = line_buffer_Array_V_0_10_q0.read();
        kernel_data_V_171 = line_buffer_Array_V_0_11_q0.read();
        kernel_data_V_172 = line_buffer_Array_V_0_12_q0.read();
        kernel_data_V_173 = line_buffer_Array_V_0_13_q0.read();
        kernel_data_V_174 = line_buffer_Array_V_0_14_q0.read();
        kernel_data_V_175 = line_buffer_Array_V_0_15_q0.read();
        kernel_data_V_176 = line_buffer_Array_V_0_16_q0.read();
        kernel_data_V_177 = line_buffer_Array_V_0_17_q0.read();
        kernel_data_V_178 = line_buffer_Array_V_0_18_q0.read();
        kernel_data_V_178_load_reg_485498 = kernel_data_V_178.read();
        kernel_data_V_179 = line_buffer_Array_V_0_19_q0.read();
        kernel_data_V_179_load_reg_485503 = kernel_data_V_179.read();
        kernel_data_V_180 = line_buffer_Array_V_0_20_q0.read();
        kernel_data_V_181 = line_buffer_Array_V_0_21_q0.read();
        kernel_data_V_182 = line_buffer_Array_V_0_22_q0.read();
        kernel_data_V_183 = line_buffer_Array_V_0_23_q0.read();
        kernel_data_V_184 = line_buffer_Array_V_0_24_q0.read();
        kernel_data_V_185 = line_buffer_Array_V_0_25_q0.read();
        kernel_data_V_186 = line_buffer_Array_V_0_26_q0.read();
        kernel_data_V_187 = line_buffer_Array_V_0_27_q0.read();
        kernel_data_V_188 = line_buffer_Array_V_0_28_q0.read();
        kernel_data_V_189 = line_buffer_Array_V_0_29_q0.read();
        kernel_data_V_190 = line_buffer_Array_V_0_30_q0.read();
        kernel_data_V_191 = line_buffer_Array_V_0_31_q0.read();
        kernel_data_V_225 = kernel_data_V_257.read();
        kernel_data_V_256 = data_V_data_0_V_dout.read();
        kernel_data_V_257 = data_V_data_1_V_dout.read();
        kernel_data_V_257_load_reg_485509 = kernel_data_V_257.read();
        kernel_data_V_258 = data_V_data_2_V_dout.read();
        kernel_data_V_259 = data_V_data_3_V_dout.read();
        kernel_data_V_260 = data_V_data_4_V_dout.read();
        kernel_data_V_261 = data_V_data_5_V_dout.read();
        kernel_data_V_262 = data_V_data_6_V_dout.read();
        kernel_data_V_263 = data_V_data_7_V_dout.read();
        kernel_data_V_264 = data_V_data_8_V_dout.read();
        kernel_data_V_265 = data_V_data_9_V_dout.read();
        kernel_data_V_266 = data_V_data_10_V_dout.read();
        kernel_data_V_267 = data_V_data_11_V_dout.read();
        kernel_data_V_268 = data_V_data_12_V_dout.read();
        kernel_data_V_269 = data_V_data_13_V_dout.read();
        kernel_data_V_270 = data_V_data_14_V_dout.read();
        kernel_data_V_271 = data_V_data_15_V_dout.read();
        kernel_data_V_272 = data_V_data_16_V_dout.read();
        kernel_data_V_273 = data_V_data_17_V_dout.read();
        kernel_data_V_274 = data_V_data_18_V_dout.read();
        kernel_data_V_275 = data_V_data_19_V_dout.read();
        kernel_data_V_276 = data_V_data_20_V_dout.read();
        kernel_data_V_277 = data_V_data_21_V_dout.read();
        kernel_data_V_278 = data_V_data_22_V_dout.read();
        kernel_data_V_279 = data_V_data_23_V_dout.read();
        kernel_data_V_280 = data_V_data_24_V_dout.read();
        kernel_data_V_281 = data_V_data_25_V_dout.read();
        kernel_data_V_282 = data_V_data_26_V_dout.read();
        kernel_data_V_283 = data_V_data_27_V_dout.read();
        kernel_data_V_284 = data_V_data_28_V_dout.read();
        kernel_data_V_285 = data_V_data_29_V_dout.read();
        kernel_data_V_286 = data_V_data_30_V_dout.read();
        kernel_data_V_287 = data_V_data_31_V_dout.read();
        kernel_data_V_44 = kernel_data_V_76.read();
        kernel_data_V_49 = kernel_data_V_81.read();
        kernel_data_V_51 = kernel_data_V_83.read();
        kernel_data_V_55 = kernel_data_V_87.read();
        kernel_data_V_64 = line_buffer_Array_V_1415_0_q0.read();
        kernel_data_V_65 = line_buffer_Array_V_1415_1_q0.read();
        kernel_data_V_66 = line_buffer_Array_V_1415_2_q0.read();
        kernel_data_V_67 = line_buffer_Array_V_1415_3_q0.read();
        kernel_data_V_68 = line_buffer_Array_V_1415_4_q0.read();
        kernel_data_V_69 = line_buffer_Array_V_1415_5_q0.read();
        kernel_data_V_70 = line_buffer_Array_V_1415_6_q0.read();
        kernel_data_V_71 = line_buffer_Array_V_1415_7_q0.read();
        kernel_data_V_72 = line_buffer_Array_V_1415_8_q0.read();
        kernel_data_V_73 = line_buffer_Array_V_1415_9_q0.read();
        kernel_data_V_74 = line_buffer_Array_V_1415_10_q0.read();
        kernel_data_V_75 = line_buffer_Array_V_1415_11_q0.read();
        kernel_data_V_76 = line_buffer_Array_V_1415_12_q0.read();
        kernel_data_V_77 = line_buffer_Array_V_1415_13_q0.read();
        kernel_data_V_78 = line_buffer_Array_V_1415_14_q0.read();
        kernel_data_V_79 = line_buffer_Array_V_1415_15_q0.read();
        kernel_data_V_80 = line_buffer_Array_V_1415_16_q0.read();
        kernel_data_V_81 = line_buffer_Array_V_1415_17_q0.read();
        kernel_data_V_82 = line_buffer_Array_V_1415_18_q0.read();
        kernel_data_V_83 = line_buffer_Array_V_1415_19_q0.read();
        kernel_data_V_84 = line_buffer_Array_V_1415_20_q0.read();
        kernel_data_V_85 = line_buffer_Array_V_1415_21_q0.read();
        kernel_data_V_86 = line_buffer_Array_V_1415_22_q0.read();
        kernel_data_V_87 = line_buffer_Array_V_1415_23_q0.read();
        kernel_data_V_88 = line_buffer_Array_V_1415_24_q0.read();
        kernel_data_V_89 = line_buffer_Array_V_1415_25_q0.read();
        kernel_data_V_90 = line_buffer_Array_V_1415_26_q0.read();
        kernel_data_V_91 = line_buffer_Array_V_1415_27_q0.read();
        kernel_data_V_92 = line_buffer_Array_V_1415_28_q0.read();
        kernel_data_V_93 = line_buffer_Array_V_1415_29_q0.read();
        kernel_data_V_94 = line_buffer_Array_V_1415_30_q0.read();
        kernel_data_V_95 = line_buffer_Array_V_1415_31_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(io_acc_block_signal_op662.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln288_fu_478782_p2.read()))) {
        icmp_ln292_reg_486254 = icmp_ln292_fu_478809_p2.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln63_fu_473731_p2.read())) || (esl_seteq<1,1,1>(icmp_ln63_reg_484667.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(and_ln266_6_reg_484724.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())))) {
        reg_473727 = kernel_data_V_239.read();
    }
    if ((esl_seteq<1,1,1>(icmp_ln63_reg_484667.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln288_reg_486250.read()))) {
        sY_4 = storemerge_i_i_reg_2245.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(and_ln266_6_reg_484724.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(io_acc_block_signal_op662.read(), ap_const_logic_1))) {
        trunc_ln708_2947_reg_485515 = grp_fu_474772_p2.read().range(23, 10);
        trunc_ln708_2955_reg_485520 = grp_fu_474849_p2.read().range(21, 10);
        trunc_ln708_2965_reg_485540 = grp_fu_474919_p2.read().range(21, 10);
        trunc_ln708_2995_reg_485595 = sub_ln1118_487_fu_477545_p2.read().range(19, 10);
        trunc_ln708_3008_reg_485685 = sub_ln1118_490_fu_477710_p2.read().range(19, 10);
        trunc_ln708_3012_reg_485715 = sub_ln1118_491_fu_477795_p2.read().range(19, 10);
        trunc_ln708_3014_reg_485725 = line_buffer_Array_V_1415_23_q0.read().range(15, 2);
        trunc_ln708_3027_reg_485785 = grp_fu_475147_p2.read().range(21, 10);
        trunc_ln708_3033_reg_485790 = grp_fu_475202_p2.read().range(22, 10);
        trunc_ln708_3038_reg_485795 = grp_fu_475257_p2.read().range(24, 10);
        trunc_ln708_3042_reg_485805 = grp_fu_475297_p2.read().range(22, 10);
        trunc_ln708_3056_reg_485825 = sub_ln1118_500_fu_478031_p2.read().range(18, 10);
        trunc_ln708_3068_reg_485870 = add_ln1118_128_fu_478189_p2.read().range(19, 10);
        trunc_ln708_3076_reg_485915 = line_buffer_Array_V_0_1_q0.read().range(15, 3);
        trunc_ln708_3103_reg_486090 = grp_fu_475509_p2.read().range(21, 10);
        trunc_ln708_3105_reg_486095 = grp_fu_475536_p2.read().range(23, 10);
        trunc_ln708_3110_reg_486100 = grp_fu_475583_p2.read().range(22, 10);
        trunc_ln708_3119_reg_486125 = grp_fu_475694_p2.read().range(23, 10);
        trunc_ln708_3126_reg_486130 = grp_fu_475757_p2.read().range(23, 10);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln63_fu_473731_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln266_6_fu_474727_p2.read()))) {
        trunc_ln708_3049_reg_485193 = sub_ln1118_497_fu_475364_p2.read().range(18, 10);
        trunc_ln708_3122_reg_485443 = kernel_data_V_250.read().range(15, 5);
        trunc_ln_reg_484753 = kernel_data_V_36.read().range(15, 8);
    }
}

void depthwise_conv_2d_cl_array_array_ap_fixed_32u_config6_depthwise_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln63_fu_473731_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state8;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(io_acc_block_signal_op662.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
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
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op2987.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2987_write_state7.read())))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state7;
            }
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXXXXXXX";
            break;
    }
}

}

