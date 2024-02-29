set moduleName dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {dense_latency<ap_fixed,ap_fixed<16,6,5,3,0>,config4>.0.0.0.0}
set C_modelType { int 48 }
set C_modelArgList {
	{ data_1_V_read int 16 regular  }
	{ data_6_V_read int 16 regular  }
	{ data_7_V_read int 16 regular  }
	{ data_8_V_read int 16 regular  }
	{ data_10_V_read int 16 regular  }
	{ data_11_V_read int 16 regular  }
	{ data_12_V_read int 16 regular  }
	{ data_17_V_read int 16 regular  }
	{ data_20_V_read int 16 regular  }
	{ data_21_V_read int 16 regular  }
	{ data_22_V_read int 16 regular  }
	{ data_25_V_read int 16 regular  }
	{ data_27_V_read int 16 regular  }
	{ data_28_V_read int 16 regular  }
	{ data_30_V_read int 16 regular  }
	{ data_31_V_read int 16 regular  }
	{ data_32_V_read int 16 regular  }
	{ data_34_V_read int 16 regular  }
	{ data_37_V_read int 16 regular  }
	{ data_38_V_read int 16 regular  }
	{ data_39_V_read int 16 regular  }
	{ data_43_V_read int 16 regular  }
	{ data_48_V_read int 16 regular  }
	{ data_49_V_read int 16 regular  }
	{ data_50_V_read int 16 regular  }
	{ data_51_V_read int 16 regular  }
	{ data_55_V_read int 16 regular  }
	{ data_58_V_read int 16 regular  }
	{ data_59_V_read int 16 regular  }
	{ data_63_V_read int 16 regular  }
	{ data_64_V_read int 16 regular  }
	{ data_66_V_read int 16 regular  }
	{ data_68_V_read int 16 regular  }
	{ data_70_V_read int 16 regular  }
	{ data_71_V_read int 16 regular  }
	{ data_74_V_read int 16 regular  }
	{ data_76_V_read int 16 regular  }
	{ data_78_V_read int 16 regular  }
	{ data_80_V_read int 16 regular  }
	{ data_81_V_read int 16 regular  }
	{ data_84_V_read int 16 regular  }
	{ data_87_V_read int 16 regular  }
	{ data_88_V_read int 16 regular  }
	{ data_91_V_read int 16 regular  }
	{ data_92_V_read int 16 regular  }
	{ data_94_V_read int 16 regular  }
	{ data_95_V_read int 16 regular  }
	{ data_99_V_read int 16 regular  }
	{ data_100_V_read int 16 regular  }
	{ data_101_V_read int 16 regular  }
	{ data_105_V_read int 16 regular  }
	{ data_106_V_read int 16 regular  }
	{ data_107_V_read int 16 regular  }
	{ data_108_V_read int 16 regular  }
	{ data_109_V_read int 16 regular  }
	{ data_110_V_read int 16 regular  }
	{ data_113_V_read int 16 regular  }
	{ data_114_V_read int 16 regular  }
	{ data_121_V_read int 16 regular  }
	{ data_126_V_read int 16 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_1_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_6_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_7_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_8_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_10_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_11_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_12_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_17_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_20_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_21_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_22_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_25_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_27_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_28_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_30_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_31_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_32_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_34_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_37_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_38_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_39_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_43_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_48_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_49_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_50_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_51_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_55_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_58_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_59_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_63_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_64_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_66_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_68_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_70_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_71_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_74_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_76_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_78_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_80_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_81_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_84_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_87_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_88_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_91_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_92_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_94_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_95_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_99_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_100_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_101_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_105_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_106_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_107_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_108_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_109_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_110_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_113_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_114_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_121_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_126_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 48} ]}
# RTL Port declarations: 
set portNum 70
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ data_1_V_read sc_in sc_lv 16 signal 0 } 
	{ data_6_V_read sc_in sc_lv 16 signal 1 } 
	{ data_7_V_read sc_in sc_lv 16 signal 2 } 
	{ data_8_V_read sc_in sc_lv 16 signal 3 } 
	{ data_10_V_read sc_in sc_lv 16 signal 4 } 
	{ data_11_V_read sc_in sc_lv 16 signal 5 } 
	{ data_12_V_read sc_in sc_lv 16 signal 6 } 
	{ data_17_V_read sc_in sc_lv 16 signal 7 } 
	{ data_20_V_read sc_in sc_lv 16 signal 8 } 
	{ data_21_V_read sc_in sc_lv 16 signal 9 } 
	{ data_22_V_read sc_in sc_lv 16 signal 10 } 
	{ data_25_V_read sc_in sc_lv 16 signal 11 } 
	{ data_27_V_read sc_in sc_lv 16 signal 12 } 
	{ data_28_V_read sc_in sc_lv 16 signal 13 } 
	{ data_30_V_read sc_in sc_lv 16 signal 14 } 
	{ data_31_V_read sc_in sc_lv 16 signal 15 } 
	{ data_32_V_read sc_in sc_lv 16 signal 16 } 
	{ data_34_V_read sc_in sc_lv 16 signal 17 } 
	{ data_37_V_read sc_in sc_lv 16 signal 18 } 
	{ data_38_V_read sc_in sc_lv 16 signal 19 } 
	{ data_39_V_read sc_in sc_lv 16 signal 20 } 
	{ data_43_V_read sc_in sc_lv 16 signal 21 } 
	{ data_48_V_read sc_in sc_lv 16 signal 22 } 
	{ data_49_V_read sc_in sc_lv 16 signal 23 } 
	{ data_50_V_read sc_in sc_lv 16 signal 24 } 
	{ data_51_V_read sc_in sc_lv 16 signal 25 } 
	{ data_55_V_read sc_in sc_lv 16 signal 26 } 
	{ data_58_V_read sc_in sc_lv 16 signal 27 } 
	{ data_59_V_read sc_in sc_lv 16 signal 28 } 
	{ data_63_V_read sc_in sc_lv 16 signal 29 } 
	{ data_64_V_read sc_in sc_lv 16 signal 30 } 
	{ data_66_V_read sc_in sc_lv 16 signal 31 } 
	{ data_68_V_read sc_in sc_lv 16 signal 32 } 
	{ data_70_V_read sc_in sc_lv 16 signal 33 } 
	{ data_71_V_read sc_in sc_lv 16 signal 34 } 
	{ data_74_V_read sc_in sc_lv 16 signal 35 } 
	{ data_76_V_read sc_in sc_lv 16 signal 36 } 
	{ data_78_V_read sc_in sc_lv 16 signal 37 } 
	{ data_80_V_read sc_in sc_lv 16 signal 38 } 
	{ data_81_V_read sc_in sc_lv 16 signal 39 } 
	{ data_84_V_read sc_in sc_lv 16 signal 40 } 
	{ data_87_V_read sc_in sc_lv 16 signal 41 } 
	{ data_88_V_read sc_in sc_lv 16 signal 42 } 
	{ data_91_V_read sc_in sc_lv 16 signal 43 } 
	{ data_92_V_read sc_in sc_lv 16 signal 44 } 
	{ data_94_V_read sc_in sc_lv 16 signal 45 } 
	{ data_95_V_read sc_in sc_lv 16 signal 46 } 
	{ data_99_V_read sc_in sc_lv 16 signal 47 } 
	{ data_100_V_read sc_in sc_lv 16 signal 48 } 
	{ data_101_V_read sc_in sc_lv 16 signal 49 } 
	{ data_105_V_read sc_in sc_lv 16 signal 50 } 
	{ data_106_V_read sc_in sc_lv 16 signal 51 } 
	{ data_107_V_read sc_in sc_lv 16 signal 52 } 
	{ data_108_V_read sc_in sc_lv 16 signal 53 } 
	{ data_109_V_read sc_in sc_lv 16 signal 54 } 
	{ data_110_V_read sc_in sc_lv 16 signal 55 } 
	{ data_113_V_read sc_in sc_lv 16 signal 56 } 
	{ data_114_V_read sc_in sc_lv 16 signal 57 } 
	{ data_121_V_read sc_in sc_lv 16 signal 58 } 
	{ data_126_V_read sc_in sc_lv 16 signal 59 } 
	{ ap_return_0 sc_out sc_lv 16 signal -1 } 
	{ ap_return_1 sc_out sc_lv 16 signal -1 } 
	{ ap_return_2 sc_out sc_lv 16 signal -1 } 
	{ ap_ce sc_in sc_logic 1 ce -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "data_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_1_V_read", "role": "default" }} , 
 	{ "name": "data_6_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_6_V_read", "role": "default" }} , 
 	{ "name": "data_7_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_7_V_read", "role": "default" }} , 
 	{ "name": "data_8_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_8_V_read", "role": "default" }} , 
 	{ "name": "data_10_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_10_V_read", "role": "default" }} , 
 	{ "name": "data_11_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_11_V_read", "role": "default" }} , 
 	{ "name": "data_12_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_12_V_read", "role": "default" }} , 
 	{ "name": "data_17_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_17_V_read", "role": "default" }} , 
 	{ "name": "data_20_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_20_V_read", "role": "default" }} , 
 	{ "name": "data_21_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_21_V_read", "role": "default" }} , 
 	{ "name": "data_22_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_22_V_read", "role": "default" }} , 
 	{ "name": "data_25_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_25_V_read", "role": "default" }} , 
 	{ "name": "data_27_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_27_V_read", "role": "default" }} , 
 	{ "name": "data_28_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_28_V_read", "role": "default" }} , 
 	{ "name": "data_30_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_30_V_read", "role": "default" }} , 
 	{ "name": "data_31_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_31_V_read", "role": "default" }} , 
 	{ "name": "data_32_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_32_V_read", "role": "default" }} , 
 	{ "name": "data_34_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_34_V_read", "role": "default" }} , 
 	{ "name": "data_37_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_37_V_read", "role": "default" }} , 
 	{ "name": "data_38_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_38_V_read", "role": "default" }} , 
 	{ "name": "data_39_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_39_V_read", "role": "default" }} , 
 	{ "name": "data_43_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_43_V_read", "role": "default" }} , 
 	{ "name": "data_48_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_48_V_read", "role": "default" }} , 
 	{ "name": "data_49_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_49_V_read", "role": "default" }} , 
 	{ "name": "data_50_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_50_V_read", "role": "default" }} , 
 	{ "name": "data_51_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_51_V_read", "role": "default" }} , 
 	{ "name": "data_55_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_55_V_read", "role": "default" }} , 
 	{ "name": "data_58_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_58_V_read", "role": "default" }} , 
 	{ "name": "data_59_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_59_V_read", "role": "default" }} , 
 	{ "name": "data_63_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_63_V_read", "role": "default" }} , 
 	{ "name": "data_64_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_64_V_read", "role": "default" }} , 
 	{ "name": "data_66_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_66_V_read", "role": "default" }} , 
 	{ "name": "data_68_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_68_V_read", "role": "default" }} , 
 	{ "name": "data_70_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_70_V_read", "role": "default" }} , 
 	{ "name": "data_71_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_71_V_read", "role": "default" }} , 
 	{ "name": "data_74_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_74_V_read", "role": "default" }} , 
 	{ "name": "data_76_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_76_V_read", "role": "default" }} , 
 	{ "name": "data_78_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_78_V_read", "role": "default" }} , 
 	{ "name": "data_80_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_80_V_read", "role": "default" }} , 
 	{ "name": "data_81_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_81_V_read", "role": "default" }} , 
 	{ "name": "data_84_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_84_V_read", "role": "default" }} , 
 	{ "name": "data_87_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_87_V_read", "role": "default" }} , 
 	{ "name": "data_88_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_88_V_read", "role": "default" }} , 
 	{ "name": "data_91_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_91_V_read", "role": "default" }} , 
 	{ "name": "data_92_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_92_V_read", "role": "default" }} , 
 	{ "name": "data_94_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_94_V_read", "role": "default" }} , 
 	{ "name": "data_95_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_95_V_read", "role": "default" }} , 
 	{ "name": "data_99_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_99_V_read", "role": "default" }} , 
 	{ "name": "data_100_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_100_V_read", "role": "default" }} , 
 	{ "name": "data_101_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_101_V_read", "role": "default" }} , 
 	{ "name": "data_105_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_105_V_read", "role": "default" }} , 
 	{ "name": "data_106_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_106_V_read", "role": "default" }} , 
 	{ "name": "data_107_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_107_V_read", "role": "default" }} , 
 	{ "name": "data_108_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_108_V_read", "role": "default" }} , 
 	{ "name": "data_109_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_109_V_read", "role": "default" }} , 
 	{ "name": "data_110_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_110_V_read", "role": "default" }} , 
 	{ "name": "data_113_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_113_V_read", "role": "default" }} , 
 	{ "name": "data_114_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_114_V_read", "role": "default" }} , 
 	{ "name": "data_121_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_121_V_read", "role": "default" }} , 
 	{ "name": "data_126_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_126_V_read", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_ce", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "ce", "bundle":{"name": "ap_ce", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "12",
		"VariableLatency" : "0", "ExactLatency" : "11", "EstimateLatencyMin" : "11", "EstimateLatencyMax" : "11",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_37_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_38_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_39_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_43_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_48_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_49_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_50_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_51_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_55_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_58_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_59_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_63_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_64_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_66_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_68_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_70_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_71_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_74_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_76_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_78_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_80_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_81_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_84_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_87_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_88_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_91_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_92_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_94_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_95_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_99_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_100_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_101_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_105_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_106_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_107_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_108_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_109_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_110_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_113_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_114_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_121_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_126_V_read", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0 {
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_V_read {Type I LastRead 1 FirstWrite -1}
		data_12_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 1 FirstWrite -1}
		data_20_V_read {Type I LastRead 1 FirstWrite -1}
		data_21_V_read {Type I LastRead 1 FirstWrite -1}
		data_22_V_read {Type I LastRead 1 FirstWrite -1}
		data_25_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_V_read {Type I LastRead 1 FirstWrite -1}
		data_28_V_read {Type I LastRead 2 FirstWrite -1}
		data_30_V_read {Type I LastRead 2 FirstWrite -1}
		data_31_V_read {Type I LastRead 2 FirstWrite -1}
		data_32_V_read {Type I LastRead 2 FirstWrite -1}
		data_34_V_read {Type I LastRead 2 FirstWrite -1}
		data_37_V_read {Type I LastRead 3 FirstWrite -1}
		data_38_V_read {Type I LastRead 3 FirstWrite -1}
		data_39_V_read {Type I LastRead 3 FirstWrite -1}
		data_43_V_read {Type I LastRead 3 FirstWrite -1}
		data_48_V_read {Type I LastRead 4 FirstWrite -1}
		data_49_V_read {Type I LastRead 4 FirstWrite -1}
		data_50_V_read {Type I LastRead 4 FirstWrite -1}
		data_51_V_read {Type I LastRead 4 FirstWrite -1}
		data_55_V_read {Type I LastRead 4 FirstWrite -1}
		data_58_V_read {Type I LastRead 4 FirstWrite -1}
		data_59_V_read {Type I LastRead 5 FirstWrite -1}
		data_63_V_read {Type I LastRead 5 FirstWrite -1}
		data_64_V_read {Type I LastRead 5 FirstWrite -1}
		data_66_V_read {Type I LastRead 5 FirstWrite -1}
		data_68_V_read {Type I LastRead 5 FirstWrite -1}
		data_70_V_read {Type I LastRead 5 FirstWrite -1}
		data_71_V_read {Type I LastRead 6 FirstWrite -1}
		data_74_V_read {Type I LastRead 6 FirstWrite -1}
		data_76_V_read {Type I LastRead 6 FirstWrite -1}
		data_78_V_read {Type I LastRead 7 FirstWrite -1}
		data_80_V_read {Type I LastRead 7 FirstWrite -1}
		data_81_V_read {Type I LastRead 7 FirstWrite -1}
		data_84_V_read {Type I LastRead 7 FirstWrite -1}
		data_87_V_read {Type I LastRead 7 FirstWrite -1}
		data_88_V_read {Type I LastRead 7 FirstWrite -1}
		data_91_V_read {Type I LastRead 8 FirstWrite -1}
		data_92_V_read {Type I LastRead 8 FirstWrite -1}
		data_94_V_read {Type I LastRead 8 FirstWrite -1}
		data_95_V_read {Type I LastRead 8 FirstWrite -1}
		data_99_V_read {Type I LastRead 9 FirstWrite -1}
		data_100_V_read {Type I LastRead 9 FirstWrite -1}
		data_101_V_read {Type I LastRead 9 FirstWrite -1}
		data_105_V_read {Type I LastRead 9 FirstWrite -1}
		data_106_V_read {Type I LastRead 9 FirstWrite -1}
		data_107_V_read {Type I LastRead 10 FirstWrite -1}
		data_108_V_read {Type I LastRead 10 FirstWrite -1}
		data_109_V_read {Type I LastRead 10 FirstWrite -1}
		data_110_V_read {Type I LastRead 11 FirstWrite -1}
		data_113_V_read {Type I LastRead 11 FirstWrite -1}
		data_114_V_read {Type I LastRead 11 FirstWrite -1}
		data_121_V_read {Type I LastRead 11 FirstWrite -1}
		data_126_V_read {Type I LastRead 11 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "11", "Max" : "11"}
	, {"Name" : "Interval", "Min" : "12", "Max" : "12"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_1_V_read { ap_none {  { data_1_V_read in_data 0 16 } } }
	data_6_V_read { ap_none {  { data_6_V_read in_data 0 16 } } }
	data_7_V_read { ap_none {  { data_7_V_read in_data 0 16 } } }
	data_8_V_read { ap_none {  { data_8_V_read in_data 0 16 } } }
	data_10_V_read { ap_none {  { data_10_V_read in_data 0 16 } } }
	data_11_V_read { ap_none {  { data_11_V_read in_data 0 16 } } }
	data_12_V_read { ap_none {  { data_12_V_read in_data 0 16 } } }
	data_17_V_read { ap_none {  { data_17_V_read in_data 0 16 } } }
	data_20_V_read { ap_none {  { data_20_V_read in_data 0 16 } } }
	data_21_V_read { ap_none {  { data_21_V_read in_data 0 16 } } }
	data_22_V_read { ap_none {  { data_22_V_read in_data 0 16 } } }
	data_25_V_read { ap_none {  { data_25_V_read in_data 0 16 } } }
	data_27_V_read { ap_none {  { data_27_V_read in_data 0 16 } } }
	data_28_V_read { ap_none {  { data_28_V_read in_data 0 16 } } }
	data_30_V_read { ap_none {  { data_30_V_read in_data 0 16 } } }
	data_31_V_read { ap_none {  { data_31_V_read in_data 0 16 } } }
	data_32_V_read { ap_none {  { data_32_V_read in_data 0 16 } } }
	data_34_V_read { ap_none {  { data_34_V_read in_data 0 16 } } }
	data_37_V_read { ap_none {  { data_37_V_read in_data 0 16 } } }
	data_38_V_read { ap_none {  { data_38_V_read in_data 0 16 } } }
	data_39_V_read { ap_none {  { data_39_V_read in_data 0 16 } } }
	data_43_V_read { ap_none {  { data_43_V_read in_data 0 16 } } }
	data_48_V_read { ap_none {  { data_48_V_read in_data 0 16 } } }
	data_49_V_read { ap_none {  { data_49_V_read in_data 0 16 } } }
	data_50_V_read { ap_none {  { data_50_V_read in_data 0 16 } } }
	data_51_V_read { ap_none {  { data_51_V_read in_data 0 16 } } }
	data_55_V_read { ap_none {  { data_55_V_read in_data 0 16 } } }
	data_58_V_read { ap_none {  { data_58_V_read in_data 0 16 } } }
	data_59_V_read { ap_none {  { data_59_V_read in_data 0 16 } } }
	data_63_V_read { ap_none {  { data_63_V_read in_data 0 16 } } }
	data_64_V_read { ap_none {  { data_64_V_read in_data 0 16 } } }
	data_66_V_read { ap_none {  { data_66_V_read in_data 0 16 } } }
	data_68_V_read { ap_none {  { data_68_V_read in_data 0 16 } } }
	data_70_V_read { ap_none {  { data_70_V_read in_data 0 16 } } }
	data_71_V_read { ap_none {  { data_71_V_read in_data 0 16 } } }
	data_74_V_read { ap_none {  { data_74_V_read in_data 0 16 } } }
	data_76_V_read { ap_none {  { data_76_V_read in_data 0 16 } } }
	data_78_V_read { ap_none {  { data_78_V_read in_data 0 16 } } }
	data_80_V_read { ap_none {  { data_80_V_read in_data 0 16 } } }
	data_81_V_read { ap_none {  { data_81_V_read in_data 0 16 } } }
	data_84_V_read { ap_none {  { data_84_V_read in_data 0 16 } } }
	data_87_V_read { ap_none {  { data_87_V_read in_data 0 16 } } }
	data_88_V_read { ap_none {  { data_88_V_read in_data 0 16 } } }
	data_91_V_read { ap_none {  { data_91_V_read in_data 0 16 } } }
	data_92_V_read { ap_none {  { data_92_V_read in_data 0 16 } } }
	data_94_V_read { ap_none {  { data_94_V_read in_data 0 16 } } }
	data_95_V_read { ap_none {  { data_95_V_read in_data 0 16 } } }
	data_99_V_read { ap_none {  { data_99_V_read in_data 0 16 } } }
	data_100_V_read { ap_none {  { data_100_V_read in_data 0 16 } } }
	data_101_V_read { ap_none {  { data_101_V_read in_data 0 16 } } }
	data_105_V_read { ap_none {  { data_105_V_read in_data 0 16 } } }
	data_106_V_read { ap_none {  { data_106_V_read in_data 0 16 } } }
	data_107_V_read { ap_none {  { data_107_V_read in_data 0 16 } } }
	data_108_V_read { ap_none {  { data_108_V_read in_data 0 16 } } }
	data_109_V_read { ap_none {  { data_109_V_read in_data 0 16 } } }
	data_110_V_read { ap_none {  { data_110_V_read in_data 0 16 } } }
	data_113_V_read { ap_none {  { data_113_V_read in_data 0 16 } } }
	data_114_V_read { ap_none {  { data_114_V_read in_data 0 16 } } }
	data_121_V_read { ap_none {  { data_121_V_read in_data 0 16 } } }
	data_126_V_read { ap_none {  { data_126_V_read in_data 0 16 } } }
}
set moduleName dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 1
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {dense_latency<ap_fixed,ap_fixed<16,6,5,3,0>,config4>.0.0.0.0}
set C_modelType { int 48 }
set C_modelArgList {
	{ data_5_V_read int 16 regular  }
	{ data_8_V_read int 16 regular  }
	{ data_14_V_read int 16 regular  }
	{ data_15_V_read int 16 regular  }
	{ data_17_V_read int 16 regular  }
	{ data_20_V_read int 16 regular  }
	{ data_21_V_read int 16 regular  }
	{ data_22_V_read int 16 regular  }
	{ data_23_V_read int 16 regular  }
	{ data_24_V_read int 16 regular  }
	{ data_25_V_read int 16 regular  }
	{ data_31_V_read int 16 regular  }
	{ data_32_V_read int 16 regular  }
	{ data_36_V_read int 16 regular  }
	{ data_37_V_read int 16 regular  }
	{ data_38_V_read int 16 regular  }
	{ data_41_V_read int 16 regular  }
	{ data_45_V_read int 16 regular  }
	{ data_46_V_read int 16 regular  }
	{ data_47_V_read int 16 regular  }
	{ data_49_V_read int 16 regular  }
	{ data_50_V_read int 16 regular  }
	{ data_51_V_read int 16 regular  }
	{ data_52_V_read int 16 regular  }
	{ data_53_V_read int 16 regular  }
	{ data_54_V_read int 16 regular  }
	{ data_58_V_read int 16 regular  }
	{ data_59_V_read int 16 regular  }
	{ data_62_V_read int 16 regular  }
	{ data_63_V_read int 16 regular  }
	{ data_64_V_read int 16 regular  }
	{ data_65_V_read int 16 regular  }
	{ data_68_V_read int 16 regular  }
	{ data_70_V_read int 16 regular  }
	{ data_71_V_read int 16 regular  }
	{ data_72_V_read int 16 regular  }
	{ data_74_V_read int 16 regular  }
	{ data_75_V_read int 16 regular  }
	{ data_76_V_read int 16 regular  }
	{ data_77_V_read int 16 regular  }
	{ data_80_V_read int 16 regular  }
	{ data_81_V_read int 16 regular  }
	{ data_82_V_read int 16 regular  }
	{ data_83_V_read int 16 regular  }
	{ data_86_V_read int 16 regular  }
	{ data_87_V_read int 16 regular  }
	{ data_88_V_read int 16 regular  }
	{ data_89_V_read int 16 regular  }
	{ data_93_V_read int 16 regular  }
	{ data_94_V_read int 16 regular  }
	{ data_95_V_read int 16 regular  }
	{ data_96_V_read int 16 regular  }
	{ data_97_V_read int 16 regular  }
	{ data_99_V_read int 16 regular  }
	{ data_104_V_read int 16 regular  }
	{ data_106_V_read int 16 regular  }
	{ data_112_V_read int 16 regular  }
	{ data_113_V_read int 16 regular  }
	{ data_115_V_read int 16 regular  }
	{ data_116_V_read int 16 regular  }
	{ data_118_V_read int 16 regular  }
	{ data_121_V_read int 16 regular  }
	{ data_123_V_read int 16 regular  }
	{ data_124_V_read int 16 regular  }
	{ data_126_V_read int 16 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_5_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_8_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_14_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_15_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_17_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_20_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_21_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_22_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_23_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_24_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_25_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_31_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_32_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_36_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_37_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_38_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_41_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_45_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_46_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_47_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_49_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_50_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_51_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_52_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_53_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_54_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_58_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_59_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_62_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_63_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_64_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_65_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_68_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_70_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_71_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_72_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_74_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_75_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_76_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_77_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_80_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_81_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_82_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_83_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_86_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_87_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_88_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_89_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_93_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_94_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_95_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_96_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_97_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_99_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_104_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_106_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_112_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_113_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_115_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_116_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_118_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_121_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_123_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_124_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_126_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 48} ]}
# RTL Port declarations: 
set portNum 71
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ data_5_V_read sc_in sc_lv 16 signal 0 } 
	{ data_8_V_read sc_in sc_lv 16 signal 1 } 
	{ data_14_V_read sc_in sc_lv 16 signal 2 } 
	{ data_15_V_read sc_in sc_lv 16 signal 3 } 
	{ data_17_V_read sc_in sc_lv 16 signal 4 } 
	{ data_20_V_read sc_in sc_lv 16 signal 5 } 
	{ data_21_V_read sc_in sc_lv 16 signal 6 } 
	{ data_22_V_read sc_in sc_lv 16 signal 7 } 
	{ data_23_V_read sc_in sc_lv 16 signal 8 } 
	{ data_24_V_read sc_in sc_lv 16 signal 9 } 
	{ data_25_V_read sc_in sc_lv 16 signal 10 } 
	{ data_31_V_read sc_in sc_lv 16 signal 11 } 
	{ data_32_V_read sc_in sc_lv 16 signal 12 } 
	{ data_36_V_read sc_in sc_lv 16 signal 13 } 
	{ data_37_V_read sc_in sc_lv 16 signal 14 } 
	{ data_38_V_read sc_in sc_lv 16 signal 15 } 
	{ data_41_V_read sc_in sc_lv 16 signal 16 } 
	{ data_45_V_read sc_in sc_lv 16 signal 17 } 
	{ data_46_V_read sc_in sc_lv 16 signal 18 } 
	{ data_47_V_read sc_in sc_lv 16 signal 19 } 
	{ data_49_V_read sc_in sc_lv 16 signal 20 } 
	{ data_50_V_read sc_in sc_lv 16 signal 21 } 
	{ data_51_V_read sc_in sc_lv 16 signal 22 } 
	{ data_52_V_read sc_in sc_lv 16 signal 23 } 
	{ data_53_V_read sc_in sc_lv 16 signal 24 } 
	{ data_54_V_read sc_in sc_lv 16 signal 25 } 
	{ data_58_V_read sc_in sc_lv 16 signal 26 } 
	{ data_59_V_read sc_in sc_lv 16 signal 27 } 
	{ data_62_V_read sc_in sc_lv 16 signal 28 } 
	{ data_63_V_read sc_in sc_lv 16 signal 29 } 
	{ data_64_V_read sc_in sc_lv 16 signal 30 } 
	{ data_65_V_read sc_in sc_lv 16 signal 31 } 
	{ data_68_V_read sc_in sc_lv 16 signal 32 } 
	{ data_70_V_read sc_in sc_lv 16 signal 33 } 
	{ data_71_V_read sc_in sc_lv 16 signal 34 } 
	{ data_72_V_read sc_in sc_lv 16 signal 35 } 
	{ data_74_V_read sc_in sc_lv 16 signal 36 } 
	{ data_75_V_read sc_in sc_lv 16 signal 37 } 
	{ data_76_V_read sc_in sc_lv 16 signal 38 } 
	{ data_77_V_read sc_in sc_lv 16 signal 39 } 
	{ data_80_V_read sc_in sc_lv 16 signal 40 } 
	{ data_81_V_read sc_in sc_lv 16 signal 41 } 
	{ data_82_V_read sc_in sc_lv 16 signal 42 } 
	{ data_83_V_read sc_in sc_lv 16 signal 43 } 
	{ data_86_V_read sc_in sc_lv 16 signal 44 } 
	{ data_87_V_read sc_in sc_lv 16 signal 45 } 
	{ data_88_V_read sc_in sc_lv 16 signal 46 } 
	{ data_89_V_read sc_in sc_lv 16 signal 47 } 
	{ data_93_V_read sc_in sc_lv 16 signal 48 } 
	{ data_94_V_read sc_in sc_lv 16 signal 49 } 
	{ data_95_V_read sc_in sc_lv 16 signal 50 } 
	{ data_96_V_read sc_in sc_lv 16 signal 51 } 
	{ data_97_V_read sc_in sc_lv 16 signal 52 } 
	{ data_99_V_read sc_in sc_lv 16 signal 53 } 
	{ data_104_V_read sc_in sc_lv 16 signal 54 } 
	{ data_106_V_read sc_in sc_lv 16 signal 55 } 
	{ data_112_V_read sc_in sc_lv 16 signal 56 } 
	{ data_113_V_read sc_in sc_lv 16 signal 57 } 
	{ data_115_V_read sc_in sc_lv 16 signal 58 } 
	{ data_116_V_read sc_in sc_lv 16 signal 59 } 
	{ data_118_V_read sc_in sc_lv 16 signal 60 } 
	{ data_121_V_read sc_in sc_lv 16 signal 61 } 
	{ data_123_V_read sc_in sc_lv 16 signal 62 } 
	{ data_124_V_read sc_in sc_lv 16 signal 63 } 
	{ data_126_V_read sc_in sc_lv 16 signal 64 } 
	{ ap_return_0 sc_out sc_lv 16 signal -1 } 
	{ ap_return_1 sc_out sc_lv 16 signal -1 } 
	{ ap_return_2 sc_out sc_lv 16 signal -1 } 
	{ ap_ce sc_in sc_logic 1 ce -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "data_5_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_5_V_read", "role": "default" }} , 
 	{ "name": "data_8_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_8_V_read", "role": "default" }} , 
 	{ "name": "data_14_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_14_V_read", "role": "default" }} , 
 	{ "name": "data_15_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_15_V_read", "role": "default" }} , 
 	{ "name": "data_17_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_17_V_read", "role": "default" }} , 
 	{ "name": "data_20_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_20_V_read", "role": "default" }} , 
 	{ "name": "data_21_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_21_V_read", "role": "default" }} , 
 	{ "name": "data_22_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_22_V_read", "role": "default" }} , 
 	{ "name": "data_23_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_23_V_read", "role": "default" }} , 
 	{ "name": "data_24_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_24_V_read", "role": "default" }} , 
 	{ "name": "data_25_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_25_V_read", "role": "default" }} , 
 	{ "name": "data_31_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_31_V_read", "role": "default" }} , 
 	{ "name": "data_32_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_32_V_read", "role": "default" }} , 
 	{ "name": "data_36_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_36_V_read", "role": "default" }} , 
 	{ "name": "data_37_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_37_V_read", "role": "default" }} , 
 	{ "name": "data_38_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_38_V_read", "role": "default" }} , 
 	{ "name": "data_41_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_41_V_read", "role": "default" }} , 
 	{ "name": "data_45_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_45_V_read", "role": "default" }} , 
 	{ "name": "data_46_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_46_V_read", "role": "default" }} , 
 	{ "name": "data_47_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_47_V_read", "role": "default" }} , 
 	{ "name": "data_49_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_49_V_read", "role": "default" }} , 
 	{ "name": "data_50_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_50_V_read", "role": "default" }} , 
 	{ "name": "data_51_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_51_V_read", "role": "default" }} , 
 	{ "name": "data_52_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_52_V_read", "role": "default" }} , 
 	{ "name": "data_53_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_53_V_read", "role": "default" }} , 
 	{ "name": "data_54_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_54_V_read", "role": "default" }} , 
 	{ "name": "data_58_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_58_V_read", "role": "default" }} , 
 	{ "name": "data_59_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_59_V_read", "role": "default" }} , 
 	{ "name": "data_62_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_62_V_read", "role": "default" }} , 
 	{ "name": "data_63_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_63_V_read", "role": "default" }} , 
 	{ "name": "data_64_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_64_V_read", "role": "default" }} , 
 	{ "name": "data_65_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_65_V_read", "role": "default" }} , 
 	{ "name": "data_68_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_68_V_read", "role": "default" }} , 
 	{ "name": "data_70_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_70_V_read", "role": "default" }} , 
 	{ "name": "data_71_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_71_V_read", "role": "default" }} , 
 	{ "name": "data_72_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_72_V_read", "role": "default" }} , 
 	{ "name": "data_74_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_74_V_read", "role": "default" }} , 
 	{ "name": "data_75_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_75_V_read", "role": "default" }} , 
 	{ "name": "data_76_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_76_V_read", "role": "default" }} , 
 	{ "name": "data_77_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_77_V_read", "role": "default" }} , 
 	{ "name": "data_80_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_80_V_read", "role": "default" }} , 
 	{ "name": "data_81_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_81_V_read", "role": "default" }} , 
 	{ "name": "data_82_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_82_V_read", "role": "default" }} , 
 	{ "name": "data_83_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_83_V_read", "role": "default" }} , 
 	{ "name": "data_86_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_86_V_read", "role": "default" }} , 
 	{ "name": "data_87_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_87_V_read", "role": "default" }} , 
 	{ "name": "data_88_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_88_V_read", "role": "default" }} , 
 	{ "name": "data_89_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_89_V_read", "role": "default" }} , 
 	{ "name": "data_93_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_93_V_read", "role": "default" }} , 
 	{ "name": "data_94_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_94_V_read", "role": "default" }} , 
 	{ "name": "data_95_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_95_V_read", "role": "default" }} , 
 	{ "name": "data_96_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_96_V_read", "role": "default" }} , 
 	{ "name": "data_97_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_97_V_read", "role": "default" }} , 
 	{ "name": "data_99_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_99_V_read", "role": "default" }} , 
 	{ "name": "data_104_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_104_V_read", "role": "default" }} , 
 	{ "name": "data_106_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_106_V_read", "role": "default" }} , 
 	{ "name": "data_112_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_112_V_read", "role": "default" }} , 
 	{ "name": "data_113_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_113_V_read", "role": "default" }} , 
 	{ "name": "data_115_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_115_V_read", "role": "default" }} , 
 	{ "name": "data_116_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_116_V_read", "role": "default" }} , 
 	{ "name": "data_118_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_118_V_read", "role": "default" }} , 
 	{ "name": "data_121_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_121_V_read", "role": "default" }} , 
 	{ "name": "data_123_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_123_V_read", "role": "default" }} , 
 	{ "name": "data_124_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_124_V_read", "role": "default" }} , 
 	{ "name": "data_126_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_126_V_read", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_ce", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "ce", "bundle":{"name": "ap_ce", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_36_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_37_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_38_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_41_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_46_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_49_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_50_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_51_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_52_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_53_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_54_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_58_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_59_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_62_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_63_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_64_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_65_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_68_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_70_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_71_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_72_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_74_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_75_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_76_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_77_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_80_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_81_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_82_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_83_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_86_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_87_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_88_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_89_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_93_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_94_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_95_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_96_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_97_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_99_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_104_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_106_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_112_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_113_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_115_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_116_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_118_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_121_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_123_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_124_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_126_V_read", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0 {
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_20_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_V_read {Type I LastRead 0 FirstWrite -1}
		data_31_V_read {Type I LastRead 0 FirstWrite -1}
		data_32_V_read {Type I LastRead 0 FirstWrite -1}
		data_36_V_read {Type I LastRead 0 FirstWrite -1}
		data_37_V_read {Type I LastRead 0 FirstWrite -1}
		data_38_V_read {Type I LastRead 0 FirstWrite -1}
		data_41_V_read {Type I LastRead 0 FirstWrite -1}
		data_45_V_read {Type I LastRead 0 FirstWrite -1}
		data_46_V_read {Type I LastRead 0 FirstWrite -1}
		data_47_V_read {Type I LastRead 0 FirstWrite -1}
		data_49_V_read {Type I LastRead 0 FirstWrite -1}
		data_50_V_read {Type I LastRead 0 FirstWrite -1}
		data_51_V_read {Type I LastRead 0 FirstWrite -1}
		data_52_V_read {Type I LastRead 0 FirstWrite -1}
		data_53_V_read {Type I LastRead 0 FirstWrite -1}
		data_54_V_read {Type I LastRead 0 FirstWrite -1}
		data_58_V_read {Type I LastRead 0 FirstWrite -1}
		data_59_V_read {Type I LastRead 0 FirstWrite -1}
		data_62_V_read {Type I LastRead 0 FirstWrite -1}
		data_63_V_read {Type I LastRead 0 FirstWrite -1}
		data_64_V_read {Type I LastRead 0 FirstWrite -1}
		data_65_V_read {Type I LastRead 0 FirstWrite -1}
		data_68_V_read {Type I LastRead 0 FirstWrite -1}
		data_70_V_read {Type I LastRead 0 FirstWrite -1}
		data_71_V_read {Type I LastRead 0 FirstWrite -1}
		data_72_V_read {Type I LastRead 0 FirstWrite -1}
		data_74_V_read {Type I LastRead 0 FirstWrite -1}
		data_75_V_read {Type I LastRead 0 FirstWrite -1}
		data_76_V_read {Type I LastRead 0 FirstWrite -1}
		data_77_V_read {Type I LastRead 0 FirstWrite -1}
		data_80_V_read {Type I LastRead 0 FirstWrite -1}
		data_81_V_read {Type I LastRead 0 FirstWrite -1}
		data_82_V_read {Type I LastRead 0 FirstWrite -1}
		data_83_V_read {Type I LastRead 0 FirstWrite -1}
		data_86_V_read {Type I LastRead 0 FirstWrite -1}
		data_87_V_read {Type I LastRead 0 FirstWrite -1}
		data_88_V_read {Type I LastRead 0 FirstWrite -1}
		data_89_V_read {Type I LastRead 0 FirstWrite -1}
		data_93_V_read {Type I LastRead 0 FirstWrite -1}
		data_94_V_read {Type I LastRead 0 FirstWrite -1}
		data_95_V_read {Type I LastRead 0 FirstWrite -1}
		data_96_V_read {Type I LastRead 0 FirstWrite -1}
		data_97_V_read {Type I LastRead 0 FirstWrite -1}
		data_99_V_read {Type I LastRead 0 FirstWrite -1}
		data_104_V_read {Type I LastRead 0 FirstWrite -1}
		data_106_V_read {Type I LastRead 0 FirstWrite -1}
		data_112_V_read {Type I LastRead 0 FirstWrite -1}
		data_113_V_read {Type I LastRead 0 FirstWrite -1}
		data_115_V_read {Type I LastRead 0 FirstWrite -1}
		data_116_V_read {Type I LastRead 0 FirstWrite -1}
		data_118_V_read {Type I LastRead 0 FirstWrite -1}
		data_121_V_read {Type I LastRead 0 FirstWrite -1}
		data_123_V_read {Type I LastRead 0 FirstWrite -1}
		data_124_V_read {Type I LastRead 0 FirstWrite -1}
		data_126_V_read {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "1"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_5_V_read { ap_none {  { data_5_V_read in_data 0 16 } } }
	data_8_V_read { ap_none {  { data_8_V_read in_data 0 16 } } }
	data_14_V_read { ap_none {  { data_14_V_read in_data 0 16 } } }
	data_15_V_read { ap_none {  { data_15_V_read in_data 0 16 } } }
	data_17_V_read { ap_none {  { data_17_V_read in_data 0 16 } } }
	data_20_V_read { ap_none {  { data_20_V_read in_data 0 16 } } }
	data_21_V_read { ap_none {  { data_21_V_read in_data 0 16 } } }
	data_22_V_read { ap_none {  { data_22_V_read in_data 0 16 } } }
	data_23_V_read { ap_none {  { data_23_V_read in_data 0 16 } } }
	data_24_V_read { ap_none {  { data_24_V_read in_data 0 16 } } }
	data_25_V_read { ap_none {  { data_25_V_read in_data 0 16 } } }
	data_31_V_read { ap_none {  { data_31_V_read in_data 0 16 } } }
	data_32_V_read { ap_none {  { data_32_V_read in_data 0 16 } } }
	data_36_V_read { ap_none {  { data_36_V_read in_data 0 16 } } }
	data_37_V_read { ap_none {  { data_37_V_read in_data 0 16 } } }
	data_38_V_read { ap_none {  { data_38_V_read in_data 0 16 } } }
	data_41_V_read { ap_none {  { data_41_V_read in_data 0 16 } } }
	data_45_V_read { ap_none {  { data_45_V_read in_data 0 16 } } }
	data_46_V_read { ap_none {  { data_46_V_read in_data 0 16 } } }
	data_47_V_read { ap_none {  { data_47_V_read in_data 0 16 } } }
	data_49_V_read { ap_none {  { data_49_V_read in_data 0 16 } } }
	data_50_V_read { ap_none {  { data_50_V_read in_data 0 16 } } }
	data_51_V_read { ap_none {  { data_51_V_read in_data 0 16 } } }
	data_52_V_read { ap_none {  { data_52_V_read in_data 0 16 } } }
	data_53_V_read { ap_none {  { data_53_V_read in_data 0 16 } } }
	data_54_V_read { ap_none {  { data_54_V_read in_data 0 16 } } }
	data_58_V_read { ap_none {  { data_58_V_read in_data 0 16 } } }
	data_59_V_read { ap_none {  { data_59_V_read in_data 0 16 } } }
	data_62_V_read { ap_none {  { data_62_V_read in_data 0 16 } } }
	data_63_V_read { ap_none {  { data_63_V_read in_data 0 16 } } }
	data_64_V_read { ap_none {  { data_64_V_read in_data 0 16 } } }
	data_65_V_read { ap_none {  { data_65_V_read in_data 0 16 } } }
	data_68_V_read { ap_none {  { data_68_V_read in_data 0 16 } } }
	data_70_V_read { ap_none {  { data_70_V_read in_data 0 16 } } }
	data_71_V_read { ap_none {  { data_71_V_read in_data 0 16 } } }
	data_72_V_read { ap_none {  { data_72_V_read in_data 0 16 } } }
	data_74_V_read { ap_none {  { data_74_V_read in_data 0 16 } } }
	data_75_V_read { ap_none {  { data_75_V_read in_data 0 16 } } }
	data_76_V_read { ap_none {  { data_76_V_read in_data 0 16 } } }
	data_77_V_read { ap_none {  { data_77_V_read in_data 0 16 } } }
	data_80_V_read { ap_none {  { data_80_V_read in_data 0 16 } } }
	data_81_V_read { ap_none {  { data_81_V_read in_data 0 16 } } }
	data_82_V_read { ap_none {  { data_82_V_read in_data 0 16 } } }
	data_83_V_read { ap_none {  { data_83_V_read in_data 0 16 } } }
	data_86_V_read { ap_none {  { data_86_V_read in_data 0 16 } } }
	data_87_V_read { ap_none {  { data_87_V_read in_data 0 16 } } }
	data_88_V_read { ap_none {  { data_88_V_read in_data 0 16 } } }
	data_89_V_read { ap_none {  { data_89_V_read in_data 0 16 } } }
	data_93_V_read { ap_none {  { data_93_V_read in_data 0 16 } } }
	data_94_V_read { ap_none {  { data_94_V_read in_data 0 16 } } }
	data_95_V_read { ap_none {  { data_95_V_read in_data 0 16 } } }
	data_96_V_read { ap_none {  { data_96_V_read in_data 0 16 } } }
	data_97_V_read { ap_none {  { data_97_V_read in_data 0 16 } } }
	data_99_V_read { ap_none {  { data_99_V_read in_data 0 16 } } }
	data_104_V_read { ap_none {  { data_104_V_read in_data 0 16 } } }
	data_106_V_read { ap_none {  { data_106_V_read in_data 0 16 } } }
	data_112_V_read { ap_none {  { data_112_V_read in_data 0 16 } } }
	data_113_V_read { ap_none {  { data_113_V_read in_data 0 16 } } }
	data_115_V_read { ap_none {  { data_115_V_read in_data 0 16 } } }
	data_116_V_read { ap_none {  { data_116_V_read in_data 0 16 } } }
	data_118_V_read { ap_none {  { data_118_V_read in_data 0 16 } } }
	data_121_V_read { ap_none {  { data_121_V_read in_data 0 16 } } }
	data_123_V_read { ap_none {  { data_123_V_read in_data 0 16 } } }
	data_124_V_read { ap_none {  { data_124_V_read in_data 0 16 } } }
	data_126_V_read { ap_none {  { data_126_V_read in_data 0 16 } } }
}
