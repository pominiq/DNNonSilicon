set moduleName softmax_stable_array_array_ap_fixed_16_6_5_3_0_3u_softmax_config5_s
set isTopModule 0
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
set C_modelName {softmax_stable<array,array<ap_fixed<16,6,5,3,0>,3u>,softmax_config5>}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_V_data_0_V int 16 regular {fifo 0 volatile }  }
	{ data_V_data_1_V int 16 regular {fifo 0 volatile }  }
	{ data_V_data_2_V int 16 regular {fifo 0 volatile }  }
	{ res_V_data_0_V int 16 regular {axi_s 1 volatile  { res_V_data_0_V Data } }  }
	{ res_V_data_1_V int 16 regular {axi_s 1 volatile  { res_V_data_1_V Data } }  }
	{ res_V_data_2_V int 16 regular {axi_s 1 volatile  { res_V_data_2_V Data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_V_data_0_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_1_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_2_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "res_V_data_0_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_1_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_2_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 30
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ data_V_data_0_V_dout sc_in sc_lv 16 signal 0 } 
	{ data_V_data_0_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ data_V_data_0_V_read sc_out sc_logic 1 signal 0 } 
	{ data_V_data_1_V_dout sc_in sc_lv 16 signal 1 } 
	{ data_V_data_1_V_empty_n sc_in sc_logic 1 signal 1 } 
	{ data_V_data_1_V_read sc_out sc_logic 1 signal 1 } 
	{ data_V_data_2_V_dout sc_in sc_lv 16 signal 2 } 
	{ data_V_data_2_V_empty_n sc_in sc_logic 1 signal 2 } 
	{ data_V_data_2_V_read sc_out sc_logic 1 signal 2 } 
	{ res_V_data_0_V_TDATA sc_out sc_lv 16 signal 3 } 
	{ res_V_data_0_V_TVALID sc_out sc_logic 1 outvld 3 } 
	{ res_V_data_0_V_TREADY sc_in sc_logic 1 outacc 3 } 
	{ res_V_data_1_V_TDATA sc_out sc_lv 16 signal 4 } 
	{ res_V_data_1_V_TVALID sc_out sc_logic 1 outvld 4 } 
	{ res_V_data_1_V_TREADY sc_in sc_logic 1 outacc 4 } 
	{ res_V_data_2_V_TDATA sc_out sc_lv 16 signal 5 } 
	{ res_V_data_2_V_TVALID sc_out sc_logic 1 outvld 5 } 
	{ res_V_data_2_V_TREADY sc_in sc_logic 1 outacc 5 } 
	{ data_V_data_0_V_blk_n sc_out sc_logic 1 signal -1 } 
	{ data_V_data_1_V_blk_n sc_out sc_logic 1 signal -1 } 
	{ data_V_data_2_V_blk_n sc_out sc_logic 1 signal -1 } 
	{ res_V_data_0_V_TDATA_blk_n sc_out sc_logic 1 signal -1 } 
	{ res_V_data_1_V_TDATA_blk_n sc_out sc_logic 1 signal -1 } 
	{ res_V_data_2_V_TDATA_blk_n sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "data_V_data_0_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_0_V", "role": "dout" }} , 
 	{ "name": "data_V_data_0_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_0_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_0_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_0_V", "role": "read" }} , 
 	{ "name": "data_V_data_1_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_1_V", "role": "dout" }} , 
 	{ "name": "data_V_data_1_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_1_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_1_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_1_V", "role": "read" }} , 
 	{ "name": "data_V_data_2_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_2_V", "role": "dout" }} , 
 	{ "name": "data_V_data_2_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_2_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_2_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_2_V", "role": "read" }} , 
 	{ "name": "res_V_data_0_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "res_V_data_0_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "res_V_data_0_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "res_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "res_V_data_1_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_1_V", "role": "TDATA" }} , 
 	{ "name": "res_V_data_1_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_V_data_1_V", "role": "TVALID" }} , 
 	{ "name": "res_V_data_1_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "res_V_data_1_V", "role": "TREADY" }} , 
 	{ "name": "res_V_data_2_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_2_V", "role": "TDATA" }} , 
 	{ "name": "res_V_data_2_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_V_data_2_V", "role": "TVALID" }} , 
 	{ "name": "res_V_data_2_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "res_V_data_2_V", "role": "TREADY" }} , 
 	{ "name": "data_V_data_0_V_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_0_V_blk_n", "role": "default" }} , 
 	{ "name": "data_V_data_1_V_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_1_V_blk_n", "role": "default" }} , 
 	{ "name": "data_V_data_2_V_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_2_V_blk_n", "role": "default" }} , 
 	{ "name": "res_V_data_0_V_TDATA_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_0_V_TDATA_blk_n", "role": "default" }} , 
 	{ "name": "res_V_data_1_V_TDATA_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_1_V_TDATA_blk_n", "role": "default" }} , 
 	{ "name": "res_V_data_2_V_TDATA_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_2_V_TDATA_blk_n", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "softmax_stable_array_array_ap_fixed_16_6_5_3_0_3u_softmax_config5_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "3",
		"VariableLatency" : "0", "ExactLatency" : "6", "EstimateLatencyMin" : "6", "EstimateLatencyMax" : "6",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_TDATA_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_TDATA_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_TDATA_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "exp_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "invert_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.exp_table1_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.invert_table2_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	softmax_stable_array_array_ap_fixed_16_6_5_3_0_3u_softmax_config5_s {
		data_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 6}
		exp_table1 {Type I LastRead -1 FirstWrite -1}
		invert_table2 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "6", "Max" : "6"}
	, {"Name" : "Interval", "Min" : "3", "Max" : "3"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	data_V_data_0_V { ap_fifo {  { data_V_data_0_V_dout fifo_data 0 16 }  { data_V_data_0_V_empty_n fifo_status 0 1 }  { data_V_data_0_V_read fifo_update 1 1 } } }
	data_V_data_1_V { ap_fifo {  { data_V_data_1_V_dout fifo_data 0 16 }  { data_V_data_1_V_empty_n fifo_status 0 1 }  { data_V_data_1_V_read fifo_update 1 1 } } }
	data_V_data_2_V { ap_fifo {  { data_V_data_2_V_dout fifo_data 0 16 }  { data_V_data_2_V_empty_n fifo_status 0 1 }  { data_V_data_2_V_read fifo_update 1 1 } } }
	res_V_data_0_V { axis {  { res_V_data_0_V_TDATA out_data 1 16 }  { res_V_data_0_V_TVALID out_vld 1 1 }  { res_V_data_0_V_TREADY out_acc 0 1 } } }
	res_V_data_1_V { axis {  { res_V_data_1_V_TDATA out_data 1 16 }  { res_V_data_1_V_TVALID out_vld 1 1 }  { res_V_data_1_V_TREADY out_acc 0 1 } } }
	res_V_data_2_V { axis {  { res_V_data_2_V_TDATA out_data 1 16 }  { res_V_data_2_V_TVALID out_vld 1 1 }  { res_V_data_2_V_TREADY out_acc 0 1 } } }
}
set moduleName softmax_stable_array_array_ap_fixed_16_6_5_3_0_3u_softmax_config5_s
set isTopModule 0
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
set C_modelName {softmax_stable<array,array<ap_fixed<16,6,5,3,0>,3u>,softmax_config5>}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_V_data_0_V int 16 regular {fifo 0 volatile }  }
	{ data_V_data_1_V int 16 regular {fifo 0 volatile }  }
	{ data_V_data_2_V int 16 regular {fifo 0 volatile }  }
	{ res_V_data_0_V int 16 regular {axi_s 1 volatile  { res_V_data_0_V Data } }  }
	{ res_V_data_1_V int 16 regular {axi_s 1 volatile  { res_V_data_1_V Data } }  }
	{ res_V_data_2_V int 16 regular {axi_s 1 volatile  { res_V_data_2_V Data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_V_data_0_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_1_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_2_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "res_V_data_0_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_1_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_2_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 30
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ data_V_data_0_V_dout sc_in sc_lv 16 signal 0 } 
	{ data_V_data_0_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ data_V_data_0_V_read sc_out sc_logic 1 signal 0 } 
	{ data_V_data_1_V_dout sc_in sc_lv 16 signal 1 } 
	{ data_V_data_1_V_empty_n sc_in sc_logic 1 signal 1 } 
	{ data_V_data_1_V_read sc_out sc_logic 1 signal 1 } 
	{ data_V_data_2_V_dout sc_in sc_lv 16 signal 2 } 
	{ data_V_data_2_V_empty_n sc_in sc_logic 1 signal 2 } 
	{ data_V_data_2_V_read sc_out sc_logic 1 signal 2 } 
	{ res_V_data_0_V_TDATA sc_out sc_lv 16 signal 3 } 
	{ res_V_data_0_V_TVALID sc_out sc_logic 1 outvld 3 } 
	{ res_V_data_0_V_TREADY sc_in sc_logic 1 outacc 3 } 
	{ res_V_data_1_V_TDATA sc_out sc_lv 16 signal 4 } 
	{ res_V_data_1_V_TVALID sc_out sc_logic 1 outvld 4 } 
	{ res_V_data_1_V_TREADY sc_in sc_logic 1 outacc 4 } 
	{ res_V_data_2_V_TDATA sc_out sc_lv 16 signal 5 } 
	{ res_V_data_2_V_TVALID sc_out sc_logic 1 outvld 5 } 
	{ res_V_data_2_V_TREADY sc_in sc_logic 1 outacc 5 } 
	{ data_V_data_0_V_blk_n sc_out sc_logic 1 signal -1 } 
	{ data_V_data_1_V_blk_n sc_out sc_logic 1 signal -1 } 
	{ data_V_data_2_V_blk_n sc_out sc_logic 1 signal -1 } 
	{ res_V_data_0_V_TDATA_blk_n sc_out sc_logic 1 signal -1 } 
	{ res_V_data_1_V_TDATA_blk_n sc_out sc_logic 1 signal -1 } 
	{ res_V_data_2_V_TDATA_blk_n sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "data_V_data_0_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_0_V", "role": "dout" }} , 
 	{ "name": "data_V_data_0_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_0_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_0_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_0_V", "role": "read" }} , 
 	{ "name": "data_V_data_1_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_1_V", "role": "dout" }} , 
 	{ "name": "data_V_data_1_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_1_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_1_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_1_V", "role": "read" }} , 
 	{ "name": "data_V_data_2_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_2_V", "role": "dout" }} , 
 	{ "name": "data_V_data_2_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_2_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_2_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_2_V", "role": "read" }} , 
 	{ "name": "res_V_data_0_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "res_V_data_0_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "res_V_data_0_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "res_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "res_V_data_1_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_1_V", "role": "TDATA" }} , 
 	{ "name": "res_V_data_1_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_V_data_1_V", "role": "TVALID" }} , 
 	{ "name": "res_V_data_1_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "res_V_data_1_V", "role": "TREADY" }} , 
 	{ "name": "res_V_data_2_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_2_V", "role": "TDATA" }} , 
 	{ "name": "res_V_data_2_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_V_data_2_V", "role": "TVALID" }} , 
 	{ "name": "res_V_data_2_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "res_V_data_2_V", "role": "TREADY" }} , 
 	{ "name": "data_V_data_0_V_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_0_V_blk_n", "role": "default" }} , 
 	{ "name": "data_V_data_1_V_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_1_V_blk_n", "role": "default" }} , 
 	{ "name": "data_V_data_2_V_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_2_V_blk_n", "role": "default" }} , 
 	{ "name": "res_V_data_0_V_TDATA_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_0_V_TDATA_blk_n", "role": "default" }} , 
 	{ "name": "res_V_data_1_V_TDATA_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_1_V_TDATA_blk_n", "role": "default" }} , 
 	{ "name": "res_V_data_2_V_TDATA_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_2_V_TDATA_blk_n", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "softmax_stable_array_array_ap_fixed_16_6_5_3_0_3u_softmax_config5_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "3",
		"VariableLatency" : "0", "ExactLatency" : "6", "EstimateLatencyMin" : "6", "EstimateLatencyMax" : "6",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_TDATA_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_TDATA_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_TDATA_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "exp_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "invert_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.exp_table1_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.invert_table2_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	softmax_stable_array_array_ap_fixed_16_6_5_3_0_3u_softmax_config5_s {
		data_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 6}
		exp_table1 {Type I LastRead -1 FirstWrite -1}
		invert_table2 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "6", "Max" : "6"}
	, {"Name" : "Interval", "Min" : "3", "Max" : "3"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	data_V_data_0_V { ap_fifo {  { data_V_data_0_V_dout fifo_data 0 16 }  { data_V_data_0_V_empty_n fifo_status 0 1 }  { data_V_data_0_V_read fifo_update 1 1 } } }
	data_V_data_1_V { ap_fifo {  { data_V_data_1_V_dout fifo_data 0 16 }  { data_V_data_1_V_empty_n fifo_status 0 1 }  { data_V_data_1_V_read fifo_update 1 1 } } }
	data_V_data_2_V { ap_fifo {  { data_V_data_2_V_dout fifo_data 0 16 }  { data_V_data_2_V_empty_n fifo_status 0 1 }  { data_V_data_2_V_read fifo_update 1 1 } } }
	res_V_data_0_V { axis {  { res_V_data_0_V_TDATA out_data 1 16 }  { res_V_data_0_V_TVALID out_vld 1 1 }  { res_V_data_0_V_TREADY out_acc 0 1 } } }
	res_V_data_1_V { axis {  { res_V_data_1_V_TDATA out_data 1 16 }  { res_V_data_1_V_TVALID out_vld 1 1 }  { res_V_data_1_V_TREADY out_acc 0 1 } } }
	res_V_data_2_V { axis {  { res_V_data_2_V_TDATA out_data 1 16 }  { res_V_data_2_V_TVALID out_vld 1 1 }  { res_V_data_2_V_TREADY out_acc 0 1 } } }
}
set moduleName softmax_stable_array_array_ap_fixed_16_6_5_3_0_3u_softmax_config5_s
set isTopModule 0
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
set C_modelName {softmax_stable<array,array<ap_fixed<16,6,5,3,0>,3u>,softmax_config5>}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_V_data_0_V int 16 regular {fifo 0 volatile }  }
	{ data_V_data_1_V int 16 regular {fifo 0 volatile }  }
	{ data_V_data_2_V int 16 regular {fifo 0 volatile }  }
	{ res_V_data_0_V int 16 regular {axi_s 1 volatile  { res_V_data_0_V Data } }  }
	{ res_V_data_1_V int 16 regular {axi_s 1 volatile  { res_V_data_1_V Data } }  }
	{ res_V_data_2_V int 16 regular {axi_s 1 volatile  { res_V_data_2_V Data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_V_data_0_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_1_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_2_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "res_V_data_0_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_1_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_2_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 30
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ data_V_data_0_V_dout sc_in sc_lv 16 signal 0 } 
	{ data_V_data_0_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ data_V_data_0_V_read sc_out sc_logic 1 signal 0 } 
	{ data_V_data_1_V_dout sc_in sc_lv 16 signal 1 } 
	{ data_V_data_1_V_empty_n sc_in sc_logic 1 signal 1 } 
	{ data_V_data_1_V_read sc_out sc_logic 1 signal 1 } 
	{ data_V_data_2_V_dout sc_in sc_lv 16 signal 2 } 
	{ data_V_data_2_V_empty_n sc_in sc_logic 1 signal 2 } 
	{ data_V_data_2_V_read sc_out sc_logic 1 signal 2 } 
	{ res_V_data_0_V_TDATA sc_out sc_lv 16 signal 3 } 
	{ res_V_data_0_V_TVALID sc_out sc_logic 1 outvld 3 } 
	{ res_V_data_0_V_TREADY sc_in sc_logic 1 outacc 3 } 
	{ res_V_data_1_V_TDATA sc_out sc_lv 16 signal 4 } 
	{ res_V_data_1_V_TVALID sc_out sc_logic 1 outvld 4 } 
	{ res_V_data_1_V_TREADY sc_in sc_logic 1 outacc 4 } 
	{ res_V_data_2_V_TDATA sc_out sc_lv 16 signal 5 } 
	{ res_V_data_2_V_TVALID sc_out sc_logic 1 outvld 5 } 
	{ res_V_data_2_V_TREADY sc_in sc_logic 1 outacc 5 } 
	{ data_V_data_0_V_blk_n sc_out sc_logic 1 signal -1 } 
	{ data_V_data_1_V_blk_n sc_out sc_logic 1 signal -1 } 
	{ data_V_data_2_V_blk_n sc_out sc_logic 1 signal -1 } 
	{ res_V_data_0_V_TDATA_blk_n sc_out sc_logic 1 signal -1 } 
	{ res_V_data_1_V_TDATA_blk_n sc_out sc_logic 1 signal -1 } 
	{ res_V_data_2_V_TDATA_blk_n sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "data_V_data_0_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_0_V", "role": "dout" }} , 
 	{ "name": "data_V_data_0_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_0_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_0_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_0_V", "role": "read" }} , 
 	{ "name": "data_V_data_1_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_1_V", "role": "dout" }} , 
 	{ "name": "data_V_data_1_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_1_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_1_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_1_V", "role": "read" }} , 
 	{ "name": "data_V_data_2_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_2_V", "role": "dout" }} , 
 	{ "name": "data_V_data_2_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_2_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_2_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_2_V", "role": "read" }} , 
 	{ "name": "res_V_data_0_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "res_V_data_0_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "res_V_data_0_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "res_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "res_V_data_1_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_1_V", "role": "TDATA" }} , 
 	{ "name": "res_V_data_1_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_V_data_1_V", "role": "TVALID" }} , 
 	{ "name": "res_V_data_1_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "res_V_data_1_V", "role": "TREADY" }} , 
 	{ "name": "res_V_data_2_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_2_V", "role": "TDATA" }} , 
 	{ "name": "res_V_data_2_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_V_data_2_V", "role": "TVALID" }} , 
 	{ "name": "res_V_data_2_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "res_V_data_2_V", "role": "TREADY" }} , 
 	{ "name": "data_V_data_0_V_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_0_V_blk_n", "role": "default" }} , 
 	{ "name": "data_V_data_1_V_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_1_V_blk_n", "role": "default" }} , 
 	{ "name": "data_V_data_2_V_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_2_V_blk_n", "role": "default" }} , 
 	{ "name": "res_V_data_0_V_TDATA_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_0_V_TDATA_blk_n", "role": "default" }} , 
 	{ "name": "res_V_data_1_V_TDATA_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_1_V_TDATA_blk_n", "role": "default" }} , 
 	{ "name": "res_V_data_2_V_TDATA_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_2_V_TDATA_blk_n", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "softmax_stable_array_array_ap_fixed_16_6_5_3_0_3u_softmax_config5_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "3",
		"VariableLatency" : "0", "ExactLatency" : "6", "EstimateLatencyMin" : "6", "EstimateLatencyMax" : "6",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_TDATA_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_TDATA_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_TDATA_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "exp_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "invert_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.exp_table1_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.invert_table2_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	softmax_stable_array_array_ap_fixed_16_6_5_3_0_3u_softmax_config5_s {
		data_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 6}
		exp_table1 {Type I LastRead -1 FirstWrite -1}
		invert_table2 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "6", "Max" : "6"}
	, {"Name" : "Interval", "Min" : "3", "Max" : "3"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	data_V_data_0_V { ap_fifo {  { data_V_data_0_V_dout fifo_data 0 16 }  { data_V_data_0_V_empty_n fifo_status 0 1 }  { data_V_data_0_V_read fifo_update 1 1 } } }
	data_V_data_1_V { ap_fifo {  { data_V_data_1_V_dout fifo_data 0 16 }  { data_V_data_1_V_empty_n fifo_status 0 1 }  { data_V_data_1_V_read fifo_update 1 1 } } }
	data_V_data_2_V { ap_fifo {  { data_V_data_2_V_dout fifo_data 0 16 }  { data_V_data_2_V_empty_n fifo_status 0 1 }  { data_V_data_2_V_read fifo_update 1 1 } } }
	res_V_data_0_V { axis {  { res_V_data_0_V_TDATA out_data 1 16 }  { res_V_data_0_V_TVALID out_vld 1 1 }  { res_V_data_0_V_TREADY out_acc 0 1 } } }
	res_V_data_1_V { axis {  { res_V_data_1_V_TDATA out_data 1 16 }  { res_V_data_1_V_TVALID out_vld 1 1 }  { res_V_data_1_V_TREADY out_acc 0 1 } } }
	res_V_data_2_V { axis {  { res_V_data_2_V_TDATA out_data 1 16 }  { res_V_data_2_V_TVALID out_vld 1 1 }  { res_V_data_2_V_TREADY out_acc 0 1 } } }
}
set moduleName softmax_stable_array_array_ap_fixed_16_6_5_3_0_3u_softmax_config5_s
set isTopModule 0
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
set C_modelName {softmax_stable<array,array<ap_fixed<16,6,5,3,0>,3u>,softmax_config5>}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_V_data_0_V int 16 regular {fifo 0 volatile }  }
	{ data_V_data_1_V int 16 regular {fifo 0 volatile }  }
	{ data_V_data_2_V int 16 regular {fifo 0 volatile }  }
	{ res_V_data_0_V int 16 regular {axi_s 1 volatile  { res_V_data_0_V Data } }  }
	{ res_V_data_1_V int 16 regular {axi_s 1 volatile  { res_V_data_1_V Data } }  }
	{ res_V_data_2_V int 16 regular {axi_s 1 volatile  { res_V_data_2_V Data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_V_data_0_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_1_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_2_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "res_V_data_0_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_1_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_2_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 30
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ data_V_data_0_V_dout sc_in sc_lv 16 signal 0 } 
	{ data_V_data_0_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ data_V_data_0_V_read sc_out sc_logic 1 signal 0 } 
	{ data_V_data_1_V_dout sc_in sc_lv 16 signal 1 } 
	{ data_V_data_1_V_empty_n sc_in sc_logic 1 signal 1 } 
	{ data_V_data_1_V_read sc_out sc_logic 1 signal 1 } 
	{ data_V_data_2_V_dout sc_in sc_lv 16 signal 2 } 
	{ data_V_data_2_V_empty_n sc_in sc_logic 1 signal 2 } 
	{ data_V_data_2_V_read sc_out sc_logic 1 signal 2 } 
	{ res_V_data_0_V_TDATA sc_out sc_lv 16 signal 3 } 
	{ res_V_data_0_V_TVALID sc_out sc_logic 1 outvld 3 } 
	{ res_V_data_0_V_TREADY sc_in sc_logic 1 outacc 3 } 
	{ res_V_data_1_V_TDATA sc_out sc_lv 16 signal 4 } 
	{ res_V_data_1_V_TVALID sc_out sc_logic 1 outvld 4 } 
	{ res_V_data_1_V_TREADY sc_in sc_logic 1 outacc 4 } 
	{ res_V_data_2_V_TDATA sc_out sc_lv 16 signal 5 } 
	{ res_V_data_2_V_TVALID sc_out sc_logic 1 outvld 5 } 
	{ res_V_data_2_V_TREADY sc_in sc_logic 1 outacc 5 } 
	{ data_V_data_0_V_blk_n sc_out sc_logic 1 signal -1 } 
	{ data_V_data_1_V_blk_n sc_out sc_logic 1 signal -1 } 
	{ data_V_data_2_V_blk_n sc_out sc_logic 1 signal -1 } 
	{ res_V_data_0_V_TDATA_blk_n sc_out sc_logic 1 signal -1 } 
	{ res_V_data_1_V_TDATA_blk_n sc_out sc_logic 1 signal -1 } 
	{ res_V_data_2_V_TDATA_blk_n sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "data_V_data_0_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_0_V", "role": "dout" }} , 
 	{ "name": "data_V_data_0_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_0_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_0_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_0_V", "role": "read" }} , 
 	{ "name": "data_V_data_1_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_1_V", "role": "dout" }} , 
 	{ "name": "data_V_data_1_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_1_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_1_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_1_V", "role": "read" }} , 
 	{ "name": "data_V_data_2_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_2_V", "role": "dout" }} , 
 	{ "name": "data_V_data_2_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_2_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_2_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_2_V", "role": "read" }} , 
 	{ "name": "res_V_data_0_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "res_V_data_0_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "res_V_data_0_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "res_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "res_V_data_1_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_1_V", "role": "TDATA" }} , 
 	{ "name": "res_V_data_1_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_V_data_1_V", "role": "TVALID" }} , 
 	{ "name": "res_V_data_1_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "res_V_data_1_V", "role": "TREADY" }} , 
 	{ "name": "res_V_data_2_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_2_V", "role": "TDATA" }} , 
 	{ "name": "res_V_data_2_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_V_data_2_V", "role": "TVALID" }} , 
 	{ "name": "res_V_data_2_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "res_V_data_2_V", "role": "TREADY" }} , 
 	{ "name": "data_V_data_0_V_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_0_V_blk_n", "role": "default" }} , 
 	{ "name": "data_V_data_1_V_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_1_V_blk_n", "role": "default" }} , 
 	{ "name": "data_V_data_2_V_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_2_V_blk_n", "role": "default" }} , 
 	{ "name": "res_V_data_0_V_TDATA_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_0_V_TDATA_blk_n", "role": "default" }} , 
 	{ "name": "res_V_data_1_V_TDATA_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_1_V_TDATA_blk_n", "role": "default" }} , 
 	{ "name": "res_V_data_2_V_TDATA_blk_n", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_2_V_TDATA_blk_n", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "softmax_stable_array_array_ap_fixed_16_6_5_3_0_3u_softmax_config5_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "3",
		"VariableLatency" : "0", "ExactLatency" : "6", "EstimateLatencyMin" : "6", "EstimateLatencyMax" : "6",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_TDATA_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_TDATA_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_TDATA_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "exp_table1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "invert_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.exp_table1_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.invert_table2_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	softmax_stable_array_array_ap_fixed_16_6_5_3_0_3u_softmax_config5_s {
		data_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 6}
		exp_table1 {Type I LastRead -1 FirstWrite -1}
		invert_table2 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "6", "Max" : "6"}
	, {"Name" : "Interval", "Min" : "3", "Max" : "3"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	data_V_data_0_V { ap_fifo {  { data_V_data_0_V_dout fifo_data 0 16 }  { data_V_data_0_V_empty_n fifo_status 0 1 }  { data_V_data_0_V_read fifo_update 1 1 } } }
	data_V_data_1_V { ap_fifo {  { data_V_data_1_V_dout fifo_data 0 16 }  { data_V_data_1_V_empty_n fifo_status 0 1 }  { data_V_data_1_V_read fifo_update 1 1 } } }
	data_V_data_2_V { ap_fifo {  { data_V_data_2_V_dout fifo_data 0 16 }  { data_V_data_2_V_empty_n fifo_status 0 1 }  { data_V_data_2_V_read fifo_update 1 1 } } }
	res_V_data_0_V { axis {  { res_V_data_0_V_TDATA out_data 1 16 }  { res_V_data_0_V_TVALID out_vld 1 1 }  { res_V_data_0_V_TREADY out_acc 0 1 } } }
	res_V_data_1_V { axis {  { res_V_data_1_V_TDATA out_data 1 16 }  { res_V_data_1_V_TVALID out_vld 1 1 }  { res_V_data_1_V_TREADY out_acc 0 1 } } }
	res_V_data_2_V { axis {  { res_V_data_2_V_TDATA out_data 1 16 }  { res_V_data_2_V_TVALID out_vld 1 1 }  { res_V_data_2_V_TREADY out_acc 0 1 } } }
}
