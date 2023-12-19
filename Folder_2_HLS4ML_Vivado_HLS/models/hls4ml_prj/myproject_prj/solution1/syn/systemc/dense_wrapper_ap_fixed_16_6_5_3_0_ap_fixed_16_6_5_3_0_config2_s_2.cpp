#include "dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        add_ln703_387_reg_48744 = add_ln703_387_fu_40903_p2.read();
        add_ln703_402_reg_48749 = add_ln703_402_fu_40919_p2.read();
        add_ln703_407_reg_48754 = add_ln703_407_fu_40951_p2.read();
        add_ln703_415_reg_48759 = add_ln703_415_fu_40983_p2.read();
        add_ln703_419_reg_48764 = add_ln703_419_fu_41005_p2.read();
        add_ln703_423_reg_48769 = add_ln703_423_fu_41026_p2.read();
        add_ln703_432_reg_48774 = add_ln703_432_fu_41031_p2.read();
        add_ln703_443_reg_48779 = add_ln703_443_fu_41053_p2.read();
        add_ln703_448_reg_48784 = add_ln703_448_fu_41058_p2.read();
        add_ln703_455_reg_48789 = add_ln703_455_fu_41090_p2.read();
        add_ln703_459_reg_48794 = add_ln703_459_fu_41122_p2.read();
        add_ln703_468_reg_48799 = add_ln703_468_fu_41128_p2.read();
        add_ln703_472_reg_48804 = add_ln703_472_fu_41134_p2.read();
        add_ln703_484_reg_48809 = add_ln703_484_fu_41140_p2.read();
        add_ln703_488_reg_48814 = add_ln703_488_fu_41146_p2.read();
        add_ln703_495_reg_48819 = add_ln703_495_fu_41178_p2.read();
        add_ln703_496_reg_48824 = add_ln703_496_fu_41184_p2.read();
        add_ln703_512_reg_48829 = add_ln703_512_fu_41190_p2.read();
        add_ln703_519_reg_48834 = add_ln703_519_fu_41222_p2.read();
        add_ln703_543_reg_48839 = add_ln703_543_fu_41254_p2.read();
        add_ln703_547_reg_48844 = add_ln703_547_fu_41276_p2.read();
        add_ln703_551_reg_48849 = add_ln703_551_fu_41311_p2.read();
        add_ln703_552_reg_48854 = add_ln703_552_fu_41317_p2.read();
        add_ln703_563_reg_48859 = add_ln703_563_fu_41349_p2.read();
        add_ln703_564_reg_48864 = add_ln703_564_fu_41355_p2.read();
        add_ln703_574_reg_48869 = add_ln703_574_fu_41387_p2.read();
        add_ln703_590_reg_48874 = add_ln703_590_fu_41419_p2.read();
        add_ln703_610_reg_48879 = add_ln703_610_fu_41425_p2.read();
        add_ln703_616_reg_48884 = add_ln703_616_fu_41457_p2.read();
        add_ln703_628_reg_48889 = add_ln703_628_fu_41489_p2.read();
        add_ln703_636_reg_48894 = add_ln703_636_fu_41525_p2.read();
        add_ln703_645_reg_48899 = add_ln703_645_fu_41531_p2.read();
        add_ln703_649_reg_48904 = add_ln703_649_fu_41537_p2.read();
        add_ln703_660_reg_48909 = add_ln703_660_fu_41559_p2.read();
        add_ln703_661_reg_48914 = add_ln703_661_fu_41564_p2.read();
        add_ln703_676_reg_48919 = add_ln703_676_fu_41596_p2.read();
        add_ln703_684_reg_48924 = add_ln703_684_fu_41628_p2.read();
        add_ln703_687_reg_48929 = add_ln703_687_fu_41644_p2.read();
        add_ln703_692_reg_48934 = add_ln703_692_fu_41672_p2.read();
        add_ln703_700_reg_48939 = add_ln703_700_fu_41708_p2.read();
        add_ln703_704_reg_48944 = add_ln703_704_fu_41736_p2.read();
        add_ln703_717_reg_48949 = add_ln703_717_fu_41742_p2.read();
        add_ln703_724_reg_48954 = add_ln703_724_fu_41748_p2.read();
        add_ln703_731_reg_48959 = add_ln703_731_fu_41780_p2.read();
        add_ln703_742_reg_48964 = add_ln703_742_fu_41796_p2.read();
        add_ln703_752_reg_48969 = add_ln703_752_fu_41802_p2.read();
        add_ln703_764_reg_48974 = add_ln703_764_fu_41808_p2.read();
        add_ln703_770_reg_48979 = add_ln703_770_fu_41824_p2.read();
        add_ln703_772_reg_48984 = add_ln703_772_fu_41830_p2.read();
        add_ln703_792_reg_48989 = add_ln703_792_fu_41836_p2.read();
        add_ln703_846_reg_48994 = add_ln703_846_fu_41852_p2.read();
        add_ln703_875_reg_48999 = add_ln703_875_fu_41884_p2.read();
        add_ln703_879_reg_49004 = add_ln703_879_fu_41916_p2.read();
        data_3_V_read_2_reg_48433 = ap_port_reg_data_3_V_read.read();
        mult_138_V_reg_48484 = mult_138_V_fu_39394_p1.read();
        mult_17_V_reg_48458 = mult_17_V_fu_39227_p1.read();
        mult_325_V_reg_48644 = mult_325_V_fu_40110_p1.read();
        mult_53_V_reg_48473 = mult_53_V_fu_39283_p1.read();
        sext_ln1118_393_reg_48446 = sext_ln1118_393_fu_39151_p1.read();
        sext_ln1118_438_reg_48555 = sext_ln1118_438_fu_39945_p1.read();
        sext_ln1118_452_reg_48685 = sext_ln1118_452_fu_40191_p1.read();
        sext_ln1118_453_reg_48713 = sext_ln1118_453_fu_40195_p1.read();
        sext_ln203_236_reg_48463 = sext_ln203_236_fu_39254_p1.read();
        sext_ln203_283_reg_48504 = sext_ln203_283_fu_39584_p1.read();
        sext_ln203_302_reg_48515 = sext_ln203_302_fu_39682_p1.read();
        sext_ln203_327_reg_48562 = sext_ln203_327_fu_39964_p1.read();
        sext_ln203_341_reg_48599 = sext_ln203_341_fu_40034_p1.read();
        sext_ln203_345_reg_48609 = sext_ln203_345_fu_40082_p1.read();
        sext_ln203_375_reg_48729 = sext_ln203_375_fu_40269_p1.read();
        shl_ln1118_132_reg_48451 = shl_ln1118_132_fu_39155_p3.read();
        shl_ln1118_s_reg_48441 = shl_ln1118_s_fu_39144_p3.read();
        trunc_ln708_422_reg_48468 = sub_ln1118_80_fu_39193_p2.read().range(21, 10);
        trunc_ln708_447_reg_48479 = sub_ln1118_91_fu_39301_p2.read().range(21, 10);
        trunc_ln708_509_reg_48489 = sub_ln1118_99_fu_39412_p2.read().range(20, 10);
        trunc_ln708_513_reg_48494 = sub_ln1118_100_fu_39430_p2.read().range(20, 10);
        trunc_ln708_514_reg_48499 = sub_ln1118_102_fu_39486_p2.read().range(23, 10);
        trunc_ln708_526_reg_48510 = add_ln1118_27_fu_39624_p2.read().range(21, 10);
        trunc_ln708_556_reg_48520 = sub_ln1118_106_fu_39696_p2.read().range(19, 10);
        trunc_ln708_575_reg_48525 = add_ln1118_28_fu_39743_p2.read().range(21, 10);
        trunc_ln708_579_reg_48530 = add_ln1118_29_fu_39792_p2.read().range(23, 10);
        trunc_ln708_580_reg_48535 = sub_ln1118_108_fu_39807_p2.read().range(22, 10);
        trunc_ln708_581_reg_48540 = sub_ln1118_109_fu_39823_p2.read().range(18, 10);
        trunc_ln708_593_reg_48545 = sub_ln1118_111_fu_39870_p2.read().range(20, 10);
        trunc_ln708_606_reg_48550 = sub_ln1118_113_fu_39912_p2.read().range(21, 10);
        trunc_ln708_625_reg_48568 = trunc_ln708_625_fu_39974_p1.read().range(20, 10);
        trunc_ln708_629_reg_48573 = trunc_ln708_629_fu_39992_p1.read().range(23, 10);
        trunc_ln708_633_reg_48578 = grp_fu_38116_p1.read().range(23, 10);
        trunc_ln708_636_reg_48583 = grp_fu_914_p2.read().range(24, 10);
        trunc_ln708_637_reg_48588 = grp_fu_37766_p1.read().range(23, 10);
        trunc_ln708_642_reg_48594 = grp_fu_885_p2.read().range(24, 10);
        trunc_ln708_652_reg_48604 = grp_fu_880_p2.read().range(24, 10);
        trunc_ln708_656_reg_48614 = grp_fu_38026_p1.read().range(23, 10);
        trunc_ln708_657_reg_48619 = grp_fu_37876_p1.read().range(20, 10);
        trunc_ln708_658_reg_48624 = grp_fu_37776_p1.read().range(20, 10);
        trunc_ln708_661_reg_48629 = grp_fu_911_p2.read().range(24, 10);
        trunc_ln708_664_reg_48634 = grp_fu_37846_p1.read().range(23, 10);
        trunc_ln708_667_reg_48639 = grp_fu_37886_p1.read().range(23, 10);
        trunc_ln708_673_reg_48649 = grp_fu_888_p2.read().range(24, 10);
        trunc_ln708_675_reg_48654 = grp_fu_877_p2.read().range(24, 10);
        trunc_ln708_681_reg_48659 = grp_fu_38216_p1.read().range(22, 10);
        trunc_ln708_688_reg_48664 = grp_fu_37986_p1.read().range(23, 10);
        trunc_ln708_690_reg_48670 = grp_fu_905_p2.read().range(24, 10);
        trunc_ln708_698_reg_48675 = trunc_ln708_698_fu_40158_p1.read().range(23, 10);
        trunc_ln708_699_reg_48680 = grp_fu_38236_p1.read().range(20, 10);
        trunc_ln708_750_reg_48734 = sub_ln1118_138_fu_40483_p2.read().range(23, 10);
        trunc_ln708_826_reg_48739 = sub_ln1118_151_fu_40861_p2.read().range(23, 10);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        add_ln703_391_reg_49095 = add_ln703_391_fu_43600_p2.read();
        add_ln703_395_reg_49100 = add_ln703_395_fu_43622_p2.read();
        add_ln703_399_reg_49105 = add_ln703_399_fu_43653_p2.read();
        add_ln703_403_reg_49110 = add_ln703_403_fu_43668_p2.read();
        add_ln703_411_reg_49115 = add_ln703_411_fu_43700_p2.read();
        add_ln703_427_reg_49120 = add_ln703_427_fu_43730_p2.read();
        add_ln703_431_reg_49125 = add_ln703_431_fu_43752_p2.read();
        add_ln703_435_reg_49130 = add_ln703_435_fu_43773_p2.read();
        add_ln703_439_reg_49135 = add_ln703_439_fu_43804_p2.read();
        add_ln703_447_reg_49140 = add_ln703_447_fu_43836_p2.read();
        add_ln703_451_reg_49145 = add_ln703_451_fu_43858_p2.read();
        add_ln703_463_reg_49150 = add_ln703_463_fu_43893_p2.read();
        add_ln703_467_reg_49155 = add_ln703_467_fu_43915_p2.read();
        add_ln703_471_reg_49160 = add_ln703_471_fu_43936_p2.read();
        add_ln703_475_reg_49165 = add_ln703_475_fu_43957_p2.read();
        add_ln703_479_reg_49170 = add_ln703_479_fu_43988_p2.read();
        add_ln703_483_reg_49175 = add_ln703_483_fu_44016_p2.read();
        add_ln703_487_reg_49180 = add_ln703_487_fu_44037_p2.read();
        add_ln703_491_reg_49185 = add_ln703_491_fu_44065_p2.read();
        add_ln703_499_reg_49190 = add_ln703_499_fu_44094_p2.read();
        add_ln703_503_reg_49195 = add_ln703_503_fu_44126_p2.read();
        add_ln703_507_reg_49200 = add_ln703_507_fu_44162_p2.read();
        add_ln703_511_reg_49205 = add_ln703_511_fu_44194_p2.read();
        add_ln703_515_reg_49210 = add_ln703_515_fu_44216_p2.read();
        add_ln703_523_reg_49215 = add_ln703_523_fu_44244_p2.read();
        add_ln703_527_reg_49220 = add_ln703_527_fu_44276_p2.read();
        add_ln703_531_reg_49225 = add_ln703_531_fu_44308_p2.read();
        add_ln703_535_reg_49230 = add_ln703_535_fu_44339_p2.read();
        add_ln703_539_reg_49235 = add_ln703_539_fu_44371_p2.read();
        add_ln703_555_reg_49240 = add_ln703_555_fu_44393_p2.read();
        add_ln703_559_reg_49245 = add_ln703_559_fu_44420_p2.read();
        add_ln703_567_reg_49250 = add_ln703_567_fu_44442_p2.read();
        add_ln703_570_reg_49255 = add_ln703_570_fu_44463_p2.read();
        add_ln703_578_reg_49260 = add_ln703_578_fu_44491_p2.read();
        add_ln703_582_reg_49265 = add_ln703_582_fu_44527_p2.read();
        add_ln703_586_reg_49270 = add_ln703_586_fu_44559_p2.read();
        add_ln703_594_reg_49275 = add_ln703_594_fu_44587_p2.read();
        add_ln703_598_reg_49280 = add_ln703_598_fu_44618_p2.read();
        add_ln703_601_reg_49285 = add_ln703_601_fu_44639_p2.read();
        add_ln703_605_reg_49290 = add_ln703_605_fu_44671_p2.read();
        add_ln703_609_reg_49295 = add_ln703_609_fu_44703_p2.read();
        add_ln703_612_reg_49300 = add_ln703_612_fu_44722_p2.read();
        add_ln703_620_reg_49305 = add_ln703_620_fu_44754_p2.read();
        add_ln703_624_reg_49310 = add_ln703_624_fu_44786_p2.read();
        add_ln703_632_reg_49315 = add_ln703_632_fu_44814_p2.read();
        add_ln703_640_reg_49320 = add_ln703_640_fu_44846_p2.read();
        add_ln703_644_reg_49325 = add_ln703_644_fu_44878_p2.read();
        add_ln703_648_reg_49330 = add_ln703_648_fu_44907_p2.read();
        add_ln703_652_reg_49335 = add_ln703_652_fu_44929_p2.read();
        add_ln703_656_reg_49340 = add_ln703_656_fu_44960_p2.read();
        add_ln703_664_reg_49345 = add_ln703_664_fu_44989_p2.read();
        add_ln703_668_reg_49350 = add_ln703_668_fu_45016_p2.read();
        add_ln703_672_reg_49355 = add_ln703_672_fu_45044_p2.read();
        add_ln703_680_reg_49360 = add_ln703_680_fu_45075_p2.read();
        add_ln703_688_reg_49365 = add_ln703_688_fu_45094_p2.read();
        add_ln703_696_reg_49370 = add_ln703_696_fu_45126_p2.read();
        add_ln703_708_reg_49375 = add_ln703_708_fu_45158_p2.read();
        add_ln703_712_reg_49380 = add_ln703_712_fu_45173_p2.read();
        add_ln703_746_reg_49385 = add_ln703_746_fu_45189_p2.read();
        add_ln703_759_reg_49390 = add_ln703_759_fu_45221_p2.read();
        add_ln703_784_reg_49395 = add_ln703_784_fu_45227_p2.read();
        add_ln703_796_reg_49400 = add_ln703_796_fu_45233_p2.read();
        add_ln703_800_reg_49405 = add_ln703_800_fu_45239_p2.read();
        add_ln703_812_reg_49410 = add_ln703_812_fu_45244_p2.read();
        add_ln703_822_reg_49415 = add_ln703_822_fu_45260_p2.read();
        add_ln703_824_reg_49420 = add_ln703_824_fu_45266_p2.read();
        add_ln703_831_reg_49425 = add_ln703_831_fu_45297_p2.read();
        add_ln703_842_reg_49430 = add_ln703_842_fu_45313_p2.read();
        add_ln703_847_reg_49435 = add_ln703_847_fu_45332_p2.read();
        add_ln703_848_reg_49440 = add_ln703_848_fu_45338_p2.read();
        add_ln703_871_reg_49445 = add_ln703_871_fu_45370_p2.read();
        add_ln703_883_reg_49450 = add_ln703_883_fu_45402_p2.read();
        add_ln703_887_reg_49455 = add_ln703_887_fu_45420_p2.read();
        add_ln703_890_reg_49460 = add_ln703_890_fu_45435_p2.read();
        mult_174_V_reg_49024 = mult_174_V_fu_42584_p1.read();
        mult_190_V_reg_49029 = mult_190_V_fu_42618_p1.read();
        mult_315_V_reg_49039 = mult_315_V_fu_43010_p1.read();
        mult_327_V_reg_49044 = mult_327_V_fu_43073_p1.read();
        sext_ln1118_451_reg_49069 = sext_ln1118_451_fu_43213_p1.read();
        sext_ln1118_454_reg_49083 = sext_ln1118_454_fu_43241_p1.read();
        sext_ln1118_457_reg_49090 = sext_ln1118_457_fu_43250_p1.read();
        trunc_ln708_459_reg_49009 = sub_ln1118_95_fu_42336_p2.read().range(23, 10);
        trunc_ln708_466_reg_49014 = add_ln1118_22_fu_42371_p2.read().range(23, 10);
        trunc_ln708_472_reg_49019 = sub_ln1118_96_fu_42390_p2.read().range(20, 10);
        trunc_ln708_628_reg_49034 = sub_ln1118_117_fu_42783_p2.read().range(23, 10);
        trunc_ln708_706_reg_49049 = trunc_ln708_706_fu_43176_p1.read().range(22, 10);
        trunc_ln708_710_reg_49054 = add_ln1118_32_fu_43190_p2.read().range(22, 10);
        trunc_ln708_712_reg_49059 = grp_fu_37856_p1.read().range(23, 10);
        trunc_ln708_713_reg_49064 = grp_fu_38246_p1.read().range(21, 10);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        add_ln703_392_reg_48368 = add_ln703_392_fu_39040_p2.read();
        add_ln703_428_reg_48373 = add_ln703_428_fu_39046_p2.read();
        add_ln703_440_reg_48378 = add_ln703_440_fu_39052_p2.read();
        add_ln703_657_reg_48383 = add_ln703_657_fu_39058_p2.read();
        add_ln703_669_reg_48388 = add_ln703_669_fu_39064_p2.read();
        add_ln703_711_reg_48393 = add_ln703_711_fu_39080_p2.read();
        add_ln703_722_reg_48398 = add_ln703_722_fu_39086_p2.read();
        add_ln703_736_reg_48403 = add_ln703_736_fu_39092_p2.read();
        add_ln703_808_reg_48408 = add_ln703_808_fu_39098_p2.read();
        add_ln703_816_reg_48413 = add_ln703_816_fu_39104_p2.read();
        add_ln703_836_reg_48418 = add_ln703_836_fu_39110_p2.read();
        add_ln703_862_reg_48423 = add_ln703_862_fu_39126_p2.read();
        add_ln703_884_reg_48428 = add_ln703_884_fu_39132_p2.read();
        data_2_V_read_2_reg_48024 = ap_port_reg_data_2_V_read.read();
        sext_ln1118_432_reg_48208 = sext_ln1118_432_fu_38947_p1.read();
        sext_ln1118_433_reg_48249 = sext_ln1118_433_fu_38960_p1.read();
        sext_ln1118_434_reg_48278 = sext_ln1118_434_fu_38968_p1.read();
        sext_ln1118_437_reg_48291 = sext_ln1118_437_fu_38973_p1.read();
        trunc_ln708_467_reg_48338 = trunc_ln708_467_fu_38992_p1.read().range(15, 8);
        trunc_ln708_475_reg_48358 = trunc_ln708_475_fu_39010_p1.read().range(15, 3);
        trunc_ln708_530_reg_48363 = trunc_ln708_530_fu_39020_p1.read().range(15, 5);
        trunc_ln708_548_reg_48038 = grp_fu_871_p2.read().range(24, 10);
        trunc_ln708_550_reg_48043 = grp_fu_913_p2.read().range(24, 10);
        trunc_ln708_551_reg_48048 = grp_fu_907_p2.read().range(23, 10);
        trunc_ln708_553_reg_48053 = grp_fu_38066_p1.read().range(23, 10);
        trunc_ln708_555_reg_48058 = grp_fu_905_p2.read().range(24, 10);
        trunc_ln708_559_reg_48063 = grp_fu_37656_p1.read().range(23, 10);
        trunc_ln708_561_reg_48068 = grp_fu_37496_p1.read().range(21, 10);
        trunc_ln708_562_reg_48073 = grp_fu_921_p2.read().range(24, 10);
        trunc_ln708_563_reg_48078 = grp_fu_38076_p1.read().range(21, 10);
        trunc_ln708_564_reg_48083 = grp_fu_37346_p1.read().range(23, 10);
        trunc_ln708_565_reg_48088 = grp_fu_898_p2.read().range(24, 10);
        trunc_ln708_566_reg_48093 = grp_fu_37716_p1.read().range(22, 10);
        trunc_ln708_568_reg_48098 = grp_fu_920_p2.read().range(24, 10);
        trunc_ln708_570_reg_48103 = grp_fu_922_p2.read().range(24, 10);
        trunc_ln708_571_reg_48108 = grp_fu_882_p2.read().range(24, 10);
        trunc_ln708_574_reg_48113 = grp_fu_38106_p1.read().range(21, 10);
        trunc_ln708_576_reg_48118 = grp_fu_931_p2.read().range(24, 10);
        trunc_ln708_577_reg_48123 = grp_fu_873_p2.read().range(24, 10);
        trunc_ln708_582_reg_48128 = grp_fu_886_p2.read().range(24, 10);
        trunc_ln708_584_reg_48133 = grp_fu_38116_p1.read().range(23, 10);
        trunc_ln708_585_reg_48138 = trunc_ln708_585_fu_38907_p1.read().range(23, 10);
        trunc_ln708_586_reg_48143 = grp_fu_912_p2.read().range(24, 10);
        trunc_ln708_588_reg_48148 = grp_fu_874_p2.read().range(24, 10);
        trunc_ln708_590_reg_48153 = grp_fu_923_p2.read().range(24, 10);
        trunc_ln708_591_reg_48158 = grp_fu_893_p2.read().range(24, 10);
        trunc_ln708_592_reg_48163 = grp_fu_887_p2.read().range(24, 10);
        trunc_ln708_596_reg_48168 = grp_fu_37936_p1.read().range(23, 10);
        trunc_ln708_597_reg_48173 = grp_fu_37856_p1.read().range(23, 10);
        trunc_ln708_598_reg_48178 = grp_fu_914_p2.read().range(24, 10);
        trunc_ln708_600_reg_48183 = grp_fu_915_p2.read().range(24, 10);
        trunc_ln708_601_reg_48188 = grp_fu_916_p2.read().range(24, 10);
        trunc_ln708_602_reg_48193 = grp_fu_876_p2.read().range(24, 10);
        trunc_ln708_603_reg_48198 = grp_fu_924_p2.read().range(24, 10);
        trunc_ln708_604_reg_48203 = grp_fu_877_p2.read().range(24, 10);
        trunc_ln708_607_reg_48298 = grp_fu_37636_p1.read().range(23, 10);
        trunc_ln708_608_reg_48303 = trunc_ln708_608_fu_38978_p1.read().range(23, 10);
        trunc_ln708_611_reg_48308 = grp_fu_37706_p1.read().range(23, 10);
        trunc_ln708_612_reg_48313 = grp_fu_38156_p1.read().range(22, 10);
        trunc_ln708_613_reg_48318 = grp_fu_38166_p1.read().range(21, 10);
        trunc_ln708_615_reg_48323 = grp_fu_925_p2.read().range(24, 10);
        trunc_ln708_616_reg_48328 = grp_fu_872_p2.read().range(24, 10);
        trunc_ln708_617_reg_48333 = grp_fu_879_p2.read().range(24, 10);
        trunc_ln708_620_reg_48343 = grp_fu_900_p2.read().range(24, 10);
        trunc_ln708_622_reg_48348 = grp_fu_918_p2.read().range(24, 10);
        trunc_ln708_624_reg_48353 = grp_fu_38206_p1.read().range(23, 10);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        add_ln703_416_reg_47999 = add_ln703_416_fu_38794_p2.read();
        add_ln703_420_reg_48004 = add_ln703_420_fu_38800_p2.read();
        add_ln703_464_reg_48009 = add_ln703_464_fu_38806_p2.read();
        add_ln703_520_reg_48014 = add_ln703_520_fu_38812_p2.read();
        add_ln703_544_reg_48019 = add_ln703_544_fu_38818_p2.read();
        data_1_V_read_2_reg_47632 = ap_port_reg_data_1_V_read.read();
        sext_ln1118_388_reg_47646 = sext_ln1118_388_fu_38540_p1.read();
        sext_ln1118_409_reg_47758 = sext_ln1118_409_fu_38594_p1.read();
        sext_ln1118_410_reg_47794 = sext_ln1118_410_fu_38613_p1.read();
        sext_ln1118_411_reg_47809 = sext_ln1118_411_fu_38637_p1.read();
        sext_ln1118_413_reg_47817 = sext_ln1118_413_fu_38642_p1.read();
        sext_ln1118_414_reg_47826 = sext_ln1118_414_fu_38649_p1.read();
        trunc_ln708_351_reg_47852 = trunc_ln708_351_fu_38674_p1.read().range(15, 5);
        trunc_ln708_369_reg_47892 = trunc_ln708_369_fu_38716_p1.read().range(15, 4);
        trunc_ln708_382_reg_47928 = trunc_ln708_382_fu_38740_p1.read().range(15, 3);
        trunc_ln708_424_reg_47994 = trunc_ln708_424_fu_38784_p1.read().range(15, 8);
        trunc_ln708_465_reg_47653 = grp_fu_919_p2.read().range(24, 10);
        trunc_ln708_468_reg_47658 = grp_fu_37776_p1.read().range(20, 10);
        trunc_ln708_469_reg_47663 = grp_fu_908_p2.read().range(24, 10);
        trunc_ln708_470_reg_47668 = grp_fu_931_p2.read().range(24, 10);
        trunc_ln708_471_reg_47673 = grp_fu_891_p2.read().range(24, 10);
        trunc_ln708_474_reg_47678 = trunc_ln708_474_fu_38564_p1.read().range(22, 10);
        trunc_ln708_477_reg_47683 = grp_fu_905_p2.read().range(24, 10);
        trunc_ln708_478_reg_47688 = trunc_ln708_478_fu_38574_p1.read().range(23, 10);
        trunc_ln708_479_reg_47693 = grp_fu_894_p2.read().range(24, 10);
        trunc_ln708_481_reg_47698 = grp_fu_907_p2.read().range(23, 10);
        trunc_ln708_482_reg_47703 = grp_fu_37806_p1.read().range(23, 10);
        trunc_ln708_483_reg_47708 = grp_fu_932_p2.read().range(24, 10);
        trunc_ln708_484_reg_47713 = trunc_ln708_484_fu_38584_p1.read().range(23, 10);
        trunc_ln708_485_reg_47718 = grp_fu_37816_p1.read().range(23, 10);
        trunc_ln708_486_reg_47723 = grp_fu_897_p2.read().range(24, 10);
        trunc_ln708_487_reg_47728 = grp_fu_874_p2.read().range(24, 10);
        trunc_ln708_489_reg_47733 = grp_fu_37846_p1.read().range(23, 10);
        trunc_ln708_491_reg_47738 = grp_fu_920_p2.read().range(24, 10);
        trunc_ln708_492_reg_47743 = grp_fu_37856_p1.read().range(23, 10);
        trunc_ln708_493_reg_47748 = grp_fu_37866_p1.read().range(22, 10);
        trunc_ln708_494_reg_47753 = grp_fu_37876_p1.read().range(20, 10);
        trunc_ln708_500_reg_47831 = grp_fu_37236_p1.read().range(23, 10);
        trunc_ln708_501_reg_47836 = grp_fu_37886_p1.read().range(23, 10);
        trunc_ln708_502_reg_47841 = trunc_ln708_502_fu_38654_p1.read().range(22, 10);
        trunc_ln708_503_reg_47846 = trunc_ln708_503_fu_38664_p1.read().range(23, 10);
        trunc_ln708_504_reg_47857 = grp_fu_910_p2.read().range(24, 10);
        trunc_ln708_508_reg_47862 = grp_fu_913_p2.read().range(24, 10);
        trunc_ln708_510_reg_47867 = grp_fu_926_p2.read().range(24, 10);
        trunc_ln708_511_reg_47872 = grp_fu_927_p2.read().range(24, 10);
        trunc_ln708_512_reg_47877 = grp_fu_875_p2.read().range(24, 10);
        trunc_ln708_517_reg_47882 = trunc_ln708_517_fu_38702_p1.read().range(23, 10);
        trunc_ln708_519_reg_47887 = grp_fu_37936_p1.read().range(23, 10);
        trunc_ln708_521_reg_47897 = grp_fu_37946_p1.read().range(23, 10);
        trunc_ln708_522_reg_47903 = trunc_ln708_522_fu_38726_p1.read().range(23, 10);
        trunc_ln708_523_reg_47908 = grp_fu_37956_p1.read().range(23, 10);
        trunc_ln708_525_reg_47913 = grp_fu_37966_p1.read().range(23, 10);
        trunc_ln708_532_reg_47918 = grp_fu_898_p2.read().range(24, 10);
        trunc_ln708_533_reg_47923 = grp_fu_37656_p1.read().range(23, 10);
        trunc_ln708_535_reg_47933 = trunc_ln708_535_fu_38754_p1.read().range(22, 10);
        trunc_ln708_536_reg_47938 = grp_fu_37986_p1.read().range(23, 10);
        trunc_ln708_537_reg_47943 = grp_fu_902_p2.read().range(24, 10);
        trunc_ln708_538_reg_47948 = grp_fu_930_p2.read().range(22, 10);
        trunc_ln708_539_reg_47953 = grp_fu_878_p2.read().range(24, 10);
        trunc_ln708_541_reg_47958 = grp_fu_38016_p1.read().range(23, 10);
        trunc_ln708_542_reg_47963 = grp_fu_38026_p1.read().range(23, 10);
        trunc_ln708_543_reg_47968 = grp_fu_38036_p1.read().range(23, 10);
        trunc_ln708_544_reg_47973 = trunc_ln708_544_fu_38764_p1.read().range(21, 10);
        trunc_ln708_545_reg_47978 = grp_fu_37766_p1.read().range(23, 10);
        trunc_ln708_546_reg_47983 = trunc_ln708_546_fu_38774_p1.read().range(23, 10);
        trunc_ln708_547_reg_47988 = grp_fu_38046_p1.read().range(20, 10);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        ap_port_reg_data_1_V_read = data_1_V_read.read();
        ap_port_reg_data_2_V_read = data_2_V_read.read();
        ap_port_reg_data_3_V_read = data_3_V_read.read();
        data_0_V_read_2_reg_47312 = data_0_V_read.read();
        sext_ln1118_385_reg_47344 = sext_ln1118_385_fu_38392_p1.read();
        sext_ln1118_389_reg_47355 = sext_ln1118_389_fu_38413_p1.read();
        sext_ln1118_390_reg_47364 = sext_ln1118_390_fu_38423_p1.read();
        sext_ln1118_reg_47327 = sext_ln1118_fu_38350_p1.read();
        trunc_ln708_383_reg_47375 = grp_fu_929_p2.read().range(24, 10);
        trunc_ln708_384_reg_47380 = trunc_ln708_384_fu_38440_p1.read().range(23, 10);
        trunc_ln708_387_reg_47385 = grp_fu_931_p2.read().range(24, 10);
        trunc_ln708_388_reg_47390 = grp_fu_891_p2.read().range(24, 10);
        trunc_ln708_392_reg_47395 = trunc_ln708_392_fu_38450_p1.read().range(22, 10);
        trunc_ln708_394_reg_47400 = grp_fu_894_p2.read().range(24, 10);
        trunc_ln708_396_reg_47405 = grp_fu_907_p2.read().range(23, 10);
        trunc_ln708_397_reg_47410 = trunc_ln708_397_fu_38460_p1.read().range(21, 10);
        trunc_ln708_398_reg_47415 = grp_fu_932_p2.read().range(24, 10);
        trunc_ln708_399_reg_47420 = grp_fu_921_p2.read().range(24, 10);
        trunc_ln708_401_reg_47425 = grp_fu_37346_p1.read().range(23, 10);
        trunc_ln708_403_reg_47431 = grp_fu_883_p2.read().range(24, 10);
        trunc_ln708_405_reg_47436 = grp_fu_923_p2.read().range(24, 10);
        trunc_ln708_406_reg_47441 = grp_fu_920_p2.read().range(24, 10);
        trunc_ln708_408_reg_47446 = grp_fu_37406_p1.read().range(23, 10);
        trunc_ln708_409_reg_47451 = grp_fu_37416_p1.read().range(23, 10);
        trunc_ln708_410_reg_47456 = grp_fu_911_p2.read().range(24, 10);
        trunc_ln708_412_reg_47461 = grp_fu_912_p2.read().range(24, 10);
        trunc_ln708_414_reg_47466 = grp_fu_872_p2.read().range(24, 10);
        trunc_ln708_415_reg_47471 = grp_fu_37466_p1.read().range(23, 10);
        trunc_ln708_416_reg_47476 = grp_fu_886_p2.read().range(24, 10);
        trunc_ln708_417_reg_47481 = grp_fu_910_p2.read().range(24, 10);
        trunc_ln708_418_reg_47486 = grp_fu_37496_p1.read().range(21, 10);
        trunc_ln708_419_reg_47491 = grp_fu_900_p2.read().range(24, 10);
        trunc_ln708_420_reg_47496 = grp_fu_901_p2.read().range(24, 10);
        trunc_ln708_425_reg_47501 = grp_fu_926_p2.read().range(24, 10);
        trunc_ln708_427_reg_47506 = grp_fu_37546_p1.read().range(22, 10);
        trunc_ln708_428_reg_47511 = grp_fu_898_p2.read().range(24, 10);
        trunc_ln708_431_reg_47516 = grp_fu_887_p2.read().range(24, 10);
        trunc_ln708_432_reg_47521 = trunc_ln708_432_fu_38470_p1.read().range(23, 10);
        trunc_ln708_434_reg_47526 = grp_fu_37586_p1.read().range(23, 10);
        trunc_ln708_435_reg_47531 = grp_fu_914_p2.read().range(24, 10);
        trunc_ln708_438_reg_47536 = grp_fu_915_p2.read().range(24, 10);
        trunc_ln708_439_reg_47541 = grp_fu_916_p2.read().range(24, 10);
        trunc_ln708_441_reg_47546 = grp_fu_892_p2.read().range(24, 10);
        trunc_ln708_442_reg_47551 = grp_fu_37646_p1.read().range(23, 10);
        trunc_ln708_444_reg_47556 = trunc_ln708_444_fu_38490_p1.read().range(23, 10);
        trunc_ln708_446_reg_47561 = grp_fu_37666_p1.read().range(23, 10);
        trunc_ln708_448_reg_47566 = grp_fu_904_p2.read().range(24, 10);
        trunc_ln708_449_reg_47571 = trunc_ln708_449_fu_38500_p1.read().range(22, 10);
        trunc_ln708_450_reg_47576 = grp_fu_902_p2.read().range(24, 10);
        trunc_ln708_453_reg_47581 = grp_fu_37706_p1.read().range(23, 10);
        trunc_ln708_454_reg_47587 = grp_fu_37716_p1.read().range(22, 10);
        trunc_ln708_456_reg_47592 = grp_fu_879_p2.read().range(24, 10);
        trunc_ln708_457_reg_47597 = grp_fu_933_p2.read().range(24, 10);
        trunc_ln708_458_reg_47602 = grp_fu_37746_p1.read().range(22, 10);
        trunc_ln708_460_reg_47607 = grp_fu_37756_p1.read().range(23, 10);
        trunc_ln708_461_reg_47617 = grp_fu_37766_p1.read().range(23, 10);
        trunc_ln708_462_reg_47622 = trunc_ln708_462_fu_38520_p1.read().range(21, 10);
        trunc_ln708_463_reg_47627 = grp_fu_896_p2.read().range(24, 10);
        trunc_ln708_s_reg_47370 = grp_fu_37236_p1.read().range(23, 10);
        trunc_ln_reg_47612 = trunc_ln_fu_38510_p1.read().range(15, 5);
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        reg_38266 = grp_fu_871_p2.read().range(24, 10);
        reg_38294 = grp_fu_925_p2.read().range(24, 10);
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        reg_38270 = grp_fu_880_p2.read().range(24, 10);
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        reg_38274 = grp_fu_870_p2.read().range(24, 10);
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        reg_38278 = grp_fu_881_p2.read().range(24, 10);
        reg_38286 = grp_fu_909_p2.read().range(24, 10);
        reg_38290 = grp_fu_913_p2.read().range(24, 10);
        reg_38298 = grp_fu_889_p2.read().range(24, 10);
        reg_38306 = grp_fu_37636_p1.read().range(23, 10);
        reg_38310 = grp_fu_37656_p1.read().range(23, 10);
        reg_38314 = grp_fu_930_p2.read().range(22, 10);
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        reg_38282 = grp_fu_906_p2.read().range(24, 10);
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        reg_38302 = grp_fu_919_p2.read().range(24, 10);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        reg_38318 = grp_fu_883_p2.read().range(24, 10);
        reg_38322 = grp_fu_911_p2.read().range(24, 10);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        reg_38326 = grp_fu_899_p2.read().range(24, 10);
        reg_38334 = grp_fu_37976_p1.read().range(23, 10);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        reg_38330 = grp_fu_37706_p1.read().range(23, 10);
        reg_38338 = grp_fu_895_p2.read().range(23, 10);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        reg_38342 = grp_fu_38056_p1.read().range(22, 10);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        reg_38346 = grp_fu_890_p2.read().range(24, 10);
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s::thread_ap_NS_fsm() {
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
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<6>) ("XXXXXX");
            break;
    }
}

}

