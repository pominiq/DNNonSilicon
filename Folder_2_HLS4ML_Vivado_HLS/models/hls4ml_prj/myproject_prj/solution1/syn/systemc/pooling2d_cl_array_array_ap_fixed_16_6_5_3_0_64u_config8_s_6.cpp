#include "pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1358_fu_41690_p3() {
    select_ln65_1358_fu_41690_p3 = (!icmp_ln1496_925_fu_41676_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_925_fu_41676_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_61_q0.read(): kernel_data_V_4_765.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1359_fu_41704_p3() {
    select_ln65_1359_fu_41704_p3 = (!icmp_ln1496_926_fu_41698_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_926_fu_41698_p2.read()[0].to_bool())? select_ln65_1357_fu_41682_p3.read(): select_ln65_1355_fu_41660_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_135_fu_18930_p3() {
    select_ln65_135_fu_18930_p3 = (!icmp_ln1496_135_fu_18924_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_135_fu_18924_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1360_fu_41756_p3() {
    select_ln65_1360_fu_41756_p3 = (!icmp_ln1496_927_fu_41750_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_927_fu_41750_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1361_fu_41764_p3() {
    select_ln65_1361_fu_41764_p3 = (!icmp_ln1496_927_fu_41750_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_927_fu_41750_p2.read()[0].to_bool())? kernel_data_V_4_957.read(): kernel_data_V_4_829.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1363_fu_41786_p3() {
    select_ln65_1363_fu_41786_p3 = (!icmp_ln1496_928_fu_41772_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_928_fu_41772_p2.read()[0].to_bool())? data_V_data_61_V_dout.read(): kernel_data_V_4_1021.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1364_fu_41800_p3() {
    select_ln65_1364_fu_41800_p3 = (!icmp_ln1496_929_fu_41794_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_929_fu_41794_p2.read()[0].to_bool())? select_ln65_1408_fu_41778_p3.read(): select_ln65_1360_fu_41756_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1365_fu_47388_p3() {
    select_ln65_1365_fu_47388_p3 = (!icmp_ln1496_930_fu_47382_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_930_fu_47382_p2.read()[0].to_bool())? sext_ln65_61_reg_63017_pp0_iter1_reg.read(): select_ln65_1359_reg_63011_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1366_fu_41876_p3() {
    select_ln65_1366_fu_41876_p3 = (!icmp_ln1496_62_fu_41866_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_62_fu_41866_p2.read()[0].to_bool())? kernel_data_V_4_126.read(): kernel_data_V_4_62.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1367_fu_41890_p3() {
    select_ln65_1367_fu_41890_p3 = (!icmp_ln1496_932_fu_41884_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_932_fu_41884_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1368_fu_41898_p3() {
    select_ln65_1368_fu_41898_p3 = (!icmp_ln1496_932_fu_41884_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_932_fu_41884_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_62_q0.read(): kernel_data_V_4_254.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1369_fu_41912_p3() {
    select_ln65_1369_fu_41912_p3 = (!icmp_ln1496_933_fu_41906_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_933_fu_41906_p2.read()[0].to_bool())? select_ln65_1367_fu_41890_p3.read(): zext_ln65_186_fu_41872_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_136_fu_18938_p3() {
    select_ln65_136_fu_18938_p3 = (!icmp_ln1496_135_fu_18924_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_135_fu_18924_p2.read()[0].to_bool())? data_V_data_5_V_dout.read(): kernel_data_V_4_965.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1370_fu_41968_p3() {
    select_ln65_1370_fu_41968_p3 = (!icmp_ln1496_934_fu_41962_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_934_fu_41962_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1371_fu_41976_p3() {
    select_ln65_1371_fu_41976_p3 = (!icmp_ln1496_934_fu_41962_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_934_fu_41962_p2.read()[0].to_bool())? kernel_data_V_4_382.read(): kernel_data_V_4_318.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1372_fu_41174_p3() {
    select_ln65_1372_fu_41174_p3 = (!icmp_ln1496_907_fu_41168_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_907_fu_41168_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1373_fu_41998_p3() {
    select_ln65_1373_fu_41998_p3 = (!icmp_ln1496_935_fu_41984_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_935_fu_41984_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_62_q0.read(): kernel_data_V_4_510.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1374_fu_42012_p3() {
    select_ln65_1374_fu_42012_p3 = (!icmp_ln1496_936_fu_42006_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_936_fu_42006_p2.read()[0].to_bool())? select_ln65_1410_fu_41990_p3.read(): select_ln65_1370_fu_41968_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1375_fu_47425_p3() {
    select_ln65_1375_fu_47425_p3 = (!icmp_ln1496_937_fu_47419_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_937_fu_47419_p2.read()[0].to_bool())? select_ln65_1374_reg_63075_pp0_iter1_reg.read(): zext_ln65_187_fu_47416_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1376_fu_42068_p3() {
    select_ln65_1376_fu_42068_p3 = (!icmp_ln1496_938_fu_42062_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_938_fu_42062_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1377_fu_42076_p3() {
    select_ln65_1377_fu_42076_p3 = (!icmp_ln1496_938_fu_42062_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_938_fu_42062_p2.read()[0].to_bool())? kernel_data_V_4_702.read(): kernel_data_V_4_574.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1378_fu_42090_p3() {
    select_ln65_1378_fu_42090_p3 = (!icmp_ln1496_939_fu_42084_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_939_fu_42084_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1379_fu_42098_p3() {
    select_ln65_1379_fu_42098_p3 = (!icmp_ln1496_939_fu_42084_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_939_fu_42084_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_62_q0.read(): kernel_data_V_4_766.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_137_fu_18952_p3() {
    select_ln65_137_fu_18952_p3 = (!icmp_ln1496_136_fu_18946_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_136_fu_18946_p2.read()[0].to_bool())? select_ln65_135_fu_18930_p3.read(): select_ln65_133_fu_18908_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1380_fu_42112_p3() {
    select_ln65_1380_fu_42112_p3 = (!icmp_ln1496_940_fu_42106_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_940_fu_42106_p2.read()[0].to_bool())? select_ln65_1378_fu_42090_p3.read(): select_ln65_1376_fu_42068_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1381_fu_42164_p3() {
    select_ln65_1381_fu_42164_p3 = (!icmp_ln1496_941_fu_42158_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_941_fu_42158_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1382_fu_42172_p3() {
    select_ln65_1382_fu_42172_p3 = (!icmp_ln1496_941_fu_42158_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_941_fu_42158_p2.read()[0].to_bool())? kernel_data_V_4_958.read(): kernel_data_V_4_830.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1383_fu_41370_p3() {
    select_ln65_1383_fu_41370_p3 = (!icmp_ln1496_914_fu_41364_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_914_fu_41364_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1384_fu_42194_p3() {
    select_ln65_1384_fu_42194_p3 = (!icmp_ln1496_942_fu_42180_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_942_fu_42180_p2.read()[0].to_bool())? data_V_data_62_V_dout.read(): kernel_data_V_4_1022.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1385_fu_42208_p3() {
    select_ln65_1385_fu_42208_p3 = (!icmp_ln1496_943_fu_42202_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_943_fu_42202_p2.read()[0].to_bool())? select_ln65_1411_fu_42186_p3.read(): select_ln65_1381_fu_42164_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1386_fu_47464_p3() {
    select_ln65_1386_fu_47464_p3 = (!icmp_ln1496_944_fu_47458_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_944_fu_47458_p2.read()[0].to_bool())? sext_ln65_62_reg_63091_pp0_iter1_reg.read(): select_ln65_1380_reg_63085_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1387_fu_42284_p3() {
    select_ln65_1387_fu_42284_p3 = (!icmp_ln1496_63_fu_42274_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_63_fu_42274_p2.read()[0].to_bool())? kernel_data_V_4_127.read(): kernel_data_V_4_63.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1388_fu_42298_p3() {
    select_ln65_1388_fu_42298_p3 = (!icmp_ln1496_946_fu_42292_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_946_fu_42292_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1389_fu_42306_p3() {
    select_ln65_1389_fu_42306_p3 = (!icmp_ln1496_946_fu_42292_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_946_fu_42292_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_63_q0.read(): kernel_data_V_4_255.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_138_fu_43132_p3() {
    select_ln65_138_fu_43132_p3 = (!icmp_ln1496_137_fu_43126_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_137_fu_43126_p2.read()[0].to_bool())? sext_ln65_5_reg_58789_pp0_iter1_reg.read(): select_ln65_132_reg_58783_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1390_fu_42320_p3() {
    select_ln65_1390_fu_42320_p3 = (!icmp_ln1496_947_fu_42314_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_947_fu_42314_p2.read()[0].to_bool())? select_ln65_1388_fu_42298_p3.read(): zext_ln65_189_fu_42280_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1391_fu_42376_p3() {
    select_ln65_1391_fu_42376_p3 = (!icmp_ln1496_948_fu_42370_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_948_fu_42370_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1392_fu_42384_p3() {
    select_ln65_1392_fu_42384_p3 = (!icmp_ln1496_948_fu_42370_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_948_fu_42370_p2.read()[0].to_bool())? kernel_data_V_4_383.read(): kernel_data_V_4_319.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1394_fu_42406_p3() {
    select_ln65_1394_fu_42406_p3 = (!icmp_ln1496_949_fu_42392_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_949_fu_42392_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_63_q0.read(): kernel_data_V_4_511.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1395_fu_42420_p3() {
    select_ln65_1395_fu_42420_p3 = (!icmp_ln1496_950_fu_42414_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_950_fu_42414_p2.read()[0].to_bool())? select_ln65_1413_fu_42398_p3.read(): select_ln65_1391_fu_42376_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1396_fu_47501_p3() {
    select_ln65_1396_fu_47501_p3 = (!icmp_ln1496_951_fu_47495_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_951_fu_47495_p2.read()[0].to_bool())? select_ln65_1395_reg_63149_pp0_iter1_reg.read(): zext_ln65_190_fu_47492_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1397_fu_42476_p3() {
    select_ln65_1397_fu_42476_p3 = (!icmp_ln1496_952_fu_42470_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_952_fu_42470_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1398_fu_42484_p3() {
    select_ln65_1398_fu_42484_p3 = (!icmp_ln1496_952_fu_42470_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_952_fu_42470_p2.read()[0].to_bool())? kernel_data_V_4_703.read(): kernel_data_V_4_575.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1399_fu_42498_p3() {
    select_ln65_1399_fu_42498_p3 = (!icmp_ln1496_953_fu_42492_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_953_fu_42492_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_13_fu_16680_p3() {
    select_ln65_13_fu_16680_p3 = (!icmp_ln1496_3_fu_16666_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_3_fu_16666_p2.read()[0].to_bool())? kernel_data_V_4_320.read(): kernel_data_V_4_256.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1400_fu_42506_p3() {
    select_ln65_1400_fu_42506_p3 = (!icmp_ln1496_953_fu_42492_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_953_fu_42492_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_63_q0.read(): kernel_data_V_4_767.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1401_fu_42520_p3() {
    select_ln65_1401_fu_42520_p3 = (!icmp_ln1496_954_fu_42514_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_954_fu_42514_p2.read()[0].to_bool())? select_ln65_1399_fu_42498_p3.read(): select_ln65_1397_fu_42476_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1402_fu_42572_p3() {
    select_ln65_1402_fu_42572_p3 = (!icmp_ln1496_955_fu_42566_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_955_fu_42566_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1403_fu_42580_p3() {
    select_ln65_1403_fu_42580_p3 = (!icmp_ln1496_955_fu_42566_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_955_fu_42566_p2.read()[0].to_bool())? kernel_data_V_4_959.read(): kernel_data_V_4_831.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1404_fu_41582_p3() {
    select_ln65_1404_fu_41582_p3 = (!icmp_ln1496_921_fu_41576_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_921_fu_41576_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1405_fu_42602_p3() {
    select_ln65_1405_fu_42602_p3 = (!icmp_ln1496_956_fu_42588_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_956_fu_42588_p2.read()[0].to_bool())? data_V_data_63_V_dout.read(): kernel_data_V_4_1023.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1406_fu_42616_p3() {
    select_ln65_1406_fu_42616_p3 = (!icmp_ln1496_957_fu_42610_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_957_fu_42610_p2.read()[0].to_bool())? select_ln65_1414_fu_42594_p3.read(): select_ln65_1402_fu_42572_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1407_fu_47540_p3() {
    select_ln65_1407_fu_47540_p3 = (!icmp_ln1496_958_fu_47534_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_958_fu_47534_p2.read()[0].to_bool())? sext_ln65_63_reg_63165_pp0_iter1_reg.read(): select_ln65_1401_reg_63159_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1408_fu_41778_p3() {
    select_ln65_1408_fu_41778_p3 = (!icmp_ln1496_928_fu_41772_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_928_fu_41772_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_140_fu_19028_p3() {
    select_ln65_140_fu_19028_p3 = (!icmp_ln1496_139_fu_19018_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_139_fu_19018_p2.read()[0].to_bool())? kernel_data_V_4_70.read(): kernel_data_V_4_6.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1410_fu_41990_p3() {
    select_ln65_1410_fu_41990_p3 = (!icmp_ln1496_935_fu_41984_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_935_fu_41984_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1411_fu_42186_p3() {
    select_ln65_1411_fu_42186_p3 = (!icmp_ln1496_942_fu_42180_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_942_fu_42180_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1413_fu_42398_p3() {
    select_ln65_1413_fu_42398_p3 = (!icmp_ln1496_949_fu_42392_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_949_fu_42392_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_1414_fu_42594_p3() {
    select_ln65_1414_fu_42594_p3 = (!icmp_ln1496_956_fu_42588_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_956_fu_42588_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_141_fu_19042_p3() {
    select_ln65_141_fu_19042_p3 = (!icmp_ln1496_140_fu_19036_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_140_fu_19036_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_142_fu_19050_p3() {
    select_ln65_142_fu_19050_p3 = (!icmp_ln1496_140_fu_19036_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_140_fu_19036_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_6_q0.read(): kernel_data_V_4_198.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_143_fu_19064_p3() {
    select_ln65_143_fu_19064_p3 = (!icmp_ln1496_141_fu_19058_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_141_fu_19058_p2.read()[0].to_bool())? select_ln65_141_fu_19042_p3.read(): zext_ln65_18_fu_19024_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_144_fu_19120_p3() {
    select_ln65_144_fu_19120_p3 = (!icmp_ln1496_142_fu_19114_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_142_fu_19114_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_145_fu_19128_p3() {
    select_ln65_145_fu_19128_p3 = (!icmp_ln1496_142_fu_19114_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_142_fu_19114_p2.read()[0].to_bool())? kernel_data_V_4_326.read(): kernel_data_V_4_262.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_146_fu_19142_p3() {
    select_ln65_146_fu_19142_p3 = (!icmp_ln1496_143_fu_19136_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_143_fu_19136_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_147_fu_19150_p3() {
    select_ln65_147_fu_19150_p3 = (!icmp_ln1496_143_fu_19136_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_143_fu_19136_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_6_q0.read(): kernel_data_V_4_454.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_148_fu_19164_p3() {
    select_ln65_148_fu_19164_p3 = (!icmp_ln1496_144_fu_19158_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_144_fu_19158_p2.read()[0].to_bool())? select_ln65_146_fu_19142_p3.read(): select_ln65_144_fu_19120_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_149_fu_43169_p3() {
    select_ln65_149_fu_43169_p3 = (!icmp_ln1496_145_fu_43163_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_145_fu_43163_p2.read()[0].to_bool())? select_ln65_148_reg_58854_pp0_iter1_reg.read(): zext_ln65_19_fu_43160_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_14_fu_16694_p3() {
    select_ln65_14_fu_16694_p3 = (!icmp_ln1496_4_fu_16688_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_4_fu_16688_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_150_fu_19220_p3() {
    select_ln65_150_fu_19220_p3 = (!icmp_ln1496_146_fu_19214_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_146_fu_19214_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_151_fu_19228_p3() {
    select_ln65_151_fu_19228_p3 = (!icmp_ln1496_146_fu_19214_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_146_fu_19214_p2.read()[0].to_bool())? kernel_data_V_4_582.read(): kernel_data_V_4_518.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_152_fu_19242_p3() {
    select_ln65_152_fu_19242_p3 = (!icmp_ln1496_147_fu_19236_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_147_fu_19236_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_153_fu_19250_p3() {
    select_ln65_153_fu_19250_p3 = (!icmp_ln1496_147_fu_19236_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_147_fu_19236_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_6_q0.read(): kernel_data_V_4_710.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_154_fu_19264_p3() {
    select_ln65_154_fu_19264_p3 = (!icmp_ln1496_148_fu_19258_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_148_fu_19258_p2.read()[0].to_bool())? select_ln65_152_fu_19242_p3.read(): select_ln65_150_fu_19220_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_155_fu_19316_p3() {
    select_ln65_155_fu_19316_p3 = (!icmp_ln1496_149_fu_19310_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_149_fu_19310_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_156_fu_19324_p3() {
    select_ln65_156_fu_19324_p3 = (!icmp_ln1496_149_fu_19310_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_149_fu_19310_p2.read()[0].to_bool())? kernel_data_V_4_902.read(): kernel_data_V_4_774.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_157_fu_19338_p3() {
    select_ln65_157_fu_19338_p3 = (!icmp_ln1496_150_fu_19332_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_150_fu_19332_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_158_fu_19346_p3() {
    select_ln65_158_fu_19346_p3 = (!icmp_ln1496_150_fu_19332_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_150_fu_19332_p2.read()[0].to_bool())? data_V_data_6_V_dout.read(): kernel_data_V_4_966.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_159_fu_19360_p3() {
    select_ln65_159_fu_19360_p3 = (!icmp_ln1496_151_fu_19354_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_151_fu_19354_p2.read()[0].to_bool())? select_ln65_157_fu_19338_p3.read(): select_ln65_155_fu_19316_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_15_fu_16702_p3() {
    select_ln65_15_fu_16702_p3 = (!icmp_ln1496_4_fu_16688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_4_fu_16688_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_0_q0.read(): kernel_data_V_4_448.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_160_fu_43208_p3() {
    select_ln65_160_fu_43208_p3 = (!icmp_ln1496_152_fu_43202_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_152_fu_43202_p2.read()[0].to_bool())? sext_ln65_6_reg_58870_pp0_iter1_reg.read(): select_ln65_154_reg_58864_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_162_fu_19436_p3() {
    select_ln65_162_fu_19436_p3 = (!icmp_ln1496_154_fu_19426_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_154_fu_19426_p2.read()[0].to_bool())? kernel_data_V_4_71.read(): kernel_data_V_4_7.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_163_fu_19450_p3() {
    select_ln65_163_fu_19450_p3 = (!icmp_ln1496_155_fu_19444_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_155_fu_19444_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_164_fu_19458_p3() {
    select_ln65_164_fu_19458_p3 = (!icmp_ln1496_155_fu_19444_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_155_fu_19444_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_7_q0.read(): kernel_data_V_4_199.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_165_fu_19472_p3() {
    select_ln65_165_fu_19472_p3 = (!icmp_ln1496_156_fu_19466_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_156_fu_19466_p2.read()[0].to_bool())? select_ln65_163_fu_19450_p3.read(): zext_ln65_21_fu_19432_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_166_fu_19528_p3() {
    select_ln65_166_fu_19528_p3 = (!icmp_ln1496_157_fu_19522_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_157_fu_19522_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_167_fu_19536_p3() {
    select_ln65_167_fu_19536_p3 = (!icmp_ln1496_157_fu_19522_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_157_fu_19522_p2.read()[0].to_bool())? kernel_data_V_4_327.read(): kernel_data_V_4_263.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_168_fu_19550_p3() {
    select_ln65_168_fu_19550_p3 = (!icmp_ln1496_158_fu_19544_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_158_fu_19544_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_169_fu_19558_p3() {
    select_ln65_169_fu_19558_p3 = (!icmp_ln1496_158_fu_19544_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_158_fu_19544_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_7_q0.read(): kernel_data_V_4_455.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_16_fu_16716_p3() {
    select_ln65_16_fu_16716_p3 = (!icmp_ln1496_5_fu_16710_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_5_fu_16710_p2.read()[0].to_bool())? select_ln65_14_fu_16694_p3.read(): select_ln65_12_fu_16672_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_170_fu_19572_p3() {
    select_ln65_170_fu_19572_p3 = (!icmp_ln1496_159_fu_19566_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_159_fu_19566_p2.read()[0].to_bool())? select_ln65_168_fu_19550_p3.read(): select_ln65_166_fu_19528_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_171_fu_43245_p3() {
    select_ln65_171_fu_43245_p3 = (!icmp_ln1496_160_fu_43239_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_160_fu_43239_p2.read()[0].to_bool())? select_ln65_170_reg_58935_pp0_iter1_reg.read(): zext_ln65_22_fu_43236_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_172_fu_19628_p3() {
    select_ln65_172_fu_19628_p3 = (!icmp_ln1496_161_fu_19622_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_161_fu_19622_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_173_fu_19636_p3() {
    select_ln65_173_fu_19636_p3 = (!icmp_ln1496_161_fu_19622_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_161_fu_19622_p2.read()[0].to_bool())? kernel_data_V_4_583.read(): kernel_data_V_4_519.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_174_fu_19650_p3() {
    select_ln65_174_fu_19650_p3 = (!icmp_ln1496_162_fu_19644_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_162_fu_19644_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_175_fu_19658_p3() {
    select_ln65_175_fu_19658_p3 = (!icmp_ln1496_162_fu_19644_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_162_fu_19644_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_7_q0.read(): kernel_data_V_4_711.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_176_fu_19672_p3() {
    select_ln65_176_fu_19672_p3 = (!icmp_ln1496_163_fu_19666_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_163_fu_19666_p2.read()[0].to_bool())? select_ln65_174_fu_19650_p3.read(): select_ln65_172_fu_19628_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_177_fu_19724_p3() {
    select_ln65_177_fu_19724_p3 = (!icmp_ln1496_164_fu_19718_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_164_fu_19718_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_178_fu_19732_p3() {
    select_ln65_178_fu_19732_p3 = (!icmp_ln1496_164_fu_19718_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_164_fu_19718_p2.read()[0].to_bool())? kernel_data_V_4_903.read(): kernel_data_V_4_775.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_179_fu_19746_p3() {
    select_ln65_179_fu_19746_p3 = (!icmp_ln1496_165_fu_19740_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_165_fu_19740_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_17_fu_42713_p3() {
    select_ln65_17_fu_42713_p3 = (!icmp_ln1496_6_fu_42707_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_6_fu_42707_p2.read()[0].to_bool())? select_ln65_16_reg_58368_pp0_iter1_reg.read(): zext_ln65_1_fu_42704_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_180_fu_19754_p3() {
    select_ln65_180_fu_19754_p3 = (!icmp_ln1496_165_fu_19740_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_165_fu_19740_p2.read()[0].to_bool())? data_V_data_7_V_dout.read(): kernel_data_V_4_967.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_181_fu_19768_p3() {
    select_ln65_181_fu_19768_p3 = (!icmp_ln1496_166_fu_19762_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_166_fu_19762_p2.read()[0].to_bool())? select_ln65_179_fu_19746_p3.read(): select_ln65_177_fu_19724_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_182_fu_43284_p3() {
    select_ln65_182_fu_43284_p3 = (!icmp_ln1496_167_fu_43278_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_167_fu_43278_p2.read()[0].to_bool())? sext_ln65_7_reg_58951_pp0_iter1_reg.read(): select_ln65_176_reg_58945_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_184_fu_19844_p3() {
    select_ln65_184_fu_19844_p3 = (!icmp_ln1496_169_fu_19834_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_169_fu_19834_p2.read()[0].to_bool())? kernel_data_V_4_72.read(): kernel_data_V_4_8.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_185_fu_19858_p3() {
    select_ln65_185_fu_19858_p3 = (!icmp_ln1496_170_fu_19852_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_170_fu_19852_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_186_fu_19866_p3() {
    select_ln65_186_fu_19866_p3 = (!icmp_ln1496_170_fu_19852_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_170_fu_19852_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_8_q0.read(): kernel_data_V_4_200.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_187_fu_19880_p3() {
    select_ln65_187_fu_19880_p3 = (!icmp_ln1496_171_fu_19874_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_171_fu_19874_p2.read()[0].to_bool())? select_ln65_185_fu_19858_p3.read(): zext_ln65_24_fu_19840_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_188_fu_19936_p3() {
    select_ln65_188_fu_19936_p3 = (!icmp_ln1496_172_fu_19930_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_172_fu_19930_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_189_fu_19944_p3() {
    select_ln65_189_fu_19944_p3 = (!icmp_ln1496_172_fu_19930_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_172_fu_19930_p2.read()[0].to_bool())? kernel_data_V_4_328.read(): kernel_data_V_4_264.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_18_fu_16772_p3() {
    select_ln65_18_fu_16772_p3 = (!icmp_ln1496_7_fu_16766_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_7_fu_16766_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_190_fu_19958_p3() {
    select_ln65_190_fu_19958_p3 = (!icmp_ln1496_173_fu_19952_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_173_fu_19952_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_191_fu_19966_p3() {
    select_ln65_191_fu_19966_p3 = (!icmp_ln1496_173_fu_19952_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_173_fu_19952_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_8_q0.read(): kernel_data_V_4_456.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_192_fu_19980_p3() {
    select_ln65_192_fu_19980_p3 = (!icmp_ln1496_174_fu_19974_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_174_fu_19974_p2.read()[0].to_bool())? select_ln65_190_fu_19958_p3.read(): select_ln65_188_fu_19936_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_193_fu_43321_p3() {
    select_ln65_193_fu_43321_p3 = (!icmp_ln1496_175_fu_43315_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_175_fu_43315_p2.read()[0].to_bool())? select_ln65_192_reg_59016_pp0_iter1_reg.read(): zext_ln65_25_fu_43312_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_194_fu_20036_p3() {
    select_ln65_194_fu_20036_p3 = (!icmp_ln1496_176_fu_20030_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_176_fu_20030_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_195_fu_20044_p3() {
    select_ln65_195_fu_20044_p3 = (!icmp_ln1496_176_fu_20030_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_176_fu_20030_p2.read()[0].to_bool())? kernel_data_V_4_584.read(): kernel_data_V_4_520.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_196_fu_20058_p3() {
    select_ln65_196_fu_20058_p3 = (!icmp_ln1496_177_fu_20052_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_177_fu_20052_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_197_fu_20066_p3() {
    select_ln65_197_fu_20066_p3 = (!icmp_ln1496_177_fu_20052_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_177_fu_20052_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_8_q0.read(): kernel_data_V_4_712.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_198_fu_20080_p3() {
    select_ln65_198_fu_20080_p3 = (!icmp_ln1496_178_fu_20074_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_178_fu_20074_p2.read()[0].to_bool())? select_ln65_196_fu_20058_p3.read(): select_ln65_194_fu_20036_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_199_fu_20132_p3() {
    select_ln65_199_fu_20132_p3 = (!icmp_ln1496_179_fu_20126_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_179_fu_20126_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_19_fu_16780_p3() {
    select_ln65_19_fu_16780_p3 = (!icmp_ln1496_7_fu_16766_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_7_fu_16766_p2.read()[0].to_bool())? kernel_data_V_4_576.read(): kernel_data_V_4_512.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_200_fu_20140_p3() {
    select_ln65_200_fu_20140_p3 = (!icmp_ln1496_179_fu_20126_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_179_fu_20126_p2.read()[0].to_bool())? kernel_data_V_4_904.read(): kernel_data_V_4_776.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_201_fu_20154_p3() {
    select_ln65_201_fu_20154_p3 = (!icmp_ln1496_180_fu_20148_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_180_fu_20148_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_202_fu_20162_p3() {
    select_ln65_202_fu_20162_p3 = (!icmp_ln1496_180_fu_20148_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_180_fu_20148_p2.read()[0].to_bool())? data_V_data_8_V_dout.read(): kernel_data_V_4_968.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_203_fu_20176_p3() {
    select_ln65_203_fu_20176_p3 = (!icmp_ln1496_181_fu_20170_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_181_fu_20170_p2.read()[0].to_bool())? select_ln65_201_fu_20154_p3.read(): select_ln65_199_fu_20132_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_204_fu_43360_p3() {
    select_ln65_204_fu_43360_p3 = (!icmp_ln1496_182_fu_43354_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_182_fu_43354_p2.read()[0].to_bool())? sext_ln65_8_reg_59032_pp0_iter1_reg.read(): select_ln65_198_reg_59026_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_206_fu_20252_p3() {
    select_ln65_206_fu_20252_p3 = (!icmp_ln1496_184_fu_20242_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_184_fu_20242_p2.read()[0].to_bool())? kernel_data_V_4_73.read(): kernel_data_V_4_9.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_207_fu_20266_p3() {
    select_ln65_207_fu_20266_p3 = (!icmp_ln1496_185_fu_20260_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_185_fu_20260_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_208_fu_20274_p3() {
    select_ln65_208_fu_20274_p3 = (!icmp_ln1496_185_fu_20260_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_185_fu_20260_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_9_q0.read(): kernel_data_V_4_201.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_209_fu_20288_p3() {
    select_ln65_209_fu_20288_p3 = (!icmp_ln1496_186_fu_20282_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_186_fu_20282_p2.read()[0].to_bool())? select_ln65_207_fu_20266_p3.read(): zext_ln65_27_fu_20248_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_20_fu_16794_p3() {
    select_ln65_20_fu_16794_p3 = (!icmp_ln1496_8_fu_16788_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_8_fu_16788_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_210_fu_20344_p3() {
    select_ln65_210_fu_20344_p3 = (!icmp_ln1496_187_fu_20338_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_187_fu_20338_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_211_fu_20352_p3() {
    select_ln65_211_fu_20352_p3 = (!icmp_ln1496_187_fu_20338_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_187_fu_20338_p2.read()[0].to_bool())? kernel_data_V_4_329.read(): kernel_data_V_4_265.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_212_fu_20366_p3() {
    select_ln65_212_fu_20366_p3 = (!icmp_ln1496_188_fu_20360_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_188_fu_20360_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_213_fu_20374_p3() {
    select_ln65_213_fu_20374_p3 = (!icmp_ln1496_188_fu_20360_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_188_fu_20360_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_9_q0.read(): kernel_data_V_4_457.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_214_fu_20388_p3() {
    select_ln65_214_fu_20388_p3 = (!icmp_ln1496_189_fu_20382_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_189_fu_20382_p2.read()[0].to_bool())? select_ln65_212_fu_20366_p3.read(): select_ln65_210_fu_20344_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_215_fu_43397_p3() {
    select_ln65_215_fu_43397_p3 = (!icmp_ln1496_190_fu_43391_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_190_fu_43391_p2.read()[0].to_bool())? select_ln65_214_reg_59097_pp0_iter1_reg.read(): zext_ln65_28_fu_43388_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_216_fu_20444_p3() {
    select_ln65_216_fu_20444_p3 = (!icmp_ln1496_191_fu_20438_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_191_fu_20438_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_217_fu_20452_p3() {
    select_ln65_217_fu_20452_p3 = (!icmp_ln1496_191_fu_20438_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_191_fu_20438_p2.read()[0].to_bool())? kernel_data_V_4_585.read(): kernel_data_V_4_521.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_218_fu_20466_p3() {
    select_ln65_218_fu_20466_p3 = (!icmp_ln1496_192_fu_20460_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_192_fu_20460_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_219_fu_20474_p3() {
    select_ln65_219_fu_20474_p3 = (!icmp_ln1496_192_fu_20460_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_192_fu_20460_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_9_q0.read(): kernel_data_V_4_713.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_21_fu_16802_p3() {
    select_ln65_21_fu_16802_p3 = (!icmp_ln1496_8_fu_16788_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_8_fu_16788_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_0_q0.read(): kernel_data_V_4_704.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_220_fu_20488_p3() {
    select_ln65_220_fu_20488_p3 = (!icmp_ln1496_193_fu_20482_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_193_fu_20482_p2.read()[0].to_bool())? select_ln65_218_fu_20466_p3.read(): select_ln65_216_fu_20444_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_221_fu_20540_p3() {
    select_ln65_221_fu_20540_p3 = (!icmp_ln1496_194_fu_20534_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_194_fu_20534_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_222_fu_20548_p3() {
    select_ln65_222_fu_20548_p3 = (!icmp_ln1496_194_fu_20534_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_194_fu_20534_p2.read()[0].to_bool())? kernel_data_V_4_905.read(): kernel_data_V_4_777.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_223_fu_20562_p3() {
    select_ln65_223_fu_20562_p3 = (!icmp_ln1496_195_fu_20556_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_195_fu_20556_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_224_fu_20570_p3() {
    select_ln65_224_fu_20570_p3 = (!icmp_ln1496_195_fu_20556_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_195_fu_20556_p2.read()[0].to_bool())? data_V_data_9_V_dout.read(): kernel_data_V_4_969.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_225_fu_20584_p3() {
    select_ln65_225_fu_20584_p3 = (!icmp_ln1496_196_fu_20578_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_196_fu_20578_p2.read()[0].to_bool())? select_ln65_223_fu_20562_p3.read(): select_ln65_221_fu_20540_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_226_fu_43436_p3() {
    select_ln65_226_fu_43436_p3 = (!icmp_ln1496_197_fu_43430_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_197_fu_43430_p2.read()[0].to_bool())? sext_ln65_9_reg_59113_pp0_iter1_reg.read(): select_ln65_220_reg_59107_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_228_fu_20660_p3() {
    select_ln65_228_fu_20660_p3 = (!icmp_ln1496_199_fu_20650_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_199_fu_20650_p2.read()[0].to_bool())? kernel_data_V_4_74.read(): kernel_data_V_4_10.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_229_fu_20674_p3() {
    select_ln65_229_fu_20674_p3 = (!icmp_ln1496_200_fu_20668_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_200_fu_20668_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_22_fu_16816_p3() {
    select_ln65_22_fu_16816_p3 = (!icmp_ln1496_9_fu_16810_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_9_fu_16810_p2.read()[0].to_bool())? select_ln65_20_fu_16794_p3.read(): select_ln65_18_fu_16772_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_230_fu_20682_p3() {
    select_ln65_230_fu_20682_p3 = (!icmp_ln1496_200_fu_20668_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_200_fu_20668_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_10_q0.read(): kernel_data_V_4_202.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_231_fu_20696_p3() {
    select_ln65_231_fu_20696_p3 = (!icmp_ln1496_201_fu_20690_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_201_fu_20690_p2.read()[0].to_bool())? select_ln65_229_fu_20674_p3.read(): zext_ln65_30_fu_20656_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_232_fu_20752_p3() {
    select_ln65_232_fu_20752_p3 = (!icmp_ln1496_202_fu_20746_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_202_fu_20746_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_233_fu_20760_p3() {
    select_ln65_233_fu_20760_p3 = (!icmp_ln1496_202_fu_20746_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_202_fu_20746_p2.read()[0].to_bool())? kernel_data_V_4_330.read(): kernel_data_V_4_266.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_234_fu_20774_p3() {
    select_ln65_234_fu_20774_p3 = (!icmp_ln1496_203_fu_20768_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_203_fu_20768_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_235_fu_20782_p3() {
    select_ln65_235_fu_20782_p3 = (!icmp_ln1496_203_fu_20768_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_203_fu_20768_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_10_q0.read(): kernel_data_V_4_458.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_236_fu_20796_p3() {
    select_ln65_236_fu_20796_p3 = (!icmp_ln1496_204_fu_20790_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_204_fu_20790_p2.read()[0].to_bool())? select_ln65_234_fu_20774_p3.read(): select_ln65_232_fu_20752_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_237_fu_43473_p3() {
    select_ln65_237_fu_43473_p3 = (!icmp_ln1496_205_fu_43467_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_205_fu_43467_p2.read()[0].to_bool())? select_ln65_236_reg_59178_pp0_iter1_reg.read(): zext_ln65_31_fu_43464_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_238_fu_20852_p3() {
    select_ln65_238_fu_20852_p3 = (!icmp_ln1496_206_fu_20846_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_206_fu_20846_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_239_fu_20860_p3() {
    select_ln65_239_fu_20860_p3 = (!icmp_ln1496_206_fu_20846_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_206_fu_20846_p2.read()[0].to_bool())? kernel_data_V_4_586.read(): kernel_data_V_4_522.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_23_fu_16868_p3() {
    select_ln65_23_fu_16868_p3 = (!icmp_ln1496_10_fu_16862_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_10_fu_16862_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_240_fu_20874_p3() {
    select_ln65_240_fu_20874_p3 = (!icmp_ln1496_207_fu_20868_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_207_fu_20868_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_241_fu_20882_p3() {
    select_ln65_241_fu_20882_p3 = (!icmp_ln1496_207_fu_20868_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_207_fu_20868_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_10_q0.read(): kernel_data_V_4_714.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_242_fu_20896_p3() {
    select_ln65_242_fu_20896_p3 = (!icmp_ln1496_208_fu_20890_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_208_fu_20890_p2.read()[0].to_bool())? select_ln65_240_fu_20874_p3.read(): select_ln65_238_fu_20852_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_243_fu_20948_p3() {
    select_ln65_243_fu_20948_p3 = (!icmp_ln1496_209_fu_20942_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_209_fu_20942_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_244_fu_20956_p3() {
    select_ln65_244_fu_20956_p3 = (!icmp_ln1496_209_fu_20942_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_209_fu_20942_p2.read()[0].to_bool())? kernel_data_V_4_906.read(): kernel_data_V_4_778.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_245_fu_20970_p3() {
    select_ln65_245_fu_20970_p3 = (!icmp_ln1496_210_fu_20964_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_210_fu_20964_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_246_fu_20978_p3() {
    select_ln65_246_fu_20978_p3 = (!icmp_ln1496_210_fu_20964_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_210_fu_20964_p2.read()[0].to_bool())? data_V_data_10_V_dout.read(): kernel_data_V_4_970.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_247_fu_20992_p3() {
    select_ln65_247_fu_20992_p3 = (!icmp_ln1496_211_fu_20986_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_211_fu_20986_p2.read()[0].to_bool())? select_ln65_245_fu_20970_p3.read(): select_ln65_243_fu_20948_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_248_fu_43512_p3() {
    select_ln65_248_fu_43512_p3 = (!icmp_ln1496_212_fu_43506_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_212_fu_43506_p2.read()[0].to_bool())? sext_ln65_10_reg_59194_pp0_iter1_reg.read(): select_ln65_242_reg_59188_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_24_fu_16876_p3() {
    select_ln65_24_fu_16876_p3 = (!icmp_ln1496_10_fu_16862_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_10_fu_16862_p2.read()[0].to_bool())? kernel_data_V_4_896.read(): kernel_data_V_4_768.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_250_fu_21068_p3() {
    select_ln65_250_fu_21068_p3 = (!icmp_ln1496_214_fu_21058_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_214_fu_21058_p2.read()[0].to_bool())? kernel_data_V_4_75.read(): kernel_data_V_4_11.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_251_fu_21082_p3() {
    select_ln65_251_fu_21082_p3 = (!icmp_ln1496_215_fu_21076_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_215_fu_21076_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_252_fu_21090_p3() {
    select_ln65_252_fu_21090_p3 = (!icmp_ln1496_215_fu_21076_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_215_fu_21076_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_11_q0.read(): kernel_data_V_4_203.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_253_fu_21104_p3() {
    select_ln65_253_fu_21104_p3 = (!icmp_ln1496_216_fu_21098_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_216_fu_21098_p2.read()[0].to_bool())? select_ln65_251_fu_21082_p3.read(): zext_ln65_33_fu_21064_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_254_fu_21160_p3() {
    select_ln65_254_fu_21160_p3 = (!icmp_ln1496_217_fu_21154_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_217_fu_21154_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_255_fu_21168_p3() {
    select_ln65_255_fu_21168_p3 = (!icmp_ln1496_217_fu_21154_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_217_fu_21154_p2.read()[0].to_bool())? kernel_data_V_4_331.read(): kernel_data_V_4_267.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_256_fu_21182_p3() {
    select_ln65_256_fu_21182_p3 = (!icmp_ln1496_218_fu_21176_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_218_fu_21176_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_257_fu_21190_p3() {
    select_ln65_257_fu_21190_p3 = (!icmp_ln1496_218_fu_21176_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_218_fu_21176_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_11_q0.read(): kernel_data_V_4_459.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_258_fu_21204_p3() {
    select_ln65_258_fu_21204_p3 = (!icmp_ln1496_219_fu_21198_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_219_fu_21198_p2.read()[0].to_bool())? select_ln65_256_fu_21182_p3.read(): select_ln65_254_fu_21160_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_259_fu_43549_p3() {
    select_ln65_259_fu_43549_p3 = (!icmp_ln1496_220_fu_43543_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_220_fu_43543_p2.read()[0].to_bool())? select_ln65_258_reg_59259_pp0_iter1_reg.read(): zext_ln65_34_fu_43540_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_25_fu_16890_p3() {
    select_ln65_25_fu_16890_p3 = (!icmp_ln1496_11_fu_16884_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_11_fu_16884_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_260_fu_21260_p3() {
    select_ln65_260_fu_21260_p3 = (!icmp_ln1496_221_fu_21254_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_221_fu_21254_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_261_fu_21268_p3() {
    select_ln65_261_fu_21268_p3 = (!icmp_ln1496_221_fu_21254_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_221_fu_21254_p2.read()[0].to_bool())? kernel_data_V_4_587.read(): kernel_data_V_4_523.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_262_fu_21282_p3() {
    select_ln65_262_fu_21282_p3 = (!icmp_ln1496_222_fu_21276_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_222_fu_21276_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_263_fu_21290_p3() {
    select_ln65_263_fu_21290_p3 = (!icmp_ln1496_222_fu_21276_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_222_fu_21276_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_11_q0.read(): kernel_data_V_4_715.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_264_fu_21304_p3() {
    select_ln65_264_fu_21304_p3 = (!icmp_ln1496_223_fu_21298_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_223_fu_21298_p2.read()[0].to_bool())? select_ln65_262_fu_21282_p3.read(): select_ln65_260_fu_21260_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_265_fu_21356_p3() {
    select_ln65_265_fu_21356_p3 = (!icmp_ln1496_224_fu_21350_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_224_fu_21350_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_266_fu_21364_p3() {
    select_ln65_266_fu_21364_p3 = (!icmp_ln1496_224_fu_21350_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_224_fu_21350_p2.read()[0].to_bool())? kernel_data_V_4_907.read(): kernel_data_V_4_779.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_267_fu_21378_p3() {
    select_ln65_267_fu_21378_p3 = (!icmp_ln1496_225_fu_21372_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_225_fu_21372_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_268_fu_21386_p3() {
    select_ln65_268_fu_21386_p3 = (!icmp_ln1496_225_fu_21372_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_225_fu_21372_p2.read()[0].to_bool())? data_V_data_11_V_dout.read(): kernel_data_V_4_971.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_269_fu_21400_p3() {
    select_ln65_269_fu_21400_p3 = (!icmp_ln1496_226_fu_21394_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_226_fu_21394_p2.read()[0].to_bool())? select_ln65_267_fu_21378_p3.read(): select_ln65_265_fu_21356_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_26_fu_16898_p3() {
    select_ln65_26_fu_16898_p3 = (!icmp_ln1496_11_fu_16884_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_11_fu_16884_p2.read()[0].to_bool())? data_V_data_0_V_dout.read(): kernel_data_V_4_960.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_270_fu_43588_p3() {
    select_ln65_270_fu_43588_p3 = (!icmp_ln1496_227_fu_43582_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_227_fu_43582_p2.read()[0].to_bool())? sext_ln65_11_reg_59275_pp0_iter1_reg.read(): select_ln65_264_reg_59269_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_272_fu_21476_p3() {
    select_ln65_272_fu_21476_p3 = (!icmp_ln1496_229_fu_21466_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_229_fu_21466_p2.read()[0].to_bool())? kernel_data_V_4_76.read(): kernel_data_V_4_12.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_273_fu_21490_p3() {
    select_ln65_273_fu_21490_p3 = (!icmp_ln1496_230_fu_21484_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_230_fu_21484_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_274_fu_21498_p3() {
    select_ln65_274_fu_21498_p3 = (!icmp_ln1496_230_fu_21484_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_230_fu_21484_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_12_q0.read(): kernel_data_V_4_204.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_275_fu_21512_p3() {
    select_ln65_275_fu_21512_p3 = (!icmp_ln1496_231_fu_21506_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_231_fu_21506_p2.read()[0].to_bool())? select_ln65_273_fu_21490_p3.read(): zext_ln65_36_fu_21472_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_276_fu_21568_p3() {
    select_ln65_276_fu_21568_p3 = (!icmp_ln1496_232_fu_21562_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_232_fu_21562_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_277_fu_21576_p3() {
    select_ln65_277_fu_21576_p3 = (!icmp_ln1496_232_fu_21562_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_232_fu_21562_p2.read()[0].to_bool())? kernel_data_V_4_332.read(): kernel_data_V_4_268.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_278_fu_21590_p3() {
    select_ln65_278_fu_21590_p3 = (!icmp_ln1496_233_fu_21584_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_233_fu_21584_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_279_fu_21598_p3() {
    select_ln65_279_fu_21598_p3 = (!icmp_ln1496_233_fu_21584_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_233_fu_21584_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_12_q0.read(): kernel_data_V_4_460.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_27_fu_16912_p3() {
    select_ln65_27_fu_16912_p3 = (!icmp_ln1496_12_fu_16906_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_12_fu_16906_p2.read()[0].to_bool())? select_ln65_25_fu_16890_p3.read(): select_ln65_23_fu_16868_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_280_fu_21612_p3() {
    select_ln65_280_fu_21612_p3 = (!icmp_ln1496_234_fu_21606_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_234_fu_21606_p2.read()[0].to_bool())? select_ln65_278_fu_21590_p3.read(): select_ln65_276_fu_21568_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_281_fu_43625_p3() {
    select_ln65_281_fu_43625_p3 = (!icmp_ln1496_235_fu_43619_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_235_fu_43619_p2.read()[0].to_bool())? select_ln65_280_reg_59340_pp0_iter1_reg.read(): zext_ln65_37_fu_43616_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_282_fu_21668_p3() {
    select_ln65_282_fu_21668_p3 = (!icmp_ln1496_236_fu_21662_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_236_fu_21662_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_283_fu_21676_p3() {
    select_ln65_283_fu_21676_p3 = (!icmp_ln1496_236_fu_21662_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_236_fu_21662_p2.read()[0].to_bool())? kernel_data_V_4_588.read(): kernel_data_V_4_524.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_284_fu_21690_p3() {
    select_ln65_284_fu_21690_p3 = (!icmp_ln1496_237_fu_21684_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_237_fu_21684_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_285_fu_21698_p3() {
    select_ln65_285_fu_21698_p3 = (!icmp_ln1496_237_fu_21684_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_237_fu_21684_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_12_q0.read(): kernel_data_V_4_716.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_286_fu_21712_p3() {
    select_ln65_286_fu_21712_p3 = (!icmp_ln1496_238_fu_21706_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_238_fu_21706_p2.read()[0].to_bool())? select_ln65_284_fu_21690_p3.read(): select_ln65_282_fu_21668_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_287_fu_21764_p3() {
    select_ln65_287_fu_21764_p3 = (!icmp_ln1496_239_fu_21758_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_239_fu_21758_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_288_fu_21772_p3() {
    select_ln65_288_fu_21772_p3 = (!icmp_ln1496_239_fu_21758_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_239_fu_21758_p2.read()[0].to_bool())? kernel_data_V_4_908.read(): kernel_data_V_4_780.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_289_fu_21786_p3() {
    select_ln65_289_fu_21786_p3 = (!icmp_ln1496_240_fu_21780_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_240_fu_21780_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_28_fu_42752_p3() {
    select_ln65_28_fu_42752_p3 = (!icmp_ln1496_13_fu_42746_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_13_fu_42746_p2.read()[0].to_bool())? sext_ln65_reg_58384_pp0_iter1_reg.read(): select_ln65_22_reg_58378_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_290_fu_21794_p3() {
    select_ln65_290_fu_21794_p3 = (!icmp_ln1496_240_fu_21780_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_240_fu_21780_p2.read()[0].to_bool())? data_V_data_12_V_dout.read(): kernel_data_V_4_972.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_291_fu_21808_p3() {
    select_ln65_291_fu_21808_p3 = (!icmp_ln1496_241_fu_21802_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_241_fu_21802_p2.read()[0].to_bool())? select_ln65_289_fu_21786_p3.read(): select_ln65_287_fu_21764_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_292_fu_43664_p3() {
    select_ln65_292_fu_43664_p3 = (!icmp_ln1496_242_fu_43658_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_242_fu_43658_p2.read()[0].to_bool())? sext_ln65_12_reg_59356_pp0_iter1_reg.read(): select_ln65_286_reg_59350_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_294_fu_21884_p3() {
    select_ln65_294_fu_21884_p3 = (!icmp_ln1496_244_fu_21874_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_244_fu_21874_p2.read()[0].to_bool())? kernel_data_V_4_77.read(): kernel_data_V_4_13.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_295_fu_21898_p3() {
    select_ln65_295_fu_21898_p3 = (!icmp_ln1496_245_fu_21892_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_245_fu_21892_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_296_fu_21906_p3() {
    select_ln65_296_fu_21906_p3 = (!icmp_ln1496_245_fu_21892_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_245_fu_21892_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_13_q0.read(): kernel_data_V_4_205.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_297_fu_21920_p3() {
    select_ln65_297_fu_21920_p3 = (!icmp_ln1496_246_fu_21914_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_246_fu_21914_p2.read()[0].to_bool())? select_ln65_295_fu_21898_p3.read(): zext_ln65_39_fu_21880_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_298_fu_21976_p3() {
    select_ln65_298_fu_21976_p3 = (!icmp_ln1496_247_fu_21970_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_247_fu_21970_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_299_fu_21984_p3() {
    select_ln65_299_fu_21984_p3 = (!icmp_ln1496_247_fu_21970_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_247_fu_21970_p2.read()[0].to_bool())? kernel_data_V_4_333.read(): kernel_data_V_4_269.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_300_fu_21998_p3() {
    select_ln65_300_fu_21998_p3 = (!icmp_ln1496_248_fu_21992_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_248_fu_21992_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_301_fu_22006_p3() {
    select_ln65_301_fu_22006_p3 = (!icmp_ln1496_248_fu_21992_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_248_fu_21992_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_13_q0.read(): kernel_data_V_4_461.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_302_fu_22020_p3() {
    select_ln65_302_fu_22020_p3 = (!icmp_ln1496_249_fu_22014_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_249_fu_22014_p2.read()[0].to_bool())? select_ln65_300_fu_21998_p3.read(): select_ln65_298_fu_21976_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_303_fu_43701_p3() {
    select_ln65_303_fu_43701_p3 = (!icmp_ln1496_250_fu_43695_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_250_fu_43695_p2.read()[0].to_bool())? select_ln65_302_reg_59421_pp0_iter1_reg.read(): zext_ln65_40_fu_43692_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_304_fu_22076_p3() {
    select_ln65_304_fu_22076_p3 = (!icmp_ln1496_251_fu_22070_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_251_fu_22070_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_305_fu_22084_p3() {
    select_ln65_305_fu_22084_p3 = (!icmp_ln1496_251_fu_22070_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_251_fu_22070_p2.read()[0].to_bool())? kernel_data_V_4_589.read(): kernel_data_V_4_525.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_306_fu_22098_p3() {
    select_ln65_306_fu_22098_p3 = (!icmp_ln1496_252_fu_22092_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_252_fu_22092_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_307_fu_22106_p3() {
    select_ln65_307_fu_22106_p3 = (!icmp_ln1496_252_fu_22092_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_252_fu_22092_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_13_q0.read(): kernel_data_V_4_717.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_308_fu_22120_p3() {
    select_ln65_308_fu_22120_p3 = (!icmp_ln1496_253_fu_22114_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_253_fu_22114_p2.read()[0].to_bool())? select_ln65_306_fu_22098_p3.read(): select_ln65_304_fu_22076_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_309_fu_22172_p3() {
    select_ln65_309_fu_22172_p3 = (!icmp_ln1496_254_fu_22166_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_254_fu_22166_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_30_fu_16988_p3() {
    select_ln65_30_fu_16988_p3 = (!icmp_ln1496_64_fu_16978_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_64_fu_16978_p2.read()[0].to_bool())? kernel_data_V_4_65.read(): kernel_data_V_4_1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_310_fu_22180_p3() {
    select_ln65_310_fu_22180_p3 = (!icmp_ln1496_254_fu_22166_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_254_fu_22166_p2.read()[0].to_bool())? kernel_data_V_4_909.read(): kernel_data_V_4_781.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_311_fu_22194_p3() {
    select_ln65_311_fu_22194_p3 = (!icmp_ln1496_255_fu_22188_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_255_fu_22188_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_312_fu_22202_p3() {
    select_ln65_312_fu_22202_p3 = (!icmp_ln1496_255_fu_22188_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_255_fu_22188_p2.read()[0].to_bool())? data_V_data_13_V_dout.read(): kernel_data_V_4_973.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_313_fu_22216_p3() {
    select_ln65_313_fu_22216_p3 = (!icmp_ln1496_256_fu_22210_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_256_fu_22210_p2.read()[0].to_bool())? select_ln65_311_fu_22194_p3.read(): select_ln65_309_fu_22172_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_314_fu_43740_p3() {
    select_ln65_314_fu_43740_p3 = (!icmp_ln1496_257_fu_43734_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_257_fu_43734_p2.read()[0].to_bool())? sext_ln65_13_reg_59437_pp0_iter1_reg.read(): select_ln65_308_reg_59431_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_316_fu_22292_p3() {
    select_ln65_316_fu_22292_p3 = (!icmp_ln1496_259_fu_22282_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_259_fu_22282_p2.read()[0].to_bool())? kernel_data_V_4_78.read(): kernel_data_V_4_14.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_317_fu_22306_p3() {
    select_ln65_317_fu_22306_p3 = (!icmp_ln1496_260_fu_22300_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_260_fu_22300_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_318_fu_22314_p3() {
    select_ln65_318_fu_22314_p3 = (!icmp_ln1496_260_fu_22300_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_260_fu_22300_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_14_q0.read(): kernel_data_V_4_206.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_319_fu_22328_p3() {
    select_ln65_319_fu_22328_p3 = (!icmp_ln1496_261_fu_22322_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_261_fu_22322_p2.read()[0].to_bool())? select_ln65_317_fu_22306_p3.read(): zext_ln65_42_fu_22288_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_31_fu_17002_p3() {
    select_ln65_31_fu_17002_p3 = (!icmp_ln1496_65_fu_16996_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_65_fu_16996_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_320_fu_22384_p3() {
    select_ln65_320_fu_22384_p3 = (!icmp_ln1496_262_fu_22378_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_262_fu_22378_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_321_fu_22392_p3() {
    select_ln65_321_fu_22392_p3 = (!icmp_ln1496_262_fu_22378_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_262_fu_22378_p2.read()[0].to_bool())? kernel_data_V_4_334.read(): kernel_data_V_4_270.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_322_fu_22406_p3() {
    select_ln65_322_fu_22406_p3 = (!icmp_ln1496_263_fu_22400_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_263_fu_22400_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_323_fu_22414_p3() {
    select_ln65_323_fu_22414_p3 = (!icmp_ln1496_263_fu_22400_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_263_fu_22400_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_14_q0.read(): kernel_data_V_4_462.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_324_fu_22428_p3() {
    select_ln65_324_fu_22428_p3 = (!icmp_ln1496_264_fu_22422_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_264_fu_22422_p2.read()[0].to_bool())? select_ln65_322_fu_22406_p3.read(): select_ln65_320_fu_22384_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_325_fu_43777_p3() {
    select_ln65_325_fu_43777_p3 = (!icmp_ln1496_265_fu_43771_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_265_fu_43771_p2.read()[0].to_bool())? select_ln65_324_reg_59502_pp0_iter1_reg.read(): zext_ln65_43_fu_43768_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_326_fu_22484_p3() {
    select_ln65_326_fu_22484_p3 = (!icmp_ln1496_266_fu_22478_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_266_fu_22478_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_327_fu_22492_p3() {
    select_ln65_327_fu_22492_p3 = (!icmp_ln1496_266_fu_22478_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_266_fu_22478_p2.read()[0].to_bool())? kernel_data_V_4_590.read(): kernel_data_V_4_526.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_328_fu_22506_p3() {
    select_ln65_328_fu_22506_p3 = (!icmp_ln1496_267_fu_22500_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_267_fu_22500_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_329_fu_22514_p3() {
    select_ln65_329_fu_22514_p3 = (!icmp_ln1496_267_fu_22500_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_267_fu_22500_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_14_q0.read(): kernel_data_V_4_718.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_32_fu_17010_p3() {
    select_ln65_32_fu_17010_p3 = (!icmp_ln1496_65_fu_16996_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_65_fu_16996_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_1_q0.read(): kernel_data_V_4_193.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_330_fu_22528_p3() {
    select_ln65_330_fu_22528_p3 = (!icmp_ln1496_268_fu_22522_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_268_fu_22522_p2.read()[0].to_bool())? select_ln65_328_fu_22506_p3.read(): select_ln65_326_fu_22484_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_331_fu_22580_p3() {
    select_ln65_331_fu_22580_p3 = (!icmp_ln1496_269_fu_22574_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_269_fu_22574_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_332_fu_22588_p3() {
    select_ln65_332_fu_22588_p3 = (!icmp_ln1496_269_fu_22574_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_269_fu_22574_p2.read()[0].to_bool())? kernel_data_V_4_910.read(): kernel_data_V_4_782.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_333_fu_22602_p3() {
    select_ln65_333_fu_22602_p3 = (!icmp_ln1496_270_fu_22596_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_270_fu_22596_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_334_fu_22610_p3() {
    select_ln65_334_fu_22610_p3 = (!icmp_ln1496_270_fu_22596_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_270_fu_22596_p2.read()[0].to_bool())? data_V_data_14_V_dout.read(): kernel_data_V_4_974.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_335_fu_22624_p3() {
    select_ln65_335_fu_22624_p3 = (!icmp_ln1496_271_fu_22618_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_271_fu_22618_p2.read()[0].to_bool())? select_ln65_333_fu_22602_p3.read(): select_ln65_331_fu_22580_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_336_fu_43816_p3() {
    select_ln65_336_fu_43816_p3 = (!icmp_ln1496_272_fu_43810_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_272_fu_43810_p2.read()[0].to_bool())? sext_ln65_14_reg_59518_pp0_iter1_reg.read(): select_ln65_330_reg_59512_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_338_fu_22700_p3() {
    select_ln65_338_fu_22700_p3 = (!icmp_ln1496_15_fu_22690_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_15_fu_22690_p2.read()[0].to_bool())? kernel_data_V_4_79.read(): kernel_data_V_4_15.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_339_fu_22714_p3() {
    select_ln65_339_fu_22714_p3 = (!icmp_ln1496_274_fu_22708_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_274_fu_22708_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_33_fu_17024_p3() {
    select_ln65_33_fu_17024_p3 = (!icmp_ln1496_66_fu_17018_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_66_fu_17018_p2.read()[0].to_bool())? select_ln65_31_fu_17002_p3.read(): zext_ln65_3_fu_16984_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_340_fu_22722_p3() {
    select_ln65_340_fu_22722_p3 = (!icmp_ln1496_274_fu_22708_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_274_fu_22708_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_15_q0.read(): kernel_data_V_4_207.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_341_fu_22736_p3() {
    select_ln65_341_fu_22736_p3 = (!icmp_ln1496_275_fu_22730_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_275_fu_22730_p2.read()[0].to_bool())? select_ln65_339_fu_22714_p3.read(): zext_ln65_45_fu_22696_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_342_fu_22792_p3() {
    select_ln65_342_fu_22792_p3 = (!icmp_ln1496_276_fu_22786_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_276_fu_22786_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_343_fu_22800_p3() {
    select_ln65_343_fu_22800_p3 = (!icmp_ln1496_276_fu_22786_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_276_fu_22786_p2.read()[0].to_bool())? kernel_data_V_4_335.read(): kernel_data_V_4_271.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_344_fu_22814_p3() {
    select_ln65_344_fu_22814_p3 = (!icmp_ln1496_277_fu_22808_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_277_fu_22808_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_345_fu_22822_p3() {
    select_ln65_345_fu_22822_p3 = (!icmp_ln1496_277_fu_22808_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_277_fu_22808_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_15_q0.read(): kernel_data_V_4_463.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_346_fu_22836_p3() {
    select_ln65_346_fu_22836_p3 = (!icmp_ln1496_278_fu_22830_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_278_fu_22830_p2.read()[0].to_bool())? select_ln65_344_fu_22814_p3.read(): select_ln65_342_fu_22792_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_347_fu_43853_p3() {
    select_ln65_347_fu_43853_p3 = (!icmp_ln1496_279_fu_43847_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_279_fu_43847_p2.read()[0].to_bool())? select_ln65_346_reg_59583_pp0_iter1_reg.read(): zext_ln65_46_fu_43844_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_348_fu_22892_p3() {
    select_ln65_348_fu_22892_p3 = (!icmp_ln1496_280_fu_22886_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_280_fu_22886_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_349_fu_22900_p3() {
    select_ln65_349_fu_22900_p3 = (!icmp_ln1496_280_fu_22886_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_280_fu_22886_p2.read()[0].to_bool())? kernel_data_V_4_591.read(): kernel_data_V_4_527.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_34_fu_17080_p3() {
    select_ln65_34_fu_17080_p3 = (!icmp_ln1496_67_fu_17074_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_67_fu_17074_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_350_fu_22914_p3() {
    select_ln65_350_fu_22914_p3 = (!icmp_ln1496_281_fu_22908_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_281_fu_22908_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_351_fu_22922_p3() {
    select_ln65_351_fu_22922_p3 = (!icmp_ln1496_281_fu_22908_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_281_fu_22908_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_15_q0.read(): kernel_data_V_4_719.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_352_fu_22936_p3() {
    select_ln65_352_fu_22936_p3 = (!icmp_ln1496_282_fu_22930_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_282_fu_22930_p2.read()[0].to_bool())? select_ln65_350_fu_22914_p3.read(): select_ln65_348_fu_22892_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_353_fu_22988_p3() {
    select_ln65_353_fu_22988_p3 = (!icmp_ln1496_283_fu_22982_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_283_fu_22982_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_354_fu_22996_p3() {
    select_ln65_354_fu_22996_p3 = (!icmp_ln1496_283_fu_22982_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_283_fu_22982_p2.read()[0].to_bool())? kernel_data_V_4_911.read(): kernel_data_V_4_783.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_355_fu_23010_p3() {
    select_ln65_355_fu_23010_p3 = (!icmp_ln1496_284_fu_23004_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_284_fu_23004_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_356_fu_23018_p3() {
    select_ln65_356_fu_23018_p3 = (!icmp_ln1496_284_fu_23004_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_284_fu_23004_p2.read()[0].to_bool())? data_V_data_15_V_dout.read(): kernel_data_V_4_975.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_357_fu_23032_p3() {
    select_ln65_357_fu_23032_p3 = (!icmp_ln1496_285_fu_23026_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_285_fu_23026_p2.read()[0].to_bool())? select_ln65_355_fu_23010_p3.read(): select_ln65_353_fu_22988_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_358_fu_43892_p3() {
    select_ln65_358_fu_43892_p3 = (!icmp_ln1496_286_fu_43886_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_286_fu_43886_p2.read()[0].to_bool())? sext_ln65_15_reg_59599_pp0_iter1_reg.read(): select_ln65_352_reg_59593_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_35_fu_17088_p3() {
    select_ln65_35_fu_17088_p3 = (!icmp_ln1496_67_fu_17074_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_67_fu_17074_p2.read()[0].to_bool())? kernel_data_V_4_321.read(): kernel_data_V_4_257.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_360_fu_23108_p3() {
    select_ln65_360_fu_23108_p3 = (!icmp_ln1496_16_fu_23098_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_16_fu_23098_p2.read()[0].to_bool())? kernel_data_V_4_80.read(): kernel_data_V_4_16.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_361_fu_23122_p3() {
    select_ln65_361_fu_23122_p3 = (!icmp_ln1496_288_fu_23116_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_288_fu_23116_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_362_fu_23130_p3() {
    select_ln65_362_fu_23130_p3 = (!icmp_ln1496_288_fu_23116_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_288_fu_23116_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_16_q0.read(): kernel_data_V_4_208.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_363_fu_23144_p3() {
    select_ln65_363_fu_23144_p3 = (!icmp_ln1496_289_fu_23138_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_289_fu_23138_p2.read()[0].to_bool())? select_ln65_361_fu_23122_p3.read(): zext_ln65_48_fu_23104_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_364_fu_23200_p3() {
    select_ln65_364_fu_23200_p3 = (!icmp_ln1496_290_fu_23194_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_290_fu_23194_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_365_fu_23208_p3() {
    select_ln65_365_fu_23208_p3 = (!icmp_ln1496_290_fu_23194_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_290_fu_23194_p2.read()[0].to_bool())? kernel_data_V_4_336.read(): kernel_data_V_4_272.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_366_fu_23222_p3() {
    select_ln65_366_fu_23222_p3 = (!icmp_ln1496_291_fu_23216_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_291_fu_23216_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_367_fu_23230_p3() {
    select_ln65_367_fu_23230_p3 = (!icmp_ln1496_291_fu_23216_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_291_fu_23216_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_16_q0.read(): kernel_data_V_4_464.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_368_fu_23244_p3() {
    select_ln65_368_fu_23244_p3 = (!icmp_ln1496_292_fu_23238_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_292_fu_23238_p2.read()[0].to_bool())? select_ln65_366_fu_23222_p3.read(): select_ln65_364_fu_23200_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_369_fu_43929_p3() {
    select_ln65_369_fu_43929_p3 = (!icmp_ln1496_293_fu_43923_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_293_fu_43923_p2.read()[0].to_bool())? select_ln65_368_reg_59664_pp0_iter1_reg.read(): zext_ln65_49_fu_43920_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_36_fu_17102_p3() {
    select_ln65_36_fu_17102_p3 = (!icmp_ln1496_68_fu_17096_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_68_fu_17096_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_370_fu_23300_p3() {
    select_ln65_370_fu_23300_p3 = (!icmp_ln1496_294_fu_23294_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_294_fu_23294_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_371_fu_23308_p3() {
    select_ln65_371_fu_23308_p3 = (!icmp_ln1496_294_fu_23294_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_294_fu_23294_p2.read()[0].to_bool())? kernel_data_V_4_592.read(): kernel_data_V_4_528.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_372_fu_23322_p3() {
    select_ln65_372_fu_23322_p3 = (!icmp_ln1496_295_fu_23316_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_295_fu_23316_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_373_fu_23330_p3() {
    select_ln65_373_fu_23330_p3 = (!icmp_ln1496_295_fu_23316_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_295_fu_23316_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_16_q0.read(): kernel_data_V_4_720.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_374_fu_23344_p3() {
    select_ln65_374_fu_23344_p3 = (!icmp_ln1496_296_fu_23338_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_296_fu_23338_p2.read()[0].to_bool())? select_ln65_372_fu_23322_p3.read(): select_ln65_370_fu_23300_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_375_fu_23396_p3() {
    select_ln65_375_fu_23396_p3 = (!icmp_ln1496_297_fu_23390_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_297_fu_23390_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_376_fu_23404_p3() {
    select_ln65_376_fu_23404_p3 = (!icmp_ln1496_297_fu_23390_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_297_fu_23390_p2.read()[0].to_bool())? kernel_data_V_4_912.read(): kernel_data_V_4_784.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_377_fu_23418_p3() {
    select_ln65_377_fu_23418_p3 = (!icmp_ln1496_298_fu_23412_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_298_fu_23412_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_378_fu_23426_p3() {
    select_ln65_378_fu_23426_p3 = (!icmp_ln1496_298_fu_23412_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_298_fu_23412_p2.read()[0].to_bool())? data_V_data_16_V_dout.read(): kernel_data_V_4_976.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_379_fu_23440_p3() {
    select_ln65_379_fu_23440_p3 = (!icmp_ln1496_299_fu_23434_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_299_fu_23434_p2.read()[0].to_bool())? select_ln65_377_fu_23418_p3.read(): select_ln65_375_fu_23396_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_37_fu_17110_p3() {
    select_ln65_37_fu_17110_p3 = (!icmp_ln1496_68_fu_17096_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_68_fu_17096_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_1_q0.read(): kernel_data_V_4_449.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_380_fu_43968_p3() {
    select_ln65_380_fu_43968_p3 = (!icmp_ln1496_300_fu_43962_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_300_fu_43962_p2.read()[0].to_bool())? sext_ln65_16_reg_59680_pp0_iter1_reg.read(): select_ln65_374_reg_59674_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_382_fu_23516_p3() {
    select_ln65_382_fu_23516_p3 = (!icmp_ln1496_17_fu_23506_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_17_fu_23506_p2.read()[0].to_bool())? kernel_data_V_4_81.read(): kernel_data_V_4_17.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_383_fu_23530_p3() {
    select_ln65_383_fu_23530_p3 = (!icmp_ln1496_302_fu_23524_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_302_fu_23524_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_384_fu_23538_p3() {
    select_ln65_384_fu_23538_p3 = (!icmp_ln1496_302_fu_23524_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_302_fu_23524_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_17_q0.read(): kernel_data_V_4_209.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_385_fu_23552_p3() {
    select_ln65_385_fu_23552_p3 = (!icmp_ln1496_303_fu_23546_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_303_fu_23546_p2.read()[0].to_bool())? select_ln65_383_fu_23530_p3.read(): zext_ln65_51_fu_23512_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_386_fu_23608_p3() {
    select_ln65_386_fu_23608_p3 = (!icmp_ln1496_304_fu_23602_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_304_fu_23602_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_387_fu_23616_p3() {
    select_ln65_387_fu_23616_p3 = (!icmp_ln1496_304_fu_23602_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_304_fu_23602_p2.read()[0].to_bool())? kernel_data_V_4_337.read(): kernel_data_V_4_273.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_388_fu_23630_p3() {
    select_ln65_388_fu_23630_p3 = (!icmp_ln1496_305_fu_23624_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_305_fu_23624_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_389_fu_23638_p3() {
    select_ln65_389_fu_23638_p3 = (!icmp_ln1496_305_fu_23624_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_305_fu_23624_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_17_q0.read(): kernel_data_V_4_465.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_38_fu_17124_p3() {
    select_ln65_38_fu_17124_p3 = (!icmp_ln1496_69_fu_17118_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_69_fu_17118_p2.read()[0].to_bool())? select_ln65_36_fu_17102_p3.read(): select_ln65_34_fu_17080_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_390_fu_23652_p3() {
    select_ln65_390_fu_23652_p3 = (!icmp_ln1496_306_fu_23646_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_306_fu_23646_p2.read()[0].to_bool())? select_ln65_388_fu_23630_p3.read(): select_ln65_386_fu_23608_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_391_fu_44005_p3() {
    select_ln65_391_fu_44005_p3 = (!icmp_ln1496_307_fu_43999_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_307_fu_43999_p2.read()[0].to_bool())? select_ln65_390_reg_59745_pp0_iter1_reg.read(): zext_ln65_52_fu_43996_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_392_fu_23708_p3() {
    select_ln65_392_fu_23708_p3 = (!icmp_ln1496_308_fu_23702_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_308_fu_23702_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_393_fu_23716_p3() {
    select_ln65_393_fu_23716_p3 = (!icmp_ln1496_308_fu_23702_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_308_fu_23702_p2.read()[0].to_bool())? kernel_data_V_4_593.read(): kernel_data_V_4_529.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_394_fu_23730_p3() {
    select_ln65_394_fu_23730_p3 = (!icmp_ln1496_309_fu_23724_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_309_fu_23724_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_395_fu_23738_p3() {
    select_ln65_395_fu_23738_p3 = (!icmp_ln1496_309_fu_23724_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_309_fu_23724_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_17_q0.read(): kernel_data_V_4_721.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_396_fu_23752_p3() {
    select_ln65_396_fu_23752_p3 = (!icmp_ln1496_310_fu_23746_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_310_fu_23746_p2.read()[0].to_bool())? select_ln65_394_fu_23730_p3.read(): select_ln65_392_fu_23708_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_397_fu_23804_p3() {
    select_ln65_397_fu_23804_p3 = (!icmp_ln1496_311_fu_23798_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_311_fu_23798_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_398_fu_23812_p3() {
    select_ln65_398_fu_23812_p3 = (!icmp_ln1496_311_fu_23798_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_311_fu_23798_p2.read()[0].to_bool())? kernel_data_V_4_913.read(): kernel_data_V_4_785.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_399_fu_23826_p3() {
    select_ln65_399_fu_23826_p3 = (!icmp_ln1496_312_fu_23820_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_312_fu_23820_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_39_fu_42789_p3() {
    select_ln65_39_fu_42789_p3 = (!icmp_ln1496_70_fu_42783_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_70_fu_42783_p2.read()[0].to_bool())? select_ln65_38_reg_58449_pp0_iter1_reg.read(): zext_ln65_4_fu_42780_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_400_fu_23834_p3() {
    select_ln65_400_fu_23834_p3 = (!icmp_ln1496_312_fu_23820_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_312_fu_23820_p2.read()[0].to_bool())? data_V_data_17_V_dout.read(): kernel_data_V_4_977.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_401_fu_23848_p3() {
    select_ln65_401_fu_23848_p3 = (!icmp_ln1496_313_fu_23842_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_313_fu_23842_p2.read()[0].to_bool())? select_ln65_399_fu_23826_p3.read(): select_ln65_397_fu_23804_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_402_fu_44044_p3() {
    select_ln65_402_fu_44044_p3 = (!icmp_ln1496_314_fu_44038_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_314_fu_44038_p2.read()[0].to_bool())? sext_ln65_17_reg_59761_pp0_iter1_reg.read(): select_ln65_396_reg_59755_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_404_fu_23924_p3() {
    select_ln65_404_fu_23924_p3 = (!icmp_ln1496_18_fu_23914_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_18_fu_23914_p2.read()[0].to_bool())? kernel_data_V_4_82.read(): kernel_data_V_4_18.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_405_fu_23938_p3() {
    select_ln65_405_fu_23938_p3 = (!icmp_ln1496_316_fu_23932_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_316_fu_23932_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_406_fu_23946_p3() {
    select_ln65_406_fu_23946_p3 = (!icmp_ln1496_316_fu_23932_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_316_fu_23932_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_18_q0.read(): kernel_data_V_4_210.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_407_fu_23960_p3() {
    select_ln65_407_fu_23960_p3 = (!icmp_ln1496_317_fu_23954_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_317_fu_23954_p2.read()[0].to_bool())? select_ln65_405_fu_23938_p3.read(): zext_ln65_54_fu_23920_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_408_fu_24016_p3() {
    select_ln65_408_fu_24016_p3 = (!icmp_ln1496_318_fu_24010_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_318_fu_24010_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_409_fu_24024_p3() {
    select_ln65_409_fu_24024_p3 = (!icmp_ln1496_318_fu_24010_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_318_fu_24010_p2.read()[0].to_bool())? kernel_data_V_4_338.read(): kernel_data_V_4_274.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_40_fu_17180_p3() {
    select_ln65_40_fu_17180_p3 = (!icmp_ln1496_71_fu_17174_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_71_fu_17174_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_410_fu_24038_p3() {
    select_ln65_410_fu_24038_p3 = (!icmp_ln1496_319_fu_24032_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_319_fu_24032_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_411_fu_24046_p3() {
    select_ln65_411_fu_24046_p3 = (!icmp_ln1496_319_fu_24032_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_319_fu_24032_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_18_q0.read(): kernel_data_V_4_466.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_412_fu_24060_p3() {
    select_ln65_412_fu_24060_p3 = (!icmp_ln1496_320_fu_24054_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_320_fu_24054_p2.read()[0].to_bool())? select_ln65_410_fu_24038_p3.read(): select_ln65_408_fu_24016_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_413_fu_44081_p3() {
    select_ln65_413_fu_44081_p3 = (!icmp_ln1496_321_fu_44075_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_321_fu_44075_p2.read()[0].to_bool())? select_ln65_412_reg_59819_pp0_iter1_reg.read(): zext_ln65_55_fu_44072_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_414_fu_24116_p3() {
    select_ln65_414_fu_24116_p3 = (!icmp_ln1496_322_fu_24110_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_322_fu_24110_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_415_fu_24124_p3() {
    select_ln65_415_fu_24124_p3 = (!icmp_ln1496_322_fu_24110_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_322_fu_24110_p2.read()[0].to_bool())? kernel_data_V_4_658.read(): kernel_data_V_4_530.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_416_fu_24138_p3() {
    select_ln65_416_fu_24138_p3 = (!icmp_ln1496_323_fu_24132_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_323_fu_24132_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_417_fu_24146_p3() {
    select_ln65_417_fu_24146_p3 = (!icmp_ln1496_323_fu_24132_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_323_fu_24132_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_18_q0.read(): kernel_data_V_4_722.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_418_fu_24160_p3() {
    select_ln65_418_fu_24160_p3 = (!icmp_ln1496_324_fu_24154_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_324_fu_24154_p2.read()[0].to_bool())? select_ln65_416_fu_24138_p3.read(): select_ln65_414_fu_24116_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_419_fu_24212_p3() {
    select_ln65_419_fu_24212_p3 = (!icmp_ln1496_325_fu_24206_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_325_fu_24206_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_41_fu_17188_p3() {
    select_ln65_41_fu_17188_p3 = (!icmp_ln1496_71_fu_17174_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_71_fu_17174_p2.read()[0].to_bool())? kernel_data_V_4_577.read(): kernel_data_V_4_513.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_420_fu_24220_p3() {
    select_ln65_420_fu_24220_p3 = (!icmp_ln1496_325_fu_24206_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_325_fu_24206_p2.read()[0].to_bool())? kernel_data_V_4_914.read(): kernel_data_V_4_786.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_421_fu_24234_p3() {
    select_ln65_421_fu_24234_p3 = (!icmp_ln1496_326_fu_24228_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_326_fu_24228_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_422_fu_24242_p3() {
    select_ln65_422_fu_24242_p3 = (!icmp_ln1496_326_fu_24228_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_326_fu_24228_p2.read()[0].to_bool())? data_V_data_18_V_dout.read(): kernel_data_V_4_978.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_423_fu_24256_p3() {
    select_ln65_423_fu_24256_p3 = (!icmp_ln1496_327_fu_24250_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_327_fu_24250_p2.read()[0].to_bool())? select_ln65_421_fu_24234_p3.read(): select_ln65_419_fu_24212_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_424_fu_44120_p3() {
    select_ln65_424_fu_44120_p3 = (!icmp_ln1496_328_fu_44114_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_328_fu_44114_p2.read()[0].to_bool())? sext_ln65_18_reg_59835_pp0_iter1_reg.read(): select_ln65_418_reg_59829_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_426_fu_24332_p3() {
    select_ln65_426_fu_24332_p3 = (!icmp_ln1496_19_fu_24322_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_19_fu_24322_p2.read()[0].to_bool())? kernel_data_V_4_83.read(): kernel_data_V_4_19.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_427_fu_24346_p3() {
    select_ln65_427_fu_24346_p3 = (!icmp_ln1496_330_fu_24340_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_330_fu_24340_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_428_fu_24354_p3() {
    select_ln65_428_fu_24354_p3 = (!icmp_ln1496_330_fu_24340_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_330_fu_24340_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_19_q0.read(): kernel_data_V_4_211.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_429_fu_24368_p3() {
    select_ln65_429_fu_24368_p3 = (!icmp_ln1496_331_fu_24362_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_331_fu_24362_p2.read()[0].to_bool())? select_ln65_427_fu_24346_p3.read(): zext_ln65_57_fu_24328_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_42_fu_17202_p3() {
    select_ln65_42_fu_17202_p3 = (!icmp_ln1496_72_fu_17196_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_72_fu_17196_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_430_fu_24424_p3() {
    select_ln65_430_fu_24424_p3 = (!icmp_ln1496_332_fu_24418_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_332_fu_24418_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_431_fu_24432_p3() {
    select_ln65_431_fu_24432_p3 = (!icmp_ln1496_332_fu_24418_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_332_fu_24418_p2.read()[0].to_bool())? kernel_data_V_4_339.read(): kernel_data_V_4_275.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_432_fu_24446_p3() {
    select_ln65_432_fu_24446_p3 = (!icmp_ln1496_333_fu_24440_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_333_fu_24440_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_433_fu_24454_p3() {
    select_ln65_433_fu_24454_p3 = (!icmp_ln1496_333_fu_24440_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_333_fu_24440_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_19_q0.read(): kernel_data_V_4_467.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_434_fu_24468_p3() {
    select_ln65_434_fu_24468_p3 = (!icmp_ln1496_334_fu_24462_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_334_fu_24462_p2.read()[0].to_bool())? select_ln65_432_fu_24446_p3.read(): select_ln65_430_fu_24424_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_435_fu_44157_p3() {
    select_ln65_435_fu_44157_p3 = (!icmp_ln1496_335_fu_44151_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_335_fu_44151_p2.read()[0].to_bool())? select_ln65_434_reg_59893_pp0_iter1_reg.read(): zext_ln65_58_fu_44148_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_436_fu_24524_p3() {
    select_ln65_436_fu_24524_p3 = (!icmp_ln1496_336_fu_24518_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_336_fu_24518_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_437_fu_24532_p3() {
    select_ln65_437_fu_24532_p3 = (!icmp_ln1496_336_fu_24518_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_336_fu_24518_p2.read()[0].to_bool())? kernel_data_V_4_659.read(): kernel_data_V_4_531.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_438_fu_24546_p3() {
    select_ln65_438_fu_24546_p3 = (!icmp_ln1496_337_fu_24540_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_337_fu_24540_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_439_fu_24554_p3() {
    select_ln65_439_fu_24554_p3 = (!icmp_ln1496_337_fu_24540_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_337_fu_24540_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_19_q0.read(): kernel_data_V_4_723.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_43_fu_17210_p3() {
    select_ln65_43_fu_17210_p3 = (!icmp_ln1496_72_fu_17196_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_72_fu_17196_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_1_q0.read(): kernel_data_V_4_705.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_440_fu_24568_p3() {
    select_ln65_440_fu_24568_p3 = (!icmp_ln1496_338_fu_24562_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_338_fu_24562_p2.read()[0].to_bool())? select_ln65_438_fu_24546_p3.read(): select_ln65_436_fu_24524_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_441_fu_24620_p3() {
    select_ln65_441_fu_24620_p3 = (!icmp_ln1496_339_fu_24614_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_339_fu_24614_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_442_fu_24628_p3() {
    select_ln65_442_fu_24628_p3 = (!icmp_ln1496_339_fu_24614_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_339_fu_24614_p2.read()[0].to_bool())? kernel_data_V_4_915.read(): kernel_data_V_4_787.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_443_fu_24642_p3() {
    select_ln65_443_fu_24642_p3 = (!icmp_ln1496_340_fu_24636_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_340_fu_24636_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_444_fu_24650_p3() {
    select_ln65_444_fu_24650_p3 = (!icmp_ln1496_340_fu_24636_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_340_fu_24636_p2.read()[0].to_bool())? data_V_data_19_V_dout.read(): kernel_data_V_4_979.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_445_fu_24664_p3() {
    select_ln65_445_fu_24664_p3 = (!icmp_ln1496_341_fu_24658_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_341_fu_24658_p2.read()[0].to_bool())? select_ln65_443_fu_24642_p3.read(): select_ln65_441_fu_24620_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_446_fu_44196_p3() {
    select_ln65_446_fu_44196_p3 = (!icmp_ln1496_342_fu_44190_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_342_fu_44190_p2.read()[0].to_bool())? sext_ln65_19_reg_59909_pp0_iter1_reg.read(): select_ln65_440_reg_59903_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_448_fu_24740_p3() {
    select_ln65_448_fu_24740_p3 = (!icmp_ln1496_20_fu_24730_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_20_fu_24730_p2.read()[0].to_bool())? kernel_data_V_4_84.read(): kernel_data_V_4_20.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_449_fu_24754_p3() {
    select_ln65_449_fu_24754_p3 = (!icmp_ln1496_344_fu_24748_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_344_fu_24748_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_44_fu_17224_p3() {
    select_ln65_44_fu_17224_p3 = (!icmp_ln1496_73_fu_17218_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_73_fu_17218_p2.read()[0].to_bool())? select_ln65_42_fu_17202_p3.read(): select_ln65_40_fu_17180_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_450_fu_24762_p3() {
    select_ln65_450_fu_24762_p3 = (!icmp_ln1496_344_fu_24748_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_344_fu_24748_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_20_q0.read(): kernel_data_V_4_212.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_451_fu_24776_p3() {
    select_ln65_451_fu_24776_p3 = (!icmp_ln1496_345_fu_24770_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_345_fu_24770_p2.read()[0].to_bool())? select_ln65_449_fu_24754_p3.read(): zext_ln65_60_fu_24736_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_452_fu_24832_p3() {
    select_ln65_452_fu_24832_p3 = (!icmp_ln1496_346_fu_24826_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_346_fu_24826_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_453_fu_24840_p3() {
    select_ln65_453_fu_24840_p3 = (!icmp_ln1496_346_fu_24826_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_346_fu_24826_p2.read()[0].to_bool())? kernel_data_V_4_340.read(): kernel_data_V_4_276.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_454_fu_24854_p3() {
    select_ln65_454_fu_24854_p3 = (!icmp_ln1496_347_fu_24848_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_347_fu_24848_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_455_fu_24862_p3() {
    select_ln65_455_fu_24862_p3 = (!icmp_ln1496_347_fu_24848_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_347_fu_24848_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_20_q0.read(): kernel_data_V_4_468.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_456_fu_24876_p3() {
    select_ln65_456_fu_24876_p3 = (!icmp_ln1496_348_fu_24870_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_348_fu_24870_p2.read()[0].to_bool())? select_ln65_454_fu_24854_p3.read(): select_ln65_452_fu_24832_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_457_fu_44233_p3() {
    select_ln65_457_fu_44233_p3 = (!icmp_ln1496_349_fu_44227_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_349_fu_44227_p2.read()[0].to_bool())? select_ln65_456_reg_59967_pp0_iter1_reg.read(): zext_ln65_61_fu_44224_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_458_fu_24932_p3() {
    select_ln65_458_fu_24932_p3 = (!icmp_ln1496_350_fu_24926_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_350_fu_24926_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_459_fu_24940_p3() {
    select_ln65_459_fu_24940_p3 = (!icmp_ln1496_350_fu_24926_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_350_fu_24926_p2.read()[0].to_bool())? kernel_data_V_4_660.read(): kernel_data_V_4_532.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_45_fu_17276_p3() {
    select_ln65_45_fu_17276_p3 = (!icmp_ln1496_74_fu_17270_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_74_fu_17270_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_460_fu_24954_p3() {
    select_ln65_460_fu_24954_p3 = (!icmp_ln1496_351_fu_24948_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_351_fu_24948_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_461_fu_24962_p3() {
    select_ln65_461_fu_24962_p3 = (!icmp_ln1496_351_fu_24948_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_351_fu_24948_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_20_q0.read(): kernel_data_V_4_724.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_462_fu_24976_p3() {
    select_ln65_462_fu_24976_p3 = (!icmp_ln1496_352_fu_24970_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_352_fu_24970_p2.read()[0].to_bool())? select_ln65_460_fu_24954_p3.read(): select_ln65_458_fu_24932_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_463_fu_25028_p3() {
    select_ln65_463_fu_25028_p3 = (!icmp_ln1496_353_fu_25022_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_353_fu_25022_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_464_fu_25036_p3() {
    select_ln65_464_fu_25036_p3 = (!icmp_ln1496_353_fu_25022_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_353_fu_25022_p2.read()[0].to_bool())? kernel_data_V_4_916.read(): kernel_data_V_4_788.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_465_fu_25050_p3() {
    select_ln65_465_fu_25050_p3 = (!icmp_ln1496_354_fu_25044_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_354_fu_25044_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_466_fu_25058_p3() {
    select_ln65_466_fu_25058_p3 = (!icmp_ln1496_354_fu_25044_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_354_fu_25044_p2.read()[0].to_bool())? data_V_data_20_V_dout.read(): kernel_data_V_4_980.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_467_fu_25072_p3() {
    select_ln65_467_fu_25072_p3 = (!icmp_ln1496_355_fu_25066_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_355_fu_25066_p2.read()[0].to_bool())? select_ln65_465_fu_25050_p3.read(): select_ln65_463_fu_25028_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_468_fu_44272_p3() {
    select_ln65_468_fu_44272_p3 = (!icmp_ln1496_356_fu_44266_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_356_fu_44266_p2.read()[0].to_bool())? sext_ln65_20_reg_59983_pp0_iter1_reg.read(): select_ln65_462_reg_59977_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_46_fu_17284_p3() {
    select_ln65_46_fu_17284_p3 = (!icmp_ln1496_74_fu_17270_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_74_fu_17270_p2.read()[0].to_bool())? kernel_data_V_4_897.read(): kernel_data_V_4_769.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_470_fu_25148_p3() {
    select_ln65_470_fu_25148_p3 = (!icmp_ln1496_21_fu_25138_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_21_fu_25138_p2.read()[0].to_bool())? kernel_data_V_4_85.read(): kernel_data_V_4_21.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_471_fu_25162_p3() {
    select_ln65_471_fu_25162_p3 = (!icmp_ln1496_358_fu_25156_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_358_fu_25156_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_472_fu_25170_p3() {
    select_ln65_472_fu_25170_p3 = (!icmp_ln1496_358_fu_25156_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_358_fu_25156_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_21_q0.read(): kernel_data_V_4_213.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_473_fu_25184_p3() {
    select_ln65_473_fu_25184_p3 = (!icmp_ln1496_359_fu_25178_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_359_fu_25178_p2.read()[0].to_bool())? select_ln65_471_fu_25162_p3.read(): zext_ln65_63_fu_25144_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_474_fu_25240_p3() {
    select_ln65_474_fu_25240_p3 = (!icmp_ln1496_360_fu_25234_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_360_fu_25234_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_475_fu_25248_p3() {
    select_ln65_475_fu_25248_p3 = (!icmp_ln1496_360_fu_25234_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_360_fu_25234_p2.read()[0].to_bool())? kernel_data_V_4_341.read(): kernel_data_V_4_277.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_476_fu_25262_p3() {
    select_ln65_476_fu_25262_p3 = (!icmp_ln1496_361_fu_25256_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_361_fu_25256_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_477_fu_25270_p3() {
    select_ln65_477_fu_25270_p3 = (!icmp_ln1496_361_fu_25256_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_361_fu_25256_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_21_q0.read(): kernel_data_V_4_469.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_478_fu_25284_p3() {
    select_ln65_478_fu_25284_p3 = (!icmp_ln1496_362_fu_25278_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_362_fu_25278_p2.read()[0].to_bool())? select_ln65_476_fu_25262_p3.read(): select_ln65_474_fu_25240_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_479_fu_44309_p3() {
    select_ln65_479_fu_44309_p3 = (!icmp_ln1496_363_fu_44303_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_363_fu_44303_p2.read()[0].to_bool())? select_ln65_478_reg_60041_pp0_iter1_reg.read(): zext_ln65_64_fu_44300_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_47_fu_17298_p3() {
    select_ln65_47_fu_17298_p3 = (!icmp_ln1496_75_fu_17292_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_75_fu_17292_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_480_fu_25340_p3() {
    select_ln65_480_fu_25340_p3 = (!icmp_ln1496_364_fu_25334_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_364_fu_25334_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_481_fu_25348_p3() {
    select_ln65_481_fu_25348_p3 = (!icmp_ln1496_364_fu_25334_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_364_fu_25334_p2.read()[0].to_bool())? kernel_data_V_4_661.read(): kernel_data_V_4_533.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_482_fu_25362_p3() {
    select_ln65_482_fu_25362_p3 = (!icmp_ln1496_365_fu_25356_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_365_fu_25356_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_483_fu_25370_p3() {
    select_ln65_483_fu_25370_p3 = (!icmp_ln1496_365_fu_25356_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_365_fu_25356_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_21_q0.read(): kernel_data_V_4_725.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_484_fu_25384_p3() {
    select_ln65_484_fu_25384_p3 = (!icmp_ln1496_366_fu_25378_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_366_fu_25378_p2.read()[0].to_bool())? select_ln65_482_fu_25362_p3.read(): select_ln65_480_fu_25340_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_485_fu_25436_p3() {
    select_ln65_485_fu_25436_p3 = (!icmp_ln1496_367_fu_25430_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_367_fu_25430_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_486_fu_25444_p3() {
    select_ln65_486_fu_25444_p3 = (!icmp_ln1496_367_fu_25430_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_367_fu_25430_p2.read()[0].to_bool())? kernel_data_V_4_917.read(): kernel_data_V_4_789.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_487_fu_25458_p3() {
    select_ln65_487_fu_25458_p3 = (!icmp_ln1496_368_fu_25452_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_368_fu_25452_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_488_fu_25466_p3() {
    select_ln65_488_fu_25466_p3 = (!icmp_ln1496_368_fu_25452_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_368_fu_25452_p2.read()[0].to_bool())? data_V_data_21_V_dout.read(): kernel_data_V_4_981.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_489_fu_25480_p3() {
    select_ln65_489_fu_25480_p3 = (!icmp_ln1496_369_fu_25474_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_369_fu_25474_p2.read()[0].to_bool())? select_ln65_487_fu_25458_p3.read(): select_ln65_485_fu_25436_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_48_fu_17306_p3() {
    select_ln65_48_fu_17306_p3 = (!icmp_ln1496_75_fu_17292_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_75_fu_17292_p2.read()[0].to_bool())? data_V_data_1_V_dout.read(): kernel_data_V_4_961.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_490_fu_44348_p3() {
    select_ln65_490_fu_44348_p3 = (!icmp_ln1496_370_fu_44342_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_370_fu_44342_p2.read()[0].to_bool())? sext_ln65_21_reg_60057_pp0_iter1_reg.read(): select_ln65_484_reg_60051_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_492_fu_25556_p3() {
    select_ln65_492_fu_25556_p3 = (!icmp_ln1496_22_fu_25546_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_22_fu_25546_p2.read()[0].to_bool())? kernel_data_V_4_86.read(): kernel_data_V_4_22.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_493_fu_25570_p3() {
    select_ln65_493_fu_25570_p3 = (!icmp_ln1496_372_fu_25564_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_372_fu_25564_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_494_fu_25578_p3() {
    select_ln65_494_fu_25578_p3 = (!icmp_ln1496_372_fu_25564_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_372_fu_25564_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_22_q0.read(): kernel_data_V_4_214.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_495_fu_25592_p3() {
    select_ln65_495_fu_25592_p3 = (!icmp_ln1496_373_fu_25586_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_373_fu_25586_p2.read()[0].to_bool())? select_ln65_493_fu_25570_p3.read(): zext_ln65_66_fu_25552_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_496_fu_25648_p3() {
    select_ln65_496_fu_25648_p3 = (!icmp_ln1496_374_fu_25642_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_374_fu_25642_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_497_fu_25656_p3() {
    select_ln65_497_fu_25656_p3 = (!icmp_ln1496_374_fu_25642_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_374_fu_25642_p2.read()[0].to_bool())? kernel_data_V_4_342.read(): kernel_data_V_4_278.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_498_fu_25670_p3() {
    select_ln65_498_fu_25670_p3 = (!icmp_ln1496_375_fu_25664_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_375_fu_25664_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_499_fu_25678_p3() {
    select_ln65_499_fu_25678_p3 = (!icmp_ln1496_375_fu_25664_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_375_fu_25664_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_22_q0.read(): kernel_data_V_4_470.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_49_fu_17320_p3() {
    select_ln65_49_fu_17320_p3 = (!icmp_ln1496_76_fu_17314_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_76_fu_17314_p2.read()[0].to_bool())? select_ln65_47_fu_17298_p3.read(): select_ln65_45_fu_17276_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_500_fu_25692_p3() {
    select_ln65_500_fu_25692_p3 = (!icmp_ln1496_376_fu_25686_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_376_fu_25686_p2.read()[0].to_bool())? select_ln65_498_fu_25670_p3.read(): select_ln65_496_fu_25648_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_501_fu_44385_p3() {
    select_ln65_501_fu_44385_p3 = (!icmp_ln1496_377_fu_44379_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_377_fu_44379_p2.read()[0].to_bool())? select_ln65_500_reg_60115_pp0_iter1_reg.read(): zext_ln65_67_fu_44376_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_502_fu_25748_p3() {
    select_ln65_502_fu_25748_p3 = (!icmp_ln1496_378_fu_25742_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_378_fu_25742_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_503_fu_25756_p3() {
    select_ln65_503_fu_25756_p3 = (!icmp_ln1496_378_fu_25742_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_378_fu_25742_p2.read()[0].to_bool())? kernel_data_V_4_662.read(): kernel_data_V_4_534.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_504_fu_25770_p3() {
    select_ln65_504_fu_25770_p3 = (!icmp_ln1496_379_fu_25764_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_379_fu_25764_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_505_fu_25778_p3() {
    select_ln65_505_fu_25778_p3 = (!icmp_ln1496_379_fu_25764_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_379_fu_25764_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_22_q0.read(): kernel_data_V_4_726.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_506_fu_25792_p3() {
    select_ln65_506_fu_25792_p3 = (!icmp_ln1496_380_fu_25786_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_380_fu_25786_p2.read()[0].to_bool())? select_ln65_504_fu_25770_p3.read(): select_ln65_502_fu_25748_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_507_fu_25844_p3() {
    select_ln65_507_fu_25844_p3 = (!icmp_ln1496_381_fu_25838_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_381_fu_25838_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_508_fu_25852_p3() {
    select_ln65_508_fu_25852_p3 = (!icmp_ln1496_381_fu_25838_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_381_fu_25838_p2.read()[0].to_bool())? kernel_data_V_4_918.read(): kernel_data_V_4_790.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_509_fu_25866_p3() {
    select_ln65_509_fu_25866_p3 = (!icmp_ln1496_382_fu_25860_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_382_fu_25860_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_50_fu_42828_p3() {
    select_ln65_50_fu_42828_p3 = (!icmp_ln1496_77_fu_42822_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_77_fu_42822_p2.read()[0].to_bool())? sext_ln65_1_reg_58465_pp0_iter1_reg.read(): select_ln65_44_reg_58459_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_510_fu_25874_p3() {
    select_ln65_510_fu_25874_p3 = (!icmp_ln1496_382_fu_25860_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_382_fu_25860_p2.read()[0].to_bool())? data_V_data_22_V_dout.read(): kernel_data_V_4_982.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_511_fu_25888_p3() {
    select_ln65_511_fu_25888_p3 = (!icmp_ln1496_383_fu_25882_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_383_fu_25882_p2.read()[0].to_bool())? select_ln65_509_fu_25866_p3.read(): select_ln65_507_fu_25844_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_512_fu_44424_p3() {
    select_ln65_512_fu_44424_p3 = (!icmp_ln1496_384_fu_44418_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_384_fu_44418_p2.read()[0].to_bool())? sext_ln65_22_reg_60131_pp0_iter1_reg.read(): select_ln65_506_reg_60125_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_514_fu_25964_p3() {
    select_ln65_514_fu_25964_p3 = (!icmp_ln1496_23_fu_25954_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_23_fu_25954_p2.read()[0].to_bool())? kernel_data_V_4_87.read(): kernel_data_V_4_23.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_515_fu_25978_p3() {
    select_ln65_515_fu_25978_p3 = (!icmp_ln1496_386_fu_25972_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_386_fu_25972_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_516_fu_25986_p3() {
    select_ln65_516_fu_25986_p3 = (!icmp_ln1496_386_fu_25972_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_386_fu_25972_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_23_q0.read(): kernel_data_V_4_215.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_517_fu_26000_p3() {
    select_ln65_517_fu_26000_p3 = (!icmp_ln1496_387_fu_25994_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_387_fu_25994_p2.read()[0].to_bool())? select_ln65_515_fu_25978_p3.read(): zext_ln65_69_fu_25960_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_518_fu_26056_p3() {
    select_ln65_518_fu_26056_p3 = (!icmp_ln1496_388_fu_26050_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_388_fu_26050_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_519_fu_26064_p3() {
    select_ln65_519_fu_26064_p3 = (!icmp_ln1496_388_fu_26050_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_388_fu_26050_p2.read()[0].to_bool())? kernel_data_V_4_343.read(): kernel_data_V_4_279.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_520_fu_26078_p3() {
    select_ln65_520_fu_26078_p3 = (!icmp_ln1496_389_fu_26072_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_389_fu_26072_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_521_fu_26086_p3() {
    select_ln65_521_fu_26086_p3 = (!icmp_ln1496_389_fu_26072_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_389_fu_26072_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_23_q0.read(): kernel_data_V_4_471.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_522_fu_26100_p3() {
    select_ln65_522_fu_26100_p3 = (!icmp_ln1496_390_fu_26094_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_390_fu_26094_p2.read()[0].to_bool())? select_ln65_520_fu_26078_p3.read(): select_ln65_518_fu_26056_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_523_fu_44461_p3() {
    select_ln65_523_fu_44461_p3 = (!icmp_ln1496_391_fu_44455_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_391_fu_44455_p2.read()[0].to_bool())? select_ln65_522_reg_60189_pp0_iter1_reg.read(): zext_ln65_70_fu_44452_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_524_fu_26156_p3() {
    select_ln65_524_fu_26156_p3 = (!icmp_ln1496_392_fu_26150_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_392_fu_26150_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_525_fu_26164_p3() {
    select_ln65_525_fu_26164_p3 = (!icmp_ln1496_392_fu_26150_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_392_fu_26150_p2.read()[0].to_bool())? kernel_data_V_4_663.read(): kernel_data_V_4_535.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_526_fu_26178_p3() {
    select_ln65_526_fu_26178_p3 = (!icmp_ln1496_393_fu_26172_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_393_fu_26172_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_527_fu_26186_p3() {
    select_ln65_527_fu_26186_p3 = (!icmp_ln1496_393_fu_26172_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_393_fu_26172_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_23_q0.read(): kernel_data_V_4_727.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_528_fu_26200_p3() {
    select_ln65_528_fu_26200_p3 = (!icmp_ln1496_394_fu_26194_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_394_fu_26194_p2.read()[0].to_bool())? select_ln65_526_fu_26178_p3.read(): select_ln65_524_fu_26156_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_529_fu_26252_p3() {
    select_ln65_529_fu_26252_p3 = (!icmp_ln1496_395_fu_26246_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_395_fu_26246_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_52_fu_17396_p3() {
    select_ln65_52_fu_17396_p3 = (!icmp_ln1496_79_fu_17386_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_79_fu_17386_p2.read()[0].to_bool())? kernel_data_V_4_66.read(): kernel_data_V_4_2.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_530_fu_26260_p3() {
    select_ln65_530_fu_26260_p3 = (!icmp_ln1496_395_fu_26246_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_395_fu_26246_p2.read()[0].to_bool())? kernel_data_V_4_919.read(): kernel_data_V_4_791.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_531_fu_26274_p3() {
    select_ln65_531_fu_26274_p3 = (!icmp_ln1496_396_fu_26268_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_396_fu_26268_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_532_fu_26282_p3() {
    select_ln65_532_fu_26282_p3 = (!icmp_ln1496_396_fu_26268_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_396_fu_26268_p2.read()[0].to_bool())? data_V_data_23_V_dout.read(): kernel_data_V_4_983.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_533_fu_26296_p3() {
    select_ln65_533_fu_26296_p3 = (!icmp_ln1496_397_fu_26290_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_397_fu_26290_p2.read()[0].to_bool())? select_ln65_531_fu_26274_p3.read(): select_ln65_529_fu_26252_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_534_fu_44500_p3() {
    select_ln65_534_fu_44500_p3 = (!icmp_ln1496_398_fu_44494_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_398_fu_44494_p2.read()[0].to_bool())? sext_ln65_23_reg_60205_pp0_iter1_reg.read(): select_ln65_528_reg_60199_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_536_fu_26372_p3() {
    select_ln65_536_fu_26372_p3 = (!icmp_ln1496_24_fu_26362_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_24_fu_26362_p2.read()[0].to_bool())? kernel_data_V_4_88.read(): kernel_data_V_4_24.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_537_fu_26386_p3() {
    select_ln65_537_fu_26386_p3 = (!icmp_ln1496_400_fu_26380_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_400_fu_26380_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_538_fu_26394_p3() {
    select_ln65_538_fu_26394_p3 = (!icmp_ln1496_400_fu_26380_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_400_fu_26380_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_24_q0.read(): kernel_data_V_4_216.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_539_fu_26408_p3() {
    select_ln65_539_fu_26408_p3 = (!icmp_ln1496_401_fu_26402_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_401_fu_26402_p2.read()[0].to_bool())? select_ln65_537_fu_26386_p3.read(): zext_ln65_72_fu_26368_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_53_fu_17410_p3() {
    select_ln65_53_fu_17410_p3 = (!icmp_ln1496_80_fu_17404_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_80_fu_17404_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_540_fu_26464_p3() {
    select_ln65_540_fu_26464_p3 = (!icmp_ln1496_402_fu_26458_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_402_fu_26458_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_541_fu_26472_p3() {
    select_ln65_541_fu_26472_p3 = (!icmp_ln1496_402_fu_26458_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_402_fu_26458_p2.read()[0].to_bool())? kernel_data_V_4_344.read(): kernel_data_V_4_280.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_542_fu_26486_p3() {
    select_ln65_542_fu_26486_p3 = (!icmp_ln1496_403_fu_26480_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_403_fu_26480_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_543_fu_26494_p3() {
    select_ln65_543_fu_26494_p3 = (!icmp_ln1496_403_fu_26480_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_403_fu_26480_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_24_q0.read(): kernel_data_V_4_472.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_544_fu_26508_p3() {
    select_ln65_544_fu_26508_p3 = (!icmp_ln1496_404_fu_26502_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_404_fu_26502_p2.read()[0].to_bool())? select_ln65_542_fu_26486_p3.read(): select_ln65_540_fu_26464_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_545_fu_44537_p3() {
    select_ln65_545_fu_44537_p3 = (!icmp_ln1496_405_fu_44531_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_405_fu_44531_p2.read()[0].to_bool())? select_ln65_544_reg_60263_pp0_iter1_reg.read(): zext_ln65_73_fu_44528_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_546_fu_26564_p3() {
    select_ln65_546_fu_26564_p3 = (!icmp_ln1496_406_fu_26558_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_406_fu_26558_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_547_fu_26572_p3() {
    select_ln65_547_fu_26572_p3 = (!icmp_ln1496_406_fu_26558_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_406_fu_26558_p2.read()[0].to_bool())? kernel_data_V_4_664.read(): kernel_data_V_4_536.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_548_fu_26586_p3() {
    select_ln65_548_fu_26586_p3 = (!icmp_ln1496_407_fu_26580_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_407_fu_26580_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_549_fu_26594_p3() {
    select_ln65_549_fu_26594_p3 = (!icmp_ln1496_407_fu_26580_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_407_fu_26580_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_24_q0.read(): kernel_data_V_4_728.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_54_fu_17418_p3() {
    select_ln65_54_fu_17418_p3 = (!icmp_ln1496_80_fu_17404_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_80_fu_17404_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_2_q0.read(): kernel_data_V_4_194.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_550_fu_26608_p3() {
    select_ln65_550_fu_26608_p3 = (!icmp_ln1496_408_fu_26602_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_408_fu_26602_p2.read()[0].to_bool())? select_ln65_548_fu_26586_p3.read(): select_ln65_546_fu_26564_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_551_fu_26660_p3() {
    select_ln65_551_fu_26660_p3 = (!icmp_ln1496_409_fu_26654_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_409_fu_26654_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_552_fu_26668_p3() {
    select_ln65_552_fu_26668_p3 = (!icmp_ln1496_409_fu_26654_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_409_fu_26654_p2.read()[0].to_bool())? kernel_data_V_4_920.read(): kernel_data_V_4_792.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_553_fu_26682_p3() {
    select_ln65_553_fu_26682_p3 = (!icmp_ln1496_410_fu_26676_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_410_fu_26676_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_554_fu_26690_p3() {
    select_ln65_554_fu_26690_p3 = (!icmp_ln1496_410_fu_26676_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_410_fu_26676_p2.read()[0].to_bool())? data_V_data_24_V_dout.read(): kernel_data_V_4_984.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_555_fu_26704_p3() {
    select_ln65_555_fu_26704_p3 = (!icmp_ln1496_411_fu_26698_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_411_fu_26698_p2.read()[0].to_bool())? select_ln65_553_fu_26682_p3.read(): select_ln65_551_fu_26660_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_556_fu_44576_p3() {
    select_ln65_556_fu_44576_p3 = (!icmp_ln1496_412_fu_44570_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_412_fu_44570_p2.read()[0].to_bool())? sext_ln65_24_reg_60279_pp0_iter1_reg.read(): select_ln65_550_reg_60273_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_558_fu_26780_p3() {
    select_ln65_558_fu_26780_p3 = (!icmp_ln1496_25_fu_26770_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_25_fu_26770_p2.read()[0].to_bool())? kernel_data_V_4_89.read(): kernel_data_V_4_25.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_559_fu_26794_p3() {
    select_ln65_559_fu_26794_p3 = (!icmp_ln1496_414_fu_26788_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_414_fu_26788_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_55_fu_17432_p3() {
    select_ln65_55_fu_17432_p3 = (!icmp_ln1496_81_fu_17426_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_81_fu_17426_p2.read()[0].to_bool())? select_ln65_53_fu_17410_p3.read(): zext_ln65_6_fu_17392_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_560_fu_26802_p3() {
    select_ln65_560_fu_26802_p3 = (!icmp_ln1496_414_fu_26788_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_414_fu_26788_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_25_q0.read(): kernel_data_V_4_217.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_561_fu_26816_p3() {
    select_ln65_561_fu_26816_p3 = (!icmp_ln1496_415_fu_26810_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_415_fu_26810_p2.read()[0].to_bool())? select_ln65_559_fu_26794_p3.read(): zext_ln65_75_fu_26776_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_562_fu_26872_p3() {
    select_ln65_562_fu_26872_p3 = (!icmp_ln1496_416_fu_26866_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_416_fu_26866_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_563_fu_26880_p3() {
    select_ln65_563_fu_26880_p3 = (!icmp_ln1496_416_fu_26866_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_416_fu_26866_p2.read()[0].to_bool())? kernel_data_V_4_345.read(): kernel_data_V_4_281.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_564_fu_26894_p3() {
    select_ln65_564_fu_26894_p3 = (!icmp_ln1496_417_fu_26888_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_417_fu_26888_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_565_fu_26902_p3() {
    select_ln65_565_fu_26902_p3 = (!icmp_ln1496_417_fu_26888_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_417_fu_26888_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_25_q0.read(): kernel_data_V_4_473.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_566_fu_26916_p3() {
    select_ln65_566_fu_26916_p3 = (!icmp_ln1496_418_fu_26910_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_418_fu_26910_p2.read()[0].to_bool())? select_ln65_564_fu_26894_p3.read(): select_ln65_562_fu_26872_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_567_fu_44613_p3() {
    select_ln65_567_fu_44613_p3 = (!icmp_ln1496_419_fu_44607_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_419_fu_44607_p2.read()[0].to_bool())? select_ln65_566_reg_60337_pp0_iter1_reg.read(): zext_ln65_76_fu_44604_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_568_fu_26972_p3() {
    select_ln65_568_fu_26972_p3 = (!icmp_ln1496_420_fu_26966_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_420_fu_26966_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_569_fu_26980_p3() {
    select_ln65_569_fu_26980_p3 = (!icmp_ln1496_420_fu_26966_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_420_fu_26966_p2.read()[0].to_bool())? kernel_data_V_4_665.read(): kernel_data_V_4_537.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_56_fu_17488_p3() {
    select_ln65_56_fu_17488_p3 = (!icmp_ln1496_82_fu_17482_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_82_fu_17482_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_570_fu_26994_p3() {
    select_ln65_570_fu_26994_p3 = (!icmp_ln1496_421_fu_26988_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_421_fu_26988_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_571_fu_27002_p3() {
    select_ln65_571_fu_27002_p3 = (!icmp_ln1496_421_fu_26988_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_421_fu_26988_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_25_q0.read(): kernel_data_V_4_729.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_572_fu_27016_p3() {
    select_ln65_572_fu_27016_p3 = (!icmp_ln1496_422_fu_27010_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_422_fu_27010_p2.read()[0].to_bool())? select_ln65_570_fu_26994_p3.read(): select_ln65_568_fu_26972_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_573_fu_27068_p3() {
    select_ln65_573_fu_27068_p3 = (!icmp_ln1496_423_fu_27062_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_423_fu_27062_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_574_fu_27076_p3() {
    select_ln65_574_fu_27076_p3 = (!icmp_ln1496_423_fu_27062_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_423_fu_27062_p2.read()[0].to_bool())? kernel_data_V_4_921.read(): kernel_data_V_4_793.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_575_fu_27090_p3() {
    select_ln65_575_fu_27090_p3 = (!icmp_ln1496_424_fu_27084_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_424_fu_27084_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_576_fu_27098_p3() {
    select_ln65_576_fu_27098_p3 = (!icmp_ln1496_424_fu_27084_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_424_fu_27084_p2.read()[0].to_bool())? data_V_data_25_V_dout.read(): kernel_data_V_4_985.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_577_fu_27112_p3() {
    select_ln65_577_fu_27112_p3 = (!icmp_ln1496_425_fu_27106_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_425_fu_27106_p2.read()[0].to_bool())? select_ln65_575_fu_27090_p3.read(): select_ln65_573_fu_27068_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_578_fu_44652_p3() {
    select_ln65_578_fu_44652_p3 = (!icmp_ln1496_426_fu_44646_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_426_fu_44646_p2.read()[0].to_bool())? sext_ln65_25_reg_60353_pp0_iter1_reg.read(): select_ln65_572_reg_60347_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_57_fu_17496_p3() {
    select_ln65_57_fu_17496_p3 = (!icmp_ln1496_82_fu_17482_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_82_fu_17482_p2.read()[0].to_bool())? kernel_data_V_4_322.read(): kernel_data_V_4_258.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_580_fu_27188_p3() {
    select_ln65_580_fu_27188_p3 = (!icmp_ln1496_26_fu_27178_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_26_fu_27178_p2.read()[0].to_bool())? kernel_data_V_4_90.read(): kernel_data_V_4_26.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_581_fu_27202_p3() {
    select_ln65_581_fu_27202_p3 = (!icmp_ln1496_428_fu_27196_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_428_fu_27196_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_582_fu_27210_p3() {
    select_ln65_582_fu_27210_p3 = (!icmp_ln1496_428_fu_27196_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_428_fu_27196_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_26_q0.read(): kernel_data_V_4_218.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_583_fu_27224_p3() {
    select_ln65_583_fu_27224_p3 = (!icmp_ln1496_429_fu_27218_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_429_fu_27218_p2.read()[0].to_bool())? select_ln65_581_fu_27202_p3.read(): zext_ln65_78_fu_27184_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_584_fu_27280_p3() {
    select_ln65_584_fu_27280_p3 = (!icmp_ln1496_430_fu_27274_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_430_fu_27274_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_585_fu_27288_p3() {
    select_ln65_585_fu_27288_p3 = (!icmp_ln1496_430_fu_27274_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_430_fu_27274_p2.read()[0].to_bool())? kernel_data_V_4_346.read(): kernel_data_V_4_282.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_586_fu_27302_p3() {
    select_ln65_586_fu_27302_p3 = (!icmp_ln1496_431_fu_27296_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_431_fu_27296_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_587_fu_27310_p3() {
    select_ln65_587_fu_27310_p3 = (!icmp_ln1496_431_fu_27296_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_431_fu_27296_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_26_q0.read(): kernel_data_V_4_474.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_588_fu_27324_p3() {
    select_ln65_588_fu_27324_p3 = (!icmp_ln1496_432_fu_27318_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_432_fu_27318_p2.read()[0].to_bool())? select_ln65_586_fu_27302_p3.read(): select_ln65_584_fu_27280_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_589_fu_44689_p3() {
    select_ln65_589_fu_44689_p3 = (!icmp_ln1496_433_fu_44683_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_433_fu_44683_p2.read()[0].to_bool())? select_ln65_588_reg_60411_pp0_iter1_reg.read(): zext_ln65_79_fu_44680_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_58_fu_17510_p3() {
    select_ln65_58_fu_17510_p3 = (!icmp_ln1496_83_fu_17504_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_83_fu_17504_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_590_fu_27380_p3() {
    select_ln65_590_fu_27380_p3 = (!icmp_ln1496_434_fu_27374_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_434_fu_27374_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_591_fu_27388_p3() {
    select_ln65_591_fu_27388_p3 = (!icmp_ln1496_434_fu_27374_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_434_fu_27374_p2.read()[0].to_bool())? kernel_data_V_4_666.read(): kernel_data_V_4_538.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_592_fu_27402_p3() {
    select_ln65_592_fu_27402_p3 = (!icmp_ln1496_435_fu_27396_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_435_fu_27396_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_593_fu_27410_p3() {
    select_ln65_593_fu_27410_p3 = (!icmp_ln1496_435_fu_27396_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_435_fu_27396_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_26_q0.read(): kernel_data_V_4_730.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_594_fu_27424_p3() {
    select_ln65_594_fu_27424_p3 = (!icmp_ln1496_436_fu_27418_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_436_fu_27418_p2.read()[0].to_bool())? select_ln65_592_fu_27402_p3.read(): select_ln65_590_fu_27380_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_595_fu_27476_p3() {
    select_ln65_595_fu_27476_p3 = (!icmp_ln1496_437_fu_27470_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_437_fu_27470_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_596_fu_27484_p3() {
    select_ln65_596_fu_27484_p3 = (!icmp_ln1496_437_fu_27470_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_437_fu_27470_p2.read()[0].to_bool())? kernel_data_V_4_922.read(): kernel_data_V_4_794.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_597_fu_27498_p3() {
    select_ln65_597_fu_27498_p3 = (!icmp_ln1496_438_fu_27492_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_438_fu_27492_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_598_fu_27506_p3() {
    select_ln65_598_fu_27506_p3 = (!icmp_ln1496_438_fu_27492_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_438_fu_27492_p2.read()[0].to_bool())? data_V_data_26_V_dout.read(): kernel_data_V_4_986.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_599_fu_27520_p3() {
    select_ln65_599_fu_27520_p3 = (!icmp_ln1496_439_fu_27514_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_439_fu_27514_p2.read()[0].to_bool())? select_ln65_597_fu_27498_p3.read(): select_ln65_595_fu_27476_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_59_fu_17518_p3() {
    select_ln65_59_fu_17518_p3 = (!icmp_ln1496_83_fu_17504_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_83_fu_17504_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_2_q0.read(): kernel_data_V_4_450.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_600_fu_44728_p3() {
    select_ln65_600_fu_44728_p3 = (!icmp_ln1496_440_fu_44722_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_440_fu_44722_p2.read()[0].to_bool())? sext_ln65_26_reg_60427_pp0_iter1_reg.read(): select_ln65_594_reg_60421_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_602_fu_27596_p3() {
    select_ln65_602_fu_27596_p3 = (!icmp_ln1496_27_fu_27586_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_27_fu_27586_p2.read()[0].to_bool())? kernel_data_V_4_91.read(): kernel_data_V_4_27.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_603_fu_27610_p3() {
    select_ln65_603_fu_27610_p3 = (!icmp_ln1496_442_fu_27604_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_442_fu_27604_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_604_fu_27618_p3() {
    select_ln65_604_fu_27618_p3 = (!icmp_ln1496_442_fu_27604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_442_fu_27604_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_27_q0.read(): kernel_data_V_4_219.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_605_fu_27632_p3() {
    select_ln65_605_fu_27632_p3 = (!icmp_ln1496_443_fu_27626_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_443_fu_27626_p2.read()[0].to_bool())? select_ln65_603_fu_27610_p3.read(): zext_ln65_81_fu_27592_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_606_fu_27688_p3() {
    select_ln65_606_fu_27688_p3 = (!icmp_ln1496_444_fu_27682_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_444_fu_27682_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_607_fu_27696_p3() {
    select_ln65_607_fu_27696_p3 = (!icmp_ln1496_444_fu_27682_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_444_fu_27682_p2.read()[0].to_bool())? kernel_data_V_4_347.read(): kernel_data_V_4_283.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_608_fu_27710_p3() {
    select_ln65_608_fu_27710_p3 = (!icmp_ln1496_445_fu_27704_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_445_fu_27704_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_609_fu_27718_p3() {
    select_ln65_609_fu_27718_p3 = (!icmp_ln1496_445_fu_27704_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_445_fu_27704_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_27_q0.read(): kernel_data_V_4_475.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_60_fu_17532_p3() {
    select_ln65_60_fu_17532_p3 = (!icmp_ln1496_84_fu_17526_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_84_fu_17526_p2.read()[0].to_bool())? select_ln65_58_fu_17510_p3.read(): select_ln65_56_fu_17488_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_610_fu_27732_p3() {
    select_ln65_610_fu_27732_p3 = (!icmp_ln1496_446_fu_27726_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_446_fu_27726_p2.read()[0].to_bool())? select_ln65_608_fu_27710_p3.read(): select_ln65_606_fu_27688_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_611_fu_44765_p3() {
    select_ln65_611_fu_44765_p3 = (!icmp_ln1496_447_fu_44759_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_447_fu_44759_p2.read()[0].to_bool())? select_ln65_610_reg_60485_pp0_iter1_reg.read(): zext_ln65_82_fu_44756_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_612_fu_27788_p3() {
    select_ln65_612_fu_27788_p3 = (!icmp_ln1496_448_fu_27782_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_448_fu_27782_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_613_fu_27796_p3() {
    select_ln65_613_fu_27796_p3 = (!icmp_ln1496_448_fu_27782_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_448_fu_27782_p2.read()[0].to_bool())? kernel_data_V_4_667.read(): kernel_data_V_4_539.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_614_fu_27810_p3() {
    select_ln65_614_fu_27810_p3 = (!icmp_ln1496_449_fu_27804_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_449_fu_27804_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_615_fu_27818_p3() {
    select_ln65_615_fu_27818_p3 = (!icmp_ln1496_449_fu_27804_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_449_fu_27804_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_27_q0.read(): kernel_data_V_4_731.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_616_fu_27832_p3() {
    select_ln65_616_fu_27832_p3 = (!icmp_ln1496_450_fu_27826_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_450_fu_27826_p2.read()[0].to_bool())? select_ln65_614_fu_27810_p3.read(): select_ln65_612_fu_27788_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_617_fu_27884_p3() {
    select_ln65_617_fu_27884_p3 = (!icmp_ln1496_451_fu_27878_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_451_fu_27878_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_618_fu_27892_p3() {
    select_ln65_618_fu_27892_p3 = (!icmp_ln1496_451_fu_27878_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_451_fu_27878_p2.read()[0].to_bool())? kernel_data_V_4_923.read(): kernel_data_V_4_795.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_619_fu_27906_p3() {
    select_ln65_619_fu_27906_p3 = (!icmp_ln1496_452_fu_27900_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_452_fu_27900_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_61_fu_42865_p3() {
    select_ln65_61_fu_42865_p3 = (!icmp_ln1496_85_fu_42859_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_85_fu_42859_p2.read()[0].to_bool())? select_ln65_60_reg_58530_pp0_iter1_reg.read(): zext_ln65_7_fu_42856_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_620_fu_27914_p3() {
    select_ln65_620_fu_27914_p3 = (!icmp_ln1496_452_fu_27900_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_452_fu_27900_p2.read()[0].to_bool())? data_V_data_27_V_dout.read(): kernel_data_V_4_987.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_621_fu_27928_p3() {
    select_ln65_621_fu_27928_p3 = (!icmp_ln1496_453_fu_27922_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_453_fu_27922_p2.read()[0].to_bool())? select_ln65_619_fu_27906_p3.read(): select_ln65_617_fu_27884_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_622_fu_44804_p3() {
    select_ln65_622_fu_44804_p3 = (!icmp_ln1496_454_fu_44798_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_454_fu_44798_p2.read()[0].to_bool())? sext_ln65_27_reg_60501_pp0_iter1_reg.read(): select_ln65_616_reg_60495_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_624_fu_28004_p3() {
    select_ln65_624_fu_28004_p3 = (!icmp_ln1496_28_fu_27994_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_28_fu_27994_p2.read()[0].to_bool())? kernel_data_V_4_92.read(): kernel_data_V_4_28.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_625_fu_28018_p3() {
    select_ln65_625_fu_28018_p3 = (!icmp_ln1496_456_fu_28012_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_456_fu_28012_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_626_fu_28026_p3() {
    select_ln65_626_fu_28026_p3 = (!icmp_ln1496_456_fu_28012_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_456_fu_28012_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_28_q0.read(): kernel_data_V_4_220.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_627_fu_28040_p3() {
    select_ln65_627_fu_28040_p3 = (!icmp_ln1496_457_fu_28034_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_457_fu_28034_p2.read()[0].to_bool())? select_ln65_625_fu_28018_p3.read(): zext_ln65_84_fu_28000_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_628_fu_28096_p3() {
    select_ln65_628_fu_28096_p3 = (!icmp_ln1496_458_fu_28090_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_458_fu_28090_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_629_fu_28104_p3() {
    select_ln65_629_fu_28104_p3 = (!icmp_ln1496_458_fu_28090_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_458_fu_28090_p2.read()[0].to_bool())? kernel_data_V_4_348.read(): kernel_data_V_4_284.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_62_fu_17588_p3() {
    select_ln65_62_fu_17588_p3 = (!icmp_ln1496_86_fu_17582_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_86_fu_17582_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_630_fu_28118_p3() {
    select_ln65_630_fu_28118_p3 = (!icmp_ln1496_459_fu_28112_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_459_fu_28112_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_631_fu_28126_p3() {
    select_ln65_631_fu_28126_p3 = (!icmp_ln1496_459_fu_28112_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_459_fu_28112_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_28_q0.read(): kernel_data_V_4_476.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_632_fu_28140_p3() {
    select_ln65_632_fu_28140_p3 = (!icmp_ln1496_460_fu_28134_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_460_fu_28134_p2.read()[0].to_bool())? select_ln65_630_fu_28118_p3.read(): select_ln65_628_fu_28096_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_633_fu_44841_p3() {
    select_ln65_633_fu_44841_p3 = (!icmp_ln1496_461_fu_44835_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_461_fu_44835_p2.read()[0].to_bool())? select_ln65_632_reg_60559_pp0_iter1_reg.read(): zext_ln65_85_fu_44832_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_634_fu_28196_p3() {
    select_ln65_634_fu_28196_p3 = (!icmp_ln1496_462_fu_28190_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_462_fu_28190_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_635_fu_28204_p3() {
    select_ln65_635_fu_28204_p3 = (!icmp_ln1496_462_fu_28190_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_462_fu_28190_p2.read()[0].to_bool())? kernel_data_V_4_668.read(): kernel_data_V_4_540.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_636_fu_28218_p3() {
    select_ln65_636_fu_28218_p3 = (!icmp_ln1496_463_fu_28212_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_463_fu_28212_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_637_fu_28226_p3() {
    select_ln65_637_fu_28226_p3 = (!icmp_ln1496_463_fu_28212_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_463_fu_28212_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_28_q0.read(): kernel_data_V_4_732.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_638_fu_28240_p3() {
    select_ln65_638_fu_28240_p3 = (!icmp_ln1496_464_fu_28234_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_464_fu_28234_p2.read()[0].to_bool())? select_ln65_636_fu_28218_p3.read(): select_ln65_634_fu_28196_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_639_fu_28292_p3() {
    select_ln65_639_fu_28292_p3 = (!icmp_ln1496_465_fu_28286_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_465_fu_28286_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_63_fu_17596_p3() {
    select_ln65_63_fu_17596_p3 = (!icmp_ln1496_86_fu_17582_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_86_fu_17582_p2.read()[0].to_bool())? kernel_data_V_4_578.read(): kernel_data_V_4_514.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_640_fu_28300_p3() {
    select_ln65_640_fu_28300_p3 = (!icmp_ln1496_465_fu_28286_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_465_fu_28286_p2.read()[0].to_bool())? kernel_data_V_4_924.read(): kernel_data_V_4_796.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_641_fu_28314_p3() {
    select_ln65_641_fu_28314_p3 = (!icmp_ln1496_466_fu_28308_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_466_fu_28308_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_642_fu_28322_p3() {
    select_ln65_642_fu_28322_p3 = (!icmp_ln1496_466_fu_28308_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_466_fu_28308_p2.read()[0].to_bool())? data_V_data_28_V_dout.read(): kernel_data_V_4_988.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_643_fu_28336_p3() {
    select_ln65_643_fu_28336_p3 = (!icmp_ln1496_467_fu_28330_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_467_fu_28330_p2.read()[0].to_bool())? select_ln65_641_fu_28314_p3.read(): select_ln65_639_fu_28292_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_644_fu_44880_p3() {
    select_ln65_644_fu_44880_p3 = (!icmp_ln1496_468_fu_44874_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_468_fu_44874_p2.read()[0].to_bool())? sext_ln65_28_reg_60575_pp0_iter1_reg.read(): select_ln65_638_reg_60569_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_646_fu_28412_p3() {
    select_ln65_646_fu_28412_p3 = (!icmp_ln1496_29_fu_28402_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_29_fu_28402_p2.read()[0].to_bool())? kernel_data_V_4_93.read(): kernel_data_V_4_29.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_647_fu_28426_p3() {
    select_ln65_647_fu_28426_p3 = (!icmp_ln1496_470_fu_28420_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_470_fu_28420_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_648_fu_28434_p3() {
    select_ln65_648_fu_28434_p3 = (!icmp_ln1496_470_fu_28420_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_470_fu_28420_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_29_q0.read(): kernel_data_V_4_221.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_649_fu_28448_p3() {
    select_ln65_649_fu_28448_p3 = (!icmp_ln1496_471_fu_28442_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_471_fu_28442_p2.read()[0].to_bool())? select_ln65_647_fu_28426_p3.read(): zext_ln65_87_fu_28408_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_64_fu_17610_p3() {
    select_ln65_64_fu_17610_p3 = (!icmp_ln1496_87_fu_17604_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_87_fu_17604_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_650_fu_28504_p3() {
    select_ln65_650_fu_28504_p3 = (!icmp_ln1496_472_fu_28498_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_472_fu_28498_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_651_fu_28512_p3() {
    select_ln65_651_fu_28512_p3 = (!icmp_ln1496_472_fu_28498_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_472_fu_28498_p2.read()[0].to_bool())? kernel_data_V_4_349.read(): kernel_data_V_4_285.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_652_fu_28526_p3() {
    select_ln65_652_fu_28526_p3 = (!icmp_ln1496_473_fu_28520_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_473_fu_28520_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_653_fu_28534_p3() {
    select_ln65_653_fu_28534_p3 = (!icmp_ln1496_473_fu_28520_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_473_fu_28520_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_29_q0.read(): kernel_data_V_4_477.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_654_fu_28548_p3() {
    select_ln65_654_fu_28548_p3 = (!icmp_ln1496_474_fu_28542_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_474_fu_28542_p2.read()[0].to_bool())? select_ln65_652_fu_28526_p3.read(): select_ln65_650_fu_28504_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_655_fu_44917_p3() {
    select_ln65_655_fu_44917_p3 = (!icmp_ln1496_475_fu_44911_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_475_fu_44911_p2.read()[0].to_bool())? select_ln65_654_reg_60633_pp0_iter1_reg.read(): zext_ln65_88_fu_44908_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_656_fu_28604_p3() {
    select_ln65_656_fu_28604_p3 = (!icmp_ln1496_476_fu_28598_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_476_fu_28598_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_657_fu_28612_p3() {
    select_ln65_657_fu_28612_p3 = (!icmp_ln1496_476_fu_28598_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_476_fu_28598_p2.read()[0].to_bool())? kernel_data_V_4_669.read(): kernel_data_V_4_541.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_658_fu_28626_p3() {
    select_ln65_658_fu_28626_p3 = (!icmp_ln1496_477_fu_28620_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_477_fu_28620_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_659_fu_28634_p3() {
    select_ln65_659_fu_28634_p3 = (!icmp_ln1496_477_fu_28620_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_477_fu_28620_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_29_q0.read(): kernel_data_V_4_733.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_65_fu_17618_p3() {
    select_ln65_65_fu_17618_p3 = (!icmp_ln1496_87_fu_17604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_87_fu_17604_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_2_q0.read(): kernel_data_V_4_706.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_660_fu_28648_p3() {
    select_ln65_660_fu_28648_p3 = (!icmp_ln1496_478_fu_28642_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_478_fu_28642_p2.read()[0].to_bool())? select_ln65_658_fu_28626_p3.read(): select_ln65_656_fu_28604_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_661_fu_28700_p3() {
    select_ln65_661_fu_28700_p3 = (!icmp_ln1496_479_fu_28694_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_479_fu_28694_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_662_fu_28708_p3() {
    select_ln65_662_fu_28708_p3 = (!icmp_ln1496_479_fu_28694_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_479_fu_28694_p2.read()[0].to_bool())? kernel_data_V_4_925.read(): kernel_data_V_4_797.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_663_fu_28722_p3() {
    select_ln65_663_fu_28722_p3 = (!icmp_ln1496_480_fu_28716_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_480_fu_28716_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_664_fu_28730_p3() {
    select_ln65_664_fu_28730_p3 = (!icmp_ln1496_480_fu_28716_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_480_fu_28716_p2.read()[0].to_bool())? data_V_data_29_V_dout.read(): kernel_data_V_4_989.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_665_fu_28744_p3() {
    select_ln65_665_fu_28744_p3 = (!icmp_ln1496_481_fu_28738_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_481_fu_28738_p2.read()[0].to_bool())? select_ln65_663_fu_28722_p3.read(): select_ln65_661_fu_28700_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_666_fu_44956_p3() {
    select_ln65_666_fu_44956_p3 = (!icmp_ln1496_482_fu_44950_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_482_fu_44950_p2.read()[0].to_bool())? sext_ln65_29_reg_60649_pp0_iter1_reg.read(): select_ln65_660_reg_60643_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_668_fu_28820_p3() {
    select_ln65_668_fu_28820_p3 = (!icmp_ln1496_30_fu_28810_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_30_fu_28810_p2.read()[0].to_bool())? kernel_data_V_4_94.read(): kernel_data_V_4_30.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_669_fu_28834_p3() {
    select_ln65_669_fu_28834_p3 = (!icmp_ln1496_484_fu_28828_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_484_fu_28828_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_66_fu_17632_p3() {
    select_ln65_66_fu_17632_p3 = (!icmp_ln1496_88_fu_17626_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_88_fu_17626_p2.read()[0].to_bool())? select_ln65_64_fu_17610_p3.read(): select_ln65_62_fu_17588_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_670_fu_28842_p3() {
    select_ln65_670_fu_28842_p3 = (!icmp_ln1496_484_fu_28828_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_484_fu_28828_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_30_q0.read(): kernel_data_V_4_222.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_671_fu_28856_p3() {
    select_ln65_671_fu_28856_p3 = (!icmp_ln1496_485_fu_28850_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_485_fu_28850_p2.read()[0].to_bool())? select_ln65_669_fu_28834_p3.read(): zext_ln65_90_fu_28816_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_672_fu_28912_p3() {
    select_ln65_672_fu_28912_p3 = (!icmp_ln1496_486_fu_28906_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_486_fu_28906_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_673_fu_28920_p3() {
    select_ln65_673_fu_28920_p3 = (!icmp_ln1496_486_fu_28906_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_486_fu_28906_p2.read()[0].to_bool())? kernel_data_V_4_350.read(): kernel_data_V_4_286.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_674_fu_28934_p3() {
    select_ln65_674_fu_28934_p3 = (!icmp_ln1496_487_fu_28928_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_487_fu_28928_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_675_fu_28942_p3() {
    select_ln65_675_fu_28942_p3 = (!icmp_ln1496_487_fu_28928_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_487_fu_28928_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_30_q0.read(): kernel_data_V_4_478.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_676_fu_28956_p3() {
    select_ln65_676_fu_28956_p3 = (!icmp_ln1496_488_fu_28950_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_488_fu_28950_p2.read()[0].to_bool())? select_ln65_674_fu_28934_p3.read(): select_ln65_672_fu_28912_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_677_fu_44993_p3() {
    select_ln65_677_fu_44993_p3 = (!icmp_ln1496_489_fu_44987_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_489_fu_44987_p2.read()[0].to_bool())? select_ln65_676_reg_60707_pp0_iter1_reg.read(): zext_ln65_91_fu_44984_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_678_fu_29012_p3() {
    select_ln65_678_fu_29012_p3 = (!icmp_ln1496_490_fu_29006_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_490_fu_29006_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_679_fu_29020_p3() {
    select_ln65_679_fu_29020_p3 = (!icmp_ln1496_490_fu_29006_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_490_fu_29006_p2.read()[0].to_bool())? kernel_data_V_4_670.read(): kernel_data_V_4_542.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_67_fu_17684_p3() {
    select_ln65_67_fu_17684_p3 = (!icmp_ln1496_89_fu_17678_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_89_fu_17678_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_680_fu_29034_p3() {
    select_ln65_680_fu_29034_p3 = (!icmp_ln1496_491_fu_29028_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_491_fu_29028_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_681_fu_29042_p3() {
    select_ln65_681_fu_29042_p3 = (!icmp_ln1496_491_fu_29028_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_491_fu_29028_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_30_q0.read(): kernel_data_V_4_734.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_682_fu_29056_p3() {
    select_ln65_682_fu_29056_p3 = (!icmp_ln1496_492_fu_29050_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_492_fu_29050_p2.read()[0].to_bool())? select_ln65_680_fu_29034_p3.read(): select_ln65_678_fu_29012_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_683_fu_29108_p3() {
    select_ln65_683_fu_29108_p3 = (!icmp_ln1496_493_fu_29102_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_493_fu_29102_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_684_fu_29116_p3() {
    select_ln65_684_fu_29116_p3 = (!icmp_ln1496_493_fu_29102_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_493_fu_29102_p2.read()[0].to_bool())? kernel_data_V_4_926.read(): kernel_data_V_4_798.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_685_fu_29130_p3() {
    select_ln65_685_fu_29130_p3 = (!icmp_ln1496_494_fu_29124_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_494_fu_29124_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_686_fu_29138_p3() {
    select_ln65_686_fu_29138_p3 = (!icmp_ln1496_494_fu_29124_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_494_fu_29124_p2.read()[0].to_bool())? data_V_data_30_V_dout.read(): kernel_data_V_4_990.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_687_fu_29152_p3() {
    select_ln65_687_fu_29152_p3 = (!icmp_ln1496_495_fu_29146_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_495_fu_29146_p2.read()[0].to_bool())? select_ln65_685_fu_29130_p3.read(): select_ln65_683_fu_29108_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_688_fu_45032_p3() {
    select_ln65_688_fu_45032_p3 = (!icmp_ln1496_496_fu_45026_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_496_fu_45026_p2.read()[0].to_bool())? sext_ln65_30_reg_60723_pp0_iter1_reg.read(): select_ln65_682_reg_60717_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_68_fu_17692_p3() {
    select_ln65_68_fu_17692_p3 = (!icmp_ln1496_89_fu_17678_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_89_fu_17678_p2.read()[0].to_bool())? kernel_data_V_4_898.read(): kernel_data_V_4_770.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_690_fu_29228_p3() {
    select_ln65_690_fu_29228_p3 = (!icmp_ln1496_31_fu_29218_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_31_fu_29218_p2.read()[0].to_bool())? kernel_data_V_4_95.read(): kernel_data_V_4_31.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_691_fu_29242_p3() {
    select_ln65_691_fu_29242_p3 = (!icmp_ln1496_498_fu_29236_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_498_fu_29236_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_692_fu_29250_p3() {
    select_ln65_692_fu_29250_p3 = (!icmp_ln1496_498_fu_29236_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_498_fu_29236_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_31_q0.read(): kernel_data_V_4_223.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_693_fu_29264_p3() {
    select_ln65_693_fu_29264_p3 = (!icmp_ln1496_499_fu_29258_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_499_fu_29258_p2.read()[0].to_bool())? select_ln65_691_fu_29242_p3.read(): zext_ln65_93_fu_29224_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_694_fu_29320_p3() {
    select_ln65_694_fu_29320_p3 = (!icmp_ln1496_500_fu_29314_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_500_fu_29314_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_695_fu_29328_p3() {
    select_ln65_695_fu_29328_p3 = (!icmp_ln1496_500_fu_29314_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_500_fu_29314_p2.read()[0].to_bool())? kernel_data_V_4_351.read(): kernel_data_V_4_287.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_696_fu_29342_p3() {
    select_ln65_696_fu_29342_p3 = (!icmp_ln1496_501_fu_29336_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_501_fu_29336_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_697_fu_29350_p3() {
    select_ln65_697_fu_29350_p3 = (!icmp_ln1496_501_fu_29336_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_501_fu_29336_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_31_q0.read(): kernel_data_V_4_479.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_698_fu_29364_p3() {
    select_ln65_698_fu_29364_p3 = (!icmp_ln1496_502_fu_29358_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_502_fu_29358_p2.read()[0].to_bool())? select_ln65_696_fu_29342_p3.read(): select_ln65_694_fu_29320_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_699_fu_45069_p3() {
    select_ln65_699_fu_45069_p3 = (!icmp_ln1496_503_fu_45063_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_503_fu_45063_p2.read()[0].to_bool())? select_ln65_698_reg_60781_pp0_iter1_reg.read(): zext_ln65_94_fu_45060_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_69_fu_17706_p3() {
    select_ln65_69_fu_17706_p3 = (!icmp_ln1496_90_fu_17700_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_90_fu_17700_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_700_fu_29420_p3() {
    select_ln65_700_fu_29420_p3 = (!icmp_ln1496_504_fu_29414_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_504_fu_29414_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_701_fu_29428_p3() {
    select_ln65_701_fu_29428_p3 = (!icmp_ln1496_504_fu_29414_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_504_fu_29414_p2.read()[0].to_bool())? kernel_data_V_4_671.read(): kernel_data_V_4_543.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_702_fu_29442_p3() {
    select_ln65_702_fu_29442_p3 = (!icmp_ln1496_505_fu_29436_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_505_fu_29436_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_703_fu_29450_p3() {
    select_ln65_703_fu_29450_p3 = (!icmp_ln1496_505_fu_29436_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_505_fu_29436_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_31_q0.read(): kernel_data_V_4_735.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_704_fu_29464_p3() {
    select_ln65_704_fu_29464_p3 = (!icmp_ln1496_506_fu_29458_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_506_fu_29458_p2.read()[0].to_bool())? select_ln65_702_fu_29442_p3.read(): select_ln65_700_fu_29420_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_705_fu_29516_p3() {
    select_ln65_705_fu_29516_p3 = (!icmp_ln1496_507_fu_29510_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_507_fu_29510_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_706_fu_29524_p3() {
    select_ln65_706_fu_29524_p3 = (!icmp_ln1496_507_fu_29510_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_507_fu_29510_p2.read()[0].to_bool())? kernel_data_V_4_927.read(): kernel_data_V_4_799.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_707_fu_29538_p3() {
    select_ln65_707_fu_29538_p3 = (!icmp_ln1496_508_fu_29532_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_508_fu_29532_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_708_fu_29546_p3() {
    select_ln65_708_fu_29546_p3 = (!icmp_ln1496_508_fu_29532_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_508_fu_29532_p2.read()[0].to_bool())? data_V_data_31_V_dout.read(): kernel_data_V_4_991.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_709_fu_29560_p3() {
    select_ln65_709_fu_29560_p3 = (!icmp_ln1496_509_fu_29554_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_509_fu_29554_p2.read()[0].to_bool())? select_ln65_707_fu_29538_p3.read(): select_ln65_705_fu_29516_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_70_fu_17714_p3() {
    select_ln65_70_fu_17714_p3 = (!icmp_ln1496_90_fu_17700_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_90_fu_17700_p2.read()[0].to_bool())? data_V_data_2_V_dout.read(): kernel_data_V_4_962.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_710_fu_45108_p3() {
    select_ln65_710_fu_45108_p3 = (!icmp_ln1496_510_fu_45102_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_510_fu_45102_p2.read()[0].to_bool())? sext_ln65_31_reg_60797_pp0_iter1_reg.read(): select_ln65_704_reg_60791_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_712_fu_29636_p3() {
    select_ln65_712_fu_29636_p3 = (!icmp_ln1496_32_fu_29626_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_32_fu_29626_p2.read()[0].to_bool())? kernel_data_V_4_96.read(): kernel_data_V_4_32.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_713_fu_29650_p3() {
    select_ln65_713_fu_29650_p3 = (!icmp_ln1496_512_fu_29644_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_512_fu_29644_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_714_fu_29658_p3() {
    select_ln65_714_fu_29658_p3 = (!icmp_ln1496_512_fu_29644_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_512_fu_29644_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_32_q0.read(): kernel_data_V_4_224.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_715_fu_29672_p3() {
    select_ln65_715_fu_29672_p3 = (!icmp_ln1496_513_fu_29666_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_513_fu_29666_p2.read()[0].to_bool())? select_ln65_713_fu_29650_p3.read(): zext_ln65_96_fu_29632_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_716_fu_29728_p3() {
    select_ln65_716_fu_29728_p3 = (!icmp_ln1496_514_fu_29722_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_514_fu_29722_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_717_fu_29736_p3() {
    select_ln65_717_fu_29736_p3 = (!icmp_ln1496_514_fu_29722_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_514_fu_29722_p2.read()[0].to_bool())? kernel_data_V_4_352.read(): kernel_data_V_4_288.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_718_fu_29750_p3() {
    select_ln65_718_fu_29750_p3 = (!icmp_ln1496_515_fu_29744_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_515_fu_29744_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_719_fu_29758_p3() {
    select_ln65_719_fu_29758_p3 = (!icmp_ln1496_515_fu_29744_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_515_fu_29744_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_32_q0.read(): kernel_data_V_4_480.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_71_fu_17728_p3() {
    select_ln65_71_fu_17728_p3 = (!icmp_ln1496_91_fu_17722_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_91_fu_17722_p2.read()[0].to_bool())? select_ln65_69_fu_17706_p3.read(): select_ln65_67_fu_17684_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_720_fu_29772_p3() {
    select_ln65_720_fu_29772_p3 = (!icmp_ln1496_516_fu_29766_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_516_fu_29766_p2.read()[0].to_bool())? select_ln65_718_fu_29750_p3.read(): select_ln65_716_fu_29728_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_721_fu_45145_p3() {
    select_ln65_721_fu_45145_p3 = (!icmp_ln1496_517_fu_45139_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_517_fu_45139_p2.read()[0].to_bool())? select_ln65_720_reg_60855_pp0_iter1_reg.read(): zext_ln65_97_fu_45136_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_722_fu_29828_p3() {
    select_ln65_722_fu_29828_p3 = (!icmp_ln1496_518_fu_29822_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_518_fu_29822_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_723_fu_29836_p3() {
    select_ln65_723_fu_29836_p3 = (!icmp_ln1496_518_fu_29822_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_518_fu_29822_p2.read()[0].to_bool())? kernel_data_V_4_672.read(): kernel_data_V_4_544.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_724_fu_29850_p3() {
    select_ln65_724_fu_29850_p3 = (!icmp_ln1496_519_fu_29844_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_519_fu_29844_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_725_fu_29858_p3() {
    select_ln65_725_fu_29858_p3 = (!icmp_ln1496_519_fu_29844_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_519_fu_29844_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_32_q0.read(): kernel_data_V_4_736.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_726_fu_29872_p3() {
    select_ln65_726_fu_29872_p3 = (!icmp_ln1496_520_fu_29866_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_520_fu_29866_p2.read()[0].to_bool())? select_ln65_724_fu_29850_p3.read(): select_ln65_722_fu_29828_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_727_fu_29924_p3() {
    select_ln65_727_fu_29924_p3 = (!icmp_ln1496_521_fu_29918_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_521_fu_29918_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_728_fu_29932_p3() {
    select_ln65_728_fu_29932_p3 = (!icmp_ln1496_521_fu_29918_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_521_fu_29918_p2.read()[0].to_bool())? kernel_data_V_4_928.read(): kernel_data_V_4_800.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_729_fu_29946_p3() {
    select_ln65_729_fu_29946_p3 = (!icmp_ln1496_522_fu_29940_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_522_fu_29940_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_72_fu_42904_p3() {
    select_ln65_72_fu_42904_p3 = (!icmp_ln1496_92_fu_42898_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_92_fu_42898_p2.read()[0].to_bool())? sext_ln65_2_reg_58546_pp0_iter1_reg.read(): select_ln65_66_reg_58540_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_730_fu_29954_p3() {
    select_ln65_730_fu_29954_p3 = (!icmp_ln1496_522_fu_29940_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_522_fu_29940_p2.read()[0].to_bool())? data_V_data_32_V_dout.read(): kernel_data_V_4_992.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_731_fu_29968_p3() {
    select_ln65_731_fu_29968_p3 = (!icmp_ln1496_523_fu_29962_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_523_fu_29962_p2.read()[0].to_bool())? select_ln65_729_fu_29946_p3.read(): select_ln65_727_fu_29924_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_732_fu_45184_p3() {
    select_ln65_732_fu_45184_p3 = (!icmp_ln1496_524_fu_45178_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_524_fu_45178_p2.read()[0].to_bool())? sext_ln65_32_reg_60871_pp0_iter1_reg.read(): select_ln65_726_reg_60865_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_734_fu_30044_p3() {
    select_ln65_734_fu_30044_p3 = (!icmp_ln1496_33_fu_30034_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_33_fu_30034_p2.read()[0].to_bool())? kernel_data_V_4_97.read(): kernel_data_V_4_33.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_735_fu_30058_p3() {
    select_ln65_735_fu_30058_p3 = (!icmp_ln1496_526_fu_30052_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_526_fu_30052_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_736_fu_30066_p3() {
    select_ln65_736_fu_30066_p3 = (!icmp_ln1496_526_fu_30052_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_526_fu_30052_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_33_q0.read(): kernel_data_V_4_225.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_737_fu_30080_p3() {
    select_ln65_737_fu_30080_p3 = (!icmp_ln1496_527_fu_30074_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_527_fu_30074_p2.read()[0].to_bool())? select_ln65_735_fu_30058_p3.read(): zext_ln65_99_fu_30040_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_738_fu_30136_p3() {
    select_ln65_738_fu_30136_p3 = (!icmp_ln1496_528_fu_30130_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_528_fu_30130_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_739_fu_30144_p3() {
    select_ln65_739_fu_30144_p3 = (!icmp_ln1496_528_fu_30130_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_528_fu_30130_p2.read()[0].to_bool())? kernel_data_V_4_353.read(): kernel_data_V_4_289.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_740_fu_30158_p3() {
    select_ln65_740_fu_30158_p3 = (!icmp_ln1496_529_fu_30152_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_529_fu_30152_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_741_fu_30166_p3() {
    select_ln65_741_fu_30166_p3 = (!icmp_ln1496_529_fu_30152_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_529_fu_30152_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_33_q0.read(): kernel_data_V_4_481.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_742_fu_30180_p3() {
    select_ln65_742_fu_30180_p3 = (!icmp_ln1496_530_fu_30174_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_530_fu_30174_p2.read()[0].to_bool())? select_ln65_740_fu_30158_p3.read(): select_ln65_738_fu_30136_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_743_fu_45221_p3() {
    select_ln65_743_fu_45221_p3 = (!icmp_ln1496_531_fu_45215_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_531_fu_45215_p2.read()[0].to_bool())? select_ln65_742_reg_60929_pp0_iter1_reg.read(): zext_ln65_100_fu_45212_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_744_fu_30236_p3() {
    select_ln65_744_fu_30236_p3 = (!icmp_ln1496_532_fu_30230_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_532_fu_30230_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_745_fu_30244_p3() {
    select_ln65_745_fu_30244_p3 = (!icmp_ln1496_532_fu_30230_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_532_fu_30230_p2.read()[0].to_bool())? kernel_data_V_4_673.read(): kernel_data_V_4_545.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_746_fu_30258_p3() {
    select_ln65_746_fu_30258_p3 = (!icmp_ln1496_533_fu_30252_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_533_fu_30252_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_747_fu_30266_p3() {
    select_ln65_747_fu_30266_p3 = (!icmp_ln1496_533_fu_30252_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_533_fu_30252_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_33_q0.read(): kernel_data_V_4_737.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_748_fu_30280_p3() {
    select_ln65_748_fu_30280_p3 = (!icmp_ln1496_534_fu_30274_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_534_fu_30274_p2.read()[0].to_bool())? select_ln65_746_fu_30258_p3.read(): select_ln65_744_fu_30236_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_749_fu_30332_p3() {
    select_ln65_749_fu_30332_p3 = (!icmp_ln1496_535_fu_30326_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_535_fu_30326_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_74_fu_17804_p3() {
    select_ln65_74_fu_17804_p3 = (!icmp_ln1496_94_fu_17794_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_94_fu_17794_p2.read()[0].to_bool())? kernel_data_V_4_67.read(): kernel_data_V_4_3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_750_fu_30340_p3() {
    select_ln65_750_fu_30340_p3 = (!icmp_ln1496_535_fu_30326_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_535_fu_30326_p2.read()[0].to_bool())? kernel_data_V_4_929.read(): kernel_data_V_4_801.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_751_fu_30354_p3() {
    select_ln65_751_fu_30354_p3 = (!icmp_ln1496_536_fu_30348_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_536_fu_30348_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_752_fu_30362_p3() {
    select_ln65_752_fu_30362_p3 = (!icmp_ln1496_536_fu_30348_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_536_fu_30348_p2.read()[0].to_bool())? data_V_data_33_V_dout.read(): kernel_data_V_4_993.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_753_fu_30376_p3() {
    select_ln65_753_fu_30376_p3 = (!icmp_ln1496_537_fu_30370_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_537_fu_30370_p2.read()[0].to_bool())? select_ln65_751_fu_30354_p3.read(): select_ln65_749_fu_30332_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_754_fu_45260_p3() {
    select_ln65_754_fu_45260_p3 = (!icmp_ln1496_538_fu_45254_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_538_fu_45254_p2.read()[0].to_bool())? sext_ln65_33_reg_60945_pp0_iter1_reg.read(): select_ln65_748_reg_60939_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_756_fu_30452_p3() {
    select_ln65_756_fu_30452_p3 = (!icmp_ln1496_34_fu_30442_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_34_fu_30442_p2.read()[0].to_bool())? kernel_data_V_4_98.read(): kernel_data_V_4_34.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_757_fu_30466_p3() {
    select_ln65_757_fu_30466_p3 = (!icmp_ln1496_540_fu_30460_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_540_fu_30460_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_758_fu_30474_p3() {
    select_ln65_758_fu_30474_p3 = (!icmp_ln1496_540_fu_30460_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_540_fu_30460_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_34_q0.read(): kernel_data_V_4_226.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_759_fu_30488_p3() {
    select_ln65_759_fu_30488_p3 = (!icmp_ln1496_541_fu_30482_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_541_fu_30482_p2.read()[0].to_bool())? select_ln65_757_fu_30466_p3.read(): zext_ln65_102_fu_30448_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_75_fu_17818_p3() {
    select_ln65_75_fu_17818_p3 = (!icmp_ln1496_95_fu_17812_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_95_fu_17812_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_760_fu_30544_p3() {
    select_ln65_760_fu_30544_p3 = (!icmp_ln1496_542_fu_30538_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_542_fu_30538_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_761_fu_30552_p3() {
    select_ln65_761_fu_30552_p3 = (!icmp_ln1496_542_fu_30538_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_542_fu_30538_p2.read()[0].to_bool())? kernel_data_V_4_354.read(): kernel_data_V_4_290.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_762_fu_30566_p3() {
    select_ln65_762_fu_30566_p3 = (!icmp_ln1496_543_fu_30560_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_543_fu_30560_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_763_fu_30574_p3() {
    select_ln65_763_fu_30574_p3 = (!icmp_ln1496_543_fu_30560_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_543_fu_30560_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_34_q0.read(): kernel_data_V_4_482.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_764_fu_30588_p3() {
    select_ln65_764_fu_30588_p3 = (!icmp_ln1496_544_fu_30582_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_544_fu_30582_p2.read()[0].to_bool())? select_ln65_762_fu_30566_p3.read(): select_ln65_760_fu_30544_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_765_fu_45297_p3() {
    select_ln65_765_fu_45297_p3 = (!icmp_ln1496_545_fu_45291_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_545_fu_45291_p2.read()[0].to_bool())? select_ln65_764_reg_61003_pp0_iter1_reg.read(): zext_ln65_103_fu_45288_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_766_fu_30644_p3() {
    select_ln65_766_fu_30644_p3 = (!icmp_ln1496_546_fu_30638_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_546_fu_30638_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_767_fu_30652_p3() {
    select_ln65_767_fu_30652_p3 = (!icmp_ln1496_546_fu_30638_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_546_fu_30638_p2.read()[0].to_bool())? kernel_data_V_4_674.read(): kernel_data_V_4_546.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_768_fu_30666_p3() {
    select_ln65_768_fu_30666_p3 = (!icmp_ln1496_547_fu_30660_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_547_fu_30660_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_769_fu_30674_p3() {
    select_ln65_769_fu_30674_p3 = (!icmp_ln1496_547_fu_30660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_547_fu_30660_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_34_q0.read(): kernel_data_V_4_738.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_76_fu_17826_p3() {
    select_ln65_76_fu_17826_p3 = (!icmp_ln1496_95_fu_17812_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_95_fu_17812_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_3_q0.read(): kernel_data_V_4_195.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_770_fu_30688_p3() {
    select_ln65_770_fu_30688_p3 = (!icmp_ln1496_548_fu_30682_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_548_fu_30682_p2.read()[0].to_bool())? select_ln65_768_fu_30666_p3.read(): select_ln65_766_fu_30644_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_771_fu_30740_p3() {
    select_ln65_771_fu_30740_p3 = (!icmp_ln1496_549_fu_30734_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_549_fu_30734_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_772_fu_30748_p3() {
    select_ln65_772_fu_30748_p3 = (!icmp_ln1496_549_fu_30734_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_549_fu_30734_p2.read()[0].to_bool())? kernel_data_V_4_930.read(): kernel_data_V_4_802.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_773_fu_30762_p3() {
    select_ln65_773_fu_30762_p3 = (!icmp_ln1496_550_fu_30756_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_550_fu_30756_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_774_fu_30770_p3() {
    select_ln65_774_fu_30770_p3 = (!icmp_ln1496_550_fu_30756_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_550_fu_30756_p2.read()[0].to_bool())? data_V_data_34_V_dout.read(): kernel_data_V_4_994.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_775_fu_30784_p3() {
    select_ln65_775_fu_30784_p3 = (!icmp_ln1496_551_fu_30778_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_551_fu_30778_p2.read()[0].to_bool())? select_ln65_773_fu_30762_p3.read(): select_ln65_771_fu_30740_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_776_fu_45336_p3() {
    select_ln65_776_fu_45336_p3 = (!icmp_ln1496_552_fu_45330_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_552_fu_45330_p2.read()[0].to_bool())? sext_ln65_34_reg_61019_pp0_iter1_reg.read(): select_ln65_770_reg_61013_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_778_fu_30860_p3() {
    select_ln65_778_fu_30860_p3 = (!icmp_ln1496_35_fu_30850_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_35_fu_30850_p2.read()[0].to_bool())? kernel_data_V_4_99.read(): kernel_data_V_4_35.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_779_fu_30874_p3() {
    select_ln65_779_fu_30874_p3 = (!icmp_ln1496_554_fu_30868_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_554_fu_30868_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_77_fu_17840_p3() {
    select_ln65_77_fu_17840_p3 = (!icmp_ln1496_96_fu_17834_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_96_fu_17834_p2.read()[0].to_bool())? select_ln65_75_fu_17818_p3.read(): zext_ln65_9_fu_17800_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_780_fu_30882_p3() {
    select_ln65_780_fu_30882_p3 = (!icmp_ln1496_554_fu_30868_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_554_fu_30868_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_35_q0.read(): kernel_data_V_4_227.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_781_fu_30896_p3() {
    select_ln65_781_fu_30896_p3 = (!icmp_ln1496_555_fu_30890_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_555_fu_30890_p2.read()[0].to_bool())? select_ln65_779_fu_30874_p3.read(): zext_ln65_105_fu_30856_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_782_fu_30952_p3() {
    select_ln65_782_fu_30952_p3 = (!icmp_ln1496_556_fu_30946_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_556_fu_30946_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_783_fu_30960_p3() {
    select_ln65_783_fu_30960_p3 = (!icmp_ln1496_556_fu_30946_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_556_fu_30946_p2.read()[0].to_bool())? kernel_data_V_4_355.read(): kernel_data_V_4_291.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_784_fu_30974_p3() {
    select_ln65_784_fu_30974_p3 = (!icmp_ln1496_557_fu_30968_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_557_fu_30968_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_785_fu_30982_p3() {
    select_ln65_785_fu_30982_p3 = (!icmp_ln1496_557_fu_30968_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_557_fu_30968_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_35_q0.read(): kernel_data_V_4_483.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_786_fu_30996_p3() {
    select_ln65_786_fu_30996_p3 = (!icmp_ln1496_558_fu_30990_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_558_fu_30990_p2.read()[0].to_bool())? select_ln65_784_fu_30974_p3.read(): select_ln65_782_fu_30952_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_787_fu_45373_p3() {
    select_ln65_787_fu_45373_p3 = (!icmp_ln1496_559_fu_45367_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_559_fu_45367_p2.read()[0].to_bool())? select_ln65_786_reg_61077_pp0_iter1_reg.read(): zext_ln65_106_fu_45364_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_788_fu_31052_p3() {
    select_ln65_788_fu_31052_p3 = (!icmp_ln1496_560_fu_31046_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_560_fu_31046_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_789_fu_31060_p3() {
    select_ln65_789_fu_31060_p3 = (!icmp_ln1496_560_fu_31046_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_560_fu_31046_p2.read()[0].to_bool())? kernel_data_V_4_675.read(): kernel_data_V_4_547.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_78_fu_17896_p3() {
    select_ln65_78_fu_17896_p3 = (!icmp_ln1496_97_fu_17890_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_97_fu_17890_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_790_fu_31074_p3() {
    select_ln65_790_fu_31074_p3 = (!icmp_ln1496_561_fu_31068_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_561_fu_31068_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_791_fu_31082_p3() {
    select_ln65_791_fu_31082_p3 = (!icmp_ln1496_561_fu_31068_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_561_fu_31068_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_35_q0.read(): kernel_data_V_4_739.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_792_fu_31096_p3() {
    select_ln65_792_fu_31096_p3 = (!icmp_ln1496_562_fu_31090_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_562_fu_31090_p2.read()[0].to_bool())? select_ln65_790_fu_31074_p3.read(): select_ln65_788_fu_31052_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_793_fu_31148_p3() {
    select_ln65_793_fu_31148_p3 = (!icmp_ln1496_563_fu_31142_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_563_fu_31142_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_794_fu_31156_p3() {
    select_ln65_794_fu_31156_p3 = (!icmp_ln1496_563_fu_31142_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_563_fu_31142_p2.read()[0].to_bool())? kernel_data_V_4_931.read(): kernel_data_V_4_803.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_795_fu_31170_p3() {
    select_ln65_795_fu_31170_p3 = (!icmp_ln1496_564_fu_31164_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_564_fu_31164_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_796_fu_31178_p3() {
    select_ln65_796_fu_31178_p3 = (!icmp_ln1496_564_fu_31164_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_564_fu_31164_p2.read()[0].to_bool())? data_V_data_35_V_dout.read(): kernel_data_V_4_995.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_797_fu_31192_p3() {
    select_ln65_797_fu_31192_p3 = (!icmp_ln1496_565_fu_31186_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_565_fu_31186_p2.read()[0].to_bool())? select_ln65_795_fu_31170_p3.read(): select_ln65_793_fu_31148_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_798_fu_45412_p3() {
    select_ln65_798_fu_45412_p3 = (!icmp_ln1496_566_fu_45406_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_566_fu_45406_p2.read()[0].to_bool())? sext_ln65_35_reg_61093_pp0_iter1_reg.read(): select_ln65_792_reg_61087_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_79_fu_17904_p3() {
    select_ln65_79_fu_17904_p3 = (!icmp_ln1496_97_fu_17890_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_97_fu_17890_p2.read()[0].to_bool())? kernel_data_V_4_323.read(): kernel_data_V_4_259.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_800_fu_31268_p3() {
    select_ln65_800_fu_31268_p3 = (!icmp_ln1496_36_fu_31258_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_36_fu_31258_p2.read()[0].to_bool())? kernel_data_V_4_100.read(): kernel_data_V_4_36.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_801_fu_31282_p3() {
    select_ln65_801_fu_31282_p3 = (!icmp_ln1496_568_fu_31276_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_568_fu_31276_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_802_fu_31290_p3() {
    select_ln65_802_fu_31290_p3 = (!icmp_ln1496_568_fu_31276_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_568_fu_31276_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_36_q0.read(): kernel_data_V_4_228.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_803_fu_31304_p3() {
    select_ln65_803_fu_31304_p3 = (!icmp_ln1496_569_fu_31298_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_569_fu_31298_p2.read()[0].to_bool())? select_ln65_801_fu_31282_p3.read(): zext_ln65_108_fu_31264_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_804_fu_31360_p3() {
    select_ln65_804_fu_31360_p3 = (!icmp_ln1496_570_fu_31354_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_570_fu_31354_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_805_fu_31368_p3() {
    select_ln65_805_fu_31368_p3 = (!icmp_ln1496_570_fu_31354_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_570_fu_31354_p2.read()[0].to_bool())? kernel_data_V_4_356.read(): kernel_data_V_4_292.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_806_fu_31382_p3() {
    select_ln65_806_fu_31382_p3 = (!icmp_ln1496_571_fu_31376_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_571_fu_31376_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_807_fu_31390_p3() {
    select_ln65_807_fu_31390_p3 = (!icmp_ln1496_571_fu_31376_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_571_fu_31376_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_36_q0.read(): kernel_data_V_4_484.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_808_fu_31404_p3() {
    select_ln65_808_fu_31404_p3 = (!icmp_ln1496_572_fu_31398_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_572_fu_31398_p2.read()[0].to_bool())? select_ln65_806_fu_31382_p3.read(): select_ln65_804_fu_31360_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_809_fu_45449_p3() {
    select_ln65_809_fu_45449_p3 = (!icmp_ln1496_573_fu_45443_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_573_fu_45443_p2.read()[0].to_bool())? select_ln65_808_reg_61151_pp0_iter1_reg.read(): zext_ln65_109_fu_45440_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_80_fu_17918_p3() {
    select_ln65_80_fu_17918_p3 = (!icmp_ln1496_98_fu_17912_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_98_fu_17912_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_810_fu_31460_p3() {
    select_ln65_810_fu_31460_p3 = (!icmp_ln1496_574_fu_31454_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_574_fu_31454_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_811_fu_31468_p3() {
    select_ln65_811_fu_31468_p3 = (!icmp_ln1496_574_fu_31454_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_574_fu_31454_p2.read()[0].to_bool())? kernel_data_V_4_676.read(): kernel_data_V_4_548.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_812_fu_31482_p3() {
    select_ln65_812_fu_31482_p3 = (!icmp_ln1496_575_fu_31476_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_575_fu_31476_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_813_fu_31490_p3() {
    select_ln65_813_fu_31490_p3 = (!icmp_ln1496_575_fu_31476_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_575_fu_31476_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_36_q0.read(): kernel_data_V_4_740.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_814_fu_31504_p3() {
    select_ln65_814_fu_31504_p3 = (!icmp_ln1496_576_fu_31498_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_576_fu_31498_p2.read()[0].to_bool())? select_ln65_812_fu_31482_p3.read(): select_ln65_810_fu_31460_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_815_fu_31556_p3() {
    select_ln65_815_fu_31556_p3 = (!icmp_ln1496_577_fu_31550_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_577_fu_31550_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_816_fu_31564_p3() {
    select_ln65_816_fu_31564_p3 = (!icmp_ln1496_577_fu_31550_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_577_fu_31550_p2.read()[0].to_bool())? kernel_data_V_4_932.read(): kernel_data_V_4_804.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_817_fu_31578_p3() {
    select_ln65_817_fu_31578_p3 = (!icmp_ln1496_578_fu_31572_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_578_fu_31572_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_818_fu_31586_p3() {
    select_ln65_818_fu_31586_p3 = (!icmp_ln1496_578_fu_31572_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_578_fu_31572_p2.read()[0].to_bool())? data_V_data_36_V_dout.read(): kernel_data_V_4_996.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_819_fu_31600_p3() {
    select_ln65_819_fu_31600_p3 = (!icmp_ln1496_579_fu_31594_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_579_fu_31594_p2.read()[0].to_bool())? select_ln65_817_fu_31578_p3.read(): select_ln65_815_fu_31556_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_81_fu_17926_p3() {
    select_ln65_81_fu_17926_p3 = (!icmp_ln1496_98_fu_17912_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_98_fu_17912_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_3_q0.read(): kernel_data_V_4_451.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_820_fu_45488_p3() {
    select_ln65_820_fu_45488_p3 = (!icmp_ln1496_580_fu_45482_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_580_fu_45482_p2.read()[0].to_bool())? sext_ln65_36_reg_61167_pp0_iter1_reg.read(): select_ln65_814_reg_61161_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_822_fu_31676_p3() {
    select_ln65_822_fu_31676_p3 = (!icmp_ln1496_37_fu_31666_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_37_fu_31666_p2.read()[0].to_bool())? kernel_data_V_4_101.read(): kernel_data_V_4_37.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_823_fu_31690_p3() {
    select_ln65_823_fu_31690_p3 = (!icmp_ln1496_582_fu_31684_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_582_fu_31684_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_824_fu_31698_p3() {
    select_ln65_824_fu_31698_p3 = (!icmp_ln1496_582_fu_31684_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_582_fu_31684_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_37_q0.read(): kernel_data_V_4_229.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_825_fu_31712_p3() {
    select_ln65_825_fu_31712_p3 = (!icmp_ln1496_583_fu_31706_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_583_fu_31706_p2.read()[0].to_bool())? select_ln65_823_fu_31690_p3.read(): zext_ln65_111_fu_31672_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_826_fu_31768_p3() {
    select_ln65_826_fu_31768_p3 = (!icmp_ln1496_584_fu_31762_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_584_fu_31762_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_827_fu_31776_p3() {
    select_ln65_827_fu_31776_p3 = (!icmp_ln1496_584_fu_31762_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_584_fu_31762_p2.read()[0].to_bool())? kernel_data_V_4_357.read(): kernel_data_V_4_293.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_828_fu_31790_p3() {
    select_ln65_828_fu_31790_p3 = (!icmp_ln1496_585_fu_31784_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_585_fu_31784_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_829_fu_31798_p3() {
    select_ln65_829_fu_31798_p3 = (!icmp_ln1496_585_fu_31784_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_585_fu_31784_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_37_q0.read(): kernel_data_V_4_485.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_82_fu_17940_p3() {
    select_ln65_82_fu_17940_p3 = (!icmp_ln1496_99_fu_17934_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_99_fu_17934_p2.read()[0].to_bool())? select_ln65_80_fu_17918_p3.read(): select_ln65_78_fu_17896_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_830_fu_31812_p3() {
    select_ln65_830_fu_31812_p3 = (!icmp_ln1496_586_fu_31806_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_586_fu_31806_p2.read()[0].to_bool())? select_ln65_828_fu_31790_p3.read(): select_ln65_826_fu_31768_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_831_fu_45525_p3() {
    select_ln65_831_fu_45525_p3 = (!icmp_ln1496_587_fu_45519_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_587_fu_45519_p2.read()[0].to_bool())? select_ln65_830_reg_61225_pp0_iter1_reg.read(): zext_ln65_112_fu_45516_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_832_fu_31868_p3() {
    select_ln65_832_fu_31868_p3 = (!icmp_ln1496_588_fu_31862_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_588_fu_31862_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_833_fu_31876_p3() {
    select_ln65_833_fu_31876_p3 = (!icmp_ln1496_588_fu_31862_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_588_fu_31862_p2.read()[0].to_bool())? kernel_data_V_4_677.read(): kernel_data_V_4_549.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_834_fu_31890_p3() {
    select_ln65_834_fu_31890_p3 = (!icmp_ln1496_589_fu_31884_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_589_fu_31884_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_835_fu_31898_p3() {
    select_ln65_835_fu_31898_p3 = (!icmp_ln1496_589_fu_31884_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_589_fu_31884_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_37_q0.read(): kernel_data_V_4_741.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_836_fu_31912_p3() {
    select_ln65_836_fu_31912_p3 = (!icmp_ln1496_590_fu_31906_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_590_fu_31906_p2.read()[0].to_bool())? select_ln65_834_fu_31890_p3.read(): select_ln65_832_fu_31868_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_837_fu_31964_p3() {
    select_ln65_837_fu_31964_p3 = (!icmp_ln1496_591_fu_31958_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_591_fu_31958_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_838_fu_31972_p3() {
    select_ln65_838_fu_31972_p3 = (!icmp_ln1496_591_fu_31958_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_591_fu_31958_p2.read()[0].to_bool())? kernel_data_V_4_933.read(): kernel_data_V_4_805.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_839_fu_31986_p3() {
    select_ln65_839_fu_31986_p3 = (!icmp_ln1496_592_fu_31980_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_592_fu_31980_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_83_fu_42941_p3() {
    select_ln65_83_fu_42941_p3 = (!icmp_ln1496_100_fu_42935_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_100_fu_42935_p2.read()[0].to_bool())? select_ln65_82_reg_58611_pp0_iter1_reg.read(): zext_ln65_10_fu_42932_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_840_fu_31994_p3() {
    select_ln65_840_fu_31994_p3 = (!icmp_ln1496_592_fu_31980_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_592_fu_31980_p2.read()[0].to_bool())? data_V_data_37_V_dout.read(): kernel_data_V_4_997.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_841_fu_32008_p3() {
    select_ln65_841_fu_32008_p3 = (!icmp_ln1496_593_fu_32002_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_593_fu_32002_p2.read()[0].to_bool())? select_ln65_839_fu_31986_p3.read(): select_ln65_837_fu_31964_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_842_fu_45564_p3() {
    select_ln65_842_fu_45564_p3 = (!icmp_ln1496_594_fu_45558_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_594_fu_45558_p2.read()[0].to_bool())? sext_ln65_37_reg_61241_pp0_iter1_reg.read(): select_ln65_836_reg_61235_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_844_fu_32084_p3() {
    select_ln65_844_fu_32084_p3 = (!icmp_ln1496_38_fu_32074_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_38_fu_32074_p2.read()[0].to_bool())? kernel_data_V_4_102.read(): kernel_data_V_4_38.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_845_fu_32098_p3() {
    select_ln65_845_fu_32098_p3 = (!icmp_ln1496_596_fu_32092_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_596_fu_32092_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_846_fu_32106_p3() {
    select_ln65_846_fu_32106_p3 = (!icmp_ln1496_596_fu_32092_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_596_fu_32092_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_38_q0.read(): kernel_data_V_4_230.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_847_fu_32120_p3() {
    select_ln65_847_fu_32120_p3 = (!icmp_ln1496_597_fu_32114_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_597_fu_32114_p2.read()[0].to_bool())? select_ln65_845_fu_32098_p3.read(): zext_ln65_114_fu_32080_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_848_fu_32176_p3() {
    select_ln65_848_fu_32176_p3 = (!icmp_ln1496_598_fu_32170_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_598_fu_32170_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_849_fu_32184_p3() {
    select_ln65_849_fu_32184_p3 = (!icmp_ln1496_598_fu_32170_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_598_fu_32170_p2.read()[0].to_bool())? kernel_data_V_4_358.read(): kernel_data_V_4_294.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_84_fu_17996_p3() {
    select_ln65_84_fu_17996_p3 = (!icmp_ln1496_101_fu_17990_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_101_fu_17990_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_850_fu_32198_p3() {
    select_ln65_850_fu_32198_p3 = (!icmp_ln1496_599_fu_32192_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_599_fu_32192_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_851_fu_32206_p3() {
    select_ln65_851_fu_32206_p3 = (!icmp_ln1496_599_fu_32192_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_599_fu_32192_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_38_q0.read(): kernel_data_V_4_486.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_852_fu_32220_p3() {
    select_ln65_852_fu_32220_p3 = (!icmp_ln1496_600_fu_32214_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_600_fu_32214_p2.read()[0].to_bool())? select_ln65_850_fu_32198_p3.read(): select_ln65_848_fu_32176_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_853_fu_45601_p3() {
    select_ln65_853_fu_45601_p3 = (!icmp_ln1496_601_fu_45595_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_601_fu_45595_p2.read()[0].to_bool())? select_ln65_852_reg_61299_pp0_iter1_reg.read(): zext_ln65_115_fu_45592_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_854_fu_32276_p3() {
    select_ln65_854_fu_32276_p3 = (!icmp_ln1496_602_fu_32270_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_602_fu_32270_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_855_fu_32284_p3() {
    select_ln65_855_fu_32284_p3 = (!icmp_ln1496_602_fu_32270_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_602_fu_32270_p2.read()[0].to_bool())? kernel_data_V_4_678.read(): kernel_data_V_4_550.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_856_fu_32298_p3() {
    select_ln65_856_fu_32298_p3 = (!icmp_ln1496_603_fu_32292_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_603_fu_32292_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_857_fu_32306_p3() {
    select_ln65_857_fu_32306_p3 = (!icmp_ln1496_603_fu_32292_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_603_fu_32292_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_38_q0.read(): kernel_data_V_4_742.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_858_fu_32320_p3() {
    select_ln65_858_fu_32320_p3 = (!icmp_ln1496_604_fu_32314_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_604_fu_32314_p2.read()[0].to_bool())? select_ln65_856_fu_32298_p3.read(): select_ln65_854_fu_32276_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_859_fu_32372_p3() {
    select_ln65_859_fu_32372_p3 = (!icmp_ln1496_605_fu_32366_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_605_fu_32366_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_85_fu_18004_p3() {
    select_ln65_85_fu_18004_p3 = (!icmp_ln1496_101_fu_17990_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_101_fu_17990_p2.read()[0].to_bool())? kernel_data_V_4_579.read(): kernel_data_V_4_515.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_860_fu_32380_p3() {
    select_ln65_860_fu_32380_p3 = (!icmp_ln1496_605_fu_32366_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_605_fu_32366_p2.read()[0].to_bool())? kernel_data_V_4_934.read(): kernel_data_V_4_806.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_861_fu_32394_p3() {
    select_ln65_861_fu_32394_p3 = (!icmp_ln1496_606_fu_32388_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_606_fu_32388_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_862_fu_32402_p3() {
    select_ln65_862_fu_32402_p3 = (!icmp_ln1496_606_fu_32388_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_606_fu_32388_p2.read()[0].to_bool())? data_V_data_38_V_dout.read(): kernel_data_V_4_998.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_863_fu_32416_p3() {
    select_ln65_863_fu_32416_p3 = (!icmp_ln1496_607_fu_32410_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_607_fu_32410_p2.read()[0].to_bool())? select_ln65_861_fu_32394_p3.read(): select_ln65_859_fu_32372_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_864_fu_45640_p3() {
    select_ln65_864_fu_45640_p3 = (!icmp_ln1496_608_fu_45634_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_608_fu_45634_p2.read()[0].to_bool())? sext_ln65_38_reg_61315_pp0_iter1_reg.read(): select_ln65_858_reg_61309_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_866_fu_32492_p3() {
    select_ln65_866_fu_32492_p3 = (!icmp_ln1496_39_fu_32482_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_39_fu_32482_p2.read()[0].to_bool())? kernel_data_V_4_103.read(): kernel_data_V_4_39.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_867_fu_32506_p3() {
    select_ln65_867_fu_32506_p3 = (!icmp_ln1496_610_fu_32500_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_610_fu_32500_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_868_fu_32514_p3() {
    select_ln65_868_fu_32514_p3 = (!icmp_ln1496_610_fu_32500_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_610_fu_32500_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_39_q0.read(): kernel_data_V_4_231.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_869_fu_32528_p3() {
    select_ln65_869_fu_32528_p3 = (!icmp_ln1496_611_fu_32522_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_611_fu_32522_p2.read()[0].to_bool())? select_ln65_867_fu_32506_p3.read(): zext_ln65_117_fu_32488_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_86_fu_18018_p3() {
    select_ln65_86_fu_18018_p3 = (!icmp_ln1496_102_fu_18012_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_102_fu_18012_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_870_fu_32584_p3() {
    select_ln65_870_fu_32584_p3 = (!icmp_ln1496_612_fu_32578_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_612_fu_32578_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_871_fu_32592_p3() {
    select_ln65_871_fu_32592_p3 = (!icmp_ln1496_612_fu_32578_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_612_fu_32578_p2.read()[0].to_bool())? kernel_data_V_4_359.read(): kernel_data_V_4_295.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_872_fu_32606_p3() {
    select_ln65_872_fu_32606_p3 = (!icmp_ln1496_613_fu_32600_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_613_fu_32600_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_873_fu_32614_p3() {
    select_ln65_873_fu_32614_p3 = (!icmp_ln1496_613_fu_32600_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_613_fu_32600_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_39_q0.read(): kernel_data_V_4_487.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_874_fu_32628_p3() {
    select_ln65_874_fu_32628_p3 = (!icmp_ln1496_614_fu_32622_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_614_fu_32622_p2.read()[0].to_bool())? select_ln65_872_fu_32606_p3.read(): select_ln65_870_fu_32584_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_875_fu_45677_p3() {
    select_ln65_875_fu_45677_p3 = (!icmp_ln1496_615_fu_45671_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_615_fu_45671_p2.read()[0].to_bool())? select_ln65_874_reg_61373_pp0_iter1_reg.read(): zext_ln65_118_fu_45668_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_876_fu_32684_p3() {
    select_ln65_876_fu_32684_p3 = (!icmp_ln1496_616_fu_32678_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_616_fu_32678_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_877_fu_32692_p3() {
    select_ln65_877_fu_32692_p3 = (!icmp_ln1496_616_fu_32678_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_616_fu_32678_p2.read()[0].to_bool())? kernel_data_V_4_679.read(): kernel_data_V_4_551.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_878_fu_32706_p3() {
    select_ln65_878_fu_32706_p3 = (!icmp_ln1496_617_fu_32700_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_617_fu_32700_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_879_fu_32714_p3() {
    select_ln65_879_fu_32714_p3 = (!icmp_ln1496_617_fu_32700_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_617_fu_32700_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_39_q0.read(): kernel_data_V_4_743.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_87_fu_18026_p3() {
    select_ln65_87_fu_18026_p3 = (!icmp_ln1496_102_fu_18012_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_102_fu_18012_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_3_q0.read(): kernel_data_V_4_707.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_880_fu_32728_p3() {
    select_ln65_880_fu_32728_p3 = (!icmp_ln1496_618_fu_32722_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_618_fu_32722_p2.read()[0].to_bool())? select_ln65_878_fu_32706_p3.read(): select_ln65_876_fu_32684_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_881_fu_32780_p3() {
    select_ln65_881_fu_32780_p3 = (!icmp_ln1496_619_fu_32774_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_619_fu_32774_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_882_fu_32788_p3() {
    select_ln65_882_fu_32788_p3 = (!icmp_ln1496_619_fu_32774_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_619_fu_32774_p2.read()[0].to_bool())? kernel_data_V_4_935.read(): kernel_data_V_4_807.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_883_fu_32802_p3() {
    select_ln65_883_fu_32802_p3 = (!icmp_ln1496_620_fu_32796_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_620_fu_32796_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_884_fu_32810_p3() {
    select_ln65_884_fu_32810_p3 = (!icmp_ln1496_620_fu_32796_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_620_fu_32796_p2.read()[0].to_bool())? data_V_data_39_V_dout.read(): kernel_data_V_4_999.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_885_fu_32824_p3() {
    select_ln65_885_fu_32824_p3 = (!icmp_ln1496_621_fu_32818_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_621_fu_32818_p2.read()[0].to_bool())? select_ln65_883_fu_32802_p3.read(): select_ln65_881_fu_32780_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_886_fu_45716_p3() {
    select_ln65_886_fu_45716_p3 = (!icmp_ln1496_622_fu_45710_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_622_fu_45710_p2.read()[0].to_bool())? sext_ln65_39_reg_61389_pp0_iter1_reg.read(): select_ln65_880_reg_61383_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_888_fu_32900_p3() {
    select_ln65_888_fu_32900_p3 = (!icmp_ln1496_40_fu_32890_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_40_fu_32890_p2.read()[0].to_bool())? kernel_data_V_4_104.read(): kernel_data_V_4_40.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_889_fu_32914_p3() {
    select_ln65_889_fu_32914_p3 = (!icmp_ln1496_624_fu_32908_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_624_fu_32908_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_88_fu_18040_p3() {
    select_ln65_88_fu_18040_p3 = (!icmp_ln1496_103_fu_18034_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_103_fu_18034_p2.read()[0].to_bool())? select_ln65_86_fu_18018_p3.read(): select_ln65_84_fu_17996_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_890_fu_32922_p3() {
    select_ln65_890_fu_32922_p3 = (!icmp_ln1496_624_fu_32908_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_624_fu_32908_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_40_q0.read(): kernel_data_V_4_232.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_891_fu_32936_p3() {
    select_ln65_891_fu_32936_p3 = (!icmp_ln1496_625_fu_32930_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_625_fu_32930_p2.read()[0].to_bool())? select_ln65_889_fu_32914_p3.read(): zext_ln65_120_fu_32896_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_892_fu_32992_p3() {
    select_ln65_892_fu_32992_p3 = (!icmp_ln1496_626_fu_32986_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_626_fu_32986_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_893_fu_33000_p3() {
    select_ln65_893_fu_33000_p3 = (!icmp_ln1496_626_fu_32986_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_626_fu_32986_p2.read()[0].to_bool())? kernel_data_V_4_360.read(): kernel_data_V_4_296.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_894_fu_33014_p3() {
    select_ln65_894_fu_33014_p3 = (!icmp_ln1496_627_fu_33008_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_627_fu_33008_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_895_fu_33022_p3() {
    select_ln65_895_fu_33022_p3 = (!icmp_ln1496_627_fu_33008_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_627_fu_33008_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_40_q0.read(): kernel_data_V_4_488.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_896_fu_33036_p3() {
    select_ln65_896_fu_33036_p3 = (!icmp_ln1496_628_fu_33030_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_628_fu_33030_p2.read()[0].to_bool())? select_ln65_894_fu_33014_p3.read(): select_ln65_892_fu_32992_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_897_fu_45753_p3() {
    select_ln65_897_fu_45753_p3 = (!icmp_ln1496_629_fu_45747_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_629_fu_45747_p2.read()[0].to_bool())? select_ln65_896_reg_61447_pp0_iter1_reg.read(): zext_ln65_121_fu_45744_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_898_fu_33092_p3() {
    select_ln65_898_fu_33092_p3 = (!icmp_ln1496_630_fu_33086_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_630_fu_33086_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_899_fu_33100_p3() {
    select_ln65_899_fu_33100_p3 = (!icmp_ln1496_630_fu_33086_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_630_fu_33086_p2.read()[0].to_bool())? kernel_data_V_4_680.read(): kernel_data_V_4_552.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_89_fu_18092_p3() {
    select_ln65_89_fu_18092_p3 = (!icmp_ln1496_104_fu_18086_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_104_fu_18086_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_900_fu_33114_p3() {
    select_ln65_900_fu_33114_p3 = (!icmp_ln1496_631_fu_33108_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_631_fu_33108_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_901_fu_33122_p3() {
    select_ln65_901_fu_33122_p3 = (!icmp_ln1496_631_fu_33108_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_631_fu_33108_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_40_q0.read(): kernel_data_V_4_744.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_902_fu_33136_p3() {
    select_ln65_902_fu_33136_p3 = (!icmp_ln1496_632_fu_33130_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_632_fu_33130_p2.read()[0].to_bool())? select_ln65_900_fu_33114_p3.read(): select_ln65_898_fu_33092_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_903_fu_33188_p3() {
    select_ln65_903_fu_33188_p3 = (!icmp_ln1496_633_fu_33182_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_633_fu_33182_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_904_fu_33196_p3() {
    select_ln65_904_fu_33196_p3 = (!icmp_ln1496_633_fu_33182_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_633_fu_33182_p2.read()[0].to_bool())? kernel_data_V_4_936.read(): kernel_data_V_4_808.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_905_fu_33210_p3() {
    select_ln65_905_fu_33210_p3 = (!icmp_ln1496_634_fu_33204_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_634_fu_33204_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_906_fu_33218_p3() {
    select_ln65_906_fu_33218_p3 = (!icmp_ln1496_634_fu_33204_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_634_fu_33204_p2.read()[0].to_bool())? data_V_data_40_V_dout.read(): kernel_data_V_4_1000.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_907_fu_33232_p3() {
    select_ln65_907_fu_33232_p3 = (!icmp_ln1496_635_fu_33226_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_635_fu_33226_p2.read()[0].to_bool())? select_ln65_905_fu_33210_p3.read(): select_ln65_903_fu_33188_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_908_fu_45792_p3() {
    select_ln65_908_fu_45792_p3 = (!icmp_ln1496_636_fu_45786_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_636_fu_45786_p2.read()[0].to_bool())? sext_ln65_40_reg_61463_pp0_iter1_reg.read(): select_ln65_902_reg_61457_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_90_fu_18100_p3() {
    select_ln65_90_fu_18100_p3 = (!icmp_ln1496_104_fu_18086_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_104_fu_18086_p2.read()[0].to_bool())? kernel_data_V_4_899.read(): kernel_data_V_4_771.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_910_fu_33308_p3() {
    select_ln65_910_fu_33308_p3 = (!icmp_ln1496_41_fu_33298_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_41_fu_33298_p2.read()[0].to_bool())? kernel_data_V_4_105.read(): kernel_data_V_4_41.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_911_fu_33322_p3() {
    select_ln65_911_fu_33322_p3 = (!icmp_ln1496_638_fu_33316_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_638_fu_33316_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_912_fu_33330_p3() {
    select_ln65_912_fu_33330_p3 = (!icmp_ln1496_638_fu_33316_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_638_fu_33316_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_41_q0.read(): kernel_data_V_4_233.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_913_fu_33344_p3() {
    select_ln65_913_fu_33344_p3 = (!icmp_ln1496_639_fu_33338_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_639_fu_33338_p2.read()[0].to_bool())? select_ln65_911_fu_33322_p3.read(): zext_ln65_123_fu_33304_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_914_fu_33400_p3() {
    select_ln65_914_fu_33400_p3 = (!icmp_ln1496_640_fu_33394_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_640_fu_33394_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_915_fu_33408_p3() {
    select_ln65_915_fu_33408_p3 = (!icmp_ln1496_640_fu_33394_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_640_fu_33394_p2.read()[0].to_bool())? kernel_data_V_4_361.read(): kernel_data_V_4_297.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_916_fu_33422_p3() {
    select_ln65_916_fu_33422_p3 = (!icmp_ln1496_641_fu_33416_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_641_fu_33416_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_917_fu_33430_p3() {
    select_ln65_917_fu_33430_p3 = (!icmp_ln1496_641_fu_33416_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_641_fu_33416_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_41_q0.read(): kernel_data_V_4_489.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_918_fu_33444_p3() {
    select_ln65_918_fu_33444_p3 = (!icmp_ln1496_642_fu_33438_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_642_fu_33438_p2.read()[0].to_bool())? select_ln65_916_fu_33422_p3.read(): select_ln65_914_fu_33400_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_919_fu_45829_p3() {
    select_ln65_919_fu_45829_p3 = (!icmp_ln1496_643_fu_45823_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_643_fu_45823_p2.read()[0].to_bool())? select_ln65_918_reg_61521_pp0_iter1_reg.read(): zext_ln65_124_fu_45820_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_91_fu_18114_p3() {
    select_ln65_91_fu_18114_p3 = (!icmp_ln1496_105_fu_18108_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_105_fu_18108_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_920_fu_33500_p3() {
    select_ln65_920_fu_33500_p3 = (!icmp_ln1496_644_fu_33494_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_644_fu_33494_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_921_fu_33508_p3() {
    select_ln65_921_fu_33508_p3 = (!icmp_ln1496_644_fu_33494_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_644_fu_33494_p2.read()[0].to_bool())? kernel_data_V_4_681.read(): kernel_data_V_4_553.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_922_fu_33522_p3() {
    select_ln65_922_fu_33522_p3 = (!icmp_ln1496_645_fu_33516_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_645_fu_33516_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_923_fu_33530_p3() {
    select_ln65_923_fu_33530_p3 = (!icmp_ln1496_645_fu_33516_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_645_fu_33516_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_41_q0.read(): kernel_data_V_4_745.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_924_fu_33544_p3() {
    select_ln65_924_fu_33544_p3 = (!icmp_ln1496_646_fu_33538_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_646_fu_33538_p2.read()[0].to_bool())? select_ln65_922_fu_33522_p3.read(): select_ln65_920_fu_33500_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_925_fu_33596_p3() {
    select_ln65_925_fu_33596_p3 = (!icmp_ln1496_647_fu_33590_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_647_fu_33590_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_926_fu_33604_p3() {
    select_ln65_926_fu_33604_p3 = (!icmp_ln1496_647_fu_33590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_647_fu_33590_p2.read()[0].to_bool())? kernel_data_V_4_937.read(): kernel_data_V_4_809.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_927_fu_33618_p3() {
    select_ln65_927_fu_33618_p3 = (!icmp_ln1496_648_fu_33612_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_648_fu_33612_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_928_fu_33626_p3() {
    select_ln65_928_fu_33626_p3 = (!icmp_ln1496_648_fu_33612_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_648_fu_33612_p2.read()[0].to_bool())? data_V_data_41_V_dout.read(): kernel_data_V_4_1001.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_929_fu_33640_p3() {
    select_ln65_929_fu_33640_p3 = (!icmp_ln1496_649_fu_33634_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_649_fu_33634_p2.read()[0].to_bool())? select_ln65_927_fu_33618_p3.read(): select_ln65_925_fu_33596_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_92_fu_18122_p3() {
    select_ln65_92_fu_18122_p3 = (!icmp_ln1496_105_fu_18108_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_105_fu_18108_p2.read()[0].to_bool())? data_V_data_3_V_dout.read(): kernel_data_V_4_963.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_930_fu_45868_p3() {
    select_ln65_930_fu_45868_p3 = (!icmp_ln1496_650_fu_45862_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_650_fu_45862_p2.read()[0].to_bool())? sext_ln65_41_reg_61537_pp0_iter1_reg.read(): select_ln65_924_reg_61531_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_932_fu_33716_p3() {
    select_ln65_932_fu_33716_p3 = (!icmp_ln1496_42_fu_33706_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_42_fu_33706_p2.read()[0].to_bool())? kernel_data_V_4_106.read(): kernel_data_V_4_42.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_933_fu_33730_p3() {
    select_ln65_933_fu_33730_p3 = (!icmp_ln1496_652_fu_33724_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_652_fu_33724_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_934_fu_33738_p3() {
    select_ln65_934_fu_33738_p3 = (!icmp_ln1496_652_fu_33724_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_652_fu_33724_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_42_q0.read(): kernel_data_V_4_234.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_935_fu_33752_p3() {
    select_ln65_935_fu_33752_p3 = (!icmp_ln1496_653_fu_33746_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_653_fu_33746_p2.read()[0].to_bool())? select_ln65_933_fu_33730_p3.read(): zext_ln65_126_fu_33712_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_936_fu_33808_p3() {
    select_ln65_936_fu_33808_p3 = (!icmp_ln1496_654_fu_33802_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_654_fu_33802_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_937_fu_33816_p3() {
    select_ln65_937_fu_33816_p3 = (!icmp_ln1496_654_fu_33802_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_654_fu_33802_p2.read()[0].to_bool())? kernel_data_V_4_362.read(): kernel_data_V_4_298.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_938_fu_33830_p3() {
    select_ln65_938_fu_33830_p3 = (!icmp_ln1496_655_fu_33824_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_655_fu_33824_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_939_fu_33838_p3() {
    select_ln65_939_fu_33838_p3 = (!icmp_ln1496_655_fu_33824_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_655_fu_33824_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_42_q0.read(): kernel_data_V_4_490.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_93_fu_18136_p3() {
    select_ln65_93_fu_18136_p3 = (!icmp_ln1496_106_fu_18130_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_106_fu_18130_p2.read()[0].to_bool())? select_ln65_91_fu_18114_p3.read(): select_ln65_89_fu_18092_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_940_fu_33852_p3() {
    select_ln65_940_fu_33852_p3 = (!icmp_ln1496_656_fu_33846_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_656_fu_33846_p2.read()[0].to_bool())? select_ln65_938_fu_33830_p3.read(): select_ln65_936_fu_33808_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_941_fu_45905_p3() {
    select_ln65_941_fu_45905_p3 = (!icmp_ln1496_657_fu_45899_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_657_fu_45899_p2.read()[0].to_bool())? select_ln65_940_reg_61595_pp0_iter1_reg.read(): zext_ln65_127_fu_45896_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_942_fu_33908_p3() {
    select_ln65_942_fu_33908_p3 = (!icmp_ln1496_658_fu_33902_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_658_fu_33902_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_943_fu_33916_p3() {
    select_ln65_943_fu_33916_p3 = (!icmp_ln1496_658_fu_33902_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_658_fu_33902_p2.read()[0].to_bool())? kernel_data_V_4_682.read(): kernel_data_V_4_554.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_944_fu_33930_p3() {
    select_ln65_944_fu_33930_p3 = (!icmp_ln1496_659_fu_33924_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_659_fu_33924_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_945_fu_33938_p3() {
    select_ln65_945_fu_33938_p3 = (!icmp_ln1496_659_fu_33924_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_659_fu_33924_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_42_q0.read(): kernel_data_V_4_746.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_946_fu_33952_p3() {
    select_ln65_946_fu_33952_p3 = (!icmp_ln1496_660_fu_33946_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_660_fu_33946_p2.read()[0].to_bool())? select_ln65_944_fu_33930_p3.read(): select_ln65_942_fu_33908_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_947_fu_34004_p3() {
    select_ln65_947_fu_34004_p3 = (!icmp_ln1496_661_fu_33998_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_661_fu_33998_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_948_fu_34012_p3() {
    select_ln65_948_fu_34012_p3 = (!icmp_ln1496_661_fu_33998_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_661_fu_33998_p2.read()[0].to_bool())? kernel_data_V_4_938.read(): kernel_data_V_4_810.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_949_fu_34026_p3() {
    select_ln65_949_fu_34026_p3 = (!icmp_ln1496_662_fu_34020_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_662_fu_34020_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_94_fu_42980_p3() {
    select_ln65_94_fu_42980_p3 = (!icmp_ln1496_107_fu_42974_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_107_fu_42974_p2.read()[0].to_bool())? sext_ln65_3_reg_58627_pp0_iter1_reg.read(): select_ln65_88_reg_58621_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_950_fu_34034_p3() {
    select_ln65_950_fu_34034_p3 = (!icmp_ln1496_662_fu_34020_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_662_fu_34020_p2.read()[0].to_bool())? data_V_data_42_V_dout.read(): kernel_data_V_4_1002.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_951_fu_34048_p3() {
    select_ln65_951_fu_34048_p3 = (!icmp_ln1496_663_fu_34042_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_663_fu_34042_p2.read()[0].to_bool())? select_ln65_949_fu_34026_p3.read(): select_ln65_947_fu_34004_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_952_fu_45944_p3() {
    select_ln65_952_fu_45944_p3 = (!icmp_ln1496_664_fu_45938_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_664_fu_45938_p2.read()[0].to_bool())? sext_ln65_42_reg_61611_pp0_iter1_reg.read(): select_ln65_946_reg_61605_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_954_fu_34124_p3() {
    select_ln65_954_fu_34124_p3 = (!icmp_ln1496_43_fu_34114_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_43_fu_34114_p2.read()[0].to_bool())? kernel_data_V_4_107.read(): kernel_data_V_4_43.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_955_fu_34138_p3() {
    select_ln65_955_fu_34138_p3 = (!icmp_ln1496_666_fu_34132_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_666_fu_34132_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_956_fu_34146_p3() {
    select_ln65_956_fu_34146_p3 = (!icmp_ln1496_666_fu_34132_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_666_fu_34132_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_43_q0.read(): kernel_data_V_4_235.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_957_fu_34160_p3() {
    select_ln65_957_fu_34160_p3 = (!icmp_ln1496_667_fu_34154_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_667_fu_34154_p2.read()[0].to_bool())? select_ln65_955_fu_34138_p3.read(): zext_ln65_129_fu_34120_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_958_fu_34216_p3() {
    select_ln65_958_fu_34216_p3 = (!icmp_ln1496_668_fu_34210_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_668_fu_34210_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_959_fu_34224_p3() {
    select_ln65_959_fu_34224_p3 = (!icmp_ln1496_668_fu_34210_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_668_fu_34210_p2.read()[0].to_bool())? kernel_data_V_4_363.read(): kernel_data_V_4_299.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_960_fu_34238_p3() {
    select_ln65_960_fu_34238_p3 = (!icmp_ln1496_669_fu_34232_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_669_fu_34232_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_961_fu_34246_p3() {
    select_ln65_961_fu_34246_p3 = (!icmp_ln1496_669_fu_34232_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_669_fu_34232_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_43_q0.read(): kernel_data_V_4_491.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_962_fu_34260_p3() {
    select_ln65_962_fu_34260_p3 = (!icmp_ln1496_670_fu_34254_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_670_fu_34254_p2.read()[0].to_bool())? select_ln65_960_fu_34238_p3.read(): select_ln65_958_fu_34216_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_963_fu_45981_p3() {
    select_ln65_963_fu_45981_p3 = (!icmp_ln1496_671_fu_45975_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_671_fu_45975_p2.read()[0].to_bool())? select_ln65_962_reg_61669_pp0_iter1_reg.read(): zext_ln65_130_fu_45972_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_964_fu_34316_p3() {
    select_ln65_964_fu_34316_p3 = (!icmp_ln1496_672_fu_34310_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_672_fu_34310_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_965_fu_34324_p3() {
    select_ln65_965_fu_34324_p3 = (!icmp_ln1496_672_fu_34310_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_672_fu_34310_p2.read()[0].to_bool())? kernel_data_V_4_683.read(): kernel_data_V_4_555.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_966_fu_34338_p3() {
    select_ln65_966_fu_34338_p3 = (!icmp_ln1496_673_fu_34332_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_673_fu_34332_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_967_fu_34346_p3() {
    select_ln65_967_fu_34346_p3 = (!icmp_ln1496_673_fu_34332_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_673_fu_34332_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_43_q0.read(): kernel_data_V_4_747.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_968_fu_34360_p3() {
    select_ln65_968_fu_34360_p3 = (!icmp_ln1496_674_fu_34354_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_674_fu_34354_p2.read()[0].to_bool())? select_ln65_966_fu_34338_p3.read(): select_ln65_964_fu_34316_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_969_fu_34412_p3() {
    select_ln65_969_fu_34412_p3 = (!icmp_ln1496_675_fu_34406_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_675_fu_34406_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_96_fu_18212_p3() {
    select_ln65_96_fu_18212_p3 = (!icmp_ln1496_109_fu_18202_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_109_fu_18202_p2.read()[0].to_bool())? kernel_data_V_4_68.read(): kernel_data_V_4_4.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_970_fu_34420_p3() {
    select_ln65_970_fu_34420_p3 = (!icmp_ln1496_675_fu_34406_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_675_fu_34406_p2.read()[0].to_bool())? kernel_data_V_4_939.read(): kernel_data_V_4_811.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_971_fu_34434_p3() {
    select_ln65_971_fu_34434_p3 = (!icmp_ln1496_676_fu_34428_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_676_fu_34428_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_972_fu_34442_p3() {
    select_ln65_972_fu_34442_p3 = (!icmp_ln1496_676_fu_34428_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_676_fu_34428_p2.read()[0].to_bool())? data_V_data_43_V_dout.read(): kernel_data_V_4_1003.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_973_fu_34456_p3() {
    select_ln65_973_fu_34456_p3 = (!icmp_ln1496_677_fu_34450_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_677_fu_34450_p2.read()[0].to_bool())? select_ln65_971_fu_34434_p3.read(): select_ln65_969_fu_34412_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_974_fu_46020_p3() {
    select_ln65_974_fu_46020_p3 = (!icmp_ln1496_678_fu_46014_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_678_fu_46014_p2.read()[0].to_bool())? sext_ln65_43_reg_61685_pp0_iter1_reg.read(): select_ln65_968_reg_61679_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_976_fu_34532_p3() {
    select_ln65_976_fu_34532_p3 = (!icmp_ln1496_44_fu_34522_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_44_fu_34522_p2.read()[0].to_bool())? kernel_data_V_4_108.read(): kernel_data_V_4_44.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_977_fu_34546_p3() {
    select_ln65_977_fu_34546_p3 = (!icmp_ln1496_680_fu_34540_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_680_fu_34540_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_978_fu_34554_p3() {
    select_ln65_978_fu_34554_p3 = (!icmp_ln1496_680_fu_34540_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_680_fu_34540_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_44_q0.read(): kernel_data_V_4_236.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_979_fu_34568_p3() {
    select_ln65_979_fu_34568_p3 = (!icmp_ln1496_681_fu_34562_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_681_fu_34562_p2.read()[0].to_bool())? select_ln65_977_fu_34546_p3.read(): zext_ln65_132_fu_34528_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_97_fu_18226_p3() {
    select_ln65_97_fu_18226_p3 = (!icmp_ln1496_110_fu_18220_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_110_fu_18220_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_980_fu_34624_p3() {
    select_ln65_980_fu_34624_p3 = (!icmp_ln1496_682_fu_34618_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_682_fu_34618_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_981_fu_34632_p3() {
    select_ln65_981_fu_34632_p3 = (!icmp_ln1496_682_fu_34618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_682_fu_34618_p2.read()[0].to_bool())? kernel_data_V_4_364.read(): kernel_data_V_4_300.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_982_fu_34646_p3() {
    select_ln65_982_fu_34646_p3 = (!icmp_ln1496_683_fu_34640_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_683_fu_34640_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_983_fu_34654_p3() {
    select_ln65_983_fu_34654_p3 = (!icmp_ln1496_683_fu_34640_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_683_fu_34640_p2.read()[0].to_bool())? line_buffer_Array_V_4_1_44_q0.read(): kernel_data_V_4_492.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_984_fu_34668_p3() {
    select_ln65_984_fu_34668_p3 = (!icmp_ln1496_684_fu_34662_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_684_fu_34662_p2.read()[0].to_bool())? select_ln65_982_fu_34646_p3.read(): select_ln65_980_fu_34624_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_985_fu_46057_p3() {
    select_ln65_985_fu_46057_p3 = (!icmp_ln1496_685_fu_46051_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_685_fu_46051_p2.read()[0].to_bool())? select_ln65_984_reg_61743_pp0_iter1_reg.read(): zext_ln65_133_fu_46048_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_986_fu_34724_p3() {
    select_ln65_986_fu_34724_p3 = (!icmp_ln1496_686_fu_34718_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_686_fu_34718_p2.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_987_fu_34732_p3() {
    select_ln65_987_fu_34732_p3 = (!icmp_ln1496_686_fu_34718_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_686_fu_34718_p2.read()[0].to_bool())? kernel_data_V_4_684.read(): kernel_data_V_4_556.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_988_fu_34746_p3() {
    select_ln65_988_fu_34746_p3 = (!icmp_ln1496_687_fu_34740_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_687_fu_34740_p2.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_989_fu_34754_p3() {
    select_ln65_989_fu_34754_p3 = (!icmp_ln1496_687_fu_34740_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_687_fu_34740_p2.read()[0].to_bool())? line_buffer_Array_V_4_0_44_q0.read(): kernel_data_V_4_748.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_98_fu_18234_p3() {
    select_ln65_98_fu_18234_p3 = (!icmp_ln1496_110_fu_18220_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_110_fu_18220_p2.read()[0].to_bool())? line_buffer_Array_V_4_2_4_q0.read(): kernel_data_V_4_196.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_990_fu_34768_p3() {
    select_ln65_990_fu_34768_p3 = (!icmp_ln1496_688_fu_34762_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_688_fu_34762_p2.read()[0].to_bool())? select_ln65_988_fu_34746_p3.read(): select_ln65_986_fu_34724_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_991_fu_34820_p3() {
    select_ln65_991_fu_34820_p3 = (!icmp_ln1496_689_fu_34814_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_689_fu_34814_p2.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_992_fu_34828_p3() {
    select_ln65_992_fu_34828_p3 = (!icmp_ln1496_689_fu_34814_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_689_fu_34814_p2.read()[0].to_bool())? kernel_data_V_4_940.read(): kernel_data_V_4_812.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_993_fu_34842_p3() {
    select_ln65_993_fu_34842_p3 = (!icmp_ln1496_690_fu_34836_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_690_fu_34836_p2.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_994_fu_34850_p3() {
    select_ln65_994_fu_34850_p3 = (!icmp_ln1496_690_fu_34836_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_690_fu_34836_p2.read()[0].to_bool())? data_V_data_44_V_dout.read(): kernel_data_V_4_1004.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_995_fu_34864_p3() {
    select_ln65_995_fu_34864_p3 = (!icmp_ln1496_691_fu_34858_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_691_fu_34858_p2.read()[0].to_bool())? select_ln65_993_fu_34842_p3.read(): select_ln65_991_fu_34820_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_996_fu_46096_p3() {
    select_ln65_996_fu_46096_p3 = (!icmp_ln1496_692_fu_46090_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_692_fu_46090_p2.read()[0].to_bool())? sext_ln65_44_reg_61759_pp0_iter1_reg.read(): select_ln65_990_reg_61753_pp0_iter1_reg.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_998_fu_34940_p3() {
    select_ln65_998_fu_34940_p3 = (!icmp_ln1496_45_fu_34930_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_45_fu_34930_p2.read()[0].to_bool())? kernel_data_V_4_109.read(): kernel_data_V_4_45.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_999_fu_34954_p3() {
    select_ln65_999_fu_34954_p3 = (!icmp_ln1496_694_fu_34948_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_694_fu_34948_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_99_fu_18248_p3() {
    select_ln65_99_fu_18248_p3 = (!icmp_ln1496_111_fu_18242_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_111_fu_18242_p2.read()[0].to_bool())? select_ln65_97_fu_18226_p3.read(): zext_ln65_12_fu_18208_p1.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_9_fu_16594_p3() {
    select_ln65_9_fu_16594_p3 = (!icmp_ln1496_1_fu_16588_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_1_fu_16588_p2.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_select_ln65_fu_16580_p3() {
    select_ln65_fu_16580_p3 = (!icmp_ln1496_fu_16570_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_fu_16570_p2.read()[0].to_bool())? kernel_data_V_4_64.read(): kernel_data_V_4_0.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_10_fu_21000_p1() {
    sext_ln65_10_fu_21000_p1 = esl_sext<4,3>(select_ln65_247_fu_20992_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_11_fu_21408_p1() {
    sext_ln65_11_fu_21408_p1 = esl_sext<4,3>(select_ln65_269_fu_21400_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_12_fu_21816_p1() {
    sext_ln65_12_fu_21816_p1 = esl_sext<4,3>(select_ln65_291_fu_21808_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_13_fu_22224_p1() {
    sext_ln65_13_fu_22224_p1 = esl_sext<4,3>(select_ln65_313_fu_22216_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_14_fu_22632_p1() {
    sext_ln65_14_fu_22632_p1 = esl_sext<4,3>(select_ln65_335_fu_22624_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_15_fu_23040_p1() {
    sext_ln65_15_fu_23040_p1 = esl_sext<4,3>(select_ln65_357_fu_23032_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_16_fu_23448_p1() {
    sext_ln65_16_fu_23448_p1 = esl_sext<4,3>(select_ln65_379_fu_23440_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_17_fu_23856_p1() {
    sext_ln65_17_fu_23856_p1 = esl_sext<4,3>(select_ln65_401_fu_23848_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_18_fu_24264_p1() {
    sext_ln65_18_fu_24264_p1 = esl_sext<4,3>(select_ln65_423_fu_24256_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_19_fu_24672_p1() {
    sext_ln65_19_fu_24672_p1 = esl_sext<4,3>(select_ln65_445_fu_24664_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_1_fu_17328_p1() {
    sext_ln65_1_fu_17328_p1 = esl_sext<4,3>(select_ln65_49_fu_17320_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_20_fu_25080_p1() {
    sext_ln65_20_fu_25080_p1 = esl_sext<4,3>(select_ln65_467_fu_25072_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_21_fu_25488_p1() {
    sext_ln65_21_fu_25488_p1 = esl_sext<4,3>(select_ln65_489_fu_25480_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_22_fu_25896_p1() {
    sext_ln65_22_fu_25896_p1 = esl_sext<4,3>(select_ln65_511_fu_25888_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_23_fu_26304_p1() {
    sext_ln65_23_fu_26304_p1 = esl_sext<4,3>(select_ln65_533_fu_26296_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_24_fu_26712_p1() {
    sext_ln65_24_fu_26712_p1 = esl_sext<4,3>(select_ln65_555_fu_26704_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_25_fu_27120_p1() {
    sext_ln65_25_fu_27120_p1 = esl_sext<4,3>(select_ln65_577_fu_27112_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_26_fu_27528_p1() {
    sext_ln65_26_fu_27528_p1 = esl_sext<4,3>(select_ln65_599_fu_27520_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_27_fu_27936_p1() {
    sext_ln65_27_fu_27936_p1 = esl_sext<4,3>(select_ln65_621_fu_27928_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_28_fu_28344_p1() {
    sext_ln65_28_fu_28344_p1 = esl_sext<4,3>(select_ln65_643_fu_28336_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_29_fu_28752_p1() {
    sext_ln65_29_fu_28752_p1 = esl_sext<4,3>(select_ln65_665_fu_28744_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_2_fu_17736_p1() {
    sext_ln65_2_fu_17736_p1 = esl_sext<4,3>(select_ln65_71_fu_17728_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_30_fu_29160_p1() {
    sext_ln65_30_fu_29160_p1 = esl_sext<4,3>(select_ln65_687_fu_29152_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_31_fu_29568_p1() {
    sext_ln65_31_fu_29568_p1 = esl_sext<4,3>(select_ln65_709_fu_29560_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_32_fu_29976_p1() {
    sext_ln65_32_fu_29976_p1 = esl_sext<4,3>(select_ln65_731_fu_29968_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_33_fu_30384_p1() {
    sext_ln65_33_fu_30384_p1 = esl_sext<4,3>(select_ln65_753_fu_30376_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_34_fu_30792_p1() {
    sext_ln65_34_fu_30792_p1 = esl_sext<4,3>(select_ln65_775_fu_30784_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_35_fu_31200_p1() {
    sext_ln65_35_fu_31200_p1 = esl_sext<4,3>(select_ln65_797_fu_31192_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_36_fu_31608_p1() {
    sext_ln65_36_fu_31608_p1 = esl_sext<4,3>(select_ln65_819_fu_31600_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_37_fu_32016_p1() {
    sext_ln65_37_fu_32016_p1 = esl_sext<4,3>(select_ln65_841_fu_32008_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_38_fu_32424_p1() {
    sext_ln65_38_fu_32424_p1 = esl_sext<4,3>(select_ln65_863_fu_32416_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_39_fu_32832_p1() {
    sext_ln65_39_fu_32832_p1 = esl_sext<4,3>(select_ln65_885_fu_32824_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_3_fu_18144_p1() {
    sext_ln65_3_fu_18144_p1 = esl_sext<4,3>(select_ln65_93_fu_18136_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_40_fu_33240_p1() {
    sext_ln65_40_fu_33240_p1 = esl_sext<4,3>(select_ln65_907_fu_33232_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_41_fu_33648_p1() {
    sext_ln65_41_fu_33648_p1 = esl_sext<4,3>(select_ln65_929_fu_33640_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_42_fu_34056_p1() {
    sext_ln65_42_fu_34056_p1 = esl_sext<4,3>(select_ln65_951_fu_34048_p3.read());
}

void pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_64u_config8_s::thread_sext_ln65_43_fu_34464_p1() {
    sext_ln65_43_fu_34464_p1 = esl_sext<4,3>(select_ln65_973_fu_34456_p3.read());
}

}

