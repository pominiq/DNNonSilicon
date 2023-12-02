set moduleName myproject
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type dataflow
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {myproject}
set C_modelType { void 0 }
set C_modelArgList {
	{ conv2d_input_V_data_0_V int 16 regular {axi_s 0 volatile  { conv2d_input_V_data_0_V Data } }  }
	{ layer9_out_V_data_0_V int 16 regular {axi_s 1 volatile  { layer9_out_V_data_0_V Data } }  }
	{ layer9_out_V_data_1_V int 16 regular {axi_s 1 volatile  { layer9_out_V_data_1_V Data } }  }
	{ layer9_out_V_data_2_V int 16 regular {axi_s 1 volatile  { layer9_out_V_data_2_V Data } }  }
	{ layer9_out_V_data_3_V int 16 regular {axi_s 1 volatile  { layer9_out_V_data_3_V Data } }  }
	{ layer9_out_V_data_4_V int 16 regular {axi_s 1 volatile  { layer9_out_V_data_4_V Data } }  }
	{ layer9_out_V_data_5_V int 16 regular {axi_s 1 volatile  { layer9_out_V_data_5_V Data } }  }
	{ layer9_out_V_data_6_V int 16 regular {axi_s 1 volatile  { layer9_out_V_data_6_V Data } }  }
	{ layer9_out_V_data_7_V int 16 regular {axi_s 1 volatile  { layer9_out_V_data_7_V Data } }  }
	{ layer9_out_V_data_8_V int 16 regular {axi_s 1 volatile  { layer9_out_V_data_8_V Data } }  }
	{ layer9_out_V_data_9_V int 16 regular {axi_s 1 volatile  { layer9_out_V_data_9_V Data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "conv2d_input_V_data_0_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "conv2d_input.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "layer9_out_V_data_0_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer9_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "layer9_out_V_data_1_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer9_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "layer9_out_V_data_2_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer9_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "layer9_out_V_data_3_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer9_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "layer9_out_V_data_4_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer9_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "layer9_out_V_data_5_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer9_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "layer9_out_V_data_6_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer9_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "layer9_out_V_data_7_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer9_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "layer9_out_V_data_8_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer9_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 8,"up" : 8,"step" : 2}]}]}]} , 
 	{ "Name" : "layer9_out_V_data_9_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer9_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 9,"up" : 9,"step" : 2}]}]}]} ]}
# RTL Port declarations: 
set portNum 39
set portList { 
	{ conv2d_input_V_data_0_V_TDATA sc_in sc_lv 16 signal 0 } 
	{ layer9_out_V_data_0_V_TDATA sc_out sc_lv 16 signal 1 } 
	{ layer9_out_V_data_1_V_TDATA sc_out sc_lv 16 signal 2 } 
	{ layer9_out_V_data_2_V_TDATA sc_out sc_lv 16 signal 3 } 
	{ layer9_out_V_data_3_V_TDATA sc_out sc_lv 16 signal 4 } 
	{ layer9_out_V_data_4_V_TDATA sc_out sc_lv 16 signal 5 } 
	{ layer9_out_V_data_5_V_TDATA sc_out sc_lv 16 signal 6 } 
	{ layer9_out_V_data_6_V_TDATA sc_out sc_lv 16 signal 7 } 
	{ layer9_out_V_data_7_V_TDATA sc_out sc_lv 16 signal 8 } 
	{ layer9_out_V_data_8_V_TDATA sc_out sc_lv 16 signal 9 } 
	{ layer9_out_V_data_9_V_TDATA sc_out sc_lv 16 signal 10 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ conv2d_input_V_data_0_V_TVALID sc_in sc_logic 1 invld 0 } 
	{ conv2d_input_V_data_0_V_TREADY sc_out sc_logic 1 inacc 0 } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ layer9_out_V_data_0_V_TVALID sc_out sc_logic 1 outvld 1 } 
	{ layer9_out_V_data_0_V_TREADY sc_in sc_logic 1 outacc 1 } 
	{ layer9_out_V_data_1_V_TVALID sc_out sc_logic 1 outvld 2 } 
	{ layer9_out_V_data_1_V_TREADY sc_in sc_logic 1 outacc 2 } 
	{ layer9_out_V_data_2_V_TVALID sc_out sc_logic 1 outvld 3 } 
	{ layer9_out_V_data_2_V_TREADY sc_in sc_logic 1 outacc 3 } 
	{ layer9_out_V_data_3_V_TVALID sc_out sc_logic 1 outvld 4 } 
	{ layer9_out_V_data_3_V_TREADY sc_in sc_logic 1 outacc 4 } 
	{ layer9_out_V_data_4_V_TVALID sc_out sc_logic 1 outvld 5 } 
	{ layer9_out_V_data_4_V_TREADY sc_in sc_logic 1 outacc 5 } 
	{ layer9_out_V_data_5_V_TVALID sc_out sc_logic 1 outvld 6 } 
	{ layer9_out_V_data_5_V_TREADY sc_in sc_logic 1 outacc 6 } 
	{ layer9_out_V_data_6_V_TVALID sc_out sc_logic 1 outvld 7 } 
	{ layer9_out_V_data_6_V_TREADY sc_in sc_logic 1 outacc 7 } 
	{ layer9_out_V_data_7_V_TVALID sc_out sc_logic 1 outvld 8 } 
	{ layer9_out_V_data_7_V_TREADY sc_in sc_logic 1 outacc 8 } 
	{ layer9_out_V_data_8_V_TVALID sc_out sc_logic 1 outvld 9 } 
	{ layer9_out_V_data_8_V_TREADY sc_in sc_logic 1 outacc 9 } 
	{ layer9_out_V_data_9_V_TVALID sc_out sc_logic 1 outvld 10 } 
	{ layer9_out_V_data_9_V_TREADY sc_in sc_logic 1 outacc 10 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
}
set NewPortList {[ 
	{ "name": "conv2d_input_V_data_0_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv2d_input_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "layer9_out_V_data_0_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer9_out_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "layer9_out_V_data_1_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer9_out_V_data_1_V", "role": "TDATA" }} , 
 	{ "name": "layer9_out_V_data_2_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer9_out_V_data_2_V", "role": "TDATA" }} , 
 	{ "name": "layer9_out_V_data_3_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer9_out_V_data_3_V", "role": "TDATA" }} , 
 	{ "name": "layer9_out_V_data_4_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer9_out_V_data_4_V", "role": "TDATA" }} , 
 	{ "name": "layer9_out_V_data_5_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer9_out_V_data_5_V", "role": "TDATA" }} , 
 	{ "name": "layer9_out_V_data_6_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer9_out_V_data_6_V", "role": "TDATA" }} , 
 	{ "name": "layer9_out_V_data_7_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer9_out_V_data_7_V", "role": "TDATA" }} , 
 	{ "name": "layer9_out_V_data_8_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer9_out_V_data_8_V", "role": "TDATA" }} , 
 	{ "name": "layer9_out_V_data_9_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer9_out_V_data_9_V", "role": "TDATA" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "conv2d_input_V_data_0_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "conv2d_input_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "conv2d_input_V_data_0_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "conv2d_input_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "layer9_out_V_data_0_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer9_out_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "layer9_out_V_data_0_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer9_out_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "layer9_out_V_data_1_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer9_out_V_data_1_V", "role": "TVALID" }} , 
 	{ "name": "layer9_out_V_data_1_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer9_out_V_data_1_V", "role": "TREADY" }} , 
 	{ "name": "layer9_out_V_data_2_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer9_out_V_data_2_V", "role": "TVALID" }} , 
 	{ "name": "layer9_out_V_data_2_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer9_out_V_data_2_V", "role": "TREADY" }} , 
 	{ "name": "layer9_out_V_data_3_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer9_out_V_data_3_V", "role": "TVALID" }} , 
 	{ "name": "layer9_out_V_data_3_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer9_out_V_data_3_V", "role": "TREADY" }} , 
 	{ "name": "layer9_out_V_data_4_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer9_out_V_data_4_V", "role": "TVALID" }} , 
 	{ "name": "layer9_out_V_data_4_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer9_out_V_data_4_V", "role": "TREADY" }} , 
 	{ "name": "layer9_out_V_data_5_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer9_out_V_data_5_V", "role": "TVALID" }} , 
 	{ "name": "layer9_out_V_data_5_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer9_out_V_data_5_V", "role": "TREADY" }} , 
 	{ "name": "layer9_out_V_data_6_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer9_out_V_data_6_V", "role": "TVALID" }} , 
 	{ "name": "layer9_out_V_data_6_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer9_out_V_data_6_V", "role": "TREADY" }} , 
 	{ "name": "layer9_out_V_data_7_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer9_out_V_data_7_V", "role": "TVALID" }} , 
 	{ "name": "layer9_out_V_data_7_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer9_out_V_data_7_V", "role": "TREADY" }} , 
 	{ "name": "layer9_out_V_data_8_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer9_out_V_data_8_V", "role": "TVALID" }} , 
 	{ "name": "layer9_out_V_data_8_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer9_out_V_data_8_V", "role": "TREADY" }} , 
 	{ "name": "layer9_out_V_data_9_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer9_out_V_data_9_V", "role": "TVALID" }} , 
 	{ "name": "layer9_out_V_data_9_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer9_out_V_data_9_V", "role": "TREADY" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "18", "19", "60", "146", "147", "164", "337", "338", "339", "340", "341", "342", "343", "344", "345", "346", "347", "348", "349", "350", "351", "352", "353", "354", "355", "356", "357", "358", "359", "360", "361", "362", "363", "364", "365", "366", "367", "368", "369", "370", "371", "372", "373", "374", "375", "376", "377", "378"],
		"CDFG" : "myproject",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "7849", "EstimateLatencyMax" : "7907",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0"}],
		"OutputProcess" : [
			{"ID" : "164", "Name" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0"}],
		"Port" : [
			{"Name" : "conv2d_input_V_data_0_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "data_V_data_V"}]},
			{"Name" : "layer9_out_V_data_0_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "164", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "res_stream_V_data_0_V"}]},
			{"Name" : "layer9_out_V_data_1_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "164", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "res_stream_V_data_1_V"}]},
			{"Name" : "layer9_out_V_data_2_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "164", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "res_stream_V_data_2_V"}]},
			{"Name" : "layer9_out_V_data_3_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "164", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "res_stream_V_data_3_V"}]},
			{"Name" : "layer9_out_V_data_4_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "164", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "res_stream_V_data_4_V"}]},
			{"Name" : "layer9_out_V_data_5_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "164", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "res_stream_V_data_5_V"}]},
			{"Name" : "layer9_out_V_data_6_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "164", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "res_stream_V_data_6_V"}]},
			{"Name" : "layer9_out_V_data_7_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "164", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "res_stream_V_data_7_V"}]},
			{"Name" : "layer9_out_V_data_8_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "164", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "res_stream_V_data_8_V"}]},
			{"Name" : "layer9_out_V_data_9_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "164", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "res_stream_V_data_9_V"}]},
			{"Name" : "kernel_data_V_1143", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_1143"}]},
			{"Name" : "kernel_data_V_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_4"}]},
			{"Name" : "kernel_data_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_7"}]},
			{"Name" : "kernel_data_V_2144", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_2144"}]},
			{"Name" : "kernel_data_V_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_5"}]},
			{"Name" : "kernel_data_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_8"}]},
			{"Name" : "sX_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "sX_3"}]},
			{"Name" : "sY_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "sY_3"}]},
			{"Name" : "pY_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "pY_3"}]},
			{"Name" : "pX_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "pX_3"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "w2_V"}]},
			{"Name" : "kernel_data_V_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_6"}]},
			{"Name" : "kernel_data_V_3145", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_3145"}]},
			{"Name" : "kernel_data_V_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_0"}]},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "line_buffer_Array_V_0_0"}]},
			{"Name" : "line_buffer_Array_V_1142_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "line_buffer_Array_V_1142_0"}]},
			{"Name" : "pX_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "pX_1"}]},
			{"Name" : "sX_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "sX_1"}]},
			{"Name" : "pY_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "pY_1"}]},
			{"Name" : "sY_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "sY_1"}]},
			{"Name" : "kernel_data_V_2_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_4"}]},
			{"Name" : "kernel_data_V_2_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_5"}]},
			{"Name" : "kernel_data_V_2_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_6"}]},
			{"Name" : "kernel_data_V_2_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_7"}]},
			{"Name" : "kernel_data_V_2_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_20"}]},
			{"Name" : "kernel_data_V_2_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_21"}]},
			{"Name" : "kernel_data_V_2_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_22"}]},
			{"Name" : "kernel_data_V_2_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_23"}]},
			{"Name" : "kernel_data_V_2_36", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_36"}]},
			{"Name" : "kernel_data_V_2_37", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_37"}]},
			{"Name" : "kernel_data_V_2_38", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_38"}]},
			{"Name" : "kernel_data_V_2_39", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_39"}]},
			{"Name" : "kernel_data_V_2_52", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_52"}]},
			{"Name" : "kernel_data_V_2_53", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_53"}]},
			{"Name" : "kernel_data_V_2_54", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_54"}]},
			{"Name" : "kernel_data_V_2_55", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_55"}]},
			{"Name" : "kernel_data_V_2_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_8"}]},
			{"Name" : "kernel_data_V_2_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_9"}]},
			{"Name" : "kernel_data_V_2_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_10"}]},
			{"Name" : "kernel_data_V_2_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_11"}]},
			{"Name" : "kernel_data_V_2_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_24"}]},
			{"Name" : "kernel_data_V_2_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_25"}]},
			{"Name" : "kernel_data_V_2_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_26"}]},
			{"Name" : "kernel_data_V_2_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_27"}]},
			{"Name" : "kernel_data_V_2_40", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_40"}]},
			{"Name" : "kernel_data_V_2_41", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_41"}]},
			{"Name" : "kernel_data_V_2_42", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_42"}]},
			{"Name" : "kernel_data_V_2_43", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_43"}]},
			{"Name" : "kernel_data_V_2_56", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_56"}]},
			{"Name" : "kernel_data_V_2_57", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_57"}]},
			{"Name" : "kernel_data_V_2_58", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_58"}]},
			{"Name" : "kernel_data_V_2_59", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_59"}]},
			{"Name" : "kernel_data_V_2_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_12"}]},
			{"Name" : "kernel_data_V_2_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_13"}]},
			{"Name" : "kernel_data_V_2_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_14"}]},
			{"Name" : "kernel_data_V_2_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_15"}]},
			{"Name" : "kernel_data_V_2_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_28"}]},
			{"Name" : "kernel_data_V_2_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_29"}]},
			{"Name" : "kernel_data_V_2_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_30"}]},
			{"Name" : "kernel_data_V_2_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_31"}]},
			{"Name" : "kernel_data_V_2_44", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_44"}]},
			{"Name" : "kernel_data_V_2_45", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_45"}]},
			{"Name" : "kernel_data_V_2_46", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_46"}]},
			{"Name" : "kernel_data_V_2_47", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_47"}]},
			{"Name" : "kernel_data_V_2_60", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_60"}]},
			{"Name" : "kernel_data_V_2_61", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_61"}]},
			{"Name" : "kernel_data_V_2_62", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_62"}]},
			{"Name" : "kernel_data_V_2_63", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_63"}]},
			{"Name" : "line_buffer_Array_V_2_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_0_0"}]},
			{"Name" : "line_buffer_Array_V_2_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_1_0"}]},
			{"Name" : "line_buffer_Array_V_2_2_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_2_0"}]},
			{"Name" : "line_buffer_Array_V_2_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_0_1"}]},
			{"Name" : "line_buffer_Array_V_2_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_1_1"}]},
			{"Name" : "line_buffer_Array_V_2_2_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_2_1"}]},
			{"Name" : "line_buffer_Array_V_2_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_0_2"}]},
			{"Name" : "line_buffer_Array_V_2_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_1_2"}]},
			{"Name" : "line_buffer_Array_V_2_2_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_2_2"}]},
			{"Name" : "line_buffer_Array_V_2_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_0_3"}]},
			{"Name" : "line_buffer_Array_V_2_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_1_3"}]},
			{"Name" : "line_buffer_Array_V_2_2_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_2_3"}]},
			{"Name" : "kernel_data_V_1_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_8"}]},
			{"Name" : "kernel_data_V_1_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_9"}]},
			{"Name" : "kernel_data_V_1_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_10"}]},
			{"Name" : "kernel_data_V_1_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_11"}]},
			{"Name" : "kernel_data_V_1_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_20"}]},
			{"Name" : "kernel_data_V_1_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_21"}]},
			{"Name" : "kernel_data_V_1_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_22"}]},
			{"Name" : "kernel_data_V_1_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_23"}]},
			{"Name" : "kernel_data_V_1_32", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_32"}]},
			{"Name" : "kernel_data_V_1_33", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_33"}]},
			{"Name" : "kernel_data_V_1_34", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_34"}]},
			{"Name" : "kernel_data_V_1_35", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_35"}]},
			{"Name" : "kernel_data_V_1_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_4"}]},
			{"Name" : "kernel_data_V_1_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_5"}]},
			{"Name" : "kernel_data_V_1_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_6"}]},
			{"Name" : "kernel_data_V_1_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_7"}]},
			{"Name" : "kernel_data_V_1_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_16"}]},
			{"Name" : "kernel_data_V_1_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_17"}]},
			{"Name" : "kernel_data_V_1_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_18"}]},
			{"Name" : "kernel_data_V_1_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_19"}]},
			{"Name" : "kernel_data_V_1_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_28"}]},
			{"Name" : "kernel_data_V_1_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_29"}]},
			{"Name" : "kernel_data_V_1_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_30"}]},
			{"Name" : "kernel_data_V_1_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_31"}]},
			{"Name" : "sX_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "sX_2"}]},
			{"Name" : "sY_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "sY_2"}]},
			{"Name" : "pY_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "pY_2"}]},
			{"Name" : "pX_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "pX_2"}]},
			{"Name" : "w5_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "w5_V"}]},
			{"Name" : "kernel_data_V_1_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_24"}]},
			{"Name" : "kernel_data_V_1_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_25"}]},
			{"Name" : "kernel_data_V_1_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_26"}]},
			{"Name" : "kernel_data_V_1_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_27"}]},
			{"Name" : "kernel_data_V_1_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_12"}]},
			{"Name" : "kernel_data_V_1_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_13"}]},
			{"Name" : "kernel_data_V_1_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_14"}]},
			{"Name" : "kernel_data_V_1_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_15"}]},
			{"Name" : "kernel_data_V_1_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_0"}]},
			{"Name" : "kernel_data_V_1_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_1"}]},
			{"Name" : "kernel_data_V_1_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_2"}]},
			{"Name" : "kernel_data_V_1_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_3"}]},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_0_0"}]},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_0_1"}]},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_0_2"}]},
			{"Name" : "line_buffer_Array_V_1_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_0_3"}]},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_1_0"}]},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_1_1"}]},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_1_2"}]},
			{"Name" : "line_buffer_Array_V_1_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_1_3"}]},
			{"Name" : "pX", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "pX"}]},
			{"Name" : "sX", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "sX"}]},
			{"Name" : "pY", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "pY"}]},
			{"Name" : "sY", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "sY"}]},
			{"Name" : "kernel_data_V_3_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_8"}]},
			{"Name" : "kernel_data_V_3_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_9"}]},
			{"Name" : "kernel_data_V_3_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_10"}]},
			{"Name" : "kernel_data_V_3_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_11"}]},
			{"Name" : "kernel_data_V_3_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_12"}]},
			{"Name" : "kernel_data_V_3_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_13"}]},
			{"Name" : "kernel_data_V_3_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_14"}]},
			{"Name" : "kernel_data_V_3_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_15"}]},
			{"Name" : "kernel_data_V_3_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_24"}]},
			{"Name" : "kernel_data_V_3_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_25"}]},
			{"Name" : "kernel_data_V_3_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_26"}]},
			{"Name" : "kernel_data_V_3_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_27"}]},
			{"Name" : "kernel_data_V_3_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_28"}]},
			{"Name" : "kernel_data_V_3_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_29"}]},
			{"Name" : "kernel_data_V_3_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_30"}]},
			{"Name" : "kernel_data_V_3_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_31"}]},
			{"Name" : "line_buffer_Array_V_3_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_0"}]},
			{"Name" : "line_buffer_Array_V_3_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_1"}]},
			{"Name" : "line_buffer_Array_V_3_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_2"}]},
			{"Name" : "line_buffer_Array_V_3_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_3"}]},
			{"Name" : "line_buffer_Array_V_3_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_4"}]},
			{"Name" : "line_buffer_Array_V_3_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_5"}]},
			{"Name" : "line_buffer_Array_V_3_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_6"}]},
			{"Name" : "line_buffer_Array_V_3_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_7"}]},
			{"Name" : "w9_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "164", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "w9_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17"],
		"CDFG" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "4704", "EstimateLatencyMax" : "7840",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V_data_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "18", "DependentChan" : "337",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "18", "DependentChan" : "338",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "18", "DependentChan" : "339",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "18", "DependentChan" : "340",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "kernel_data_V_1143", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2144", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pX_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "kernel_data_V_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3145", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1142_0", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.w2_V_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.line_buffer_Array_V_0_0_U", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.line_buffer_Array_V_1142_0_U", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.myproject_mul_mul_16s_16s_26_1_1_U1", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.myproject_mul_mul_16s_16s_26_1_1_U2", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.myproject_mul_mul_16s_16s_26_1_1_U3", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.myproject_mul_mul_16s_16s_26_1_1_U4", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.myproject_mul_mul_16s_16s_26_1_1_U5", "Parent" : "1"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.myproject_mul_mul_16s_16s_26_1_1_U6", "Parent" : "1"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.myproject_mul_mul_16s_16s_26_1_1_U7", "Parent" : "1"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.myproject_mul_mul_16s_16s_26_1_1_U8", "Parent" : "1"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.myproject_mul_mul_16s_16s_26_1_1_U9", "Parent" : "1"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.myproject_mul_mul_16s_16s_26_1_1_U10", "Parent" : "1"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.myproject_mul_mul_16s_16s_26_1_1_U11", "Parent" : "1"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.myproject_mul_mul_16s_11ns_26_1_1_U12", "Parent" : "1"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.regslice_both_data_V_data_V_U", "Parent" : "1"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_relu_config3_U0", "Parent" : "0",
		"CDFG" : "relu_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_relu_config3_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "678", "EstimateLatencyMax" : "678",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "1",
		"StartFifo" : "start_for_relu_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_relu_config3_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "337",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "338",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "339",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "340",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "19", "DependentChan" : "341",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "19", "DependentChan" : "342",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "19", "DependentChan" : "343",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "19", "DependentChan" : "344",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Parent" : "0", "Child" : ["20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59"],
		"CDFG" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "679", "EstimateLatencyMax" : "679",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "18",
		"StartFifo" : "start_for_pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4Ffa_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "18", "DependentChan" : "341",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "18", "DependentChan" : "342",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "18", "DependentChan" : "343",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "18", "DependentChan" : "344",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "60", "DependentChan" : "345",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "60", "DependentChan" : "346",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "60", "DependentChan" : "347",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "60", "DependentChan" : "348",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "pX_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_20", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_21", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_22", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_23", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_36", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_37", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_38", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_39", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_52", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_53", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_54", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_55", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_24", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_25", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_26", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_27", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_40", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_41", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_42", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_43", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_56", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_57", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_58", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_59", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_28", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_29", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_31", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_44", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_45", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_46", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_47", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_60", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_61", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_62", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_63", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_2_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_2_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_2_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_2_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_2_3", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_0_0_U", "Parent" : "19"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_1_0_U", "Parent" : "19"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_2_0_U", "Parent" : "19"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_0_1_U", "Parent" : "19"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_1_1_U", "Parent" : "19"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_2_1_U", "Parent" : "19"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_0_2_U", "Parent" : "19"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_1_2_U", "Parent" : "19"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_2_2_U", "Parent" : "19"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_0_3_U", "Parent" : "19"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_1_3_U", "Parent" : "19"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_2_3_U", "Parent" : "19"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U31", "Parent" : "19"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U32", "Parent" : "19"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U33", "Parent" : "19"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U34", "Parent" : "19"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U35", "Parent" : "19"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U36", "Parent" : "19"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U37", "Parent" : "19"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U38", "Parent" : "19"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U39", "Parent" : "19"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U40", "Parent" : "19"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U41", "Parent" : "19"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U42", "Parent" : "19"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U43", "Parent" : "19"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U44", "Parent" : "19"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U45", "Parent" : "19"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U46", "Parent" : "19"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U47", "Parent" : "19"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U48", "Parent" : "19"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U49", "Parent" : "19"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U50", "Parent" : "19"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U51", "Parent" : "19"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U52", "Parent" : "19"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U53", "Parent" : "19"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U54", "Parent" : "19"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U55", "Parent" : "19"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U56", "Parent" : "19"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U57", "Parent" : "19"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U58", "Parent" : "19"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Parent" : "0", "Child" : ["61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145"],
		"CDFG" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1224", "EstimateLatencyMax" : "1404",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "19",
		"StartFifo" : "start_for_conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "19", "DependentChan" : "345",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "19", "DependentChan" : "346",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "19", "DependentChan" : "347",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "19", "DependentChan" : "348",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "146", "DependentChan" : "349",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "146", "DependentChan" : "350",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "146", "DependentChan" : "351",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "146", "DependentChan" : "352",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "146", "DependentChan" : "353",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "146", "DependentChan" : "354",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "146", "DependentChan" : "355",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "146", "DependentChan" : "356",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "kernel_data_V_1_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_20", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_21", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_22", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_23", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_32", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_33", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_34", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_35", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_16", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_17", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_18", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_19", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_28", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_29", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_31", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pX_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "w5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "kernel_data_V_1_24", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_25", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_26", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_27", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_3", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.w5_V_U", "Parent" : "60"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.line_buffer_Array_V_1_0_0_U", "Parent" : "60"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.line_buffer_Array_V_1_0_1_U", "Parent" : "60"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.line_buffer_Array_V_1_0_2_U", "Parent" : "60"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.line_buffer_Array_V_1_0_3_U", "Parent" : "60"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.line_buffer_Array_V_1_1_0_U", "Parent" : "60"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.line_buffer_Array_V_1_1_1_U", "Parent" : "60"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.line_buffer_Array_V_1_1_2_U", "Parent" : "60"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.line_buffer_Array_V_1_1_3_U", "Parent" : "60"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mux_42_16_1_1_U70", "Parent" : "60"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mux_42_16_1_1_U71", "Parent" : "60"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mux_42_16_1_1_U72", "Parent" : "60"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mux_42_16_1_1_U73", "Parent" : "60"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U74", "Parent" : "60"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U75", "Parent" : "60"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U76", "Parent" : "60"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U77", "Parent" : "60"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U78", "Parent" : "60"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U79", "Parent" : "60"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U80", "Parent" : "60"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U81", "Parent" : "60"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U82", "Parent" : "60"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U83", "Parent" : "60"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U84", "Parent" : "60"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U85", "Parent" : "60"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U86", "Parent" : "60"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U87", "Parent" : "60"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U88", "Parent" : "60"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U89", "Parent" : "60"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U90", "Parent" : "60"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U91", "Parent" : "60"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U92", "Parent" : "60"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U93", "Parent" : "60"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U94", "Parent" : "60"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U95", "Parent" : "60"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U96", "Parent" : "60"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U97", "Parent" : "60"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U98", "Parent" : "60"},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U99", "Parent" : "60"},
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U100", "Parent" : "60"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U101", "Parent" : "60"},
	{"ID" : "102", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U102", "Parent" : "60"},
	{"ID" : "103", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U103", "Parent" : "60"},
	{"ID" : "104", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U104", "Parent" : "60"},
	{"ID" : "105", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U105", "Parent" : "60"},
	{"ID" : "106", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U106", "Parent" : "60"},
	{"ID" : "107", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U107", "Parent" : "60"},
	{"ID" : "108", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U108", "Parent" : "60"},
	{"ID" : "109", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U109", "Parent" : "60"},
	{"ID" : "110", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U110", "Parent" : "60"},
	{"ID" : "111", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U111", "Parent" : "60"},
	{"ID" : "112", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U112", "Parent" : "60"},
	{"ID" : "113", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U113", "Parent" : "60"},
	{"ID" : "114", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U114", "Parent" : "60"},
	{"ID" : "115", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U115", "Parent" : "60"},
	{"ID" : "116", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U116", "Parent" : "60"},
	{"ID" : "117", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U117", "Parent" : "60"},
	{"ID" : "118", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U118", "Parent" : "60"},
	{"ID" : "119", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U119", "Parent" : "60"},
	{"ID" : "120", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U120", "Parent" : "60"},
	{"ID" : "121", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U121", "Parent" : "60"},
	{"ID" : "122", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U122", "Parent" : "60"},
	{"ID" : "123", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U123", "Parent" : "60"},
	{"ID" : "124", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U124", "Parent" : "60"},
	{"ID" : "125", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U125", "Parent" : "60"},
	{"ID" : "126", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U126", "Parent" : "60"},
	{"ID" : "127", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U127", "Parent" : "60"},
	{"ID" : "128", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U128", "Parent" : "60"},
	{"ID" : "129", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U129", "Parent" : "60"},
	{"ID" : "130", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U130", "Parent" : "60"},
	{"ID" : "131", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U131", "Parent" : "60"},
	{"ID" : "132", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U132", "Parent" : "60"},
	{"ID" : "133", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U133", "Parent" : "60"},
	{"ID" : "134", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U134", "Parent" : "60"},
	{"ID" : "135", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U135", "Parent" : "60"},
	{"ID" : "136", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U136", "Parent" : "60"},
	{"ID" : "137", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U137", "Parent" : "60"},
	{"ID" : "138", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U138", "Parent" : "60"},
	{"ID" : "139", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U139", "Parent" : "60"},
	{"ID" : "140", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U140", "Parent" : "60"},
	{"ID" : "141", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U141", "Parent" : "60"},
	{"ID" : "142", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U142", "Parent" : "60"},
	{"ID" : "143", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U143", "Parent" : "60"},
	{"ID" : "144", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U144", "Parent" : "60"},
	{"ID" : "145", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_10s_26_1_1_U145", "Parent" : "60"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_relu_config6_U0", "Parent" : "0",
		"CDFG" : "relu_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_relu_config6_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "18", "EstimateLatencyMax" : "18",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "60",
		"StartFifo" : "start_for_relu_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_relu_config6_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "60", "DependentChan" : "349",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "60", "DependentChan" : "350",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "60", "DependentChan" : "351",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "60", "DependentChan" : "352",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "60", "DependentChan" : "353",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "60", "DependentChan" : "354",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "60", "DependentChan" : "355",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "60", "DependentChan" : "356",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "147", "DependentChan" : "357",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "147", "DependentChan" : "358",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "147", "DependentChan" : "359",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "147", "DependentChan" : "360",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "147", "DependentChan" : "361",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "147", "DependentChan" : "362",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "147", "DependentChan" : "363",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "147", "DependentChan" : "364",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Parent" : "0", "Child" : ["148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163"],
		"CDFG" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "18", "EstimateLatencyMax" : "18",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "146",
		"StartFifo" : "start_for_pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7Gfk_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "146", "DependentChan" : "357",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "146", "DependentChan" : "358",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "146", "DependentChan" : "359",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "146", "DependentChan" : "360",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "146", "DependentChan" : "361",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "146", "DependentChan" : "362",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "146", "DependentChan" : "363",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "146", "DependentChan" : "364",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "164", "DependentChan" : "365",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "164", "DependentChan" : "366",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "164", "DependentChan" : "367",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "164", "DependentChan" : "368",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "164", "DependentChan" : "369",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "164", "DependentChan" : "370",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "164", "DependentChan" : "371",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "164", "DependentChan" : "372",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "pX", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_24", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_25", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_26", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_27", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_28", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_29", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_31", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_3_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_6", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_7", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "148", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_0_U", "Parent" : "147"},
	{"ID" : "149", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_1_U", "Parent" : "147"},
	{"ID" : "150", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_2_U", "Parent" : "147"},
	{"ID" : "151", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_3_U", "Parent" : "147"},
	{"ID" : "152", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_4_U", "Parent" : "147"},
	{"ID" : "153", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_5_U", "Parent" : "147"},
	{"ID" : "154", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_6_U", "Parent" : "147"},
	{"ID" : "155", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_7_U", "Parent" : "147"},
	{"ID" : "156", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U178", "Parent" : "147"},
	{"ID" : "157", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U179", "Parent" : "147"},
	{"ID" : "158", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U180", "Parent" : "147"},
	{"ID" : "159", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U181", "Parent" : "147"},
	{"ID" : "160", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U182", "Parent" : "147"},
	{"ID" : "161", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U183", "Parent" : "147"},
	{"ID" : "162", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U184", "Parent" : "147"},
	{"ID" : "163", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U185", "Parent" : "147"},
	{"ID" : "164", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Parent" : "0", "Child" : ["165", "327", "328", "329", "330", "331", "332", "333", "334", "335", "336"],
		"CDFG" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "12", "EstimateLatencyMax" : "13",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "147",
		"StartFifo" : "start_for_dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0_U",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state5", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383"}],
		"Port" : [
			{"Name" : "data_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "147", "DependentChan" : "365",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "147", "DependentChan" : "366",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "147", "DependentChan" : "367",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "147", "DependentChan" : "368",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "147", "DependentChan" : "369",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "147", "DependentChan" : "370",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "147", "DependentChan" : "371",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "147", "DependentChan" : "372",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_5_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_5_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_6_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_6_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_7_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_7_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_8_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_8_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_9_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_9_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "w9_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "165", "SubInstance" : "grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383", "Port" : "w9_V"}]}]},
	{"ID" : "165", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383", "Parent" : "164", "Child" : ["166", "167", "168", "169", "170", "171", "172", "173", "174", "175", "176", "177", "178", "179", "180", "181", "182", "183", "184", "185", "186", "187", "188", "189", "190", "191", "192", "193", "194", "195", "196", "197", "198", "199", "200", "201", "202", "203", "204", "205", "206", "207", "208", "209", "210", "211", "212", "213", "214", "215", "216", "217", "218", "219", "220", "221", "222", "223", "224", "225", "226", "227", "228", "229", "230", "231", "232", "233", "234", "235", "236", "237", "238", "239", "240", "241", "242", "243", "244", "245", "246", "247", "248", "249", "250", "251", "252", "253", "254", "255", "256", "257", "258", "259", "260", "261", "262", "263", "264", "265", "266", "267", "268", "269", "270", "271", "272", "273", "274", "275", "276", "277", "278", "279", "280", "281", "282", "283", "284", "285", "286", "287", "288", "289", "290", "291", "292", "293", "294", "295", "296", "297", "298", "299", "300", "301", "302", "303", "304", "305", "306", "307", "308", "309", "310", "311", "312", "313", "314", "315", "316", "317", "318", "319", "320", "321", "322", "323", "324", "325", "326"],
		"CDFG" : "dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "4", "EstimateLatencyMax" : "5",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "w9_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "166", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.w9_V_U", "Parent" : "165"},
	{"ID" : "167", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_42_16_1_1_U203", "Parent" : "165"},
	{"ID" : "168", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U204", "Parent" : "165"},
	{"ID" : "169", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U205", "Parent" : "165"},
	{"ID" : "170", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U206", "Parent" : "165"},
	{"ID" : "171", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U207", "Parent" : "165"},
	{"ID" : "172", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U208", "Parent" : "165"},
	{"ID" : "173", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U209", "Parent" : "165"},
	{"ID" : "174", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U210", "Parent" : "165"},
	{"ID" : "175", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U211", "Parent" : "165"},
	{"ID" : "176", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U212", "Parent" : "165"},
	{"ID" : "177", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U213", "Parent" : "165"},
	{"ID" : "178", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U214", "Parent" : "165"},
	{"ID" : "179", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U215", "Parent" : "165"},
	{"ID" : "180", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U216", "Parent" : "165"},
	{"ID" : "181", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U217", "Parent" : "165"},
	{"ID" : "182", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U218", "Parent" : "165"},
	{"ID" : "183", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U219", "Parent" : "165"},
	{"ID" : "184", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U220", "Parent" : "165"},
	{"ID" : "185", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U221", "Parent" : "165"},
	{"ID" : "186", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U222", "Parent" : "165"},
	{"ID" : "187", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U223", "Parent" : "165"},
	{"ID" : "188", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U224", "Parent" : "165"},
	{"ID" : "189", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U225", "Parent" : "165"},
	{"ID" : "190", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U226", "Parent" : "165"},
	{"ID" : "191", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U227", "Parent" : "165"},
	{"ID" : "192", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U228", "Parent" : "165"},
	{"ID" : "193", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U229", "Parent" : "165"},
	{"ID" : "194", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U230", "Parent" : "165"},
	{"ID" : "195", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U231", "Parent" : "165"},
	{"ID" : "196", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U232", "Parent" : "165"},
	{"ID" : "197", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U233", "Parent" : "165"},
	{"ID" : "198", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U234", "Parent" : "165"},
	{"ID" : "199", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U235", "Parent" : "165"},
	{"ID" : "200", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U236", "Parent" : "165"},
	{"ID" : "201", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U237", "Parent" : "165"},
	{"ID" : "202", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U238", "Parent" : "165"},
	{"ID" : "203", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U239", "Parent" : "165"},
	{"ID" : "204", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U240", "Parent" : "165"},
	{"ID" : "205", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U241", "Parent" : "165"},
	{"ID" : "206", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U242", "Parent" : "165"},
	{"ID" : "207", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U243", "Parent" : "165"},
	{"ID" : "208", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U244", "Parent" : "165"},
	{"ID" : "209", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U245", "Parent" : "165"},
	{"ID" : "210", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U246", "Parent" : "165"},
	{"ID" : "211", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U247", "Parent" : "165"},
	{"ID" : "212", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U248", "Parent" : "165"},
	{"ID" : "213", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U249", "Parent" : "165"},
	{"ID" : "214", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U250", "Parent" : "165"},
	{"ID" : "215", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U251", "Parent" : "165"},
	{"ID" : "216", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U252", "Parent" : "165"},
	{"ID" : "217", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U253", "Parent" : "165"},
	{"ID" : "218", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U254", "Parent" : "165"},
	{"ID" : "219", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U255", "Parent" : "165"},
	{"ID" : "220", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U256", "Parent" : "165"},
	{"ID" : "221", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U257", "Parent" : "165"},
	{"ID" : "222", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U258", "Parent" : "165"},
	{"ID" : "223", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U259", "Parent" : "165"},
	{"ID" : "224", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U260", "Parent" : "165"},
	{"ID" : "225", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U261", "Parent" : "165"},
	{"ID" : "226", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U262", "Parent" : "165"},
	{"ID" : "227", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U263", "Parent" : "165"},
	{"ID" : "228", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U264", "Parent" : "165"},
	{"ID" : "229", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U265", "Parent" : "165"},
	{"ID" : "230", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U266", "Parent" : "165"},
	{"ID" : "231", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U267", "Parent" : "165"},
	{"ID" : "232", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U268", "Parent" : "165"},
	{"ID" : "233", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U269", "Parent" : "165"},
	{"ID" : "234", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U270", "Parent" : "165"},
	{"ID" : "235", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U271", "Parent" : "165"},
	{"ID" : "236", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U272", "Parent" : "165"},
	{"ID" : "237", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U273", "Parent" : "165"},
	{"ID" : "238", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U274", "Parent" : "165"},
	{"ID" : "239", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U275", "Parent" : "165"},
	{"ID" : "240", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U276", "Parent" : "165"},
	{"ID" : "241", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U277", "Parent" : "165"},
	{"ID" : "242", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U278", "Parent" : "165"},
	{"ID" : "243", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U279", "Parent" : "165"},
	{"ID" : "244", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U280", "Parent" : "165"},
	{"ID" : "245", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U281", "Parent" : "165"},
	{"ID" : "246", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U282", "Parent" : "165"},
	{"ID" : "247", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U283", "Parent" : "165"},
	{"ID" : "248", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U284", "Parent" : "165"},
	{"ID" : "249", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U285", "Parent" : "165"},
	{"ID" : "250", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U286", "Parent" : "165"},
	{"ID" : "251", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U287", "Parent" : "165"},
	{"ID" : "252", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U288", "Parent" : "165"},
	{"ID" : "253", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U289", "Parent" : "165"},
	{"ID" : "254", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U290", "Parent" : "165"},
	{"ID" : "255", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U291", "Parent" : "165"},
	{"ID" : "256", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U292", "Parent" : "165"},
	{"ID" : "257", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U293", "Parent" : "165"},
	{"ID" : "258", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U294", "Parent" : "165"},
	{"ID" : "259", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U295", "Parent" : "165"},
	{"ID" : "260", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U296", "Parent" : "165"},
	{"ID" : "261", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U297", "Parent" : "165"},
	{"ID" : "262", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U298", "Parent" : "165"},
	{"ID" : "263", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U299", "Parent" : "165"},
	{"ID" : "264", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U300", "Parent" : "165"},
	{"ID" : "265", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U301", "Parent" : "165"},
	{"ID" : "266", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U302", "Parent" : "165"},
	{"ID" : "267", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U303", "Parent" : "165"},
	{"ID" : "268", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U304", "Parent" : "165"},
	{"ID" : "269", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U305", "Parent" : "165"},
	{"ID" : "270", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U306", "Parent" : "165"},
	{"ID" : "271", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U307", "Parent" : "165"},
	{"ID" : "272", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U308", "Parent" : "165"},
	{"ID" : "273", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U309", "Parent" : "165"},
	{"ID" : "274", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U310", "Parent" : "165"},
	{"ID" : "275", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U311", "Parent" : "165"},
	{"ID" : "276", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U312", "Parent" : "165"},
	{"ID" : "277", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U313", "Parent" : "165"},
	{"ID" : "278", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U314", "Parent" : "165"},
	{"ID" : "279", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U315", "Parent" : "165"},
	{"ID" : "280", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U316", "Parent" : "165"},
	{"ID" : "281", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U317", "Parent" : "165"},
	{"ID" : "282", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U318", "Parent" : "165"},
	{"ID" : "283", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U319", "Parent" : "165"},
	{"ID" : "284", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U320", "Parent" : "165"},
	{"ID" : "285", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U321", "Parent" : "165"},
	{"ID" : "286", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U322", "Parent" : "165"},
	{"ID" : "287", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U323", "Parent" : "165"},
	{"ID" : "288", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U324", "Parent" : "165"},
	{"ID" : "289", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U325", "Parent" : "165"},
	{"ID" : "290", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U326", "Parent" : "165"},
	{"ID" : "291", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U327", "Parent" : "165"},
	{"ID" : "292", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U328", "Parent" : "165"},
	{"ID" : "293", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U329", "Parent" : "165"},
	{"ID" : "294", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U330", "Parent" : "165"},
	{"ID" : "295", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U331", "Parent" : "165"},
	{"ID" : "296", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U332", "Parent" : "165"},
	{"ID" : "297", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U333", "Parent" : "165"},
	{"ID" : "298", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U334", "Parent" : "165"},
	{"ID" : "299", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U335", "Parent" : "165"},
	{"ID" : "300", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U336", "Parent" : "165"},
	{"ID" : "301", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U337", "Parent" : "165"},
	{"ID" : "302", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U338", "Parent" : "165"},
	{"ID" : "303", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U339", "Parent" : "165"},
	{"ID" : "304", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U340", "Parent" : "165"},
	{"ID" : "305", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U341", "Parent" : "165"},
	{"ID" : "306", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U342", "Parent" : "165"},
	{"ID" : "307", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U343", "Parent" : "165"},
	{"ID" : "308", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U344", "Parent" : "165"},
	{"ID" : "309", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U345", "Parent" : "165"},
	{"ID" : "310", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U346", "Parent" : "165"},
	{"ID" : "311", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U347", "Parent" : "165"},
	{"ID" : "312", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U348", "Parent" : "165"},
	{"ID" : "313", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U349", "Parent" : "165"},
	{"ID" : "314", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U350", "Parent" : "165"},
	{"ID" : "315", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U351", "Parent" : "165"},
	{"ID" : "316", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U352", "Parent" : "165"},
	{"ID" : "317", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U353", "Parent" : "165"},
	{"ID" : "318", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U354", "Parent" : "165"},
	{"ID" : "319", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U355", "Parent" : "165"},
	{"ID" : "320", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U356", "Parent" : "165"},
	{"ID" : "321", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U357", "Parent" : "165"},
	{"ID" : "322", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U358", "Parent" : "165"},
	{"ID" : "323", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U359", "Parent" : "165"},
	{"ID" : "324", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U360", "Parent" : "165"},
	{"ID" : "325", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U361", "Parent" : "165"},
	{"ID" : "326", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_11s_26_1_1_U362", "Parent" : "165"},
	{"ID" : "327", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.regslice_both_res_stream_V_data_0_V_U", "Parent" : "164"},
	{"ID" : "328", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.regslice_both_res_stream_V_data_1_V_U", "Parent" : "164"},
	{"ID" : "329", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.regslice_both_res_stream_V_data_2_V_U", "Parent" : "164"},
	{"ID" : "330", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.regslice_both_res_stream_V_data_3_V_U", "Parent" : "164"},
	{"ID" : "331", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.regslice_both_res_stream_V_data_4_V_U", "Parent" : "164"},
	{"ID" : "332", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.regslice_both_res_stream_V_data_5_V_U", "Parent" : "164"},
	{"ID" : "333", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.regslice_both_res_stream_V_data_6_V_U", "Parent" : "164"},
	{"ID" : "334", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.regslice_both_res_stream_V_data_7_V_U", "Parent" : "164"},
	{"ID" : "335", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.regslice_both_res_stream_V_data_8_V_U", "Parent" : "164"},
	{"ID" : "336", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.regslice_both_res_stream_V_data_9_V_U", "Parent" : "164"},
	{"ID" : "337", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "338", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "339", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "340", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "341", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "342", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "343", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "344", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "345", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "346", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "347", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "348", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "349", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "350", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "351", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "352", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "353", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "354", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "355", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "356", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "357", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "358", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "359", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "360", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "361", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "362", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "363", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "364", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "365", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "366", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "367", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "368", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "369", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "370", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "371", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "372", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "373", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_relu_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_relu_config3_U0_U", "Parent" : "0"},
	{"ID" : "374", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4Ffa_U", "Parent" : "0"},
	{"ID" : "375", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0_U", "Parent" : "0"},
	{"ID" : "376", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_relu_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_relu_config6_U0_U", "Parent" : "0"},
	{"ID" : "377", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7Gfk_U", "Parent" : "0"},
	{"ID" : "378", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	myproject {
		conv2d_input_V_data_0_V {Type I LastRead 1 FirstWrite -1}
		layer9_out_V_data_0_V {Type O LastRead -1 FirstWrite 3}
		layer9_out_V_data_1_V {Type O LastRead -1 FirstWrite 3}
		layer9_out_V_data_2_V {Type O LastRead -1 FirstWrite 3}
		layer9_out_V_data_3_V {Type O LastRead -1 FirstWrite 3}
		layer9_out_V_data_4_V {Type O LastRead -1 FirstWrite 3}
		layer9_out_V_data_5_V {Type O LastRead -1 FirstWrite 3}
		layer9_out_V_data_6_V {Type O LastRead -1 FirstWrite 3}
		layer9_out_V_data_7_V {Type O LastRead -1 FirstWrite 3}
		layer9_out_V_data_8_V {Type O LastRead -1 FirstWrite 3}
		layer9_out_V_data_9_V {Type O LastRead -1 FirstWrite 3}
		kernel_data_V_1143 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2144 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_8 {Type IO LastRead -1 FirstWrite -1}
		sX_3 {Type IO LastRead -1 FirstWrite -1}
		sY_3 {Type IO LastRead -1 FirstWrite -1}
		pY_3 {Type IO LastRead -1 FirstWrite -1}
		pX_3 {Type IO LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}
		kernel_data_V_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3145 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_0 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1142_0 {Type X LastRead -1 FirstWrite -1}
		pX_1 {Type IO LastRead -1 FirstWrite -1}
		sX_1 {Type IO LastRead -1 FirstWrite -1}
		pY_1 {Type IO LastRead -1 FirstWrite -1}
		sY_1 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_39 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_52 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_53 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_54 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_55 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_40 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_41 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_42 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_43 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_56 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_57 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_58 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_59 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_44 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_45 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_46 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_47 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_60 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_61 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_62 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_63 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_2_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_2_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_2_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_2_3 {Type X LastRead -1 FirstWrite -1}
		kernel_data_V_1_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_31 {Type IO LastRead -1 FirstWrite -1}
		sX_2 {Type IO LastRead -1 FirstWrite -1}
		sY_2 {Type IO LastRead -1 FirstWrite -1}
		pY_2 {Type IO LastRead -1 FirstWrite -1}
		pX_2 {Type IO LastRead -1 FirstWrite -1}
		w5_V {Type I LastRead -1 FirstWrite -1}
		kernel_data_V_1_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_0 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_1 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_2 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_3 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_3 {Type X LastRead -1 FirstWrite -1}
		pX {Type IO LastRead -1 FirstWrite -1}
		sX {Type IO LastRead -1 FirstWrite -1}
		pY {Type IO LastRead -1 FirstWrite -1}
		sY {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_31 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_7 {Type X LastRead -1 FirstWrite -1}
		w9_V {Type I LastRead -1 FirstWrite -1}}
	conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s {
		data_V_data_V {Type I LastRead 1 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 6}
		kernel_data_V_1143 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2144 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_8 {Type IO LastRead -1 FirstWrite -1}
		sX_3 {Type IO LastRead -1 FirstWrite -1}
		sY_3 {Type IO LastRead -1 FirstWrite -1}
		pY_3 {Type IO LastRead -1 FirstWrite -1}
		pX_3 {Type IO LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}
		kernel_data_V_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3145 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_0 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1142_0 {Type X LastRead -1 FirstWrite -1}}
	relu_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_relu_config3_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 2}}
	pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 3}
		pX_1 {Type IO LastRead -1 FirstWrite -1}
		sX_1 {Type IO LastRead -1 FirstWrite -1}
		pY_1 {Type IO LastRead -1 FirstWrite -1}
		sY_1 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_39 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_52 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_53 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_54 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_55 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_40 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_41 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_42 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_43 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_56 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_57 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_58 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_59 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_44 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_45 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_46 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_47 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_60 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_61 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_62 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_63 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_2_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_2_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_2_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_2_3 {Type X LastRead -1 FirstWrite -1}}
	conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_s {
		data_V_data_0_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 1 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 10}
		kernel_data_V_1_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_31 {Type IO LastRead -1 FirstWrite -1}
		sX_2 {Type IO LastRead -1 FirstWrite -1}
		sY_2 {Type IO LastRead -1 FirstWrite -1}
		pY_2 {Type IO LastRead -1 FirstWrite -1}
		pX_2 {Type IO LastRead -1 FirstWrite -1}
		w5_V {Type I LastRead -1 FirstWrite -1}
		kernel_data_V_1_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_0 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_1 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_2 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_3 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_3 {Type X LastRead -1 FirstWrite -1}}
	relu_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_relu_config6_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 2}}
	pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 2}
		pX {Type IO LastRead -1 FirstWrite -1}
		sX {Type IO LastRead -1 FirstWrite -1}
		pY {Type IO LastRead -1 FirstWrite -1}
		sY {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_31 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_7 {Type X LastRead -1 FirstWrite -1}}
	dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_s {
		data_stream_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 3}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 3}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 3}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 3}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 3}
		res_stream_V_data_5_V {Type O LastRead -1 FirstWrite 3}
		res_stream_V_data_6_V {Type O LastRead -1 FirstWrite 3}
		res_stream_V_data_7_V {Type O LastRead -1 FirstWrite 3}
		res_stream_V_data_8_V {Type O LastRead -1 FirstWrite 3}
		res_stream_V_data_9_V {Type O LastRead -1 FirstWrite 3}
		w9_V {Type I LastRead -1 FirstWrite -1}}
	dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s {
		data_0_V_read {Type I LastRead 1 FirstWrite -1}
		data_1_V_read {Type I LastRead 1 FirstWrite -1}
		data_2_V_read {Type I LastRead 1 FirstWrite -1}
		data_3_V_read {Type I LastRead 1 FirstWrite -1}
		data_4_V_read {Type I LastRead 1 FirstWrite -1}
		data_5_V_read {Type I LastRead 1 FirstWrite -1}
		data_6_V_read {Type I LastRead 1 FirstWrite -1}
		data_7_V_read {Type I LastRead 1 FirstWrite -1}
		data_8_V_read {Type I LastRead 1 FirstWrite -1}
		data_9_V_read {Type I LastRead 1 FirstWrite -1}
		data_10_V_read {Type I LastRead 1 FirstWrite -1}
		data_11_V_read {Type I LastRead 1 FirstWrite -1}
		data_12_V_read {Type I LastRead 1 FirstWrite -1}
		data_13_V_read {Type I LastRead 1 FirstWrite -1}
		data_14_V_read {Type I LastRead 1 FirstWrite -1}
		data_15_V_read {Type I LastRead 1 FirstWrite -1}
		data_16_V_read {Type I LastRead 1 FirstWrite -1}
		data_17_V_read {Type I LastRead 1 FirstWrite -1}
		data_18_V_read {Type I LastRead 1 FirstWrite -1}
		data_19_V_read {Type I LastRead 1 FirstWrite -1}
		data_20_V_read {Type I LastRead 1 FirstWrite -1}
		data_21_V_read {Type I LastRead 1 FirstWrite -1}
		data_22_V_read {Type I LastRead 1 FirstWrite -1}
		data_23_V_read {Type I LastRead 1 FirstWrite -1}
		data_24_V_read {Type I LastRead 1 FirstWrite -1}
		data_25_V_read {Type I LastRead 1 FirstWrite -1}
		data_26_V_read {Type I LastRead 1 FirstWrite -1}
		data_27_V_read {Type I LastRead 1 FirstWrite -1}
		data_28_V_read {Type I LastRead 1 FirstWrite -1}
		data_29_V_read {Type I LastRead 1 FirstWrite -1}
		data_30_V_read {Type I LastRead 1 FirstWrite -1}
		data_31_V_read {Type I LastRead 1 FirstWrite -1}
		w9_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "7849", "Max" : "7907"}
	, {"Name" : "Interval", "Min" : "4705", "Max" : "7841"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	conv2d_input_V_data_0_V { axis {  { conv2d_input_V_data_0_V_TDATA in_data 0 16 }  { conv2d_input_V_data_0_V_TVALID in_vld 0 1 }  { conv2d_input_V_data_0_V_TREADY in_acc 1 1 } } }
	layer9_out_V_data_0_V { axis {  { layer9_out_V_data_0_V_TDATA out_data 1 16 }  { layer9_out_V_data_0_V_TVALID out_vld 1 1 }  { layer9_out_V_data_0_V_TREADY out_acc 0 1 } } }
	layer9_out_V_data_1_V { axis {  { layer9_out_V_data_1_V_TDATA out_data 1 16 }  { layer9_out_V_data_1_V_TVALID out_vld 1 1 }  { layer9_out_V_data_1_V_TREADY out_acc 0 1 } } }
	layer9_out_V_data_2_V { axis {  { layer9_out_V_data_2_V_TDATA out_data 1 16 }  { layer9_out_V_data_2_V_TVALID out_vld 1 1 }  { layer9_out_V_data_2_V_TREADY out_acc 0 1 } } }
	layer9_out_V_data_3_V { axis {  { layer9_out_V_data_3_V_TDATA out_data 1 16 }  { layer9_out_V_data_3_V_TVALID out_vld 1 1 }  { layer9_out_V_data_3_V_TREADY out_acc 0 1 } } }
	layer9_out_V_data_4_V { axis {  { layer9_out_V_data_4_V_TDATA out_data 1 16 }  { layer9_out_V_data_4_V_TVALID out_vld 1 1 }  { layer9_out_V_data_4_V_TREADY out_acc 0 1 } } }
	layer9_out_V_data_5_V { axis {  { layer9_out_V_data_5_V_TDATA out_data 1 16 }  { layer9_out_V_data_5_V_TVALID out_vld 1 1 }  { layer9_out_V_data_5_V_TREADY out_acc 0 1 } } }
	layer9_out_V_data_6_V { axis {  { layer9_out_V_data_6_V_TDATA out_data 1 16 }  { layer9_out_V_data_6_V_TVALID out_vld 1 1 }  { layer9_out_V_data_6_V_TREADY out_acc 0 1 } } }
	layer9_out_V_data_7_V { axis {  { layer9_out_V_data_7_V_TDATA out_data 1 16 }  { layer9_out_V_data_7_V_TVALID out_vld 1 1 }  { layer9_out_V_data_7_V_TREADY out_acc 0 1 } } }
	layer9_out_V_data_8_V { axis {  { layer9_out_V_data_8_V_TDATA out_data 1 16 }  { layer9_out_V_data_8_V_TVALID out_vld 1 1 }  { layer9_out_V_data_8_V_TREADY out_acc 0 1 } } }
	layer9_out_V_data_9_V { axis {  { layer9_out_V_data_9_V_TDATA out_data 1 16 }  { layer9_out_V_data_9_V_TVALID out_vld 1 1 }  { layer9_out_V_data_9_V_TREADY out_acc 0 1 } } }
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
set moduleName myproject
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type dataflow
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {myproject}
set C_modelType { void 0 }
set C_modelArgList {
	{ conv2d_input_V_data_0_V int 16 regular {axi_s 0 volatile  { conv2d_input_V_data_0_V Data } }  }
	{ layer9_out_V_data_0_V int 16 regular {axi_s 1 volatile  { layer9_out_V_data_0_V Data } }  }
	{ layer9_out_V_data_1_V int 16 regular {axi_s 1 volatile  { layer9_out_V_data_1_V Data } }  }
	{ layer9_out_V_data_2_V int 16 regular {axi_s 1 volatile  { layer9_out_V_data_2_V Data } }  }
	{ layer9_out_V_data_3_V int 16 regular {axi_s 1 volatile  { layer9_out_V_data_3_V Data } }  }
	{ layer9_out_V_data_4_V int 16 regular {axi_s 1 volatile  { layer9_out_V_data_4_V Data } }  }
	{ layer9_out_V_data_5_V int 16 regular {axi_s 1 volatile  { layer9_out_V_data_5_V Data } }  }
	{ layer9_out_V_data_6_V int 16 regular {axi_s 1 volatile  { layer9_out_V_data_6_V Data } }  }
	{ layer9_out_V_data_7_V int 16 regular {axi_s 1 volatile  { layer9_out_V_data_7_V Data } }  }
	{ layer9_out_V_data_8_V int 16 regular {axi_s 1 volatile  { layer9_out_V_data_8_V Data } }  }
	{ layer9_out_V_data_9_V int 16 regular {axi_s 1 volatile  { layer9_out_V_data_9_V Data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "conv2d_input_V_data_0_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "conv2d_input.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "layer9_out_V_data_0_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer9_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "layer9_out_V_data_1_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer9_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "layer9_out_V_data_2_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer9_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "layer9_out_V_data_3_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer9_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "layer9_out_V_data_4_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer9_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "layer9_out_V_data_5_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer9_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "layer9_out_V_data_6_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer9_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "layer9_out_V_data_7_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer9_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "layer9_out_V_data_8_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer9_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 8,"up" : 8,"step" : 2}]}]}]} , 
 	{ "Name" : "layer9_out_V_data_9_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer9_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 9,"up" : 9,"step" : 2}]}]}]} ]}
# RTL Port declarations: 
set portNum 39
set portList { 
	{ conv2d_input_V_data_0_V_TDATA sc_in sc_lv 16 signal 0 } 
	{ layer9_out_V_data_0_V_TDATA sc_out sc_lv 16 signal 1 } 
	{ layer9_out_V_data_1_V_TDATA sc_out sc_lv 16 signal 2 } 
	{ layer9_out_V_data_2_V_TDATA sc_out sc_lv 16 signal 3 } 
	{ layer9_out_V_data_3_V_TDATA sc_out sc_lv 16 signal 4 } 
	{ layer9_out_V_data_4_V_TDATA sc_out sc_lv 16 signal 5 } 
	{ layer9_out_V_data_5_V_TDATA sc_out sc_lv 16 signal 6 } 
	{ layer9_out_V_data_6_V_TDATA sc_out sc_lv 16 signal 7 } 
	{ layer9_out_V_data_7_V_TDATA sc_out sc_lv 16 signal 8 } 
	{ layer9_out_V_data_8_V_TDATA sc_out sc_lv 16 signal 9 } 
	{ layer9_out_V_data_9_V_TDATA sc_out sc_lv 16 signal 10 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ conv2d_input_V_data_0_V_TVALID sc_in sc_logic 1 invld 0 } 
	{ conv2d_input_V_data_0_V_TREADY sc_out sc_logic 1 inacc 0 } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ layer9_out_V_data_0_V_TVALID sc_out sc_logic 1 outvld 1 } 
	{ layer9_out_V_data_0_V_TREADY sc_in sc_logic 1 outacc 1 } 
	{ layer9_out_V_data_1_V_TVALID sc_out sc_logic 1 outvld 2 } 
	{ layer9_out_V_data_1_V_TREADY sc_in sc_logic 1 outacc 2 } 
	{ layer9_out_V_data_2_V_TVALID sc_out sc_logic 1 outvld 3 } 
	{ layer9_out_V_data_2_V_TREADY sc_in sc_logic 1 outacc 3 } 
	{ layer9_out_V_data_3_V_TVALID sc_out sc_logic 1 outvld 4 } 
	{ layer9_out_V_data_3_V_TREADY sc_in sc_logic 1 outacc 4 } 
	{ layer9_out_V_data_4_V_TVALID sc_out sc_logic 1 outvld 5 } 
	{ layer9_out_V_data_4_V_TREADY sc_in sc_logic 1 outacc 5 } 
	{ layer9_out_V_data_5_V_TVALID sc_out sc_logic 1 outvld 6 } 
	{ layer9_out_V_data_5_V_TREADY sc_in sc_logic 1 outacc 6 } 
	{ layer9_out_V_data_6_V_TVALID sc_out sc_logic 1 outvld 7 } 
	{ layer9_out_V_data_6_V_TREADY sc_in sc_logic 1 outacc 7 } 
	{ layer9_out_V_data_7_V_TVALID sc_out sc_logic 1 outvld 8 } 
	{ layer9_out_V_data_7_V_TREADY sc_in sc_logic 1 outacc 8 } 
	{ layer9_out_V_data_8_V_TVALID sc_out sc_logic 1 outvld 9 } 
	{ layer9_out_V_data_8_V_TREADY sc_in sc_logic 1 outacc 9 } 
	{ layer9_out_V_data_9_V_TVALID sc_out sc_logic 1 outvld 10 } 
	{ layer9_out_V_data_9_V_TREADY sc_in sc_logic 1 outacc 10 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
}
set NewPortList {[ 
	{ "name": "conv2d_input_V_data_0_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv2d_input_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "layer9_out_V_data_0_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer9_out_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "layer9_out_V_data_1_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer9_out_V_data_1_V", "role": "TDATA" }} , 
 	{ "name": "layer9_out_V_data_2_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer9_out_V_data_2_V", "role": "TDATA" }} , 
 	{ "name": "layer9_out_V_data_3_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer9_out_V_data_3_V", "role": "TDATA" }} , 
 	{ "name": "layer9_out_V_data_4_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer9_out_V_data_4_V", "role": "TDATA" }} , 
 	{ "name": "layer9_out_V_data_5_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer9_out_V_data_5_V", "role": "TDATA" }} , 
 	{ "name": "layer9_out_V_data_6_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer9_out_V_data_6_V", "role": "TDATA" }} , 
 	{ "name": "layer9_out_V_data_7_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer9_out_V_data_7_V", "role": "TDATA" }} , 
 	{ "name": "layer9_out_V_data_8_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer9_out_V_data_8_V", "role": "TDATA" }} , 
 	{ "name": "layer9_out_V_data_9_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer9_out_V_data_9_V", "role": "TDATA" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "conv2d_input_V_data_0_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "conv2d_input_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "conv2d_input_V_data_0_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "conv2d_input_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "layer9_out_V_data_0_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer9_out_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "layer9_out_V_data_0_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer9_out_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "layer9_out_V_data_1_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer9_out_V_data_1_V", "role": "TVALID" }} , 
 	{ "name": "layer9_out_V_data_1_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer9_out_V_data_1_V", "role": "TREADY" }} , 
 	{ "name": "layer9_out_V_data_2_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer9_out_V_data_2_V", "role": "TVALID" }} , 
 	{ "name": "layer9_out_V_data_2_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer9_out_V_data_2_V", "role": "TREADY" }} , 
 	{ "name": "layer9_out_V_data_3_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer9_out_V_data_3_V", "role": "TVALID" }} , 
 	{ "name": "layer9_out_V_data_3_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer9_out_V_data_3_V", "role": "TREADY" }} , 
 	{ "name": "layer9_out_V_data_4_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer9_out_V_data_4_V", "role": "TVALID" }} , 
 	{ "name": "layer9_out_V_data_4_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer9_out_V_data_4_V", "role": "TREADY" }} , 
 	{ "name": "layer9_out_V_data_5_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer9_out_V_data_5_V", "role": "TVALID" }} , 
 	{ "name": "layer9_out_V_data_5_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer9_out_V_data_5_V", "role": "TREADY" }} , 
 	{ "name": "layer9_out_V_data_6_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer9_out_V_data_6_V", "role": "TVALID" }} , 
 	{ "name": "layer9_out_V_data_6_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer9_out_V_data_6_V", "role": "TREADY" }} , 
 	{ "name": "layer9_out_V_data_7_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer9_out_V_data_7_V", "role": "TVALID" }} , 
 	{ "name": "layer9_out_V_data_7_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer9_out_V_data_7_V", "role": "TREADY" }} , 
 	{ "name": "layer9_out_V_data_8_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer9_out_V_data_8_V", "role": "TVALID" }} , 
 	{ "name": "layer9_out_V_data_8_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer9_out_V_data_8_V", "role": "TREADY" }} , 
 	{ "name": "layer9_out_V_data_9_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer9_out_V_data_9_V", "role": "TVALID" }} , 
 	{ "name": "layer9_out_V_data_9_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer9_out_V_data_9_V", "role": "TREADY" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "9", "10", "51", "73", "74", "91", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156"],
		"CDFG" : "myproject",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "33683", "EstimateLatencyMax" : "33777",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0"}],
		"OutputProcess" : [
			{"ID" : "91", "Name" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0"}],
		"Port" : [
			{"Name" : "conv2d_input_V_data_0_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "data_V_data_V"}]},
			{"Name" : "layer9_out_V_data_0_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "res_stream_V_data_0_V"}]},
			{"Name" : "layer9_out_V_data_1_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "res_stream_V_data_1_V"}]},
			{"Name" : "layer9_out_V_data_2_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "res_stream_V_data_2_V"}]},
			{"Name" : "layer9_out_V_data_3_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "res_stream_V_data_3_V"}]},
			{"Name" : "layer9_out_V_data_4_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "res_stream_V_data_4_V"}]},
			{"Name" : "layer9_out_V_data_5_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "res_stream_V_data_5_V"}]},
			{"Name" : "layer9_out_V_data_6_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "res_stream_V_data_6_V"}]},
			{"Name" : "layer9_out_V_data_7_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "res_stream_V_data_7_V"}]},
			{"Name" : "layer9_out_V_data_8_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "res_stream_V_data_8_V"}]},
			{"Name" : "layer9_out_V_data_9_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "res_stream_V_data_9_V"}]},
			{"Name" : "kernel_data_V_1143", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_1143"}]},
			{"Name" : "kernel_data_V_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_4"}]},
			{"Name" : "kernel_data_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_7"}]},
			{"Name" : "kernel_data_V_2144", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_2144"}]},
			{"Name" : "kernel_data_V_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_5"}]},
			{"Name" : "kernel_data_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_8"}]},
			{"Name" : "sX_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "sX_3"}]},
			{"Name" : "sY_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "sY_3"}]},
			{"Name" : "pY_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "pY_3"}]},
			{"Name" : "pX_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "pX_3"}]},
			{"Name" : "outidx", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "outidx"}]},
			{"Name" : "kernel_data_V_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_0"}]},
			{"Name" : "kernel_data_V_3145", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_3145"}]},
			{"Name" : "kernel_data_V_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_6"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "w2_V"}]},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "line_buffer_Array_V_0_0"}]},
			{"Name" : "line_buffer_Array_V_1142_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "line_buffer_Array_V_1142_0"}]},
			{"Name" : "pX_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "pX_1"}]},
			{"Name" : "sX_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "sX_1"}]},
			{"Name" : "pY_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "pY_1"}]},
			{"Name" : "sY_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "sY_1"}]},
			{"Name" : "kernel_data_V_2_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_4"}]},
			{"Name" : "kernel_data_V_2_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_5"}]},
			{"Name" : "kernel_data_V_2_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_6"}]},
			{"Name" : "kernel_data_V_2_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_7"}]},
			{"Name" : "kernel_data_V_2_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_20"}]},
			{"Name" : "kernel_data_V_2_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_21"}]},
			{"Name" : "kernel_data_V_2_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_22"}]},
			{"Name" : "kernel_data_V_2_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_23"}]},
			{"Name" : "kernel_data_V_2_36", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_36"}]},
			{"Name" : "kernel_data_V_2_37", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_37"}]},
			{"Name" : "kernel_data_V_2_38", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_38"}]},
			{"Name" : "kernel_data_V_2_39", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_39"}]},
			{"Name" : "kernel_data_V_2_52", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_52"}]},
			{"Name" : "kernel_data_V_2_53", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_53"}]},
			{"Name" : "kernel_data_V_2_54", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_54"}]},
			{"Name" : "kernel_data_V_2_55", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_55"}]},
			{"Name" : "kernel_data_V_2_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_8"}]},
			{"Name" : "kernel_data_V_2_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_9"}]},
			{"Name" : "kernel_data_V_2_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_10"}]},
			{"Name" : "kernel_data_V_2_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_11"}]},
			{"Name" : "kernel_data_V_2_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_24"}]},
			{"Name" : "kernel_data_V_2_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_25"}]},
			{"Name" : "kernel_data_V_2_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_26"}]},
			{"Name" : "kernel_data_V_2_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_27"}]},
			{"Name" : "kernel_data_V_2_40", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_40"}]},
			{"Name" : "kernel_data_V_2_41", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_41"}]},
			{"Name" : "kernel_data_V_2_42", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_42"}]},
			{"Name" : "kernel_data_V_2_43", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_43"}]},
			{"Name" : "kernel_data_V_2_56", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_56"}]},
			{"Name" : "kernel_data_V_2_57", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_57"}]},
			{"Name" : "kernel_data_V_2_58", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_58"}]},
			{"Name" : "kernel_data_V_2_59", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_59"}]},
			{"Name" : "kernel_data_V_2_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_12"}]},
			{"Name" : "kernel_data_V_2_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_13"}]},
			{"Name" : "kernel_data_V_2_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_14"}]},
			{"Name" : "kernel_data_V_2_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_15"}]},
			{"Name" : "kernel_data_V_2_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_28"}]},
			{"Name" : "kernel_data_V_2_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_29"}]},
			{"Name" : "kernel_data_V_2_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_30"}]},
			{"Name" : "kernel_data_V_2_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_31"}]},
			{"Name" : "kernel_data_V_2_44", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_44"}]},
			{"Name" : "kernel_data_V_2_45", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_45"}]},
			{"Name" : "kernel_data_V_2_46", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_46"}]},
			{"Name" : "kernel_data_V_2_47", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_47"}]},
			{"Name" : "kernel_data_V_2_60", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_60"}]},
			{"Name" : "kernel_data_V_2_61", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_61"}]},
			{"Name" : "kernel_data_V_2_62", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_62"}]},
			{"Name" : "kernel_data_V_2_63", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_63"}]},
			{"Name" : "line_buffer_Array_V_2_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_0_0"}]},
			{"Name" : "line_buffer_Array_V_2_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_1_0"}]},
			{"Name" : "line_buffer_Array_V_2_2_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_2_0"}]},
			{"Name" : "line_buffer_Array_V_2_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_0_1"}]},
			{"Name" : "line_buffer_Array_V_2_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_1_1"}]},
			{"Name" : "line_buffer_Array_V_2_2_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_2_1"}]},
			{"Name" : "line_buffer_Array_V_2_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_0_2"}]},
			{"Name" : "line_buffer_Array_V_2_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_1_2"}]},
			{"Name" : "line_buffer_Array_V_2_2_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_2_2"}]},
			{"Name" : "line_buffer_Array_V_2_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_0_3"}]},
			{"Name" : "line_buffer_Array_V_2_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_1_3"}]},
			{"Name" : "line_buffer_Array_V_2_2_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_2_3"}]},
			{"Name" : "kernel_data_V_1_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_8"}]},
			{"Name" : "kernel_data_V_1_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_9"}]},
			{"Name" : "kernel_data_V_1_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_10"}]},
			{"Name" : "kernel_data_V_1_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_11"}]},
			{"Name" : "kernel_data_V_1_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_20"}]},
			{"Name" : "kernel_data_V_1_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_21"}]},
			{"Name" : "kernel_data_V_1_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_22"}]},
			{"Name" : "kernel_data_V_1_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_23"}]},
			{"Name" : "kernel_data_V_1_32", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_32"}]},
			{"Name" : "kernel_data_V_1_33", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_33"}]},
			{"Name" : "kernel_data_V_1_34", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_34"}]},
			{"Name" : "kernel_data_V_1_35", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_35"}]},
			{"Name" : "kernel_data_V_1_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_4"}]},
			{"Name" : "kernel_data_V_1_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_5"}]},
			{"Name" : "kernel_data_V_1_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_6"}]},
			{"Name" : "kernel_data_V_1_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_7"}]},
			{"Name" : "kernel_data_V_1_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_16"}]},
			{"Name" : "kernel_data_V_1_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_17"}]},
			{"Name" : "kernel_data_V_1_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_18"}]},
			{"Name" : "kernel_data_V_1_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_19"}]},
			{"Name" : "kernel_data_V_1_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_28"}]},
			{"Name" : "kernel_data_V_1_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_29"}]},
			{"Name" : "kernel_data_V_1_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_30"}]},
			{"Name" : "kernel_data_V_1_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_31"}]},
			{"Name" : "sX_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "sX_2"}]},
			{"Name" : "sY_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "sY_2"}]},
			{"Name" : "pY_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "pY_2"}]},
			{"Name" : "pX_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "pX_2"}]},
			{"Name" : "kernel_data_V_1_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_0"}]},
			{"Name" : "kernel_data_V_1_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_1"}]},
			{"Name" : "kernel_data_V_1_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_2"}]},
			{"Name" : "kernel_data_V_1_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_3"}]},
			{"Name" : "kernel_data_V_1_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_12"}]},
			{"Name" : "kernel_data_V_1_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_13"}]},
			{"Name" : "kernel_data_V_1_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_14"}]},
			{"Name" : "kernel_data_V_1_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_15"}]},
			{"Name" : "kernel_data_V_1_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_24"}]},
			{"Name" : "kernel_data_V_1_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_25"}]},
			{"Name" : "kernel_data_V_1_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_26"}]},
			{"Name" : "kernel_data_V_1_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_27"}]},
			{"Name" : "w5_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "w5_V"}]},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_0_0"}]},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_0_1"}]},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_0_2"}]},
			{"Name" : "line_buffer_Array_V_1_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_0_3"}]},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_1_0"}]},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_1_1"}]},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_1_2"}]},
			{"Name" : "line_buffer_Array_V_1_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_1_3"}]},
			{"Name" : "pX", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "pX"}]},
			{"Name" : "sX", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "sX"}]},
			{"Name" : "pY", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "pY"}]},
			{"Name" : "sY", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "sY"}]},
			{"Name" : "kernel_data_V_3_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_8"}]},
			{"Name" : "kernel_data_V_3_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_9"}]},
			{"Name" : "kernel_data_V_3_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_10"}]},
			{"Name" : "kernel_data_V_3_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_11"}]},
			{"Name" : "kernel_data_V_3_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_12"}]},
			{"Name" : "kernel_data_V_3_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_13"}]},
			{"Name" : "kernel_data_V_3_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_14"}]},
			{"Name" : "kernel_data_V_3_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_15"}]},
			{"Name" : "kernel_data_V_3_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_24"}]},
			{"Name" : "kernel_data_V_3_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_25"}]},
			{"Name" : "kernel_data_V_3_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_26"}]},
			{"Name" : "kernel_data_V_3_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_27"}]},
			{"Name" : "kernel_data_V_3_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_28"}]},
			{"Name" : "kernel_data_V_3_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_29"}]},
			{"Name" : "kernel_data_V_3_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_30"}]},
			{"Name" : "kernel_data_V_3_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_31"}]},
			{"Name" : "line_buffer_Array_V_3_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_0"}]},
			{"Name" : "line_buffer_Array_V_3_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_1"}]},
			{"Name" : "line_buffer_Array_V_3_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_2"}]},
			{"Name" : "line_buffer_Array_V_3_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_3"}]},
			{"Name" : "line_buffer_Array_V_3_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_4"}]},
			{"Name" : "line_buffer_Array_V_3_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_5"}]},
			{"Name" : "line_buffer_Array_V_3_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_6"}]},
			{"Name" : "line_buffer_Array_V_3_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_7"}]},
			{"Name" : "w9_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Port" : "w9_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8"],
		"CDFG" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "4704", "EstimateLatencyMax" : "33712",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V_data_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "115",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "116",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "117",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "118",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "kernel_data_V_1143", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2144", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pX_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "outidx", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "kernel_data_V_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3145", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1142_0", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.outidx_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.w2_V_U", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.line_buffer_Array_V_0_0_U", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.line_buffer_Array_V_1142_0_U", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.myproject_mux_42_16_1_1_U1", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.myproject_mul_mul_12s_16s_26_1_1_U2", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.regslice_both_data_V_data_V_U", "Parent" : "1"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_relu_config3_U0", "Parent" : "0",
		"CDFG" : "relu_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_relu_config3_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "678", "EstimateLatencyMax" : "678",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "1",
		"StartFifo" : "start_for_relu_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_relu_config3_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "115",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "116",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "117",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "118",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "10", "DependentChan" : "119",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "10", "DependentChan" : "120",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "10", "DependentChan" : "121",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "10", "DependentChan" : "122",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Parent" : "0", "Child" : ["11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50"],
		"CDFG" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "679", "EstimateLatencyMax" : "679",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "9",
		"StartFifo" : "start_for_pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4Ffa_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "119",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "120",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "121",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "122",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "123",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "124",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "125",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "126",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "pX_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_20", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_21", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_22", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_23", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_36", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_37", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_38", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_39", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_52", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_53", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_54", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_55", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_24", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_25", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_26", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_27", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_40", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_41", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_42", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_43", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_56", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_57", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_58", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_59", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_28", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_29", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_31", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_44", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_45", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_46", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_47", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_60", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_61", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_62", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_63", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_2_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_2_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_2_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_2_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_2_3", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_0_0_U", "Parent" : "10"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_1_0_U", "Parent" : "10"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_2_0_U", "Parent" : "10"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_0_1_U", "Parent" : "10"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_1_1_U", "Parent" : "10"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_2_1_U", "Parent" : "10"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_0_2_U", "Parent" : "10"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_1_2_U", "Parent" : "10"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_2_2_U", "Parent" : "10"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_0_3_U", "Parent" : "10"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_1_3_U", "Parent" : "10"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_2_3_U", "Parent" : "10"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U22", "Parent" : "10"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U23", "Parent" : "10"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U24", "Parent" : "10"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U25", "Parent" : "10"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U26", "Parent" : "10"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U27", "Parent" : "10"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U28", "Parent" : "10"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U29", "Parent" : "10"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U30", "Parent" : "10"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U31", "Parent" : "10"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U32", "Parent" : "10"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U33", "Parent" : "10"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U34", "Parent" : "10"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U35", "Parent" : "10"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U36", "Parent" : "10"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U37", "Parent" : "10"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U38", "Parent" : "10"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U39", "Parent" : "10"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U40", "Parent" : "10"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U41", "Parent" : "10"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U42", "Parent" : "10"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U43", "Parent" : "10"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U44", "Parent" : "10"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U45", "Parent" : "10"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U46", "Parent" : "10"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U47", "Parent" : "10"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U48", "Parent" : "10"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U49", "Parent" : "10"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Parent" : "0", "Child" : ["52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72"],
		"CDFG" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1224", "EstimateLatencyMax" : "2556",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "10",
		"StartFifo" : "start_for_conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "10", "DependentChan" : "123",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "10", "DependentChan" : "124",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "10", "DependentChan" : "125",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "10", "DependentChan" : "126",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "73", "DependentChan" : "127",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "73", "DependentChan" : "128",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "73", "DependentChan" : "129",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "73", "DependentChan" : "130",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "73", "DependentChan" : "131",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "73", "DependentChan" : "132",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "73", "DependentChan" : "133",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "73", "DependentChan" : "134",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "kernel_data_V_1_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_20", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_21", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_22", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_23", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_32", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_33", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_34", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_35", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_16", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_17", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_18", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_19", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_28", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_29", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_31", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pX_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_24", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_25", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_26", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_27", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "w5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_3", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.w5_V_U", "Parent" : "51"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.line_buffer_Array_V_1_0_0_U", "Parent" : "51"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.line_buffer_Array_V_1_0_1_U", "Parent" : "51"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.line_buffer_Array_V_1_0_2_U", "Parent" : "51"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.line_buffer_Array_V_1_0_3_U", "Parent" : "51"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.line_buffer_Array_V_1_1_0_U", "Parent" : "51"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.line_buffer_Array_V_1_1_1_U", "Parent" : "51"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.line_buffer_Array_V_1_1_2_U", "Parent" : "51"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.line_buffer_Array_V_1_1_3_U", "Parent" : "51"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mux_42_16_1_1_U61", "Parent" : "51"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mux_42_16_1_1_U62", "Parent" : "51"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mux_42_16_1_1_U63", "Parent" : "51"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mux_42_16_1_1_U64", "Parent" : "51"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U65", "Parent" : "51"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U66", "Parent" : "51"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U67", "Parent" : "51"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U68", "Parent" : "51"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U69", "Parent" : "51"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U70", "Parent" : "51"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_16s_26_1_1_U71", "Parent" : "51"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.myproject_mul_mul_16s_12s_26_1_1_U72", "Parent" : "51"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_relu_config6_U0", "Parent" : "0",
		"CDFG" : "relu_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_relu_config6_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "18", "EstimateLatencyMax" : "18",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "51",
		"StartFifo" : "start_for_relu_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_relu_config6_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "127",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "128",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "129",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "130",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "131",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "132",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "133",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "134",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "74", "DependentChan" : "135",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "74", "DependentChan" : "136",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "74", "DependentChan" : "137",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "74", "DependentChan" : "138",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "74", "DependentChan" : "139",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "74", "DependentChan" : "140",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "74", "DependentChan" : "141",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "74", "DependentChan" : "142",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Parent" : "0", "Child" : ["75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90"],
		"CDFG" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "18", "EstimateLatencyMax" : "18",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "73",
		"StartFifo" : "start_for_pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7Gfk_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "73", "DependentChan" : "135",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "73", "DependentChan" : "136",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "73", "DependentChan" : "137",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "73", "DependentChan" : "138",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "73", "DependentChan" : "139",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "73", "DependentChan" : "140",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "73", "DependentChan" : "141",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "73", "DependentChan" : "142",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "91", "DependentChan" : "143",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "91", "DependentChan" : "144",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "91", "DependentChan" : "145",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "91", "DependentChan" : "146",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "91", "DependentChan" : "147",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "91", "DependentChan" : "148",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "91", "DependentChan" : "149",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "91", "DependentChan" : "150",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "pX", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_24", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_25", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_26", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_27", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_28", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_29", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_31", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_3_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_6", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_7", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_0_U", "Parent" : "74"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_1_U", "Parent" : "74"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_2_U", "Parent" : "74"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_3_U", "Parent" : "74"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_4_U", "Parent" : "74"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_5_U", "Parent" : "74"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_6_U", "Parent" : "74"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_7_U", "Parent" : "74"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U105", "Parent" : "74"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U106", "Parent" : "74"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U107", "Parent" : "74"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U108", "Parent" : "74"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U109", "Parent" : "74"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U110", "Parent" : "74"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U111", "Parent" : "74"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U112", "Parent" : "74"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Parent" : "0", "Child" : ["92", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114"],
		"CDFG" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "40", "EstimateLatencyMax" : "41",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "74",
		"StartFifo" : "start_for_dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0_U",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state5", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383"}],
		"Port" : [
			{"Name" : "data_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "74", "DependentChan" : "143",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "74", "DependentChan" : "144",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "74", "DependentChan" : "145",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "74", "DependentChan" : "146",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "74", "DependentChan" : "147",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "74", "DependentChan" : "148",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "74", "DependentChan" : "149",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "74", "DependentChan" : "150",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_5_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_5_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_6_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_6_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_7_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_7_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_8_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_8_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_9_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_9_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "w9_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "92", "SubInstance" : "grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383", "Port" : "w9_V"}]}]},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383", "Parent" : "91", "Child" : ["93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104"],
		"CDFG" : "dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "32", "EstimateLatencyMax" : "33",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "w9_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "93", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.w9_V_U", "Parent" : "92"},
	{"ID" : "94", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mux_325_16_1_1_U130", "Parent" : "92"},
	{"ID" : "95", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U131", "Parent" : "92"},
	{"ID" : "96", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U132", "Parent" : "92"},
	{"ID" : "97", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U133", "Parent" : "92"},
	{"ID" : "98", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U134", "Parent" : "92"},
	{"ID" : "99", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U135", "Parent" : "92"},
	{"ID" : "100", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U136", "Parent" : "92"},
	{"ID" : "101", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U137", "Parent" : "92"},
	{"ID" : "102", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U138", "Parent" : "92"},
	{"ID" : "103", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_16s_26_1_1_U139", "Parent" : "92"},
	{"ID" : "104", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_383.myproject_mul_mul_16s_11s_26_1_1_U140", "Parent" : "92"},
	{"ID" : "105", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.regslice_both_res_stream_V_data_0_V_U", "Parent" : "91"},
	{"ID" : "106", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.regslice_both_res_stream_V_data_1_V_U", "Parent" : "91"},
	{"ID" : "107", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.regslice_both_res_stream_V_data_2_V_U", "Parent" : "91"},
	{"ID" : "108", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.regslice_both_res_stream_V_data_3_V_U", "Parent" : "91"},
	{"ID" : "109", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.regslice_both_res_stream_V_data_4_V_U", "Parent" : "91"},
	{"ID" : "110", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.regslice_both_res_stream_V_data_5_V_U", "Parent" : "91"},
	{"ID" : "111", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.regslice_both_res_stream_V_data_6_V_U", "Parent" : "91"},
	{"ID" : "112", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.regslice_both_res_stream_V_data_7_V_U", "Parent" : "91"},
	{"ID" : "113", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.regslice_both_res_stream_V_data_8_V_U", "Parent" : "91"},
	{"ID" : "114", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.regslice_both_res_stream_V_data_9_V_U", "Parent" : "91"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "140", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "142", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_relu_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_relu_config3_U0_U", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4Ffa_U", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0_U", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_relu_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_relu_config6_U0_U", "Parent" : "0"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7Gfk_U", "Parent" : "0"},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	myproject {
		conv2d_input_V_data_0_V {Type I LastRead 1 FirstWrite -1}
		layer9_out_V_data_0_V {Type O LastRead -1 FirstWrite 3}
		layer9_out_V_data_1_V {Type O LastRead -1 FirstWrite 3}
		layer9_out_V_data_2_V {Type O LastRead -1 FirstWrite 3}
		layer9_out_V_data_3_V {Type O LastRead -1 FirstWrite 3}
		layer9_out_V_data_4_V {Type O LastRead -1 FirstWrite 3}
		layer9_out_V_data_5_V {Type O LastRead -1 FirstWrite 3}
		layer9_out_V_data_6_V {Type O LastRead -1 FirstWrite 3}
		layer9_out_V_data_7_V {Type O LastRead -1 FirstWrite 3}
		layer9_out_V_data_8_V {Type O LastRead -1 FirstWrite 3}
		layer9_out_V_data_9_V {Type O LastRead -1 FirstWrite 3}
		kernel_data_V_1143 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2144 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_8 {Type IO LastRead -1 FirstWrite -1}
		sX_3 {Type IO LastRead -1 FirstWrite -1}
		sY_3 {Type IO LastRead -1 FirstWrite -1}
		pY_3 {Type IO LastRead -1 FirstWrite -1}
		pX_3 {Type IO LastRead -1 FirstWrite -1}
		outidx {Type I LastRead -1 FirstWrite -1}
		kernel_data_V_0 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3145 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_6 {Type IO LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1142_0 {Type X LastRead -1 FirstWrite -1}
		pX_1 {Type IO LastRead -1 FirstWrite -1}
		sX_1 {Type IO LastRead -1 FirstWrite -1}
		pY_1 {Type IO LastRead -1 FirstWrite -1}
		sY_1 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_39 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_52 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_53 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_54 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_55 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_40 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_41 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_42 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_43 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_56 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_57 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_58 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_59 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_44 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_45 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_46 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_47 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_60 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_61 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_62 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_63 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_2_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_2_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_2_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_2_3 {Type X LastRead -1 FirstWrite -1}
		kernel_data_V_1_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_31 {Type IO LastRead -1 FirstWrite -1}
		sX_2 {Type IO LastRead -1 FirstWrite -1}
		sY_2 {Type IO LastRead -1 FirstWrite -1}
		pY_2 {Type IO LastRead -1 FirstWrite -1}
		pX_2 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_0 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_1 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_2 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_3 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_27 {Type IO LastRead -1 FirstWrite -1}
		w5_V {Type I LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_3 {Type X LastRead -1 FirstWrite -1}
		pX {Type IO LastRead -1 FirstWrite -1}
		sX {Type IO LastRead -1 FirstWrite -1}
		pY {Type IO LastRead -1 FirstWrite -1}
		sY {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_31 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_7 {Type X LastRead -1 FirstWrite -1}
		w9_V {Type I LastRead -1 FirstWrite -1}}
	conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s {
		data_V_data_V {Type I LastRead 1 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 6}
		kernel_data_V_1143 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2144 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_8 {Type IO LastRead -1 FirstWrite -1}
		sX_3 {Type IO LastRead -1 FirstWrite -1}
		sY_3 {Type IO LastRead -1 FirstWrite -1}
		pY_3 {Type IO LastRead -1 FirstWrite -1}
		pX_3 {Type IO LastRead -1 FirstWrite -1}
		outidx {Type I LastRead -1 FirstWrite -1}
		kernel_data_V_0 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3145 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_6 {Type IO LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1142_0 {Type X LastRead -1 FirstWrite -1}}
	relu_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_relu_config3_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 2}}
	pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 3}
		pX_1 {Type IO LastRead -1 FirstWrite -1}
		sX_1 {Type IO LastRead -1 FirstWrite -1}
		pY_1 {Type IO LastRead -1 FirstWrite -1}
		sY_1 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_39 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_52 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_53 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_54 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_55 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_40 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_41 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_42 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_43 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_56 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_57 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_58 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_59 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_44 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_45 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_46 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_47 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_60 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_61 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_62 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_63 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_2_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_2_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_2_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_2_3 {Type X LastRead -1 FirstWrite -1}}
	conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_s {
		data_V_data_0_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 1 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 10}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 10}
		kernel_data_V_1_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_31 {Type IO LastRead -1 FirstWrite -1}
		sX_2 {Type IO LastRead -1 FirstWrite -1}
		sY_2 {Type IO LastRead -1 FirstWrite -1}
		pY_2 {Type IO LastRead -1 FirstWrite -1}
		pX_2 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_0 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_1 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_2 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_3 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_27 {Type IO LastRead -1 FirstWrite -1}
		w5_V {Type I LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_3 {Type X LastRead -1 FirstWrite -1}}
	relu_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_relu_config6_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 2}}
	pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 2}
		pX {Type IO LastRead -1 FirstWrite -1}
		sX {Type IO LastRead -1 FirstWrite -1}
		pY {Type IO LastRead -1 FirstWrite -1}
		sY {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_31 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_7 {Type X LastRead -1 FirstWrite -1}}
	dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_s {
		data_stream_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 3}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 3}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 3}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 3}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 3}
		res_stream_V_data_5_V {Type O LastRead -1 FirstWrite 3}
		res_stream_V_data_6_V {Type O LastRead -1 FirstWrite 3}
		res_stream_V_data_7_V {Type O LastRead -1 FirstWrite 3}
		res_stream_V_data_8_V {Type O LastRead -1 FirstWrite 3}
		res_stream_V_data_9_V {Type O LastRead -1 FirstWrite 3}
		w9_V {Type I LastRead -1 FirstWrite -1}}
	dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s {
		data_0_V_read {Type I LastRead 1 FirstWrite -1}
		data_1_V_read {Type I LastRead 1 FirstWrite -1}
		data_2_V_read {Type I LastRead 1 FirstWrite -1}
		data_3_V_read {Type I LastRead 1 FirstWrite -1}
		data_4_V_read {Type I LastRead 1 FirstWrite -1}
		data_5_V_read {Type I LastRead 1 FirstWrite -1}
		data_6_V_read {Type I LastRead 1 FirstWrite -1}
		data_7_V_read {Type I LastRead 1 FirstWrite -1}
		data_8_V_read {Type I LastRead 1 FirstWrite -1}
		data_9_V_read {Type I LastRead 1 FirstWrite -1}
		data_10_V_read {Type I LastRead 1 FirstWrite -1}
		data_11_V_read {Type I LastRead 1 FirstWrite -1}
		data_12_V_read {Type I LastRead 1 FirstWrite -1}
		data_13_V_read {Type I LastRead 1 FirstWrite -1}
		data_14_V_read {Type I LastRead 1 FirstWrite -1}
		data_15_V_read {Type I LastRead 1 FirstWrite -1}
		data_16_V_read {Type I LastRead 1 FirstWrite -1}
		data_17_V_read {Type I LastRead 1 FirstWrite -1}
		data_18_V_read {Type I LastRead 1 FirstWrite -1}
		data_19_V_read {Type I LastRead 1 FirstWrite -1}
		data_20_V_read {Type I LastRead 1 FirstWrite -1}
		data_21_V_read {Type I LastRead 1 FirstWrite -1}
		data_22_V_read {Type I LastRead 1 FirstWrite -1}
		data_23_V_read {Type I LastRead 1 FirstWrite -1}
		data_24_V_read {Type I LastRead 1 FirstWrite -1}
		data_25_V_read {Type I LastRead 1 FirstWrite -1}
		data_26_V_read {Type I LastRead 1 FirstWrite -1}
		data_27_V_read {Type I LastRead 1 FirstWrite -1}
		data_28_V_read {Type I LastRead 1 FirstWrite -1}
		data_29_V_read {Type I LastRead 1 FirstWrite -1}
		data_30_V_read {Type I LastRead 1 FirstWrite -1}
		data_31_V_read {Type I LastRead 1 FirstWrite -1}
		w9_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "33683", "Max" : "33777"}
	, {"Name" : "Interval", "Min" : "4705", "Max" : "33713"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	conv2d_input_V_data_0_V { axis {  { conv2d_input_V_data_0_V_TDATA in_data 0 16 }  { conv2d_input_V_data_0_V_TVALID in_vld 0 1 }  { conv2d_input_V_data_0_V_TREADY in_acc 1 1 } } }
	layer9_out_V_data_0_V { axis {  { layer9_out_V_data_0_V_TDATA out_data 1 16 }  { layer9_out_V_data_0_V_TVALID out_vld 1 1 }  { layer9_out_V_data_0_V_TREADY out_acc 0 1 } } }
	layer9_out_V_data_1_V { axis {  { layer9_out_V_data_1_V_TDATA out_data 1 16 }  { layer9_out_V_data_1_V_TVALID out_vld 1 1 }  { layer9_out_V_data_1_V_TREADY out_acc 0 1 } } }
	layer9_out_V_data_2_V { axis {  { layer9_out_V_data_2_V_TDATA out_data 1 16 }  { layer9_out_V_data_2_V_TVALID out_vld 1 1 }  { layer9_out_V_data_2_V_TREADY out_acc 0 1 } } }
	layer9_out_V_data_3_V { axis {  { layer9_out_V_data_3_V_TDATA out_data 1 16 }  { layer9_out_V_data_3_V_TVALID out_vld 1 1 }  { layer9_out_V_data_3_V_TREADY out_acc 0 1 } } }
	layer9_out_V_data_4_V { axis {  { layer9_out_V_data_4_V_TDATA out_data 1 16 }  { layer9_out_V_data_4_V_TVALID out_vld 1 1 }  { layer9_out_V_data_4_V_TREADY out_acc 0 1 } } }
	layer9_out_V_data_5_V { axis {  { layer9_out_V_data_5_V_TDATA out_data 1 16 }  { layer9_out_V_data_5_V_TVALID out_vld 1 1 }  { layer9_out_V_data_5_V_TREADY out_acc 0 1 } } }
	layer9_out_V_data_6_V { axis {  { layer9_out_V_data_6_V_TDATA out_data 1 16 }  { layer9_out_V_data_6_V_TVALID out_vld 1 1 }  { layer9_out_V_data_6_V_TREADY out_acc 0 1 } } }
	layer9_out_V_data_7_V { axis {  { layer9_out_V_data_7_V_TDATA out_data 1 16 }  { layer9_out_V_data_7_V_TVALID out_vld 1 1 }  { layer9_out_V_data_7_V_TREADY out_acc 0 1 } } }
	layer9_out_V_data_8_V { axis {  { layer9_out_V_data_8_V_TDATA out_data 1 16 }  { layer9_out_V_data_8_V_TVALID out_vld 1 1 }  { layer9_out_V_data_8_V_TREADY out_acc 0 1 } } }
	layer9_out_V_data_9_V { axis {  { layer9_out_V_data_9_V_TDATA out_data 1 16 }  { layer9_out_V_data_9_V_TVALID out_vld 1 1 }  { layer9_out_V_data_9_V_TREADY out_acc 0 1 } } }
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
