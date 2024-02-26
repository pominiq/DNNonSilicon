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
	{ data_2_V_read int 16 regular  }
	{ data_3_V_read int 16 regular  }
	{ data_4_V_read int 16 regular  }
	{ data_9_V_read int 16 regular  }
	{ data_11_V_read int 16 regular  }
	{ data_15_V_read int 16 regular  }
	{ data_16_V_read int 16 regular  }
	{ data_18_V_read int 16 regular  }
	{ data_19_V_read int 16 regular  }
	{ data_21_V_read int 16 regular  }
	{ data_22_V_read int 16 regular  }
	{ data_23_V_read int 16 regular  }
	{ data_27_V_read int 16 regular  }
	{ data_29_V_read int 16 regular  }
	{ data_30_V_read int 16 regular  }
	{ data_32_V_read int 16 regular  }
	{ data_34_V_read int 16 regular  }
	{ data_37_V_read int 16 regular  }
	{ data_41_V_read int 16 regular  }
	{ data_45_V_read int 16 regular  }
	{ data_47_V_read int 16 regular  }
	{ data_48_V_read int 16 regular  }
	{ data_50_V_read int 16 regular  }
	{ data_54_V_read int 16 regular  }
	{ data_55_V_read int 16 regular  }
	{ data_56_V_read int 16 regular  }
	{ data_57_V_read int 16 regular  }
	{ data_58_V_read int 16 regular  }
	{ data_61_V_read int 16 regular  }
	{ data_66_V_read int 16 regular  }
	{ data_70_V_read int 16 regular  }
	{ data_74_V_read int 16 regular  }
	{ data_75_V_read int 16 regular  }
	{ data_76_V_read int 16 regular  }
	{ data_77_V_read int 16 regular  }
	{ data_80_V_read int 16 regular  }
	{ data_82_V_read int 16 regular  }
	{ data_85_V_read int 16 regular  }
	{ data_86_V_read int 16 regular  }
	{ data_88_V_read int 16 regular  }
	{ data_90_V_read int 16 regular  }
	{ data_93_V_read int 16 regular  }
	{ data_94_V_read int 16 regular  }
	{ data_95_V_read int 16 regular  }
	{ data_102_V_read int 16 regular  }
	{ data_103_V_read int 16 regular  }
	{ data_104_V_read int 16 regular  }
	{ data_105_V_read int 16 regular  }
	{ data_106_V_read int 16 regular  }
	{ data_108_V_read int 16 regular  }
	{ data_109_V_read int 16 regular  }
	{ data_111_V_read int 16 regular  }
	{ data_112_V_read int 16 regular  }
	{ data_114_V_read int 16 regular  }
	{ data_119_V_read int 16 regular  }
	{ data_120_V_read int 16 regular  }
	{ data_121_V_read int 16 regular  }
	{ data_127_V_read int 16 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_2_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_3_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_4_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_9_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_11_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_15_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_16_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_18_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_19_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_21_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_22_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_23_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_27_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_29_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_30_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_32_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_34_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_37_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_41_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_45_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_47_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_48_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_50_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_54_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_55_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_56_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_57_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_58_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_61_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_66_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_70_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_74_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_75_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_76_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_77_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_80_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_82_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_85_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_86_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_88_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_90_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_93_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_94_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_95_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_102_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_103_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_104_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_105_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_106_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_108_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_109_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_111_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_112_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_114_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_119_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_120_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_121_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_127_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 48} ]}
# RTL Port declarations: 
set portNum 64
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ data_2_V_read sc_in sc_lv 16 signal 0 } 
	{ data_3_V_read sc_in sc_lv 16 signal 1 } 
	{ data_4_V_read sc_in sc_lv 16 signal 2 } 
	{ data_9_V_read sc_in sc_lv 16 signal 3 } 
	{ data_11_V_read sc_in sc_lv 16 signal 4 } 
	{ data_15_V_read sc_in sc_lv 16 signal 5 } 
	{ data_16_V_read sc_in sc_lv 16 signal 6 } 
	{ data_18_V_read sc_in sc_lv 16 signal 7 } 
	{ data_19_V_read sc_in sc_lv 16 signal 8 } 
	{ data_21_V_read sc_in sc_lv 16 signal 9 } 
	{ data_22_V_read sc_in sc_lv 16 signal 10 } 
	{ data_23_V_read sc_in sc_lv 16 signal 11 } 
	{ data_27_V_read sc_in sc_lv 16 signal 12 } 
	{ data_29_V_read sc_in sc_lv 16 signal 13 } 
	{ data_30_V_read sc_in sc_lv 16 signal 14 } 
	{ data_32_V_read sc_in sc_lv 16 signal 15 } 
	{ data_34_V_read sc_in sc_lv 16 signal 16 } 
	{ data_37_V_read sc_in sc_lv 16 signal 17 } 
	{ data_41_V_read sc_in sc_lv 16 signal 18 } 
	{ data_45_V_read sc_in sc_lv 16 signal 19 } 
	{ data_47_V_read sc_in sc_lv 16 signal 20 } 
	{ data_48_V_read sc_in sc_lv 16 signal 21 } 
	{ data_50_V_read sc_in sc_lv 16 signal 22 } 
	{ data_54_V_read sc_in sc_lv 16 signal 23 } 
	{ data_55_V_read sc_in sc_lv 16 signal 24 } 
	{ data_56_V_read sc_in sc_lv 16 signal 25 } 
	{ data_57_V_read sc_in sc_lv 16 signal 26 } 
	{ data_58_V_read sc_in sc_lv 16 signal 27 } 
	{ data_61_V_read sc_in sc_lv 16 signal 28 } 
	{ data_66_V_read sc_in sc_lv 16 signal 29 } 
	{ data_70_V_read sc_in sc_lv 16 signal 30 } 
	{ data_74_V_read sc_in sc_lv 16 signal 31 } 
	{ data_75_V_read sc_in sc_lv 16 signal 32 } 
	{ data_76_V_read sc_in sc_lv 16 signal 33 } 
	{ data_77_V_read sc_in sc_lv 16 signal 34 } 
	{ data_80_V_read sc_in sc_lv 16 signal 35 } 
	{ data_82_V_read sc_in sc_lv 16 signal 36 } 
	{ data_85_V_read sc_in sc_lv 16 signal 37 } 
	{ data_86_V_read sc_in sc_lv 16 signal 38 } 
	{ data_88_V_read sc_in sc_lv 16 signal 39 } 
	{ data_90_V_read sc_in sc_lv 16 signal 40 } 
	{ data_93_V_read sc_in sc_lv 16 signal 41 } 
	{ data_94_V_read sc_in sc_lv 16 signal 42 } 
	{ data_95_V_read sc_in sc_lv 16 signal 43 } 
	{ data_102_V_read sc_in sc_lv 16 signal 44 } 
	{ data_103_V_read sc_in sc_lv 16 signal 45 } 
	{ data_104_V_read sc_in sc_lv 16 signal 46 } 
	{ data_105_V_read sc_in sc_lv 16 signal 47 } 
	{ data_106_V_read sc_in sc_lv 16 signal 48 } 
	{ data_108_V_read sc_in sc_lv 16 signal 49 } 
	{ data_109_V_read sc_in sc_lv 16 signal 50 } 
	{ data_111_V_read sc_in sc_lv 16 signal 51 } 
	{ data_112_V_read sc_in sc_lv 16 signal 52 } 
	{ data_114_V_read sc_in sc_lv 16 signal 53 } 
	{ data_119_V_read sc_in sc_lv 16 signal 54 } 
	{ data_120_V_read sc_in sc_lv 16 signal 55 } 
	{ data_121_V_read sc_in sc_lv 16 signal 56 } 
	{ data_127_V_read sc_in sc_lv 16 signal 57 } 
	{ ap_return_0 sc_out sc_lv 16 signal -1 } 
	{ ap_return_1 sc_out sc_lv 16 signal -1 } 
	{ ap_return_2 sc_out sc_lv 16 signal -1 } 
	{ ap_ce sc_in sc_logic 1 ce -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "data_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_2_V_read", "role": "default" }} , 
 	{ "name": "data_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_3_V_read", "role": "default" }} , 
 	{ "name": "data_4_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_4_V_read", "role": "default" }} , 
 	{ "name": "data_9_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_9_V_read", "role": "default" }} , 
 	{ "name": "data_11_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_11_V_read", "role": "default" }} , 
 	{ "name": "data_15_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_15_V_read", "role": "default" }} , 
 	{ "name": "data_16_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_16_V_read", "role": "default" }} , 
 	{ "name": "data_18_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_18_V_read", "role": "default" }} , 
 	{ "name": "data_19_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_19_V_read", "role": "default" }} , 
 	{ "name": "data_21_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_21_V_read", "role": "default" }} , 
 	{ "name": "data_22_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_22_V_read", "role": "default" }} , 
 	{ "name": "data_23_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_23_V_read", "role": "default" }} , 
 	{ "name": "data_27_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_27_V_read", "role": "default" }} , 
 	{ "name": "data_29_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_29_V_read", "role": "default" }} , 
 	{ "name": "data_30_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_30_V_read", "role": "default" }} , 
 	{ "name": "data_32_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_32_V_read", "role": "default" }} , 
 	{ "name": "data_34_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_34_V_read", "role": "default" }} , 
 	{ "name": "data_37_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_37_V_read", "role": "default" }} , 
 	{ "name": "data_41_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_41_V_read", "role": "default" }} , 
 	{ "name": "data_45_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_45_V_read", "role": "default" }} , 
 	{ "name": "data_47_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_47_V_read", "role": "default" }} , 
 	{ "name": "data_48_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_48_V_read", "role": "default" }} , 
 	{ "name": "data_50_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_50_V_read", "role": "default" }} , 
 	{ "name": "data_54_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_54_V_read", "role": "default" }} , 
 	{ "name": "data_55_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_55_V_read", "role": "default" }} , 
 	{ "name": "data_56_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_56_V_read", "role": "default" }} , 
 	{ "name": "data_57_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_57_V_read", "role": "default" }} , 
 	{ "name": "data_58_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_58_V_read", "role": "default" }} , 
 	{ "name": "data_61_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_61_V_read", "role": "default" }} , 
 	{ "name": "data_66_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_66_V_read", "role": "default" }} , 
 	{ "name": "data_70_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_70_V_read", "role": "default" }} , 
 	{ "name": "data_74_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_74_V_read", "role": "default" }} , 
 	{ "name": "data_75_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_75_V_read", "role": "default" }} , 
 	{ "name": "data_76_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_76_V_read", "role": "default" }} , 
 	{ "name": "data_77_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_77_V_read", "role": "default" }} , 
 	{ "name": "data_80_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_80_V_read", "role": "default" }} , 
 	{ "name": "data_82_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_82_V_read", "role": "default" }} , 
 	{ "name": "data_85_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_85_V_read", "role": "default" }} , 
 	{ "name": "data_86_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_86_V_read", "role": "default" }} , 
 	{ "name": "data_88_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_88_V_read", "role": "default" }} , 
 	{ "name": "data_90_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_90_V_read", "role": "default" }} , 
 	{ "name": "data_93_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_93_V_read", "role": "default" }} , 
 	{ "name": "data_94_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_94_V_read", "role": "default" }} , 
 	{ "name": "data_95_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_95_V_read", "role": "default" }} , 
 	{ "name": "data_102_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_102_V_read", "role": "default" }} , 
 	{ "name": "data_103_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_103_V_read", "role": "default" }} , 
 	{ "name": "data_104_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_104_V_read", "role": "default" }} , 
 	{ "name": "data_105_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_105_V_read", "role": "default" }} , 
 	{ "name": "data_106_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_106_V_read", "role": "default" }} , 
 	{ "name": "data_108_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_108_V_read", "role": "default" }} , 
 	{ "name": "data_109_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_109_V_read", "role": "default" }} , 
 	{ "name": "data_111_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_111_V_read", "role": "default" }} , 
 	{ "name": "data_112_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_112_V_read", "role": "default" }} , 
 	{ "name": "data_114_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_114_V_read", "role": "default" }} , 
 	{ "name": "data_119_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_119_V_read", "role": "default" }} , 
 	{ "name": "data_120_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_120_V_read", "role": "default" }} , 
 	{ "name": "data_121_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_121_V_read", "role": "default" }} , 
 	{ "name": "data_127_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_127_V_read", "role": "default" }} , 
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
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_37_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_41_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_48_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_50_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_54_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_55_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_56_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_57_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_58_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_61_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_66_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_70_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_74_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_75_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_76_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_77_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_80_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_82_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_85_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_86_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_88_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_90_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_93_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_94_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_95_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_102_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_103_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_104_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_105_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_106_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_108_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_109_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_111_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_112_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_114_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_119_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_120_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_121_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_127_V_read", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0 {
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_16_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_V_read {Type I LastRead 0 FirstWrite -1}
		data_30_V_read {Type I LastRead 0 FirstWrite -1}
		data_32_V_read {Type I LastRead 0 FirstWrite -1}
		data_34_V_read {Type I LastRead 0 FirstWrite -1}
		data_37_V_read {Type I LastRead 0 FirstWrite -1}
		data_41_V_read {Type I LastRead 0 FirstWrite -1}
		data_45_V_read {Type I LastRead 0 FirstWrite -1}
		data_47_V_read {Type I LastRead 0 FirstWrite -1}
		data_48_V_read {Type I LastRead 0 FirstWrite -1}
		data_50_V_read {Type I LastRead 0 FirstWrite -1}
		data_54_V_read {Type I LastRead 0 FirstWrite -1}
		data_55_V_read {Type I LastRead 0 FirstWrite -1}
		data_56_V_read {Type I LastRead 0 FirstWrite -1}
		data_57_V_read {Type I LastRead 0 FirstWrite -1}
		data_58_V_read {Type I LastRead 0 FirstWrite -1}
		data_61_V_read {Type I LastRead 0 FirstWrite -1}
		data_66_V_read {Type I LastRead 0 FirstWrite -1}
		data_70_V_read {Type I LastRead 0 FirstWrite -1}
		data_74_V_read {Type I LastRead 0 FirstWrite -1}
		data_75_V_read {Type I LastRead 0 FirstWrite -1}
		data_76_V_read {Type I LastRead 0 FirstWrite -1}
		data_77_V_read {Type I LastRead 0 FirstWrite -1}
		data_80_V_read {Type I LastRead 0 FirstWrite -1}
		data_82_V_read {Type I LastRead 0 FirstWrite -1}
		data_85_V_read {Type I LastRead 0 FirstWrite -1}
		data_86_V_read {Type I LastRead 0 FirstWrite -1}
		data_88_V_read {Type I LastRead 0 FirstWrite -1}
		data_90_V_read {Type I LastRead 0 FirstWrite -1}
		data_93_V_read {Type I LastRead 0 FirstWrite -1}
		data_94_V_read {Type I LastRead 0 FirstWrite -1}
		data_95_V_read {Type I LastRead 0 FirstWrite -1}
		data_102_V_read {Type I LastRead 0 FirstWrite -1}
		data_103_V_read {Type I LastRead 0 FirstWrite -1}
		data_104_V_read {Type I LastRead 0 FirstWrite -1}
		data_105_V_read {Type I LastRead 0 FirstWrite -1}
		data_106_V_read {Type I LastRead 0 FirstWrite -1}
		data_108_V_read {Type I LastRead 0 FirstWrite -1}
		data_109_V_read {Type I LastRead 0 FirstWrite -1}
		data_111_V_read {Type I LastRead 0 FirstWrite -1}
		data_112_V_read {Type I LastRead 0 FirstWrite -1}
		data_114_V_read {Type I LastRead 0 FirstWrite -1}
		data_119_V_read {Type I LastRead 0 FirstWrite -1}
		data_120_V_read {Type I LastRead 0 FirstWrite -1}
		data_121_V_read {Type I LastRead 0 FirstWrite -1}
		data_127_V_read {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "1"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_2_V_read { ap_none {  { data_2_V_read in_data 0 16 } } }
	data_3_V_read { ap_none {  { data_3_V_read in_data 0 16 } } }
	data_4_V_read { ap_none {  { data_4_V_read in_data 0 16 } } }
	data_9_V_read { ap_none {  { data_9_V_read in_data 0 16 } } }
	data_11_V_read { ap_none {  { data_11_V_read in_data 0 16 } } }
	data_15_V_read { ap_none {  { data_15_V_read in_data 0 16 } } }
	data_16_V_read { ap_none {  { data_16_V_read in_data 0 16 } } }
	data_18_V_read { ap_none {  { data_18_V_read in_data 0 16 } } }
	data_19_V_read { ap_none {  { data_19_V_read in_data 0 16 } } }
	data_21_V_read { ap_none {  { data_21_V_read in_data 0 16 } } }
	data_22_V_read { ap_none {  { data_22_V_read in_data 0 16 } } }
	data_23_V_read { ap_none {  { data_23_V_read in_data 0 16 } } }
	data_27_V_read { ap_none {  { data_27_V_read in_data 0 16 } } }
	data_29_V_read { ap_none {  { data_29_V_read in_data 0 16 } } }
	data_30_V_read { ap_none {  { data_30_V_read in_data 0 16 } } }
	data_32_V_read { ap_none {  { data_32_V_read in_data 0 16 } } }
	data_34_V_read { ap_none {  { data_34_V_read in_data 0 16 } } }
	data_37_V_read { ap_none {  { data_37_V_read in_data 0 16 } } }
	data_41_V_read { ap_none {  { data_41_V_read in_data 0 16 } } }
	data_45_V_read { ap_none {  { data_45_V_read in_data 0 16 } } }
	data_47_V_read { ap_none {  { data_47_V_read in_data 0 16 } } }
	data_48_V_read { ap_none {  { data_48_V_read in_data 0 16 } } }
	data_50_V_read { ap_none {  { data_50_V_read in_data 0 16 } } }
	data_54_V_read { ap_none {  { data_54_V_read in_data 0 16 } } }
	data_55_V_read { ap_none {  { data_55_V_read in_data 0 16 } } }
	data_56_V_read { ap_none {  { data_56_V_read in_data 0 16 } } }
	data_57_V_read { ap_none {  { data_57_V_read in_data 0 16 } } }
	data_58_V_read { ap_none {  { data_58_V_read in_data 0 16 } } }
	data_61_V_read { ap_none {  { data_61_V_read in_data 0 16 } } }
	data_66_V_read { ap_none {  { data_66_V_read in_data 0 16 } } }
	data_70_V_read { ap_none {  { data_70_V_read in_data 0 16 } } }
	data_74_V_read { ap_none {  { data_74_V_read in_data 0 16 } } }
	data_75_V_read { ap_none {  { data_75_V_read in_data 0 16 } } }
	data_76_V_read { ap_none {  { data_76_V_read in_data 0 16 } } }
	data_77_V_read { ap_none {  { data_77_V_read in_data 0 16 } } }
	data_80_V_read { ap_none {  { data_80_V_read in_data 0 16 } } }
	data_82_V_read { ap_none {  { data_82_V_read in_data 0 16 } } }
	data_85_V_read { ap_none {  { data_85_V_read in_data 0 16 } } }
	data_86_V_read { ap_none {  { data_86_V_read in_data 0 16 } } }
	data_88_V_read { ap_none {  { data_88_V_read in_data 0 16 } } }
	data_90_V_read { ap_none {  { data_90_V_read in_data 0 16 } } }
	data_93_V_read { ap_none {  { data_93_V_read in_data 0 16 } } }
	data_94_V_read { ap_none {  { data_94_V_read in_data 0 16 } } }
	data_95_V_read { ap_none {  { data_95_V_read in_data 0 16 } } }
	data_102_V_read { ap_none {  { data_102_V_read in_data 0 16 } } }
	data_103_V_read { ap_none {  { data_103_V_read in_data 0 16 } } }
	data_104_V_read { ap_none {  { data_104_V_read in_data 0 16 } } }
	data_105_V_read { ap_none {  { data_105_V_read in_data 0 16 } } }
	data_106_V_read { ap_none {  { data_106_V_read in_data 0 16 } } }
	data_108_V_read { ap_none {  { data_108_V_read in_data 0 16 } } }
	data_109_V_read { ap_none {  { data_109_V_read in_data 0 16 } } }
	data_111_V_read { ap_none {  { data_111_V_read in_data 0 16 } } }
	data_112_V_read { ap_none {  { data_112_V_read in_data 0 16 } } }
	data_114_V_read { ap_none {  { data_114_V_read in_data 0 16 } } }
	data_119_V_read { ap_none {  { data_119_V_read in_data 0 16 } } }
	data_120_V_read { ap_none {  { data_120_V_read in_data 0 16 } } }
	data_121_V_read { ap_none {  { data_121_V_read in_data 0 16 } } }
	data_127_V_read { ap_none {  { data_127_V_read in_data 0 16 } } }
}
