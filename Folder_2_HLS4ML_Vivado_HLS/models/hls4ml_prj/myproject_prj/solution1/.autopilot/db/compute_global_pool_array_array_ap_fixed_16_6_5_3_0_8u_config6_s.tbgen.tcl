set moduleName compute_global_pool_array_array_ap_fixed_16_6_5_3_0_8u_config6_s
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 1
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {compute_global_pool<array,array<ap_fixed<16,6,5,3,0>,8u>,config6>}
set C_modelType { int 128 }
set C_modelArgList {
	{ in_elem_data_0_V_read int 16 regular  }
	{ in_elem_data_1_V_read int 16 regular  }
	{ in_elem_data_2_V_read int 16 regular  }
	{ in_elem_data_3_V_read int 16 regular  }
	{ in_elem_data_4_V_read int 16 regular  }
	{ in_elem_data_5_V_read int 16 regular  }
	{ in_elem_data_6_V_read int 16 regular  }
	{ in_elem_data_7_V_read int 16 regular  }
	{ data_window_0_V_read int 16 regular  }
	{ data_window_1_V_read int 16 regular  }
	{ data_window_2_V_read int 16 regular  }
	{ data_window_3_V_read int 16 regular  }
	{ data_window_4_V_read int 16 regular  }
	{ data_window_5_V_read int 16 regular  }
	{ data_window_6_V_read int 16 regular  }
	{ data_window_7_V_read int 16 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_elem_data_0_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in_elem_data_1_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in_elem_data_2_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in_elem_data_3_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in_elem_data_4_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in_elem_data_5_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in_elem_data_6_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in_elem_data_7_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_window_0_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_window_1_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_window_2_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_window_3_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_window_4_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_window_5_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_window_6_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_window_7_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 128} ]}
# RTL Port declarations: 
set portNum 25
set portList { 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ in_elem_data_0_V_read sc_in sc_lv 16 signal 0 } 
	{ in_elem_data_1_V_read sc_in sc_lv 16 signal 1 } 
	{ in_elem_data_2_V_read sc_in sc_lv 16 signal 2 } 
	{ in_elem_data_3_V_read sc_in sc_lv 16 signal 3 } 
	{ in_elem_data_4_V_read sc_in sc_lv 16 signal 4 } 
	{ in_elem_data_5_V_read sc_in sc_lv 16 signal 5 } 
	{ in_elem_data_6_V_read sc_in sc_lv 16 signal 6 } 
	{ in_elem_data_7_V_read sc_in sc_lv 16 signal 7 } 
	{ data_window_0_V_read sc_in sc_lv 16 signal 8 } 
	{ data_window_1_V_read sc_in sc_lv 16 signal 9 } 
	{ data_window_2_V_read sc_in sc_lv 16 signal 10 } 
	{ data_window_3_V_read sc_in sc_lv 16 signal 11 } 
	{ data_window_4_V_read sc_in sc_lv 16 signal 12 } 
	{ data_window_5_V_read sc_in sc_lv 16 signal 13 } 
	{ data_window_6_V_read sc_in sc_lv 16 signal 14 } 
	{ data_window_7_V_read sc_in sc_lv 16 signal 15 } 
	{ ap_return_0 sc_out sc_lv 16 signal -1 } 
	{ ap_return_1 sc_out sc_lv 16 signal -1 } 
	{ ap_return_2 sc_out sc_lv 16 signal -1 } 
	{ ap_return_3 sc_out sc_lv 16 signal -1 } 
	{ ap_return_4 sc_out sc_lv 16 signal -1 } 
	{ ap_return_5 sc_out sc_lv 16 signal -1 } 
	{ ap_return_6 sc_out sc_lv 16 signal -1 } 
	{ ap_return_7 sc_out sc_lv 16 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "in_elem_data_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_elem_data_0_V_read", "role": "default" }} , 
 	{ "name": "in_elem_data_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_elem_data_1_V_read", "role": "default" }} , 
 	{ "name": "in_elem_data_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_elem_data_2_V_read", "role": "default" }} , 
 	{ "name": "in_elem_data_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_elem_data_3_V_read", "role": "default" }} , 
 	{ "name": "in_elem_data_4_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_elem_data_4_V_read", "role": "default" }} , 
 	{ "name": "in_elem_data_5_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_elem_data_5_V_read", "role": "default" }} , 
 	{ "name": "in_elem_data_6_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_elem_data_6_V_read", "role": "default" }} , 
 	{ "name": "in_elem_data_7_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_elem_data_7_V_read", "role": "default" }} , 
 	{ "name": "data_window_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_window_0_V_read", "role": "default" }} , 
 	{ "name": "data_window_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_window_1_V_read", "role": "default" }} , 
 	{ "name": "data_window_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_window_2_V_read", "role": "default" }} , 
 	{ "name": "data_window_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_window_3_V_read", "role": "default" }} , 
 	{ "name": "data_window_4_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_window_4_V_read", "role": "default" }} , 
 	{ "name": "data_window_5_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_window_5_V_read", "role": "default" }} , 
 	{ "name": "data_window_6_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_window_6_V_read", "role": "default" }} , 
 	{ "name": "data_window_7_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_window_7_V_read", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "compute_global_pool_array_array_ap_fixed_16_6_5_3_0_8u_config6_s",
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
			{"Name" : "in_elem_data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_window_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_window_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_window_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_window_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_window_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_window_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_window_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_window_7_V_read", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	compute_global_pool_array_array_ap_fixed_16_6_5_3_0_8u_config6_s {
		in_elem_data_0_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_1_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_2_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_3_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_4_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_5_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_6_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_7_V_read {Type I LastRead 0 FirstWrite -1}
		data_window_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_window_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_window_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_window_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_window_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_window_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_window_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_window_7_V_read {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	in_elem_data_0_V_read { ap_none {  { in_elem_data_0_V_read in_data 0 16 } } }
	in_elem_data_1_V_read { ap_none {  { in_elem_data_1_V_read in_data 0 16 } } }
	in_elem_data_2_V_read { ap_none {  { in_elem_data_2_V_read in_data 0 16 } } }
	in_elem_data_3_V_read { ap_none {  { in_elem_data_3_V_read in_data 0 16 } } }
	in_elem_data_4_V_read { ap_none {  { in_elem_data_4_V_read in_data 0 16 } } }
	in_elem_data_5_V_read { ap_none {  { in_elem_data_5_V_read in_data 0 16 } } }
	in_elem_data_6_V_read { ap_none {  { in_elem_data_6_V_read in_data 0 16 } } }
	in_elem_data_7_V_read { ap_none {  { in_elem_data_7_V_read in_data 0 16 } } }
	data_window_0_V_read { ap_none {  { data_window_0_V_read in_data 0 16 } } }
	data_window_1_V_read { ap_none {  { data_window_1_V_read in_data 0 16 } } }
	data_window_2_V_read { ap_none {  { data_window_2_V_read in_data 0 16 } } }
	data_window_3_V_read { ap_none {  { data_window_3_V_read in_data 0 16 } } }
	data_window_4_V_read { ap_none {  { data_window_4_V_read in_data 0 16 } } }
	data_window_5_V_read { ap_none {  { data_window_5_V_read in_data 0 16 } } }
	data_window_6_V_read { ap_none {  { data_window_6_V_read in_data 0 16 } } }
	data_window_7_V_read { ap_none {  { data_window_7_V_read in_data 0 16 } } }
}
set moduleName compute_global_pool_array_array_ap_fixed_16_6_5_3_0_8u_config6_s
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 1
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {compute_global_pool<array,array<ap_fixed<16,6,5,3,0>,8u>,config6>}
set C_modelType { int 128 }
set C_modelArgList {
	{ in_elem_data_0_V_read int 16 regular  }
	{ in_elem_data_1_V_read int 16 regular  }
	{ in_elem_data_2_V_read int 16 regular  }
	{ in_elem_data_3_V_read int 16 regular  }
	{ in_elem_data_4_V_read int 16 regular  }
	{ in_elem_data_5_V_read int 16 regular  }
	{ in_elem_data_6_V_read int 16 regular  }
	{ in_elem_data_7_V_read int 16 regular  }
	{ data_window_0_V_read int 16 regular  }
	{ data_window_1_V_read int 16 regular  }
	{ data_window_2_V_read int 16 regular  }
	{ data_window_3_V_read int 16 regular  }
	{ data_window_4_V_read int 16 regular  }
	{ data_window_5_V_read int 16 regular  }
	{ data_window_6_V_read int 16 regular  }
	{ data_window_7_V_read int 16 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_elem_data_0_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in_elem_data_1_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in_elem_data_2_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in_elem_data_3_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in_elem_data_4_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in_elem_data_5_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in_elem_data_6_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in_elem_data_7_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_window_0_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_window_1_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_window_2_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_window_3_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_window_4_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_window_5_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_window_6_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_window_7_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 128} ]}
# RTL Port declarations: 
set portNum 25
set portList { 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ in_elem_data_0_V_read sc_in sc_lv 16 signal 0 } 
	{ in_elem_data_1_V_read sc_in sc_lv 16 signal 1 } 
	{ in_elem_data_2_V_read sc_in sc_lv 16 signal 2 } 
	{ in_elem_data_3_V_read sc_in sc_lv 16 signal 3 } 
	{ in_elem_data_4_V_read sc_in sc_lv 16 signal 4 } 
	{ in_elem_data_5_V_read sc_in sc_lv 16 signal 5 } 
	{ in_elem_data_6_V_read sc_in sc_lv 16 signal 6 } 
	{ in_elem_data_7_V_read sc_in sc_lv 16 signal 7 } 
	{ data_window_0_V_read sc_in sc_lv 16 signal 8 } 
	{ data_window_1_V_read sc_in sc_lv 16 signal 9 } 
	{ data_window_2_V_read sc_in sc_lv 16 signal 10 } 
	{ data_window_3_V_read sc_in sc_lv 16 signal 11 } 
	{ data_window_4_V_read sc_in sc_lv 16 signal 12 } 
	{ data_window_5_V_read sc_in sc_lv 16 signal 13 } 
	{ data_window_6_V_read sc_in sc_lv 16 signal 14 } 
	{ data_window_7_V_read sc_in sc_lv 16 signal 15 } 
	{ ap_return_0 sc_out sc_lv 16 signal -1 } 
	{ ap_return_1 sc_out sc_lv 16 signal -1 } 
	{ ap_return_2 sc_out sc_lv 16 signal -1 } 
	{ ap_return_3 sc_out sc_lv 16 signal -1 } 
	{ ap_return_4 sc_out sc_lv 16 signal -1 } 
	{ ap_return_5 sc_out sc_lv 16 signal -1 } 
	{ ap_return_6 sc_out sc_lv 16 signal -1 } 
	{ ap_return_7 sc_out sc_lv 16 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "in_elem_data_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_elem_data_0_V_read", "role": "default" }} , 
 	{ "name": "in_elem_data_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_elem_data_1_V_read", "role": "default" }} , 
 	{ "name": "in_elem_data_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_elem_data_2_V_read", "role": "default" }} , 
 	{ "name": "in_elem_data_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_elem_data_3_V_read", "role": "default" }} , 
 	{ "name": "in_elem_data_4_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_elem_data_4_V_read", "role": "default" }} , 
 	{ "name": "in_elem_data_5_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_elem_data_5_V_read", "role": "default" }} , 
 	{ "name": "in_elem_data_6_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_elem_data_6_V_read", "role": "default" }} , 
 	{ "name": "in_elem_data_7_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_elem_data_7_V_read", "role": "default" }} , 
 	{ "name": "data_window_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_window_0_V_read", "role": "default" }} , 
 	{ "name": "data_window_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_window_1_V_read", "role": "default" }} , 
 	{ "name": "data_window_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_window_2_V_read", "role": "default" }} , 
 	{ "name": "data_window_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_window_3_V_read", "role": "default" }} , 
 	{ "name": "data_window_4_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_window_4_V_read", "role": "default" }} , 
 	{ "name": "data_window_5_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_window_5_V_read", "role": "default" }} , 
 	{ "name": "data_window_6_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_window_6_V_read", "role": "default" }} , 
 	{ "name": "data_window_7_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_window_7_V_read", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "compute_global_pool_array_array_ap_fixed_16_6_5_3_0_8u_config6_s",
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
			{"Name" : "in_elem_data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_window_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_window_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_window_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_window_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_window_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_window_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_window_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_window_7_V_read", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	compute_global_pool_array_array_ap_fixed_16_6_5_3_0_8u_config6_s {
		in_elem_data_0_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_1_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_2_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_3_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_4_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_5_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_6_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_7_V_read {Type I LastRead 0 FirstWrite -1}
		data_window_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_window_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_window_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_window_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_window_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_window_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_window_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_window_7_V_read {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	in_elem_data_0_V_read { ap_none {  { in_elem_data_0_V_read in_data 0 16 } } }
	in_elem_data_1_V_read { ap_none {  { in_elem_data_1_V_read in_data 0 16 } } }
	in_elem_data_2_V_read { ap_none {  { in_elem_data_2_V_read in_data 0 16 } } }
	in_elem_data_3_V_read { ap_none {  { in_elem_data_3_V_read in_data 0 16 } } }
	in_elem_data_4_V_read { ap_none {  { in_elem_data_4_V_read in_data 0 16 } } }
	in_elem_data_5_V_read { ap_none {  { in_elem_data_5_V_read in_data 0 16 } } }
	in_elem_data_6_V_read { ap_none {  { in_elem_data_6_V_read in_data 0 16 } } }
	in_elem_data_7_V_read { ap_none {  { in_elem_data_7_V_read in_data 0 16 } } }
	data_window_0_V_read { ap_none {  { data_window_0_V_read in_data 0 16 } } }
	data_window_1_V_read { ap_none {  { data_window_1_V_read in_data 0 16 } } }
	data_window_2_V_read { ap_none {  { data_window_2_V_read in_data 0 16 } } }
	data_window_3_V_read { ap_none {  { data_window_3_V_read in_data 0 16 } } }
	data_window_4_V_read { ap_none {  { data_window_4_V_read in_data 0 16 } } }
	data_window_5_V_read { ap_none {  { data_window_5_V_read in_data 0 16 } } }
	data_window_6_V_read { ap_none {  { data_window_6_V_read in_data 0 16 } } }
	data_window_7_V_read { ap_none {  { data_window_7_V_read in_data 0 16 } } }
}
