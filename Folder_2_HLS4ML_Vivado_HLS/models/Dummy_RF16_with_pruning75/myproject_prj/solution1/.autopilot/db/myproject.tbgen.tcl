set moduleName myproject
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {myproject}
set C_modelType { void 0 }
set C_modelArgList {
	{ dense_input_V int 64 regular {pointer 0}  }
	{ layer5_out_0_V int 16 regular {pointer 1}  }
	{ layer5_out_1_V int 16 regular {pointer 1}  }
	{ layer5_out_2_V int 16 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "dense_input_V", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "dense_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]},{"low":16,"up":31,"cElement": [{"cName": "dense_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]},{"low":32,"up":47,"cElement": [{"cName": "dense_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]},{"low":48,"up":63,"cElement": [{"cName": "dense_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "layer5_out_0_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer5_out.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "layer5_out_1_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer5_out.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "layer5_out_2_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer5_out.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} ]}
# RTL Port declarations: 
set portNum 14
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ dense_input_V sc_in sc_lv 64 signal 0 } 
	{ dense_input_V_ap_vld sc_in sc_logic 1 invld 0 } 
	{ layer5_out_0_V sc_out sc_lv 16 signal 1 } 
	{ layer5_out_0_V_ap_vld sc_out sc_logic 1 outvld 1 } 
	{ layer5_out_1_V sc_out sc_lv 16 signal 2 } 
	{ layer5_out_1_V_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ layer5_out_2_V sc_out sc_lv 16 signal 3 } 
	{ layer5_out_2_V_ap_vld sc_out sc_logic 1 outvld 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "dense_input_V", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_input_V", "role": "default" }} , 
 	{ "name": "dense_input_V_ap_vld", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "dense_input_V", "role": "ap_vld" }} , 
 	{ "name": "layer5_out_0_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer5_out_0_V", "role": "default" }} , 
 	{ "name": "layer5_out_0_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer5_out_0_V", "role": "ap_vld" }} , 
 	{ "name": "layer5_out_1_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer5_out_1_V", "role": "default" }} , 
 	{ "name": "layer5_out_1_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer5_out_1_V", "role": "ap_vld" }} , 
 	{ "name": "layer5_out_2_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer5_out_2_V", "role": "default" }} , 
 	{ "name": "layer5_out_2_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer5_out_2_V", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4"],
		"CDFG" : "myproject",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "12",
		"VariableLatency" : "0", "ExactLatency" : "25", "EstimateLatencyMin" : "25", "EstimateLatencyMax" : "25",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "dense_input_V", "Type" : "Vld", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "dense_input_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer5_out_0_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "layer5_out_1_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "layer5_out_2_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "exp_table1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config5_s_fu_203", "Port" : "exp_table1"}]},
			{"Name" : "invert_table2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config5_s_fu_203", "Port" : "invert_table2"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_71", "Parent" : "0",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "11",
		"VariableLatency" : "0", "ExactLatency" : "10", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_fu_77", "Parent" : "0",
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
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_40_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_42_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_43_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_48_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_52_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_53_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_54_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_56_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_57_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_62_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_63_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_64_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_66_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_67_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_69_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_73_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_75_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_79_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_80_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_82_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_83_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_84_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_85_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_87_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_88_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_91_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_93_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_94_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_98_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_102_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_103_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_105_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_107_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_125_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_140", "Parent" : "0",
		"CDFG" : "relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_40_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_42_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_43_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_48_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_52_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_53_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_54_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_56_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_57_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_62_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_63_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_64_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_66_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_67_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_69_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_73_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_75_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_79_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_80_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_82_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_83_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_84_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_85_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_87_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_88_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_91_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_93_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_94_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_98_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_102_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_103_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_105_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_107_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_125_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config5_s_fu_203", "Parent" : "0", "Child" : ["5", "6", "7", "8", "9"],
		"CDFG" : "softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config5_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "exp_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "invert_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config5_s_fu_203.exp_table1_U", "Parent" : "4"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config5_s_fu_203.invert_table2_U", "Parent" : "4"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config5_s_fu_203.myproject_mul_mul_17ns_18s_26_1_1_U120", "Parent" : "4"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config5_s_fu_203.myproject_mul_mul_17ns_18s_26_1_1_U121", "Parent" : "4"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config5_s_fu_203.myproject_mul_mul_17ns_18s_26_1_1_U122", "Parent" : "4"}]}


set ArgLastReadFirstWriteLatency {
	myproject {
		dense_input_V {Type I LastRead 0 FirstWrite -1}
		layer5_out_0_V {Type O LastRead -1 FirstWrite 25}
		layer5_out_1_V {Type O LastRead -1 FirstWrite 25}
		layer5_out_2_V {Type O LastRead -1 FirstWrite 25}
		exp_table1 {Type I LastRead -1 FirstWrite -1}
		invert_table2 {Type I LastRead -1 FirstWrite -1}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s {
		data_V_read {Type I LastRead 0 FirstWrite -1}}
	dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0 {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_V_read {Type I LastRead 1 FirstWrite -1}
		data_8_V_read {Type I LastRead 1 FirstWrite -1}
		data_10_V_read {Type I LastRead 1 FirstWrite -1}
		data_14_V_read {Type I LastRead 1 FirstWrite -1}
		data_15_V_read {Type I LastRead 1 FirstWrite -1}
		data_17_V_read {Type I LastRead 2 FirstWrite -1}
		data_18_V_read {Type I LastRead 2 FirstWrite -1}
		data_19_V_read {Type I LastRead 2 FirstWrite -1}
		data_21_V_read {Type I LastRead 2 FirstWrite -1}
		data_23_V_read {Type I LastRead 2 FirstWrite -1}
		data_24_V_read {Type I LastRead 3 FirstWrite -1}
		data_26_V_read {Type I LastRead 3 FirstWrite -1}
		data_27_V_read {Type I LastRead 3 FirstWrite -1}
		data_29_V_read {Type I LastRead 4 FirstWrite -1}
		data_30_V_read {Type I LastRead 4 FirstWrite -1}
		data_32_V_read {Type I LastRead 4 FirstWrite -1}
		data_34_V_read {Type I LastRead 4 FirstWrite -1}
		data_35_V_read {Type I LastRead 4 FirstWrite -1}
		data_40_V_read {Type I LastRead 5 FirstWrite -1}
		data_42_V_read {Type I LastRead 5 FirstWrite -1}
		data_43_V_read {Type I LastRead 5 FirstWrite -1}
		data_45_V_read {Type I LastRead 5 FirstWrite -1}
		data_47_V_read {Type I LastRead 5 FirstWrite -1}
		data_48_V_read {Type I LastRead 6 FirstWrite -1}
		data_52_V_read {Type I LastRead 6 FirstWrite -1}
		data_53_V_read {Type I LastRead 6 FirstWrite -1}
		data_54_V_read {Type I LastRead 6 FirstWrite -1}
		data_56_V_read {Type I LastRead 6 FirstWrite -1}
		data_57_V_read {Type I LastRead 7 FirstWrite -1}
		data_62_V_read {Type I LastRead 7 FirstWrite -1}
		data_63_V_read {Type I LastRead 7 FirstWrite -1}
		data_64_V_read {Type I LastRead 7 FirstWrite -1}
		data_66_V_read {Type I LastRead 7 FirstWrite -1}
		data_67_V_read {Type I LastRead 8 FirstWrite -1}
		data_69_V_read {Type I LastRead 8 FirstWrite -1}
		data_73_V_read {Type I LastRead 8 FirstWrite -1}
		data_75_V_read {Type I LastRead 8 FirstWrite -1}
		data_79_V_read {Type I LastRead 9 FirstWrite -1}
		data_80_V_read {Type I LastRead 9 FirstWrite -1}
		data_82_V_read {Type I LastRead 9 FirstWrite -1}
		data_83_V_read {Type I LastRead 9 FirstWrite -1}
		data_84_V_read {Type I LastRead 9 FirstWrite -1}
		data_85_V_read {Type I LastRead 10 FirstWrite -1}
		data_87_V_read {Type I LastRead 10 FirstWrite -1}
		data_88_V_read {Type I LastRead 10 FirstWrite -1}
		data_91_V_read {Type I LastRead 10 FirstWrite -1}
		data_93_V_read {Type I LastRead 10 FirstWrite -1}
		data_94_V_read {Type I LastRead 10 FirstWrite -1}
		data_98_V_read {Type I LastRead 11 FirstWrite -1}
		data_102_V_read {Type I LastRead 11 FirstWrite -1}
		data_103_V_read {Type I LastRead 11 FirstWrite -1}
		data_105_V_read {Type I LastRead 11 FirstWrite -1}
		data_107_V_read {Type I LastRead 11 FirstWrite -1}
		data_125_V_read {Type I LastRead 11 FirstWrite -1}}
	relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_V_read {Type I LastRead 0 FirstWrite -1}
		data_26_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_V_read {Type I LastRead 0 FirstWrite -1}
		data_30_V_read {Type I LastRead 0 FirstWrite -1}
		data_32_V_read {Type I LastRead 0 FirstWrite -1}
		data_34_V_read {Type I LastRead 0 FirstWrite -1}
		data_35_V_read {Type I LastRead 0 FirstWrite -1}
		data_40_V_read {Type I LastRead 0 FirstWrite -1}
		data_42_V_read {Type I LastRead 0 FirstWrite -1}
		data_43_V_read {Type I LastRead 0 FirstWrite -1}
		data_45_V_read {Type I LastRead 0 FirstWrite -1}
		data_47_V_read {Type I LastRead 0 FirstWrite -1}
		data_48_V_read {Type I LastRead 0 FirstWrite -1}
		data_52_V_read {Type I LastRead 0 FirstWrite -1}
		data_53_V_read {Type I LastRead 0 FirstWrite -1}
		data_54_V_read {Type I LastRead 0 FirstWrite -1}
		data_56_V_read {Type I LastRead 0 FirstWrite -1}
		data_57_V_read {Type I LastRead 0 FirstWrite -1}
		data_62_V_read {Type I LastRead 0 FirstWrite -1}
		data_63_V_read {Type I LastRead 0 FirstWrite -1}
		data_64_V_read {Type I LastRead 0 FirstWrite -1}
		data_66_V_read {Type I LastRead 0 FirstWrite -1}
		data_67_V_read {Type I LastRead 0 FirstWrite -1}
		data_69_V_read {Type I LastRead 0 FirstWrite -1}
		data_73_V_read {Type I LastRead 0 FirstWrite -1}
		data_75_V_read {Type I LastRead 0 FirstWrite -1}
		data_79_V_read {Type I LastRead 0 FirstWrite -1}
		data_80_V_read {Type I LastRead 0 FirstWrite -1}
		data_82_V_read {Type I LastRead 0 FirstWrite -1}
		data_83_V_read {Type I LastRead 0 FirstWrite -1}
		data_84_V_read {Type I LastRead 0 FirstWrite -1}
		data_85_V_read {Type I LastRead 0 FirstWrite -1}
		data_87_V_read {Type I LastRead 0 FirstWrite -1}
		data_88_V_read {Type I LastRead 0 FirstWrite -1}
		data_91_V_read {Type I LastRead 0 FirstWrite -1}
		data_93_V_read {Type I LastRead 0 FirstWrite -1}
		data_94_V_read {Type I LastRead 0 FirstWrite -1}
		data_98_V_read {Type I LastRead 0 FirstWrite -1}
		data_102_V_read {Type I LastRead 0 FirstWrite -1}
		data_103_V_read {Type I LastRead 0 FirstWrite -1}
		data_105_V_read {Type I LastRead 0 FirstWrite -1}
		data_107_V_read {Type I LastRead 0 FirstWrite -1}
		data_125_V_read {Type I LastRead 0 FirstWrite -1}}
	softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config5_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		exp_table1 {Type I LastRead -1 FirstWrite -1}
		invert_table2 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "25", "Max" : "25"}
	, {"Name" : "Interval", "Min" : "12", "Max" : "12"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	dense_input_V { ap_vld {  { dense_input_V in_data 0 64 }  { dense_input_V_ap_vld in_vld 0 1 } } }
	layer5_out_0_V { ap_vld {  { layer5_out_0_V out_data 1 16 }  { layer5_out_0_V_ap_vld out_vld 1 1 } } }
	layer5_out_1_V { ap_vld {  { layer5_out_1_V out_data 1 16 }  { layer5_out_1_V_ap_vld out_vld 1 1 } } }
	layer5_out_2_V { ap_vld {  { layer5_out_2_V out_data 1 16 }  { layer5_out_2_V_ap_vld out_vld 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
