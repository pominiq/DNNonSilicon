set moduleName reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s
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
set C_modelName {reduce<ap_fixed<18, 8, 0, 0, 0>, 4, Op_add<ap_fixed<18, 8, 0, 0, 0> > >}
set C_modelType { int 18 }
set C_modelArgList {
	{ x_0_V int 17 regular {pointer 0}  }
	{ x_1_V int 17 regular {pointer 0}  }
	{ x_2_V int 17 regular {pointer 0}  }
	{ x_3_V int 17 regular {pointer 0}  }
	{ x_4_V int 17 regular {pointer 0}  }
	{ x_5_V int 17 regular {pointer 0}  }
	{ x_6_V int 17 regular {pointer 0}  }
	{ x_7_V int 17 regular {pointer 0}  }
	{ x_8_V int 17 regular {pointer 0}  }
	{ x_9_V int 17 regular {pointer 0}  }
	{ x_10_V int 17 regular {pointer 0}  }
	{ x_11_V int 17 regular {pointer 0}  }
	{ x_V_offset int 5 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "x_0_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_1_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_2_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_3_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_4_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_5_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_6_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_7_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_8_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_9_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_10_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_11_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_V_offset", "interface" : "wire", "bitwidth" : 5, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 18} ]}
# RTL Port declarations: 
set portNum 21
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ x_0_V sc_in sc_lv 17 signal 0 } 
	{ x_1_V sc_in sc_lv 17 signal 1 } 
	{ x_2_V sc_in sc_lv 17 signal 2 } 
	{ x_3_V sc_in sc_lv 17 signal 3 } 
	{ x_4_V sc_in sc_lv 17 signal 4 } 
	{ x_5_V sc_in sc_lv 17 signal 5 } 
	{ x_6_V sc_in sc_lv 17 signal 6 } 
	{ x_7_V sc_in sc_lv 17 signal 7 } 
	{ x_8_V sc_in sc_lv 17 signal 8 } 
	{ x_9_V sc_in sc_lv 17 signal 9 } 
	{ x_10_V sc_in sc_lv 17 signal 10 } 
	{ x_11_V sc_in sc_lv 17 signal 11 } 
	{ x_V_offset sc_in sc_lv 5 signal 12 } 
	{ ap_return sc_out sc_lv 18 signal -1 } 
	{ ap_ce sc_in sc_logic 1 ce -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "x_0_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_0_V", "role": "default" }} , 
 	{ "name": "x_1_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_1_V", "role": "default" }} , 
 	{ "name": "x_2_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_2_V", "role": "default" }} , 
 	{ "name": "x_3_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_3_V", "role": "default" }} , 
 	{ "name": "x_4_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_4_V", "role": "default" }} , 
 	{ "name": "x_5_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_5_V", "role": "default" }} , 
 	{ "name": "x_6_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_6_V", "role": "default" }} , 
 	{ "name": "x_7_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_7_V", "role": "default" }} , 
 	{ "name": "x_8_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_8_V", "role": "default" }} , 
 	{ "name": "x_9_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_9_V", "role": "default" }} , 
 	{ "name": "x_10_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_10_V", "role": "default" }} , 
 	{ "name": "x_11_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_11_V", "role": "default" }} , 
 	{ "name": "x_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "x_V_offset", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }} , 
 	{ "name": "ap_ce", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "ce", "bundle":{"name": "ap_ce", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4"],
		"CDFG" : "reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "2",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x_0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_8_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_9_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_10_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_11_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_V_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mux_124_18_1_1_U1059", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mux_124_18_1_1_U1060", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mux_124_18_1_1_U1061", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mux_124_18_1_1_U1062", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s {
		x_0_V {Type I LastRead 0 FirstWrite -1}
		x_1_V {Type I LastRead 0 FirstWrite -1}
		x_2_V {Type I LastRead 0 FirstWrite -1}
		x_3_V {Type I LastRead 0 FirstWrite -1}
		x_4_V {Type I LastRead 0 FirstWrite -1}
		x_5_V {Type I LastRead 0 FirstWrite -1}
		x_6_V {Type I LastRead 0 FirstWrite -1}
		x_7_V {Type I LastRead 0 FirstWrite -1}
		x_8_V {Type I LastRead 0 FirstWrite -1}
		x_9_V {Type I LastRead 0 FirstWrite -1}
		x_10_V {Type I LastRead 0 FirstWrite -1}
		x_11_V {Type I LastRead 0 FirstWrite -1}
		x_V_offset {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "1"}
	, {"Name" : "Interval", "Min" : "2", "Max" : "2"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	x_0_V { ap_none {  { x_0_V in_data 0 17 } } }
	x_1_V { ap_none {  { x_1_V in_data 0 17 } } }
	x_2_V { ap_none {  { x_2_V in_data 0 17 } } }
	x_3_V { ap_none {  { x_3_V in_data 0 17 } } }
	x_4_V { ap_none {  { x_4_V in_data 0 17 } } }
	x_5_V { ap_none {  { x_5_V in_data 0 17 } } }
	x_6_V { ap_none {  { x_6_V in_data 0 17 } } }
	x_7_V { ap_none {  { x_7_V in_data 0 17 } } }
	x_8_V { ap_none {  { x_8_V in_data 0 17 } } }
	x_9_V { ap_none {  { x_9_V in_data 0 17 } } }
	x_10_V { ap_none {  { x_10_V in_data 0 17 } } }
	x_11_V { ap_none {  { x_11_V in_data 0 17 } } }
	x_V_offset { ap_none {  { x_V_offset in_data 0 5 } } }
}
set moduleName reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s
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
set C_modelName {reduce<ap_fixed<18, 8, 0, 0, 0>, 4, Op_add<ap_fixed<18, 8, 0, 0, 0> > >}
set C_modelType { int 18 }
set C_modelArgList {
	{ x_0_V int 17 regular {pointer 0}  }
	{ x_1_V int 17 regular {pointer 0}  }
	{ x_2_V int 17 regular {pointer 0}  }
	{ x_3_V int 17 regular {pointer 0}  }
	{ x_4_V int 17 regular {pointer 0}  }
	{ x_5_V int 17 regular {pointer 0}  }
	{ x_6_V int 17 regular {pointer 0}  }
	{ x_7_V int 17 regular {pointer 0}  }
	{ x_8_V int 17 regular {pointer 0}  }
	{ x_9_V int 17 regular {pointer 0}  }
	{ x_10_V int 17 regular {pointer 0}  }
	{ x_11_V int 17 regular {pointer 0}  }
	{ x_V_offset int 5 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "x_0_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_1_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_2_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_3_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_4_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_5_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_6_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_7_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_8_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_9_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_10_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_11_V", "interface" : "wire", "bitwidth" : 17, "direction" : "READONLY"} , 
 	{ "Name" : "x_V_offset", "interface" : "wire", "bitwidth" : 5, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 18} ]}
# RTL Port declarations: 
set portNum 21
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ x_0_V sc_in sc_lv 17 signal 0 } 
	{ x_1_V sc_in sc_lv 17 signal 1 } 
	{ x_2_V sc_in sc_lv 17 signal 2 } 
	{ x_3_V sc_in sc_lv 17 signal 3 } 
	{ x_4_V sc_in sc_lv 17 signal 4 } 
	{ x_5_V sc_in sc_lv 17 signal 5 } 
	{ x_6_V sc_in sc_lv 17 signal 6 } 
	{ x_7_V sc_in sc_lv 17 signal 7 } 
	{ x_8_V sc_in sc_lv 17 signal 8 } 
	{ x_9_V sc_in sc_lv 17 signal 9 } 
	{ x_10_V sc_in sc_lv 17 signal 10 } 
	{ x_11_V sc_in sc_lv 17 signal 11 } 
	{ x_V_offset sc_in sc_lv 5 signal 12 } 
	{ ap_return sc_out sc_lv 18 signal -1 } 
	{ ap_ce sc_in sc_logic 1 ce -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "x_0_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_0_V", "role": "default" }} , 
 	{ "name": "x_1_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_1_V", "role": "default" }} , 
 	{ "name": "x_2_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_2_V", "role": "default" }} , 
 	{ "name": "x_3_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_3_V", "role": "default" }} , 
 	{ "name": "x_4_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_4_V", "role": "default" }} , 
 	{ "name": "x_5_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_5_V", "role": "default" }} , 
 	{ "name": "x_6_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_6_V", "role": "default" }} , 
 	{ "name": "x_7_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_7_V", "role": "default" }} , 
 	{ "name": "x_8_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_8_V", "role": "default" }} , 
 	{ "name": "x_9_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_9_V", "role": "default" }} , 
 	{ "name": "x_10_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_10_V", "role": "default" }} , 
 	{ "name": "x_11_V", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "x_11_V", "role": "default" }} , 
 	{ "name": "x_V_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "x_V_offset", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }} , 
 	{ "name": "ap_ce", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "ce", "bundle":{"name": "ap_ce", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4"],
		"CDFG" : "reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "2",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x_0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_8_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_9_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_10_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_11_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_V_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mux_124_18_1_1_U1059", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mux_124_18_1_1_U1060", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mux_124_18_1_1_U1061", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mux_124_18_1_1_U1062", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s {
		x_0_V {Type I LastRead 0 FirstWrite -1}
		x_1_V {Type I LastRead 0 FirstWrite -1}
		x_2_V {Type I LastRead 0 FirstWrite -1}
		x_3_V {Type I LastRead 0 FirstWrite -1}
		x_4_V {Type I LastRead 0 FirstWrite -1}
		x_5_V {Type I LastRead 0 FirstWrite -1}
		x_6_V {Type I LastRead 0 FirstWrite -1}
		x_7_V {Type I LastRead 0 FirstWrite -1}
		x_8_V {Type I LastRead 0 FirstWrite -1}
		x_9_V {Type I LastRead 0 FirstWrite -1}
		x_10_V {Type I LastRead 0 FirstWrite -1}
		x_11_V {Type I LastRead 0 FirstWrite -1}
		x_V_offset {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "1"}
	, {"Name" : "Interval", "Min" : "2", "Max" : "2"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	x_0_V { ap_none {  { x_0_V in_data 0 17 } } }
	x_1_V { ap_none {  { x_1_V in_data 0 17 } } }
	x_2_V { ap_none {  { x_2_V in_data 0 17 } } }
	x_3_V { ap_none {  { x_3_V in_data 0 17 } } }
	x_4_V { ap_none {  { x_4_V in_data 0 17 } } }
	x_5_V { ap_none {  { x_5_V in_data 0 17 } } }
	x_6_V { ap_none {  { x_6_V in_data 0 17 } } }
	x_7_V { ap_none {  { x_7_V in_data 0 17 } } }
	x_8_V { ap_none {  { x_8_V in_data 0 17 } } }
	x_9_V { ap_none {  { x_9_V in_data 0 17 } } }
	x_10_V { ap_none {  { x_10_V in_data 0 17 } } }
	x_11_V { ap_none {  { x_11_V in_data 0 17 } } }
	x_V_offset { ap_none {  { x_V_offset in_data 0 5 } } }
}
