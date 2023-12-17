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
	{ layer10_out_V_data_0_V int 16 regular {axi_s 1 volatile  { layer10_out_V_data_0_V Data } }  }
	{ layer10_out_V_data_1_V int 16 regular {axi_s 1 volatile  { layer10_out_V_data_1_V Data } }  }
	{ layer10_out_V_data_2_V int 16 regular {axi_s 1 volatile  { layer10_out_V_data_2_V Data } }  }
	{ layer10_out_V_data_3_V int 16 regular {axi_s 1 volatile  { layer10_out_V_data_3_V Data } }  }
	{ layer10_out_V_data_4_V int 16 regular {axi_s 1 volatile  { layer10_out_V_data_4_V Data } }  }
	{ layer10_out_V_data_5_V int 16 regular {axi_s 1 volatile  { layer10_out_V_data_5_V Data } }  }
	{ layer10_out_V_data_6_V int 16 regular {axi_s 1 volatile  { layer10_out_V_data_6_V Data } }  }
	{ layer10_out_V_data_7_V int 16 regular {axi_s 1 volatile  { layer10_out_V_data_7_V Data } }  }
	{ layer10_out_V_data_8_V int 16 regular {axi_s 1 volatile  { layer10_out_V_data_8_V Data } }  }
	{ layer10_out_V_data_9_V int 16 regular {axi_s 1 volatile  { layer10_out_V_data_9_V Data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "conv2d_input_V_data_0_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "conv2d_input.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "layer10_out_V_data_0_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer10_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "layer10_out_V_data_1_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer10_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "layer10_out_V_data_2_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer10_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "layer10_out_V_data_3_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer10_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "layer10_out_V_data_4_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer10_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "layer10_out_V_data_5_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer10_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "layer10_out_V_data_6_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer10_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "layer10_out_V_data_7_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer10_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "layer10_out_V_data_8_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer10_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 8,"up" : 8,"step" : 2}]}]}]} , 
 	{ "Name" : "layer10_out_V_data_9_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer10_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 9,"up" : 9,"step" : 2}]}]}]} ]}
# RTL Port declarations: 
set portNum 39
set portList { 
	{ conv2d_input_V_data_0_V_TDATA sc_in sc_lv 16 signal 0 } 
	{ layer10_out_V_data_0_V_TDATA sc_out sc_lv 16 signal 1 } 
	{ layer10_out_V_data_1_V_TDATA sc_out sc_lv 16 signal 2 } 
	{ layer10_out_V_data_2_V_TDATA sc_out sc_lv 16 signal 3 } 
	{ layer10_out_V_data_3_V_TDATA sc_out sc_lv 16 signal 4 } 
	{ layer10_out_V_data_4_V_TDATA sc_out sc_lv 16 signal 5 } 
	{ layer10_out_V_data_5_V_TDATA sc_out sc_lv 16 signal 6 } 
	{ layer10_out_V_data_6_V_TDATA sc_out sc_lv 16 signal 7 } 
	{ layer10_out_V_data_7_V_TDATA sc_out sc_lv 16 signal 8 } 
	{ layer10_out_V_data_8_V_TDATA sc_out sc_lv 16 signal 9 } 
	{ layer10_out_V_data_9_V_TDATA sc_out sc_lv 16 signal 10 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ conv2d_input_V_data_0_V_TVALID sc_in sc_logic 1 invld 0 } 
	{ conv2d_input_V_data_0_V_TREADY sc_out sc_logic 1 inacc 0 } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ layer10_out_V_data_0_V_TVALID sc_out sc_logic 1 outvld 1 } 
	{ layer10_out_V_data_0_V_TREADY sc_in sc_logic 1 outacc 1 } 
	{ layer10_out_V_data_1_V_TVALID sc_out sc_logic 1 outvld 2 } 
	{ layer10_out_V_data_1_V_TREADY sc_in sc_logic 1 outacc 2 } 
	{ layer10_out_V_data_2_V_TVALID sc_out sc_logic 1 outvld 3 } 
	{ layer10_out_V_data_2_V_TREADY sc_in sc_logic 1 outacc 3 } 
	{ layer10_out_V_data_3_V_TVALID sc_out sc_logic 1 outvld 4 } 
	{ layer10_out_V_data_3_V_TREADY sc_in sc_logic 1 outacc 4 } 
	{ layer10_out_V_data_4_V_TVALID sc_out sc_logic 1 outvld 5 } 
	{ layer10_out_V_data_4_V_TREADY sc_in sc_logic 1 outacc 5 } 
	{ layer10_out_V_data_5_V_TVALID sc_out sc_logic 1 outvld 6 } 
	{ layer10_out_V_data_5_V_TREADY sc_in sc_logic 1 outacc 6 } 
	{ layer10_out_V_data_6_V_TVALID sc_out sc_logic 1 outvld 7 } 
	{ layer10_out_V_data_6_V_TREADY sc_in sc_logic 1 outacc 7 } 
	{ layer10_out_V_data_7_V_TVALID sc_out sc_logic 1 outvld 8 } 
	{ layer10_out_V_data_7_V_TREADY sc_in sc_logic 1 outacc 8 } 
	{ layer10_out_V_data_8_V_TVALID sc_out sc_logic 1 outvld 9 } 
	{ layer10_out_V_data_8_V_TREADY sc_in sc_logic 1 outacc 9 } 
	{ layer10_out_V_data_9_V_TVALID sc_out sc_logic 1 outvld 10 } 
	{ layer10_out_V_data_9_V_TREADY sc_in sc_logic 1 outacc 10 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
}
set NewPortList {[ 
	{ "name": "conv2d_input_V_data_0_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv2d_input_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "layer10_out_V_data_0_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer10_out_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "layer10_out_V_data_1_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer10_out_V_data_1_V", "role": "TDATA" }} , 
 	{ "name": "layer10_out_V_data_2_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer10_out_V_data_2_V", "role": "TDATA" }} , 
 	{ "name": "layer10_out_V_data_3_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer10_out_V_data_3_V", "role": "TDATA" }} , 
 	{ "name": "layer10_out_V_data_4_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer10_out_V_data_4_V", "role": "TDATA" }} , 
 	{ "name": "layer10_out_V_data_5_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer10_out_V_data_5_V", "role": "TDATA" }} , 
 	{ "name": "layer10_out_V_data_6_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer10_out_V_data_6_V", "role": "TDATA" }} , 
 	{ "name": "layer10_out_V_data_7_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer10_out_V_data_7_V", "role": "TDATA" }} , 
 	{ "name": "layer10_out_V_data_8_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer10_out_V_data_8_V", "role": "TDATA" }} , 
 	{ "name": "layer10_out_V_data_9_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer10_out_V_data_9_V", "role": "TDATA" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "conv2d_input_V_data_0_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "conv2d_input_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "conv2d_input_V_data_0_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "conv2d_input_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "layer10_out_V_data_0_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer10_out_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "layer10_out_V_data_0_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer10_out_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "layer10_out_V_data_1_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer10_out_V_data_1_V", "role": "TVALID" }} , 
 	{ "name": "layer10_out_V_data_1_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer10_out_V_data_1_V", "role": "TREADY" }} , 
 	{ "name": "layer10_out_V_data_2_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer10_out_V_data_2_V", "role": "TVALID" }} , 
 	{ "name": "layer10_out_V_data_2_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer10_out_V_data_2_V", "role": "TREADY" }} , 
 	{ "name": "layer10_out_V_data_3_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer10_out_V_data_3_V", "role": "TVALID" }} , 
 	{ "name": "layer10_out_V_data_3_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer10_out_V_data_3_V", "role": "TREADY" }} , 
 	{ "name": "layer10_out_V_data_4_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer10_out_V_data_4_V", "role": "TVALID" }} , 
 	{ "name": "layer10_out_V_data_4_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer10_out_V_data_4_V", "role": "TREADY" }} , 
 	{ "name": "layer10_out_V_data_5_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer10_out_V_data_5_V", "role": "TVALID" }} , 
 	{ "name": "layer10_out_V_data_5_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer10_out_V_data_5_V", "role": "TREADY" }} , 
 	{ "name": "layer10_out_V_data_6_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer10_out_V_data_6_V", "role": "TVALID" }} , 
 	{ "name": "layer10_out_V_data_6_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer10_out_V_data_6_V", "role": "TREADY" }} , 
 	{ "name": "layer10_out_V_data_7_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer10_out_V_data_7_V", "role": "TVALID" }} , 
 	{ "name": "layer10_out_V_data_7_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer10_out_V_data_7_V", "role": "TREADY" }} , 
 	{ "name": "layer10_out_V_data_8_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer10_out_V_data_8_V", "role": "TVALID" }} , 
 	{ "name": "layer10_out_V_data_8_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer10_out_V_data_8_V", "role": "TREADY" }} , 
 	{ "name": "layer10_out_V_data_9_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer10_out_V_data_9_V", "role": "TVALID" }} , 
 	{ "name": "layer10_out_V_data_9_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer10_out_V_data_9_V", "role": "TREADY" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "8", "9", "50", "62", "71", "88", "90", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154"],
		"CDFG" : "myproject",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "27501", "EstimateLatencyMax" : "27501",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0"}],
		"OutputProcess" : [
			{"ID" : "90", "Name" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0"}],
		"Port" : [
			{"Name" : "conv2d_input_V_data_0_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "data_V_data_V"}]},
			{"Name" : "layer10_out_V_data_0_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "res_V_data_0_V"}]},
			{"Name" : "layer10_out_V_data_1_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "res_V_data_1_V"}]},
			{"Name" : "layer10_out_V_data_2_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "res_V_data_2_V"}]},
			{"Name" : "layer10_out_V_data_3_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "res_V_data_3_V"}]},
			{"Name" : "layer10_out_V_data_4_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "res_V_data_4_V"}]},
			{"Name" : "layer10_out_V_data_5_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "res_V_data_5_V"}]},
			{"Name" : "layer10_out_V_data_6_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "res_V_data_6_V"}]},
			{"Name" : "layer10_out_V_data_7_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "res_V_data_7_V"}]},
			{"Name" : "layer10_out_V_data_8_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "res_V_data_8_V"}]},
			{"Name" : "layer10_out_V_data_9_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "res_V_data_9_V"}]},
			{"Name" : "kernel_data_V_1312", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_1312"}]},
			{"Name" : "kernel_data_V_2313", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_2313"}]},
			{"Name" : "kernel_data_V_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_4"}]},
			{"Name" : "kernel_data_V_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_5"}]},
			{"Name" : "kernel_data_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_7"}]},
			{"Name" : "kernel_data_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_8"}]},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "line_buffer_Array_V_0_0"}]},
			{"Name" : "line_buffer_Array_V_1311_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "line_buffer_Array_V_1311_0"}]},
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
			{"Name" : "pX_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "pX_1"}]},
			{"Name" : "sX_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "sX_1"}]},
			{"Name" : "pY_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "pY_1"}]},
			{"Name" : "sY_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "sY_1"}]},
			{"Name" : "kernel_data_V_2_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_4"}]},
			{"Name" : "kernel_data_V_2_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_5"}]},
			{"Name" : "kernel_data_V_2_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_6"}]},
			{"Name" : "kernel_data_V_2_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_7"}]},
			{"Name" : "kernel_data_V_2_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_20"}]},
			{"Name" : "kernel_data_V_2_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_21"}]},
			{"Name" : "kernel_data_V_2_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_22"}]},
			{"Name" : "kernel_data_V_2_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_23"}]},
			{"Name" : "kernel_data_V_2_36", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_36"}]},
			{"Name" : "kernel_data_V_2_37", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_37"}]},
			{"Name" : "kernel_data_V_2_38", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_38"}]},
			{"Name" : "kernel_data_V_2_39", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_39"}]},
			{"Name" : "kernel_data_V_2_52", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_52"}]},
			{"Name" : "kernel_data_V_2_53", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_53"}]},
			{"Name" : "kernel_data_V_2_54", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_54"}]},
			{"Name" : "kernel_data_V_2_55", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_55"}]},
			{"Name" : "kernel_data_V_2_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_8"}]},
			{"Name" : "kernel_data_V_2_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_9"}]},
			{"Name" : "kernel_data_V_2_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_10"}]},
			{"Name" : "kernel_data_V_2_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_11"}]},
			{"Name" : "kernel_data_V_2_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_24"}]},
			{"Name" : "kernel_data_V_2_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_25"}]},
			{"Name" : "kernel_data_V_2_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_26"}]},
			{"Name" : "kernel_data_V_2_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_27"}]},
			{"Name" : "kernel_data_V_2_40", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_40"}]},
			{"Name" : "kernel_data_V_2_41", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_41"}]},
			{"Name" : "kernel_data_V_2_42", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_42"}]},
			{"Name" : "kernel_data_V_2_43", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_43"}]},
			{"Name" : "kernel_data_V_2_56", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_56"}]},
			{"Name" : "kernel_data_V_2_57", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_57"}]},
			{"Name" : "kernel_data_V_2_58", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_58"}]},
			{"Name" : "kernel_data_V_2_59", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_59"}]},
			{"Name" : "kernel_data_V_2_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_12"}]},
			{"Name" : "kernel_data_V_2_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_13"}]},
			{"Name" : "kernel_data_V_2_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_14"}]},
			{"Name" : "kernel_data_V_2_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_15"}]},
			{"Name" : "kernel_data_V_2_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_28"}]},
			{"Name" : "kernel_data_V_2_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_29"}]},
			{"Name" : "kernel_data_V_2_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_30"}]},
			{"Name" : "kernel_data_V_2_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_31"}]},
			{"Name" : "kernel_data_V_2_44", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_44"}]},
			{"Name" : "kernel_data_V_2_45", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_45"}]},
			{"Name" : "kernel_data_V_2_46", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_46"}]},
			{"Name" : "kernel_data_V_2_47", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_47"}]},
			{"Name" : "kernel_data_V_2_60", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_60"}]},
			{"Name" : "kernel_data_V_2_61", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_61"}]},
			{"Name" : "kernel_data_V_2_62", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_62"}]},
			{"Name" : "kernel_data_V_2_63", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_63"}]},
			{"Name" : "line_buffer_Array_V_2_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_0_0"}]},
			{"Name" : "line_buffer_Array_V_2_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_1_0"}]},
			{"Name" : "line_buffer_Array_V_2_2_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_2_0"}]},
			{"Name" : "line_buffer_Array_V_2_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_0_1"}]},
			{"Name" : "line_buffer_Array_V_2_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_1_1"}]},
			{"Name" : "line_buffer_Array_V_2_2_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_2_1"}]},
			{"Name" : "line_buffer_Array_V_2_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_0_2"}]},
			{"Name" : "line_buffer_Array_V_2_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_1_2"}]},
			{"Name" : "line_buffer_Array_V_2_2_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_2_2"}]},
			{"Name" : "line_buffer_Array_V_2_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_0_3"}]},
			{"Name" : "line_buffer_Array_V_2_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_1_3"}]},
			{"Name" : "line_buffer_Array_V_2_2_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_2_3"}]},
			{"Name" : "kernel_data_V_1_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_4"}]},
			{"Name" : "kernel_data_V_1_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_5"}]},
			{"Name" : "kernel_data_V_1_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_6"}]},
			{"Name" : "kernel_data_V_1_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_7"}]},
			{"Name" : "kernel_data_V_1_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_8"}]},
			{"Name" : "kernel_data_V_1_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_9"}]},
			{"Name" : "kernel_data_V_1_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_10"}]},
			{"Name" : "kernel_data_V_1_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_11"}]},
			{"Name" : "kernel_data_V_1_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_16"}]},
			{"Name" : "kernel_data_V_1_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_17"}]},
			{"Name" : "kernel_data_V_1_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_18"}]},
			{"Name" : "kernel_data_V_1_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_19"}]},
			{"Name" : "kernel_data_V_1_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_20"}]},
			{"Name" : "kernel_data_V_1_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_21"}]},
			{"Name" : "kernel_data_V_1_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_22"}]},
			{"Name" : "kernel_data_V_1_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_23"}]},
			{"Name" : "kernel_data_V_1_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_28"}]},
			{"Name" : "kernel_data_V_1_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_29"}]},
			{"Name" : "kernel_data_V_1_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_30"}]},
			{"Name" : "kernel_data_V_1_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_31"}]},
			{"Name" : "kernel_data_V_1_32", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_32"}]},
			{"Name" : "kernel_data_V_1_33", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_33"}]},
			{"Name" : "kernel_data_V_1_34", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_34"}]},
			{"Name" : "kernel_data_V_1_35", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_35"}]},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_0_0"}]},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_1_0"}]},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_0_1"}]},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_1_1"}]},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_0_2"}]},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_1_2"}]},
			{"Name" : "line_buffer_Array_V_1_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_0_3"}]},
			{"Name" : "line_buffer_Array_V_1_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_1_3"}]},
			{"Name" : "sX_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "sX_2"}]},
			{"Name" : "sY_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "sY_2"}]},
			{"Name" : "pY_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "pY_2"}]},
			{"Name" : "pX_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "pX_2"}]},
			{"Name" : "exp_table2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0", "Port" : "exp_table2"}]},
			{"Name" : "invert_table3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0", "Port" : "invert_table3"}]},
			{"Name" : "pX", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "pX"}]},
			{"Name" : "sX", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "sX"}]},
			{"Name" : "pY", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "pY"}]},
			{"Name" : "sY", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "sY"}]},
			{"Name" : "kernel_data_V_3_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_8"}]},
			{"Name" : "kernel_data_V_3_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_9"}]},
			{"Name" : "kernel_data_V_3_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_10"}]},
			{"Name" : "kernel_data_V_3_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_11"}]},
			{"Name" : "kernel_data_V_3_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_12"}]},
			{"Name" : "kernel_data_V_3_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_13"}]},
			{"Name" : "kernel_data_V_3_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_14"}]},
			{"Name" : "kernel_data_V_3_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_15"}]},
			{"Name" : "kernel_data_V_3_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_24"}]},
			{"Name" : "kernel_data_V_3_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_25"}]},
			{"Name" : "kernel_data_V_3_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_26"}]},
			{"Name" : "kernel_data_V_3_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_27"}]},
			{"Name" : "kernel_data_V_3_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_28"}]},
			{"Name" : "kernel_data_V_3_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_29"}]},
			{"Name" : "kernel_data_V_3_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_30"}]},
			{"Name" : "kernel_data_V_3_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_31"}]},
			{"Name" : "line_buffer_Array_V_3_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_0"}]},
			{"Name" : "line_buffer_Array_V_3_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_1"}]},
			{"Name" : "line_buffer_Array_V_3_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_2"}]},
			{"Name" : "line_buffer_Array_V_3_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_3"}]},
			{"Name" : "line_buffer_Array_V_3_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_4"}]},
			{"Name" : "line_buffer_Array_V_3_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_5"}]},
			{"Name" : "line_buffer_Array_V_3_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_6"}]},
			{"Name" : "line_buffer_Array_V_3_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_7"}]},
			{"Name" : "tanh_table1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "tanh_table1"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Parent" : "0", "Child" : ["2", "7"],
		"CDFG" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "27442", "EstimateLatencyMax" : "27442",
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
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "102",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "res_stream_V_data_0_V"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "103",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "res_stream_V_data_1_V"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "104",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "res_stream_V_data_2_V"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "105",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "res_stream_V_data_3_V"}]},
			{"Name" : "kernel_data_V_1312", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "kernel_data_V_1312"}]},
			{"Name" : "kernel_data_V_2313", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "kernel_data_V_2313"}]},
			{"Name" : "kernel_data_V_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "kernel_data_V_4"}]},
			{"Name" : "kernel_data_V_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "kernel_data_V_5"}]},
			{"Name" : "kernel_data_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "kernel_data_V_7"}]},
			{"Name" : "kernel_data_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "kernel_data_V_8"}]},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "line_buffer_Array_V_0_0"}]},
			{"Name" : "line_buffer_Array_V_1311_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "line_buffer_Array_V_1311_0"}]},
			{"Name" : "sX_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "sX_3"}]},
			{"Name" : "sY_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "sY_3"}]},
			{"Name" : "pY_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "pY_3"}]},
			{"Name" : "pX_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "pX_3"}]}],
		"SubInstanceBlock" : [
			{"SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "SubBlockPort" : ["res_stream_V_data_0_V_blk_n", "res_stream_V_data_1_V_blk_n", "res_stream_V_data_2_V_blk_n", "res_stream_V_data_3_V_blk_n"]}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Parent" : "1", "Child" : ["3", "4"],
		"CDFG" : "compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "34",
		"VariableLatency" : "0", "ExactLatency" : "33", "EstimateLatencyMin" : "33", "EstimateLatencyMax" : "33",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_elem_data_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "kernel_data_V_1312", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2313", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155", "Port" : "line_buffer_Array_V_0_0"}]},
			{"Name" : "line_buffer_Array_V_1311_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155", "Port" : "line_buffer_Array_V_1311_0"}]},
			{"Name" : "sX_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pX_3", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "3", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147.grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142", "Parent" : "2",
		"CDFG" : "dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "33",
		"VariableLatency" : "0", "ExactLatency" : "32", "EstimateLatencyMin" : "32", "EstimateLatencyMax" : "32",
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
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147.call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155", "Parent" : "2", "Child" : ["5", "6"],
		"CDFG" : "shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_elem_data_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1311_0", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "5", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147.call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155.line_buffer_Array_V_0_0_U", "Parent" : "4"},
	{"ID" : "6", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147.call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155.line_buffer_Array_V_1311_0_U", "Parent" : "4"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.regslice_both_data_V_data_V_U", "Parent" : "1"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_relu_config3_U0", "Parent" : "0",
		"CDFG" : "relu_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_relu_config3_s",
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
		"StartSource" : "1",
		"StartFifo" : "start_for_relu_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_relu_config3_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "102",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "103",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "104",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "105",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "106",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "107",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "108",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "109",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Parent" : "0", "Child" : ["10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49"],
		"CDFG" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "681", "EstimateLatencyMax" : "681",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "8",
		"StartFifo" : "start_for_pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4Hfu_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "106",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "107",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "108",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "109",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "110",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "111",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "112",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "113",
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
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_0_0_U", "Parent" : "9"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_1_0_U", "Parent" : "9"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_2_0_U", "Parent" : "9"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_0_1_U", "Parent" : "9"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_1_1_U", "Parent" : "9"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_2_1_U", "Parent" : "9"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_0_2_U", "Parent" : "9"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_1_2_U", "Parent" : "9"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_2_2_U", "Parent" : "9"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_0_3_U", "Parent" : "9"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_1_3_U", "Parent" : "9"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_2_3_U", "Parent" : "9"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U37", "Parent" : "9"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U38", "Parent" : "9"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U39", "Parent" : "9"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U40", "Parent" : "9"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U41", "Parent" : "9"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U42", "Parent" : "9"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U43", "Parent" : "9"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U44", "Parent" : "9"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U45", "Parent" : "9"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U46", "Parent" : "9"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U47", "Parent" : "9"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U48", "Parent" : "9"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U49", "Parent" : "9"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U50", "Parent" : "9"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U51", "Parent" : "9"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U52", "Parent" : "9"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U53", "Parent" : "9"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U54", "Parent" : "9"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U55", "Parent" : "9"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U56", "Parent" : "9"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U57", "Parent" : "9"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U58", "Parent" : "9"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U59", "Parent" : "9"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U60", "Parent" : "9"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U61", "Parent" : "9"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U62", "Parent" : "9"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U63", "Parent" : "9"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U64", "Parent" : "9"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Parent" : "0", "Child" : ["51"],
		"CDFG" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1946", "EstimateLatencyMax" : "1946",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "9",
		"StartFifo" : "start_for_conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "110",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "111",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "112",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "113",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "114",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "res_stream_V_data_0_V"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "115",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "res_stream_V_data_1_V"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "116",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "res_stream_V_data_2_V"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "117",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "res_stream_V_data_3_V"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "118",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "res_stream_V_data_4_V"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "119",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "res_stream_V_data_5_V"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "120",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "res_stream_V_data_6_V"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "121",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "res_stream_V_data_7_V"}]},
			{"Name" : "kernel_data_V_1_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_4"}]},
			{"Name" : "kernel_data_V_1_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_5"}]},
			{"Name" : "kernel_data_V_1_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_6"}]},
			{"Name" : "kernel_data_V_1_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_7"}]},
			{"Name" : "kernel_data_V_1_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_8"}]},
			{"Name" : "kernel_data_V_1_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_9"}]},
			{"Name" : "kernel_data_V_1_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_10"}]},
			{"Name" : "kernel_data_V_1_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_11"}]},
			{"Name" : "kernel_data_V_1_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_16"}]},
			{"Name" : "kernel_data_V_1_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_17"}]},
			{"Name" : "kernel_data_V_1_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_18"}]},
			{"Name" : "kernel_data_V_1_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_19"}]},
			{"Name" : "kernel_data_V_1_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_20"}]},
			{"Name" : "kernel_data_V_1_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_21"}]},
			{"Name" : "kernel_data_V_1_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_22"}]},
			{"Name" : "kernel_data_V_1_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_23"}]},
			{"Name" : "kernel_data_V_1_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_28"}]},
			{"Name" : "kernel_data_V_1_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_29"}]},
			{"Name" : "kernel_data_V_1_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_30"}]},
			{"Name" : "kernel_data_V_1_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_31"}]},
			{"Name" : "kernel_data_V_1_32", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_32"}]},
			{"Name" : "kernel_data_V_1_33", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_33"}]},
			{"Name" : "kernel_data_V_1_34", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_34"}]},
			{"Name" : "kernel_data_V_1_35", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_35"}]},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "line_buffer_Array_V_1_0_0"}]},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "line_buffer_Array_V_1_1_0"}]},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "line_buffer_Array_V_1_0_1"}]},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "line_buffer_Array_V_1_1_1"}]},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "line_buffer_Array_V_1_0_2"}]},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "line_buffer_Array_V_1_1_2"}]},
			{"Name" : "line_buffer_Array_V_1_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "line_buffer_Array_V_1_0_3"}]},
			{"Name" : "line_buffer_Array_V_1_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "line_buffer_Array_V_1_1_3"}]},
			{"Name" : "sX_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "sX_2"}]},
			{"Name" : "sY_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "sY_2"}]},
			{"Name" : "pY_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "pY_2"}]},
			{"Name" : "pX_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "pX_2"}]}],
		"SubInstanceBlock" : [
			{"SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "SubBlockPort" : ["res_stream_V_data_0_V_blk_n", "res_stream_V_data_1_V_blk_n", "res_stream_V_data_2_V_blk_n", "res_stream_V_data_3_V_blk_n", "res_stream_V_data_4_V_blk_n", "res_stream_V_data_5_V_blk_n", "res_stream_V_data_6_V_blk_n", "res_stream_V_data_7_V_blk_n"]}]},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Parent" : "50", "Child" : ["52", "53"],
		"CDFG" : "compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "53",
		"VariableLatency" : "0", "ExactLatency" : "52", "EstimateLatencyMin" : "52", "EstimateLatencyMax" : "52",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_elem_data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_5_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_6_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_7_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "kernel_data_V_1_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_16", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_17", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_18", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_19", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_20", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_21", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_22", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_23", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_28", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_29", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_31", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_32", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_33", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_34", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_35", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322", "Port" : "line_buffer_Array_V_1_0_0"}]},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322", "Port" : "line_buffer_Array_V_1_1_0"}]},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322", "Port" : "line_buffer_Array_V_1_0_1"}]},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322", "Port" : "line_buffer_Array_V_1_1_1"}]},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322", "Port" : "line_buffer_Array_V_1_0_2"}]},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322", "Port" : "line_buffer_Array_V_1_1_2"}]},
			{"Name" : "line_buffer_Array_V_1_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322", "Port" : "line_buffer_Array_V_1_0_3"}]},
			{"Name" : "line_buffer_Array_V_1_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322", "Port" : "line_buffer_Array_V_1_1_3"}]},
			{"Name" : "sX_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pX_2", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307.grp_dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0_fu_282", "Parent" : "51",
		"CDFG" : "dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "51",
		"VariableLatency" : "0", "ExactLatency" : "50", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
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
			{"Name" : "data_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_35_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "53", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307.call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322", "Parent" : "51", "Child" : ["54", "55", "56", "57", "58", "59", "60", "61"],
		"CDFG" : "shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_elem_data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_3", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "54", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307.call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322.line_buffer_Array_V_1_0_0_U", "Parent" : "53"},
	{"ID" : "55", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307.call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322.line_buffer_Array_V_1_1_0_U", "Parent" : "53"},
	{"ID" : "56", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307.call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322.line_buffer_Array_V_1_0_1_U", "Parent" : "53"},
	{"ID" : "57", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307.call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322.line_buffer_Array_V_1_1_1_U", "Parent" : "53"},
	{"ID" : "58", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307.call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322.line_buffer_Array_V_1_0_2_U", "Parent" : "53"},
	{"ID" : "59", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307.call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322.line_buffer_Array_V_1_1_2_U", "Parent" : "53"},
	{"ID" : "60", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307.call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322.line_buffer_Array_V_1_0_3_U", "Parent" : "53"},
	{"ID" : "61", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307.call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322.line_buffer_Array_V_1_1_3_U", "Parent" : "53"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0", "Parent" : "0", "Child" : ["63"],
		"CDFG" : "softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "149", "EstimateLatencyMax" : "149",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "50",
		"StartFifo" : "start_for_softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0_U",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240"}],
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "114",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "data_V_data_0_V"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "115",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "data_V_data_1_V"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "116",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "data_V_data_2_V"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "117",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "data_V_data_3_V"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "118",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "data_V_data_4_V"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "119",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "data_V_data_5_V"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "120",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "data_V_data_6_V"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "121",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "data_V_data_7_V"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "122",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "res_V_data_0_V"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "123",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "res_V_data_1_V"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "124",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "res_V_data_2_V"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "125",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "res_V_data_3_V"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "126",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "res_V_data_4_V"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "127",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "res_V_data_5_V"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "128",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "res_V_data_6_V"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "129",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "res_V_data_7_V"}]},
			{"Name" : "exp_table2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "exp_table2"}]},
			{"Name" : "invert_table3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "invert_table3"}]}]},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0.grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Parent" : "62", "Child" : ["64", "65", "66"],
		"CDFG" : "softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "148", "EstimateLatencyMax" : "148",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "exp_table2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "invert_table3", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "64", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0.grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240.exp_table2_U", "Parent" : "63"},
	{"ID" : "65", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0.grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240.invert_table3_U", "Parent" : "63"},
	{"ID" : "66", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0.grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240.grp_reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s_fu_517", "Parent" : "63", "Child" : ["67", "68", "69", "70"],
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
			{"Name" : "x_V_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "67", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0.grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240.grp_reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s_fu_517.myproject_mux_83_18_1_1_U165", "Parent" : "66"},
	{"ID" : "68", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0.grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240.grp_reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s_fu_517.myproject_mux_83_18_1_1_U166", "Parent" : "66"},
	{"ID" : "69", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0.grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240.grp_reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s_fu_517.myproject_mux_83_18_1_1_U167", "Parent" : "66"},
	{"ID" : "70", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0.grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240.grp_reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s_fu_517.myproject_mux_83_18_1_1_U168", "Parent" : "66"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Parent" : "0", "Child" : ["72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87"],
		"CDFG" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "20", "EstimateLatencyMax" : "20",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "62",
		"StartFifo" : "start_for_pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7IfE_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "122",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "123",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "124",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "125",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "126",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "127",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "128",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "129",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "130",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "131",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "132",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "133",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "134",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "135",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "136",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "137",
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
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_0_U", "Parent" : "71"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_1_U", "Parent" : "71"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_2_U", "Parent" : "71"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_3_U", "Parent" : "71"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_4_U", "Parent" : "71"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_5_U", "Parent" : "71"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_6_U", "Parent" : "71"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_7_U", "Parent" : "71"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U213", "Parent" : "71"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U214", "Parent" : "71"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U215", "Parent" : "71"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U216", "Parent" : "71"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U217", "Parent" : "71"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U218", "Parent" : "71"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U219", "Parent" : "71"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U220", "Parent" : "71"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Parent" : "0", "Child" : ["89"],
		"CDFG" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "67", "EstimateLatencyMax" : "67",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "71",
		"StartFifo" : "start_for_dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0_U",
		"Port" : [
			{"Name" : "data_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "130",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "131",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "132",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "133",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "134",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "135",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "136",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "137",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "90", "DependentChan" : "138",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "90", "DependentChan" : "139",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "90", "DependentChan" : "140",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "90", "DependentChan" : "141",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "90", "DependentChan" : "142",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "90", "DependentChan" : "143",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "90", "DependentChan" : "144",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "90", "DependentChan" : "145",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "90", "DependentChan" : "146",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "90", "DependentChan" : "147",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_9_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_497", "Parent" : "88",
		"CDFG" : "dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "61",
		"VariableLatency" : "0", "ExactLatency" : "60", "EstimateLatencyMin" : "60", "EstimateLatencyMax" : "60",
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
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Parent" : "0", "Child" : ["91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101"],
		"CDFG" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "88",
		"StartFifo" : "start_for_tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10JfO_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "88", "DependentChan" : "138",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "88", "DependentChan" : "139",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "88", "DependentChan" : "140",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "88", "DependentChan" : "141",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "88", "DependentChan" : "142",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "88", "DependentChan" : "143",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "88", "DependentChan" : "144",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "88", "DependentChan" : "145",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "88", "DependentChan" : "146",
				"BlockSignal" : [
					{"Name" : "data_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "88", "DependentChan" : "147",
				"BlockSignal" : [
					{"Name" : "data_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_8_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_9_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "tanh_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.tanh_table1_U", "Parent" : "90"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.regslice_both_res_V_data_0_V_U", "Parent" : "90"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.regslice_both_res_V_data_1_V_U", "Parent" : "90"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.regslice_both_res_V_data_2_V_U", "Parent" : "90"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.regslice_both_res_V_data_3_V_U", "Parent" : "90"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.regslice_both_res_V_data_4_V_U", "Parent" : "90"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.regslice_both_res_V_data_5_V_U", "Parent" : "90"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.regslice_both_res_V_data_6_V_U", "Parent" : "90"},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.regslice_both_res_V_data_7_V_U", "Parent" : "90"},
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.regslice_both_res_V_data_8_V_U", "Parent" : "90"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.regslice_both_res_V_data_9_V_U", "Parent" : "90"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "140", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "142", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_relu_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_relu_config3_U0_U", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4Hfu_U", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0_U", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0_U", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7IfE_U", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0_U", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10JfO_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	myproject {
		conv2d_input_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		layer10_out_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		layer10_out_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		layer10_out_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		layer10_out_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		layer10_out_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		layer10_out_V_data_5_V {Type O LastRead -1 FirstWrite 2}
		layer10_out_V_data_6_V {Type O LastRead -1 FirstWrite 2}
		layer10_out_V_data_7_V {Type O LastRead -1 FirstWrite 2}
		layer10_out_V_data_8_V {Type O LastRead -1 FirstWrite 2}
		layer10_out_V_data_9_V {Type O LastRead -1 FirstWrite 2}
		kernel_data_V_1312 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2313 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_8 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1311_0 {Type X LastRead -1 FirstWrite -1}
		sX_3 {Type IO LastRead -1 FirstWrite -1}
		sY_3 {Type IO LastRead -1 FirstWrite -1}
		pY_3 {Type IO LastRead -1 FirstWrite -1}
		pX_3 {Type IO LastRead -1 FirstWrite -1}
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
		kernel_data_V_1_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_35 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_3 {Type X LastRead -1 FirstWrite -1}
		sX_2 {Type IO LastRead -1 FirstWrite -1}
		sY_2 {Type IO LastRead -1 FirstWrite -1}
		pY_2 {Type IO LastRead -1 FirstWrite -1}
		pX_2 {Type IO LastRead -1 FirstWrite -1}
		exp_table2 {Type I LastRead -1 FirstWrite -1}
		invert_table3 {Type I LastRead -1 FirstWrite -1}
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
		tanh_table1 {Type I LastRead -1 FirstWrite -1}}
	conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s {
		data_V_data_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 33}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 33}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 33}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 33}
		kernel_data_V_1312 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2313 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_8 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1311_0 {Type X LastRead -1 FirstWrite -1}
		sX_3 {Type IO LastRead -1 FirstWrite -1}
		sY_3 {Type IO LastRead -1 FirstWrite -1}
		pY_3 {Type IO LastRead -1 FirstWrite -1}
		pX_3 {Type IO LastRead -1 FirstWrite -1}}
	compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s {
		in_elem_data_V_read {Type I LastRead 0 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 33}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 33}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 33}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 33}
		kernel_data_V_1312 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2313 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_8 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1311_0 {Type X LastRead -1 FirstWrite -1}
		sX_3 {Type IO LastRead -1 FirstWrite -1}
		sY_3 {Type IO LastRead -1 FirstWrite -1}
		pY_3 {Type IO LastRead -1 FirstWrite -1}
		pX_3 {Type IO LastRead -1 FirstWrite -1}}
	dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0 {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 4 FirstWrite -1}
		data_2_V_read {Type I LastRead 8 FirstWrite -1}
		data_3_V_read {Type I LastRead 12 FirstWrite -1}
		data_4_V_read {Type I LastRead 14 FirstWrite -1}
		data_5_V_read {Type I LastRead 16 FirstWrite -1}
		data_6_V_read {Type I LastRead 20 FirstWrite -1}
		data_7_V_read {Type I LastRead 24 FirstWrite -1}
		data_8_V_read {Type I LastRead 28 FirstWrite -1}}
	shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s {
		in_elem_data_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_1_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_2_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_4_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_5_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_7_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_8_V_read {Type I LastRead 0 FirstWrite -1}
		line_buffer_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1311_0 {Type X LastRead -1 FirstWrite -1}}
	relu_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_relu_config3_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 3}}
	pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 5}
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
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 52}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 52}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 52}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 52}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 52}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 52}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 52}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 52}
		kernel_data_V_1_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_35 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_3 {Type X LastRead -1 FirstWrite -1}
		sX_2 {Type IO LastRead -1 FirstWrite -1}
		sY_2 {Type IO LastRead -1 FirstWrite -1}
		pY_2 {Type IO LastRead -1 FirstWrite -1}
		pX_2 {Type IO LastRead -1 FirstWrite -1}}
	compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s {
		in_elem_data_0_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_1_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_2_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_3_V_read {Type I LastRead 0 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 52}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 52}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 52}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 52}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 52}
		res_stream_V_data_5_V {Type O LastRead -1 FirstWrite 52}
		res_stream_V_data_6_V {Type O LastRead -1 FirstWrite 52}
		res_stream_V_data_7_V {Type O LastRead -1 FirstWrite 52}
		kernel_data_V_1_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_35 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_3 {Type X LastRead -1 FirstWrite -1}
		sX_2 {Type IO LastRead -1 FirstWrite -1}
		sY_2 {Type IO LastRead -1 FirstWrite -1}
		pY_2 {Type IO LastRead -1 FirstWrite -1}
		pX_2 {Type IO LastRead -1 FirstWrite -1}}
	dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0 {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 1 FirstWrite -1}
		data_2_V_read {Type I LastRead 2 FirstWrite -1}
		data_3_V_read {Type I LastRead 3 FirstWrite -1}
		data_4_V_read {Type I LastRead 5 FirstWrite -1}
		data_5_V_read {Type I LastRead 6 FirstWrite -1}
		data_6_V_read {Type I LastRead 7 FirstWrite -1}
		data_7_V_read {Type I LastRead 9 FirstWrite -1}
		data_8_V_read {Type I LastRead 10 FirstWrite -1}
		data_9_V_read {Type I LastRead 11 FirstWrite -1}
		data_10_V_read {Type I LastRead 12 FirstWrite -1}
		data_11_V_read {Type I LastRead 13 FirstWrite -1}
		data_12_V_read {Type I LastRead 14 FirstWrite -1}
		data_13_V_read {Type I LastRead 15 FirstWrite -1}
		data_14_V_read {Type I LastRead 16 FirstWrite -1}
		data_15_V_read {Type I LastRead 18 FirstWrite -1}
		data_16_V_read {Type I LastRead 19 FirstWrite -1}
		data_17_V_read {Type I LastRead 19 FirstWrite -1}
		data_18_V_read {Type I LastRead 22 FirstWrite -1}
		data_19_V_read {Type I LastRead 23 FirstWrite -1}
		data_20_V_read {Type I LastRead 24 FirstWrite -1}
		data_21_V_read {Type I LastRead 25 FirstWrite -1}
		data_22_V_read {Type I LastRead 26 FirstWrite -1}
		data_23_V_read {Type I LastRead 27 FirstWrite -1}
		data_24_V_read {Type I LastRead 28 FirstWrite -1}
		data_25_V_read {Type I LastRead 29 FirstWrite -1}
		data_26_V_read {Type I LastRead 31 FirstWrite -1}
		data_27_V_read {Type I LastRead 32 FirstWrite -1}
		data_28_V_read {Type I LastRead 33 FirstWrite -1}
		data_29_V_read {Type I LastRead 34 FirstWrite -1}
		data_30_V_read {Type I LastRead 35 FirstWrite -1}
		data_31_V_read {Type I LastRead 36 FirstWrite -1}
		data_32_V_read {Type I LastRead 38 FirstWrite -1}
		data_33_V_read {Type I LastRead 39 FirstWrite -1}
		data_34_V_read {Type I LastRead 41 FirstWrite -1}
		data_35_V_read {Type I LastRead 39 FirstWrite -1}}
	shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s {
		in_elem_data_0_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_1_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_2_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_3_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_4_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_5_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_6_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_7_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_8_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_9_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_10_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_11_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_16_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_17_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_18_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_19_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_20_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_21_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_22_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_23_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_28_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_29_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_30_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_31_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_32_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_33_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_34_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_35_V_read {Type I LastRead 0 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_3 {Type X LastRead -1 FirstWrite -1}}
	softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 27}
		exp_table2 {Type I LastRead -1 FirstWrite -1}
		invert_table3 {Type I LastRead -1 FirstWrite -1}}
	softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 27}
		exp_table2 {Type I LastRead -1 FirstWrite -1}
		invert_table3 {Type I LastRead -1 FirstWrite -1}}
	reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s {
		x_0_V {Type I LastRead 0 FirstWrite -1}
		x_1_V {Type I LastRead 0 FirstWrite -1}
		x_2_V {Type I LastRead 0 FirstWrite -1}
		x_3_V {Type I LastRead 0 FirstWrite -1}
		x_4_V {Type I LastRead 0 FirstWrite -1}
		x_5_V {Type I LastRead 0 FirstWrite -1}
		x_6_V {Type I LastRead 0 FirstWrite -1}
		x_7_V {Type I LastRead 0 FirstWrite -1}
		x_V_offset {Type I LastRead 0 FirstWrite -1}}
	pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 4}
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
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 63}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 63}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 63}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 63}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 63}
		res_stream_V_data_5_V {Type O LastRead -1 FirstWrite 63}
		res_stream_V_data_6_V {Type O LastRead -1 FirstWrite 63}
		res_stream_V_data_7_V {Type O LastRead -1 FirstWrite 63}
		res_stream_V_data_8_V {Type O LastRead -1 FirstWrite 63}
		res_stream_V_data_9_V {Type O LastRead -1 FirstWrite 63}}
	dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s {
		data_0_V_read {Type I LastRead 44 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 23 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 2 FirstWrite -1}
		data_6_V_read {Type I LastRead 4 FirstWrite -1}
		data_7_V_read {Type I LastRead 6 FirstWrite -1}
		data_8_V_read {Type I LastRead 7 FirstWrite -1}
		data_9_V_read {Type I LastRead 9 FirstWrite -1}
		data_10_V_read {Type I LastRead 9 FirstWrite -1}
		data_11_V_read {Type I LastRead 10 FirstWrite -1}
		data_12_V_read {Type I LastRead 10 FirstWrite -1}
		data_13_V_read {Type I LastRead 11 FirstWrite -1}
		data_14_V_read {Type I LastRead 11 FirstWrite -1}
		data_15_V_read {Type I LastRead 12 FirstWrite -1}
		data_16_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 16 FirstWrite -1}
		data_18_V_read {Type I LastRead 17 FirstWrite -1}
		data_19_V_read {Type I LastRead 19 FirstWrite -1}
		data_20_V_read {Type I LastRead 21 FirstWrite -1}
		data_21_V_read {Type I LastRead 23 FirstWrite -1}
		data_22_V_read {Type I LastRead 25 FirstWrite -1}
		data_23_V_read {Type I LastRead 27 FirstWrite -1}
		data_24_V_read {Type I LastRead 29 FirstWrite -1}
		data_25_V_read {Type I LastRead 31 FirstWrite -1}
		data_26_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_V_read {Type I LastRead 34 FirstWrite -1}
		data_28_V_read {Type I LastRead 36 FirstWrite -1}
		data_29_V_read {Type I LastRead 38 FirstWrite -1}
		data_30_V_read {Type I LastRead 40 FirstWrite -1}
		data_31_V_read {Type I LastRead 42 FirstWrite -1}}
	tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_s {
		data_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_8_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_9_V {Type I LastRead 0 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 2}
		tanh_table1 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "27501", "Max" : "27501"}
	, {"Name" : "Interval", "Min" : "27443", "Max" : "27443"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	conv2d_input_V_data_0_V { axis {  { conv2d_input_V_data_0_V_TDATA in_data 0 16 }  { conv2d_input_V_data_0_V_TVALID in_vld 0 1 }  { conv2d_input_V_data_0_V_TREADY in_acc 1 1 } } }
	layer10_out_V_data_0_V { axis {  { layer10_out_V_data_0_V_TDATA out_data 1 16 }  { layer10_out_V_data_0_V_TVALID out_vld 1 1 }  { layer10_out_V_data_0_V_TREADY out_acc 0 1 } } }
	layer10_out_V_data_1_V { axis {  { layer10_out_V_data_1_V_TDATA out_data 1 16 }  { layer10_out_V_data_1_V_TVALID out_vld 1 1 }  { layer10_out_V_data_1_V_TREADY out_acc 0 1 } } }
	layer10_out_V_data_2_V { axis {  { layer10_out_V_data_2_V_TDATA out_data 1 16 }  { layer10_out_V_data_2_V_TVALID out_vld 1 1 }  { layer10_out_V_data_2_V_TREADY out_acc 0 1 } } }
	layer10_out_V_data_3_V { axis {  { layer10_out_V_data_3_V_TDATA out_data 1 16 }  { layer10_out_V_data_3_V_TVALID out_vld 1 1 }  { layer10_out_V_data_3_V_TREADY out_acc 0 1 } } }
	layer10_out_V_data_4_V { axis {  { layer10_out_V_data_4_V_TDATA out_data 1 16 }  { layer10_out_V_data_4_V_TVALID out_vld 1 1 }  { layer10_out_V_data_4_V_TREADY out_acc 0 1 } } }
	layer10_out_V_data_5_V { axis {  { layer10_out_V_data_5_V_TDATA out_data 1 16 }  { layer10_out_V_data_5_V_TVALID out_vld 1 1 }  { layer10_out_V_data_5_V_TREADY out_acc 0 1 } } }
	layer10_out_V_data_6_V { axis {  { layer10_out_V_data_6_V_TDATA out_data 1 16 }  { layer10_out_V_data_6_V_TVALID out_vld 1 1 }  { layer10_out_V_data_6_V_TREADY out_acc 0 1 } } }
	layer10_out_V_data_7_V { axis {  { layer10_out_V_data_7_V_TDATA out_data 1 16 }  { layer10_out_V_data_7_V_TVALID out_vld 1 1 }  { layer10_out_V_data_7_V_TREADY out_acc 0 1 } } }
	layer10_out_V_data_8_V { axis {  { layer10_out_V_data_8_V_TDATA out_data 1 16 }  { layer10_out_V_data_8_V_TVALID out_vld 1 1 }  { layer10_out_V_data_8_V_TREADY out_acc 0 1 } } }
	layer10_out_V_data_9_V { axis {  { layer10_out_V_data_9_V_TDATA out_data 1 16 }  { layer10_out_V_data_9_V_TVALID out_vld 1 1 }  { layer10_out_V_data_9_V_TREADY out_acc 0 1 } } }
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
	{ layer10_out_V_data_0_V int 16 regular {axi_s 1 volatile  { layer10_out_V_data_0_V Data } }  }
	{ layer10_out_V_data_1_V int 16 regular {axi_s 1 volatile  { layer10_out_V_data_1_V Data } }  }
	{ layer10_out_V_data_2_V int 16 regular {axi_s 1 volatile  { layer10_out_V_data_2_V Data } }  }
	{ layer10_out_V_data_3_V int 16 regular {axi_s 1 volatile  { layer10_out_V_data_3_V Data } }  }
	{ layer10_out_V_data_4_V int 16 regular {axi_s 1 volatile  { layer10_out_V_data_4_V Data } }  }
	{ layer10_out_V_data_5_V int 16 regular {axi_s 1 volatile  { layer10_out_V_data_5_V Data } }  }
	{ layer10_out_V_data_6_V int 16 regular {axi_s 1 volatile  { layer10_out_V_data_6_V Data } }  }
	{ layer10_out_V_data_7_V int 16 regular {axi_s 1 volatile  { layer10_out_V_data_7_V Data } }  }
	{ layer10_out_V_data_8_V int 16 regular {axi_s 1 volatile  { layer10_out_V_data_8_V Data } }  }
	{ layer10_out_V_data_9_V int 16 regular {axi_s 1 volatile  { layer10_out_V_data_9_V Data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "conv2d_input_V_data_0_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "conv2d_input.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "layer10_out_V_data_0_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer10_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "layer10_out_V_data_1_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer10_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "layer10_out_V_data_2_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer10_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "layer10_out_V_data_3_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer10_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "layer10_out_V_data_4_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer10_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "layer10_out_V_data_5_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer10_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "layer10_out_V_data_6_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer10_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "layer10_out_V_data_7_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer10_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "layer10_out_V_data_8_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer10_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 8,"up" : 8,"step" : 2}]}]}]} , 
 	{ "Name" : "layer10_out_V_data_9_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer10_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 9,"up" : 9,"step" : 2}]}]}]} ]}
# RTL Port declarations: 
set portNum 39
set portList { 
	{ conv2d_input_V_data_0_V_TDATA sc_in sc_lv 16 signal 0 } 
	{ layer10_out_V_data_0_V_TDATA sc_out sc_lv 16 signal 1 } 
	{ layer10_out_V_data_1_V_TDATA sc_out sc_lv 16 signal 2 } 
	{ layer10_out_V_data_2_V_TDATA sc_out sc_lv 16 signal 3 } 
	{ layer10_out_V_data_3_V_TDATA sc_out sc_lv 16 signal 4 } 
	{ layer10_out_V_data_4_V_TDATA sc_out sc_lv 16 signal 5 } 
	{ layer10_out_V_data_5_V_TDATA sc_out sc_lv 16 signal 6 } 
	{ layer10_out_V_data_6_V_TDATA sc_out sc_lv 16 signal 7 } 
	{ layer10_out_V_data_7_V_TDATA sc_out sc_lv 16 signal 8 } 
	{ layer10_out_V_data_8_V_TDATA sc_out sc_lv 16 signal 9 } 
	{ layer10_out_V_data_9_V_TDATA sc_out sc_lv 16 signal 10 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ conv2d_input_V_data_0_V_TVALID sc_in sc_logic 1 invld 0 } 
	{ conv2d_input_V_data_0_V_TREADY sc_out sc_logic 1 inacc 0 } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ layer10_out_V_data_0_V_TVALID sc_out sc_logic 1 outvld 1 } 
	{ layer10_out_V_data_0_V_TREADY sc_in sc_logic 1 outacc 1 } 
	{ layer10_out_V_data_1_V_TVALID sc_out sc_logic 1 outvld 2 } 
	{ layer10_out_V_data_1_V_TREADY sc_in sc_logic 1 outacc 2 } 
	{ layer10_out_V_data_2_V_TVALID sc_out sc_logic 1 outvld 3 } 
	{ layer10_out_V_data_2_V_TREADY sc_in sc_logic 1 outacc 3 } 
	{ layer10_out_V_data_3_V_TVALID sc_out sc_logic 1 outvld 4 } 
	{ layer10_out_V_data_3_V_TREADY sc_in sc_logic 1 outacc 4 } 
	{ layer10_out_V_data_4_V_TVALID sc_out sc_logic 1 outvld 5 } 
	{ layer10_out_V_data_4_V_TREADY sc_in sc_logic 1 outacc 5 } 
	{ layer10_out_V_data_5_V_TVALID sc_out sc_logic 1 outvld 6 } 
	{ layer10_out_V_data_5_V_TREADY sc_in sc_logic 1 outacc 6 } 
	{ layer10_out_V_data_6_V_TVALID sc_out sc_logic 1 outvld 7 } 
	{ layer10_out_V_data_6_V_TREADY sc_in sc_logic 1 outacc 7 } 
	{ layer10_out_V_data_7_V_TVALID sc_out sc_logic 1 outvld 8 } 
	{ layer10_out_V_data_7_V_TREADY sc_in sc_logic 1 outacc 8 } 
	{ layer10_out_V_data_8_V_TVALID sc_out sc_logic 1 outvld 9 } 
	{ layer10_out_V_data_8_V_TREADY sc_in sc_logic 1 outacc 9 } 
	{ layer10_out_V_data_9_V_TVALID sc_out sc_logic 1 outvld 10 } 
	{ layer10_out_V_data_9_V_TREADY sc_in sc_logic 1 outacc 10 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
}
set NewPortList {[ 
	{ "name": "conv2d_input_V_data_0_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv2d_input_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "layer10_out_V_data_0_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer10_out_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "layer10_out_V_data_1_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer10_out_V_data_1_V", "role": "TDATA" }} , 
 	{ "name": "layer10_out_V_data_2_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer10_out_V_data_2_V", "role": "TDATA" }} , 
 	{ "name": "layer10_out_V_data_3_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer10_out_V_data_3_V", "role": "TDATA" }} , 
 	{ "name": "layer10_out_V_data_4_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer10_out_V_data_4_V", "role": "TDATA" }} , 
 	{ "name": "layer10_out_V_data_5_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer10_out_V_data_5_V", "role": "TDATA" }} , 
 	{ "name": "layer10_out_V_data_6_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer10_out_V_data_6_V", "role": "TDATA" }} , 
 	{ "name": "layer10_out_V_data_7_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer10_out_V_data_7_V", "role": "TDATA" }} , 
 	{ "name": "layer10_out_V_data_8_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer10_out_V_data_8_V", "role": "TDATA" }} , 
 	{ "name": "layer10_out_V_data_9_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer10_out_V_data_9_V", "role": "TDATA" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "conv2d_input_V_data_0_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "conv2d_input_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "conv2d_input_V_data_0_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "conv2d_input_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "layer10_out_V_data_0_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer10_out_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "layer10_out_V_data_0_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer10_out_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "layer10_out_V_data_1_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer10_out_V_data_1_V", "role": "TVALID" }} , 
 	{ "name": "layer10_out_V_data_1_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer10_out_V_data_1_V", "role": "TREADY" }} , 
 	{ "name": "layer10_out_V_data_2_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer10_out_V_data_2_V", "role": "TVALID" }} , 
 	{ "name": "layer10_out_V_data_2_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer10_out_V_data_2_V", "role": "TREADY" }} , 
 	{ "name": "layer10_out_V_data_3_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer10_out_V_data_3_V", "role": "TVALID" }} , 
 	{ "name": "layer10_out_V_data_3_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer10_out_V_data_3_V", "role": "TREADY" }} , 
 	{ "name": "layer10_out_V_data_4_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer10_out_V_data_4_V", "role": "TVALID" }} , 
 	{ "name": "layer10_out_V_data_4_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer10_out_V_data_4_V", "role": "TREADY" }} , 
 	{ "name": "layer10_out_V_data_5_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer10_out_V_data_5_V", "role": "TVALID" }} , 
 	{ "name": "layer10_out_V_data_5_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer10_out_V_data_5_V", "role": "TREADY" }} , 
 	{ "name": "layer10_out_V_data_6_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer10_out_V_data_6_V", "role": "TVALID" }} , 
 	{ "name": "layer10_out_V_data_6_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer10_out_V_data_6_V", "role": "TREADY" }} , 
 	{ "name": "layer10_out_V_data_7_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer10_out_V_data_7_V", "role": "TVALID" }} , 
 	{ "name": "layer10_out_V_data_7_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer10_out_V_data_7_V", "role": "TREADY" }} , 
 	{ "name": "layer10_out_V_data_8_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer10_out_V_data_8_V", "role": "TVALID" }} , 
 	{ "name": "layer10_out_V_data_8_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer10_out_V_data_8_V", "role": "TREADY" }} , 
 	{ "name": "layer10_out_V_data_9_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer10_out_V_data_9_V", "role": "TVALID" }} , 
 	{ "name": "layer10_out_V_data_9_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer10_out_V_data_9_V", "role": "TREADY" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "8", "9", "50", "62", "71", "88", "90", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154"],
		"CDFG" : "myproject",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "29853", "EstimateLatencyMax" : "29853",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0"}],
		"OutputProcess" : [
			{"ID" : "90", "Name" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0"}],
		"Port" : [
			{"Name" : "conv2d_input_V_data_0_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "data_V_data_V"}]},
			{"Name" : "layer10_out_V_data_0_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "res_V_data_0_V"}]},
			{"Name" : "layer10_out_V_data_1_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "res_V_data_1_V"}]},
			{"Name" : "layer10_out_V_data_2_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "res_V_data_2_V"}]},
			{"Name" : "layer10_out_V_data_3_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "res_V_data_3_V"}]},
			{"Name" : "layer10_out_V_data_4_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "res_V_data_4_V"}]},
			{"Name" : "layer10_out_V_data_5_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "res_V_data_5_V"}]},
			{"Name" : "layer10_out_V_data_6_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "res_V_data_6_V"}]},
			{"Name" : "layer10_out_V_data_7_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "res_V_data_7_V"}]},
			{"Name" : "layer10_out_V_data_8_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "res_V_data_8_V"}]},
			{"Name" : "layer10_out_V_data_9_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "res_V_data_9_V"}]},
			{"Name" : "kernel_data_V_1312", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_1312"}]},
			{"Name" : "kernel_data_V_2313", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_2313"}]},
			{"Name" : "kernel_data_V_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_4"}]},
			{"Name" : "kernel_data_V_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_5"}]},
			{"Name" : "kernel_data_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_7"}]},
			{"Name" : "kernel_data_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "kernel_data_V_8"}]},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "line_buffer_Array_V_0_0"}]},
			{"Name" : "line_buffer_Array_V_1311_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Port" : "line_buffer_Array_V_1311_0"}]},
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
			{"Name" : "pX_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "pX_1"}]},
			{"Name" : "sX_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "sX_1"}]},
			{"Name" : "pY_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "pY_1"}]},
			{"Name" : "sY_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "sY_1"}]},
			{"Name" : "kernel_data_V_2_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_4"}]},
			{"Name" : "kernel_data_V_2_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_5"}]},
			{"Name" : "kernel_data_V_2_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_6"}]},
			{"Name" : "kernel_data_V_2_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_7"}]},
			{"Name" : "kernel_data_V_2_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_20"}]},
			{"Name" : "kernel_data_V_2_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_21"}]},
			{"Name" : "kernel_data_V_2_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_22"}]},
			{"Name" : "kernel_data_V_2_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_23"}]},
			{"Name" : "kernel_data_V_2_36", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_36"}]},
			{"Name" : "kernel_data_V_2_37", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_37"}]},
			{"Name" : "kernel_data_V_2_38", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_38"}]},
			{"Name" : "kernel_data_V_2_39", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_39"}]},
			{"Name" : "kernel_data_V_2_52", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_52"}]},
			{"Name" : "kernel_data_V_2_53", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_53"}]},
			{"Name" : "kernel_data_V_2_54", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_54"}]},
			{"Name" : "kernel_data_V_2_55", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_55"}]},
			{"Name" : "kernel_data_V_2_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_8"}]},
			{"Name" : "kernel_data_V_2_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_9"}]},
			{"Name" : "kernel_data_V_2_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_10"}]},
			{"Name" : "kernel_data_V_2_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_11"}]},
			{"Name" : "kernel_data_V_2_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_24"}]},
			{"Name" : "kernel_data_V_2_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_25"}]},
			{"Name" : "kernel_data_V_2_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_26"}]},
			{"Name" : "kernel_data_V_2_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_27"}]},
			{"Name" : "kernel_data_V_2_40", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_40"}]},
			{"Name" : "kernel_data_V_2_41", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_41"}]},
			{"Name" : "kernel_data_V_2_42", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_42"}]},
			{"Name" : "kernel_data_V_2_43", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_43"}]},
			{"Name" : "kernel_data_V_2_56", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_56"}]},
			{"Name" : "kernel_data_V_2_57", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_57"}]},
			{"Name" : "kernel_data_V_2_58", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_58"}]},
			{"Name" : "kernel_data_V_2_59", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_59"}]},
			{"Name" : "kernel_data_V_2_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_12"}]},
			{"Name" : "kernel_data_V_2_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_13"}]},
			{"Name" : "kernel_data_V_2_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_14"}]},
			{"Name" : "kernel_data_V_2_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_15"}]},
			{"Name" : "kernel_data_V_2_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_28"}]},
			{"Name" : "kernel_data_V_2_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_29"}]},
			{"Name" : "kernel_data_V_2_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_30"}]},
			{"Name" : "kernel_data_V_2_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_31"}]},
			{"Name" : "kernel_data_V_2_44", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_44"}]},
			{"Name" : "kernel_data_V_2_45", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_45"}]},
			{"Name" : "kernel_data_V_2_46", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_46"}]},
			{"Name" : "kernel_data_V_2_47", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_47"}]},
			{"Name" : "kernel_data_V_2_60", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_60"}]},
			{"Name" : "kernel_data_V_2_61", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_61"}]},
			{"Name" : "kernel_data_V_2_62", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_62"}]},
			{"Name" : "kernel_data_V_2_63", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "kernel_data_V_2_63"}]},
			{"Name" : "line_buffer_Array_V_2_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_0_0"}]},
			{"Name" : "line_buffer_Array_V_2_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_1_0"}]},
			{"Name" : "line_buffer_Array_V_2_2_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_2_0"}]},
			{"Name" : "line_buffer_Array_V_2_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_0_1"}]},
			{"Name" : "line_buffer_Array_V_2_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_1_1"}]},
			{"Name" : "line_buffer_Array_V_2_2_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_2_1"}]},
			{"Name" : "line_buffer_Array_V_2_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_0_2"}]},
			{"Name" : "line_buffer_Array_V_2_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_1_2"}]},
			{"Name" : "line_buffer_Array_V_2_2_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_2_2"}]},
			{"Name" : "line_buffer_Array_V_2_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_0_3"}]},
			{"Name" : "line_buffer_Array_V_2_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_1_3"}]},
			{"Name" : "line_buffer_Array_V_2_2_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Port" : "line_buffer_Array_V_2_2_3"}]},
			{"Name" : "kernel_data_V_1_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_4"}]},
			{"Name" : "kernel_data_V_1_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_5"}]},
			{"Name" : "kernel_data_V_1_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_6"}]},
			{"Name" : "kernel_data_V_1_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_7"}]},
			{"Name" : "kernel_data_V_1_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_8"}]},
			{"Name" : "kernel_data_V_1_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_9"}]},
			{"Name" : "kernel_data_V_1_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_10"}]},
			{"Name" : "kernel_data_V_1_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_11"}]},
			{"Name" : "kernel_data_V_1_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_16"}]},
			{"Name" : "kernel_data_V_1_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_17"}]},
			{"Name" : "kernel_data_V_1_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_18"}]},
			{"Name" : "kernel_data_V_1_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_19"}]},
			{"Name" : "kernel_data_V_1_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_20"}]},
			{"Name" : "kernel_data_V_1_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_21"}]},
			{"Name" : "kernel_data_V_1_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_22"}]},
			{"Name" : "kernel_data_V_1_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_23"}]},
			{"Name" : "kernel_data_V_1_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_28"}]},
			{"Name" : "kernel_data_V_1_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_29"}]},
			{"Name" : "kernel_data_V_1_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_30"}]},
			{"Name" : "kernel_data_V_1_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_31"}]},
			{"Name" : "kernel_data_V_1_32", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_32"}]},
			{"Name" : "kernel_data_V_1_33", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_33"}]},
			{"Name" : "kernel_data_V_1_34", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_34"}]},
			{"Name" : "kernel_data_V_1_35", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "kernel_data_V_1_35"}]},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_0_0"}]},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_1_0"}]},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_0_1"}]},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_1_1"}]},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_0_2"}]},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_1_2"}]},
			{"Name" : "line_buffer_Array_V_1_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_0_3"}]},
			{"Name" : "line_buffer_Array_V_1_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "line_buffer_Array_V_1_1_3"}]},
			{"Name" : "sX_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "sX_2"}]},
			{"Name" : "sY_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "sY_2"}]},
			{"Name" : "pY_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "pY_2"}]},
			{"Name" : "pX_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Port" : "pX_2"}]},
			{"Name" : "exp_table2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0", "Port" : "exp_table2"}]},
			{"Name" : "invert_table3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0", "Port" : "invert_table3"}]},
			{"Name" : "pX", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "pX"}]},
			{"Name" : "sX", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "sX"}]},
			{"Name" : "pY", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "pY"}]},
			{"Name" : "sY", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "sY"}]},
			{"Name" : "kernel_data_V_3_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_8"}]},
			{"Name" : "kernel_data_V_3_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_9"}]},
			{"Name" : "kernel_data_V_3_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_10"}]},
			{"Name" : "kernel_data_V_3_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_11"}]},
			{"Name" : "kernel_data_V_3_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_12"}]},
			{"Name" : "kernel_data_V_3_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_13"}]},
			{"Name" : "kernel_data_V_3_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_14"}]},
			{"Name" : "kernel_data_V_3_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_15"}]},
			{"Name" : "kernel_data_V_3_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_24"}]},
			{"Name" : "kernel_data_V_3_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_25"}]},
			{"Name" : "kernel_data_V_3_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_26"}]},
			{"Name" : "kernel_data_V_3_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_27"}]},
			{"Name" : "kernel_data_V_3_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_28"}]},
			{"Name" : "kernel_data_V_3_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_29"}]},
			{"Name" : "kernel_data_V_3_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_30"}]},
			{"Name" : "kernel_data_V_3_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "kernel_data_V_3_31"}]},
			{"Name" : "line_buffer_Array_V_3_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_0"}]},
			{"Name" : "line_buffer_Array_V_3_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_1"}]},
			{"Name" : "line_buffer_Array_V_3_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_2"}]},
			{"Name" : "line_buffer_Array_V_3_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_3"}]},
			{"Name" : "line_buffer_Array_V_3_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_4"}]},
			{"Name" : "line_buffer_Array_V_3_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_5"}]},
			{"Name" : "line_buffer_Array_V_3_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_6"}]},
			{"Name" : "line_buffer_Array_V_3_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Port" : "line_buffer_Array_V_3_0_7"}]},
			{"Name" : "tanh_table1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Port" : "tanh_table1"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0", "Parent" : "0", "Child" : ["2", "7"],
		"CDFG" : "conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "29794", "EstimateLatencyMax" : "29794",
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
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "102",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "res_stream_V_data_0_V"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "103",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "res_stream_V_data_1_V"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "104",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "res_stream_V_data_2_V"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "105",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "res_stream_V_data_3_V"}]},
			{"Name" : "kernel_data_V_1312", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "kernel_data_V_1312"}]},
			{"Name" : "kernel_data_V_2313", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "kernel_data_V_2313"}]},
			{"Name" : "kernel_data_V_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "kernel_data_V_4"}]},
			{"Name" : "kernel_data_V_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "kernel_data_V_5"}]},
			{"Name" : "kernel_data_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "kernel_data_V_7"}]},
			{"Name" : "kernel_data_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "kernel_data_V_8"}]},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "line_buffer_Array_V_0_0"}]},
			{"Name" : "line_buffer_Array_V_1311_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "line_buffer_Array_V_1311_0"}]},
			{"Name" : "sX_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "sX_3"}]},
			{"Name" : "sY_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "sY_3"}]},
			{"Name" : "pY_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "pY_3"}]},
			{"Name" : "pX_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Port" : "pX_3"}]}],
		"SubInstanceBlock" : [
			{"SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "SubBlockPort" : ["res_stream_V_data_0_V_blk_n", "res_stream_V_data_1_V_blk_n", "res_stream_V_data_2_V_blk_n", "res_stream_V_data_3_V_blk_n"]}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147", "Parent" : "1", "Child" : ["3", "4"],
		"CDFG" : "compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "37",
		"VariableLatency" : "0", "ExactLatency" : "36", "EstimateLatencyMin" : "36", "EstimateLatencyMax" : "36",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_elem_data_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "kernel_data_V_1312", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2313", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155", "Port" : "line_buffer_Array_V_0_0"}]},
			{"Name" : "line_buffer_Array_V_1311_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155", "Port" : "line_buffer_Array_V_1311_0"}]},
			{"Name" : "sX_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pX_3", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "3", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147.grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142", "Parent" : "2",
		"CDFG" : "dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "36",
		"VariableLatency" : "0", "ExactLatency" : "35", "EstimateLatencyMin" : "35", "EstimateLatencyMax" : "35",
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
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147.call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155", "Parent" : "2", "Child" : ["5", "6"],
		"CDFG" : "shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_elem_data_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1311_0", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "5", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147.call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155.line_buffer_Array_V_0_0_U", "Parent" : "4"},
	{"ID" : "6", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s_fu_147.call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155.line_buffer_Array_V_1311_0_U", "Parent" : "4"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_U0.regslice_both_data_V_data_V_U", "Parent" : "1"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_relu_config3_U0", "Parent" : "0",
		"CDFG" : "relu_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_relu_config3_s",
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
		"StartSource" : "1",
		"StartFifo" : "start_for_relu_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_relu_config3_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "102",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "103",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "104",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "105",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "106",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "107",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "108",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "109",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0", "Parent" : "0", "Child" : ["10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49"],
		"CDFG" : "pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "681", "EstimateLatencyMax" : "681",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "8",
		"StartFifo" : "start_for_pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4Hfu_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "106",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "107",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "108",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "109",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "110",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "111",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "112",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "113",
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
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_0_0_U", "Parent" : "9"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_1_0_U", "Parent" : "9"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_2_0_U", "Parent" : "9"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_0_1_U", "Parent" : "9"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_1_1_U", "Parent" : "9"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_2_1_U", "Parent" : "9"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_0_2_U", "Parent" : "9"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_1_2_U", "Parent" : "9"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_2_2_U", "Parent" : "9"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_0_3_U", "Parent" : "9"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_1_3_U", "Parent" : "9"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.line_buffer_Array_V_2_2_3_U", "Parent" : "9"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U37", "Parent" : "9"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U38", "Parent" : "9"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U39", "Parent" : "9"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U40", "Parent" : "9"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U41", "Parent" : "9"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U42", "Parent" : "9"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U43", "Parent" : "9"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U44", "Parent" : "9"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U45", "Parent" : "9"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U46", "Parent" : "9"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U47", "Parent" : "9"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U48", "Parent" : "9"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U49", "Parent" : "9"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U50", "Parent" : "9"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U51", "Parent" : "9"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U52", "Parent" : "9"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U53", "Parent" : "9"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U54", "Parent" : "9"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U55", "Parent" : "9"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U56", "Parent" : "9"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U57", "Parent" : "9"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U58", "Parent" : "9"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U59", "Parent" : "9"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U60", "Parent" : "9"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U61", "Parent" : "9"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U62", "Parent" : "9"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U63", "Parent" : "9"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_U0.myproject_mux_164_16_1_1_U64", "Parent" : "9"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0", "Parent" : "0", "Child" : ["51"],
		"CDFG" : "conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1946", "EstimateLatencyMax" : "1946",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "9",
		"StartFifo" : "start_for_conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "110",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "111",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "112",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "113",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "114",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "res_stream_V_data_0_V"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "115",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "res_stream_V_data_1_V"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "116",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "res_stream_V_data_2_V"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "117",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "res_stream_V_data_3_V"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "118",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "res_stream_V_data_4_V"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "119",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "res_stream_V_data_5_V"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "120",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "res_stream_V_data_6_V"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "121",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "res_stream_V_data_7_V"}]},
			{"Name" : "kernel_data_V_1_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_4"}]},
			{"Name" : "kernel_data_V_1_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_5"}]},
			{"Name" : "kernel_data_V_1_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_6"}]},
			{"Name" : "kernel_data_V_1_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_7"}]},
			{"Name" : "kernel_data_V_1_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_8"}]},
			{"Name" : "kernel_data_V_1_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_9"}]},
			{"Name" : "kernel_data_V_1_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_10"}]},
			{"Name" : "kernel_data_V_1_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_11"}]},
			{"Name" : "kernel_data_V_1_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_16"}]},
			{"Name" : "kernel_data_V_1_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_17"}]},
			{"Name" : "kernel_data_V_1_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_18"}]},
			{"Name" : "kernel_data_V_1_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_19"}]},
			{"Name" : "kernel_data_V_1_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_20"}]},
			{"Name" : "kernel_data_V_1_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_21"}]},
			{"Name" : "kernel_data_V_1_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_22"}]},
			{"Name" : "kernel_data_V_1_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_23"}]},
			{"Name" : "kernel_data_V_1_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_28"}]},
			{"Name" : "kernel_data_V_1_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_29"}]},
			{"Name" : "kernel_data_V_1_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_30"}]},
			{"Name" : "kernel_data_V_1_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_31"}]},
			{"Name" : "kernel_data_V_1_32", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_32"}]},
			{"Name" : "kernel_data_V_1_33", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_33"}]},
			{"Name" : "kernel_data_V_1_34", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_34"}]},
			{"Name" : "kernel_data_V_1_35", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "kernel_data_V_1_35"}]},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "line_buffer_Array_V_1_0_0"}]},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "line_buffer_Array_V_1_1_0"}]},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "line_buffer_Array_V_1_0_1"}]},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "line_buffer_Array_V_1_1_1"}]},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "line_buffer_Array_V_1_0_2"}]},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "line_buffer_Array_V_1_1_2"}]},
			{"Name" : "line_buffer_Array_V_1_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "line_buffer_Array_V_1_0_3"}]},
			{"Name" : "line_buffer_Array_V_1_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "line_buffer_Array_V_1_1_3"}]},
			{"Name" : "sX_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "sX_2"}]},
			{"Name" : "sY_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "sY_2"}]},
			{"Name" : "pY_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "pY_2"}]},
			{"Name" : "pX_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Port" : "pX_2"}]}],
		"SubInstanceBlock" : [
			{"SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "SubBlockPort" : ["res_stream_V_data_0_V_blk_n", "res_stream_V_data_1_V_blk_n", "res_stream_V_data_2_V_blk_n", "res_stream_V_data_3_V_blk_n", "res_stream_V_data_4_V_blk_n", "res_stream_V_data_5_V_blk_n", "res_stream_V_data_6_V_blk_n", "res_stream_V_data_7_V_blk_n"]}]},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307", "Parent" : "50", "Child" : ["52", "53"],
		"CDFG" : "compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "53",
		"VariableLatency" : "0", "ExactLatency" : "52", "EstimateLatencyMin" : "52", "EstimateLatencyMax" : "52",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_elem_data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_5_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_6_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "res_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_7_V_blk_n", "Type" : "RtlPort"}]},
			{"Name" : "kernel_data_V_1_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_16", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_17", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_18", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_19", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_20", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_21", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_22", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_23", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_28", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_29", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_31", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_32", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_33", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_34", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_35", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322", "Port" : "line_buffer_Array_V_1_0_0"}]},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322", "Port" : "line_buffer_Array_V_1_1_0"}]},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322", "Port" : "line_buffer_Array_V_1_0_1"}]},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322", "Port" : "line_buffer_Array_V_1_1_1"}]},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322", "Port" : "line_buffer_Array_V_1_0_2"}]},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322", "Port" : "line_buffer_Array_V_1_1_2"}]},
			{"Name" : "line_buffer_Array_V_1_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322", "Port" : "line_buffer_Array_V_1_0_3"}]},
			{"Name" : "line_buffer_Array_V_1_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322", "Port" : "line_buffer_Array_V_1_1_3"}]},
			{"Name" : "sX_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pX_2", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307.grp_dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0_fu_282", "Parent" : "51",
		"CDFG" : "dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "51",
		"VariableLatency" : "0", "ExactLatency" : "50", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
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
			{"Name" : "data_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_35_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "53", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307.call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322", "Parent" : "51", "Child" : ["54", "55", "56", "57", "58", "59", "60", "61"],
		"CDFG" : "shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_elem_data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_3", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "54", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307.call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322.line_buffer_Array_V_1_0_0_U", "Parent" : "53"},
	{"ID" : "55", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307.call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322.line_buffer_Array_V_1_1_0_U", "Parent" : "53"},
	{"ID" : "56", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307.call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322.line_buffer_Array_V_1_0_1_U", "Parent" : "53"},
	{"ID" : "57", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307.call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322.line_buffer_Array_V_1_1_1_U", "Parent" : "53"},
	{"ID" : "58", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307.call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322.line_buffer_Array_V_1_0_2_U", "Parent" : "53"},
	{"ID" : "59", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307.call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322.line_buffer_Array_V_1_1_2_U", "Parent" : "53"},
	{"ID" : "60", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307.call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322.line_buffer_Array_V_1_0_3_U", "Parent" : "53"},
	{"ID" : "61", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s_fu_307.call_ret1_shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s_fu_322.line_buffer_Array_V_1_1_3_U", "Parent" : "53"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0", "Parent" : "0", "Child" : ["63"],
		"CDFG" : "softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "149", "EstimateLatencyMax" : "149",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "50",
		"StartFifo" : "start_for_softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0_U",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240"}],
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "114",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "data_V_data_0_V"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "115",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "data_V_data_1_V"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "116",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "data_V_data_2_V"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "117",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "data_V_data_3_V"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "118",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "data_V_data_4_V"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "119",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "data_V_data_5_V"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "120",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "data_V_data_6_V"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "121",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "data_V_data_7_V"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "122",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "res_V_data_0_V"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "123",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "res_V_data_1_V"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "124",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "res_V_data_2_V"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "125",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "res_V_data_3_V"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "126",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "res_V_data_4_V"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "127",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "res_V_data_5_V"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "128",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "res_V_data_6_V"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "129",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "res_V_data_7_V"}]},
			{"Name" : "exp_table2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "exp_table2"}]},
			{"Name" : "invert_table3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Port" : "invert_table3"}]}]},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0.grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240", "Parent" : "62", "Child" : ["64", "65", "66"],
		"CDFG" : "softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "148", "EstimateLatencyMax" : "148",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "exp_table2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "invert_table3", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "64", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0.grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240.exp_table2_U", "Parent" : "63"},
	{"ID" : "65", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0.grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240.invert_table3_U", "Parent" : "63"},
	{"ID" : "66", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0.grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240.grp_reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s_fu_517", "Parent" : "63", "Child" : ["67", "68", "69", "70"],
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
			{"Name" : "x_V_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "67", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0.grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240.grp_reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s_fu_517.myproject_mux_83_18_1_1_U165", "Parent" : "66"},
	{"ID" : "68", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0.grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240.grp_reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s_fu_517.myproject_mux_83_18_1_1_U166", "Parent" : "66"},
	{"ID" : "69", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0.grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240.grp_reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s_fu_517.myproject_mux_83_18_1_1_U167", "Parent" : "66"},
	{"ID" : "70", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0.grp_softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s_fu_240.grp_reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s_fu_517.myproject_mux_83_18_1_1_U168", "Parent" : "66"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0", "Parent" : "0", "Child" : ["72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87"],
		"CDFG" : "pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "20", "EstimateLatencyMax" : "20",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "62",
		"StartFifo" : "start_for_pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7IfE_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "122",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "123",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "124",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "125",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "126",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "127",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "128",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "129",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "130",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "131",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "132",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "133",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "134",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "135",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "136",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "137",
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
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_0_U", "Parent" : "71"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_1_U", "Parent" : "71"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_2_U", "Parent" : "71"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_3_U", "Parent" : "71"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_4_U", "Parent" : "71"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_5_U", "Parent" : "71"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_6_U", "Parent" : "71"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.line_buffer_Array_V_3_0_7_U", "Parent" : "71"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U213", "Parent" : "71"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U214", "Parent" : "71"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U215", "Parent" : "71"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U216", "Parent" : "71"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U217", "Parent" : "71"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U218", "Parent" : "71"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U219", "Parent" : "71"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_U0.myproject_mux_42_16_1_1_U220", "Parent" : "71"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0", "Parent" : "0", "Child" : ["89"],
		"CDFG" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "67", "EstimateLatencyMax" : "67",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "71",
		"StartFifo" : "start_for_dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0_U",
		"Port" : [
			{"Name" : "data_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "130",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "131",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "132",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "133",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "134",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "135",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "136",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "137",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "90", "DependentChan" : "138",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "90", "DependentChan" : "139",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "90", "DependentChan" : "140",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "90", "DependentChan" : "141",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "90", "DependentChan" : "142",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "90", "DependentChan" : "143",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "90", "DependentChan" : "144",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "90", "DependentChan" : "145",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "90", "DependentChan" : "146",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "90", "DependentChan" : "147",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_9_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_497", "Parent" : "88",
		"CDFG" : "dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "61",
		"VariableLatency" : "0", "ExactLatency" : "60", "EstimateLatencyMin" : "60", "EstimateLatencyMax" : "60",
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
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0", "Parent" : "0", "Child" : ["91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101"],
		"CDFG" : "tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "88",
		"StartFifo" : "start_for_tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10JfO_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "88", "DependentChan" : "138",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "88", "DependentChan" : "139",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "88", "DependentChan" : "140",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "88", "DependentChan" : "141",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "88", "DependentChan" : "142",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "88", "DependentChan" : "143",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "88", "DependentChan" : "144",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "88", "DependentChan" : "145",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "88", "DependentChan" : "146",
				"BlockSignal" : [
					{"Name" : "data_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "88", "DependentChan" : "147",
				"BlockSignal" : [
					{"Name" : "data_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_8_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_9_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "tanh_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.tanh_table1_U", "Parent" : "90"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.regslice_both_res_V_data_0_V_U", "Parent" : "90"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.regslice_both_res_V_data_1_V_U", "Parent" : "90"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.regslice_both_res_V_data_2_V_U", "Parent" : "90"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.regslice_both_res_V_data_3_V_U", "Parent" : "90"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.regslice_both_res_V_data_4_V_U", "Parent" : "90"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.regslice_both_res_V_data_5_V_U", "Parent" : "90"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.regslice_both_res_V_data_6_V_U", "Parent" : "90"},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.regslice_both_res_V_data_7_V_U", "Parent" : "90"},
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.regslice_both_res_V_data_8_V_U", "Parent" : "90"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_U0.regslice_both_res_V_data_9_V_U", "Parent" : "90"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "140", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "142", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_relu_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_relu_config3_U0_U", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4Hfu_U", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_U0_U", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_U0_U", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7IfE_U", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_U0_U", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10JfO_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	myproject {
		conv2d_input_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		layer10_out_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		layer10_out_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		layer10_out_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		layer10_out_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		layer10_out_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		layer10_out_V_data_5_V {Type O LastRead -1 FirstWrite 2}
		layer10_out_V_data_6_V {Type O LastRead -1 FirstWrite 2}
		layer10_out_V_data_7_V {Type O LastRead -1 FirstWrite 2}
		layer10_out_V_data_8_V {Type O LastRead -1 FirstWrite 2}
		layer10_out_V_data_9_V {Type O LastRead -1 FirstWrite 2}
		kernel_data_V_1312 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2313 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_8 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1311_0 {Type X LastRead -1 FirstWrite -1}
		sX_3 {Type IO LastRead -1 FirstWrite -1}
		sY_3 {Type IO LastRead -1 FirstWrite -1}
		pY_3 {Type IO LastRead -1 FirstWrite -1}
		pX_3 {Type IO LastRead -1 FirstWrite -1}
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
		kernel_data_V_1_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_35 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_3 {Type X LastRead -1 FirstWrite -1}
		sX_2 {Type IO LastRead -1 FirstWrite -1}
		sY_2 {Type IO LastRead -1 FirstWrite -1}
		pY_2 {Type IO LastRead -1 FirstWrite -1}
		pX_2 {Type IO LastRead -1 FirstWrite -1}
		exp_table2 {Type I LastRead -1 FirstWrite -1}
		invert_table3 {Type I LastRead -1 FirstWrite -1}
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
		tanh_table1 {Type I LastRead -1 FirstWrite -1}}
	conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s {
		data_V_data_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 36}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 36}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 36}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 36}
		kernel_data_V_1312 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2313 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_8 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1311_0 {Type X LastRead -1 FirstWrite -1}
		sX_3 {Type IO LastRead -1 FirstWrite -1}
		sY_3 {Type IO LastRead -1 FirstWrite -1}
		pY_3 {Type IO LastRead -1 FirstWrite -1}
		pX_3 {Type IO LastRead -1 FirstWrite -1}}
	compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s {
		in_elem_data_V_read {Type I LastRead 0 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 36}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 36}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 36}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 36}
		kernel_data_V_1312 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2313 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_8 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1311_0 {Type X LastRead -1 FirstWrite -1}
		sX_3 {Type IO LastRead -1 FirstWrite -1}
		sY_3 {Type IO LastRead -1 FirstWrite -1}
		pY_3 {Type IO LastRead -1 FirstWrite -1}
		pX_3 {Type IO LastRead -1 FirstWrite -1}}
	dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0 {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 4 FirstWrite -1}
		data_2_V_read {Type I LastRead 8 FirstWrite -1}
		data_3_V_read {Type I LastRead 12 FirstWrite -1}
		data_4_V_read {Type I LastRead 16 FirstWrite -1}
		data_5_V_read {Type I LastRead 20 FirstWrite -1}
		data_6_V_read {Type I LastRead 24 FirstWrite -1}
		data_7_V_read {Type I LastRead 28 FirstWrite -1}
		data_8_V_read {Type I LastRead 31 FirstWrite -1}}
	shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s {
		in_elem_data_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_1_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_2_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_4_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_5_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_7_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_8_V_read {Type I LastRead 0 FirstWrite -1}
		line_buffer_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1311_0 {Type X LastRead -1 FirstWrite -1}}
	relu_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_relu_config3_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 3}}
	pooling2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config4_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 5}
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
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 52}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 52}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 52}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 52}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 52}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 52}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 52}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 52}
		kernel_data_V_1_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_35 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_3 {Type X LastRead -1 FirstWrite -1}
		sX_2 {Type IO LastRead -1 FirstWrite -1}
		sY_2 {Type IO LastRead -1 FirstWrite -1}
		pY_2 {Type IO LastRead -1 FirstWrite -1}
		pX_2 {Type IO LastRead -1 FirstWrite -1}}
	compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_8u_config5_s {
		in_elem_data_0_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_1_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_2_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_3_V_read {Type I LastRead 0 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 52}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 52}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 52}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 52}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 52}
		res_stream_V_data_5_V {Type O LastRead -1 FirstWrite 52}
		res_stream_V_data_6_V {Type O LastRead -1 FirstWrite 52}
		res_stream_V_data_7_V {Type O LastRead -1 FirstWrite 52}
		kernel_data_V_1_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_35 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_3 {Type X LastRead -1 FirstWrite -1}
		sX_2 {Type IO LastRead -1 FirstWrite -1}
		sY_2 {Type IO LastRead -1 FirstWrite -1}
		pY_2 {Type IO LastRead -1 FirstWrite -1}
		pX_2 {Type IO LastRead -1 FirstWrite -1}}
	dense_latency_ap_fixed_ap_fixed_config5_mult_0_0_0_0_0_0_0_0_0 {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 1 FirstWrite -1}
		data_2_V_read {Type I LastRead 2 FirstWrite -1}
		data_3_V_read {Type I LastRead 3 FirstWrite -1}
		data_4_V_read {Type I LastRead 4 FirstWrite -1}
		data_5_V_read {Type I LastRead 5 FirstWrite -1}
		data_6_V_read {Type I LastRead 6 FirstWrite -1}
		data_7_V_read {Type I LastRead 8 FirstWrite -1}
		data_8_V_read {Type I LastRead 9 FirstWrite -1}
		data_9_V_read {Type I LastRead 10 FirstWrite -1}
		data_10_V_read {Type I LastRead 11 FirstWrite -1}
		data_11_V_read {Type I LastRead 13 FirstWrite -1}
		data_12_V_read {Type I LastRead 14 FirstWrite -1}
		data_13_V_read {Type I LastRead 15 FirstWrite -1}
		data_14_V_read {Type I LastRead 16 FirstWrite -1}
		data_15_V_read {Type I LastRead 17 FirstWrite -1}
		data_16_V_read {Type I LastRead 18 FirstWrite -1}
		data_17_V_read {Type I LastRead 20 FirstWrite -1}
		data_18_V_read {Type I LastRead 21 FirstWrite -1}
		data_19_V_read {Type I LastRead 22 FirstWrite -1}
		data_20_V_read {Type I LastRead 23 FirstWrite -1}
		data_21_V_read {Type I LastRead 25 FirstWrite -1}
		data_22_V_read {Type I LastRead 26 FirstWrite -1}
		data_23_V_read {Type I LastRead 27 FirstWrite -1}
		data_24_V_read {Type I LastRead 29 FirstWrite -1}
		data_25_V_read {Type I LastRead 30 FirstWrite -1}
		data_26_V_read {Type I LastRead 31 FirstWrite -1}
		data_27_V_read {Type I LastRead 32 FirstWrite -1}
		data_28_V_read {Type I LastRead 33 FirstWrite -1}
		data_29_V_read {Type I LastRead 34 FirstWrite -1}
		data_30_V_read {Type I LastRead 35 FirstWrite -1}
		data_31_V_read {Type I LastRead 36 FirstWrite -1}
		data_32_V_read {Type I LastRead 38 FirstWrite -1}
		data_33_V_read {Type I LastRead 39 FirstWrite -1}
		data_34_V_read {Type I LastRead 40 FirstWrite -1}
		data_35_V_read {Type I LastRead 41 FirstWrite -1}}
	shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config5_s {
		in_elem_data_0_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_1_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_2_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_3_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_4_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_5_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_6_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_7_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_8_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_9_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_10_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_11_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_16_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_17_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_18_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_19_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_20_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_21_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_22_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_23_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_28_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_29_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_30_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_31_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_32_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_33_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_34_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_35_V_read {Type I LastRead 0 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_3 {Type X LastRead -1 FirstWrite -1}}
	softmax_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 27}
		exp_table2 {Type I LastRead -1 FirstWrite -1}
		invert_table3 {Type I LastRead -1 FirstWrite -1}}
	softmax_stable_array_array_ap_fixed_16_6_5_3_0_8u_softmax_config6_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 27}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 27}
		exp_table2 {Type I LastRead -1 FirstWrite -1}
		invert_table3 {Type I LastRead -1 FirstWrite -1}}
	reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s {
		x_0_V {Type I LastRead 0 FirstWrite -1}
		x_1_V {Type I LastRead 0 FirstWrite -1}
		x_2_V {Type I LastRead 0 FirstWrite -1}
		x_3_V {Type I LastRead 0 FirstWrite -1}
		x_4_V {Type I LastRead 0 FirstWrite -1}
		x_5_V {Type I LastRead 0 FirstWrite -1}
		x_6_V {Type I LastRead 0 FirstWrite -1}
		x_7_V {Type I LastRead 0 FirstWrite -1}
		x_V_offset {Type I LastRead 0 FirstWrite -1}}
	pooling2d_cl_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_config7_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 4}
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
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 63}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 63}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 63}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 63}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 63}
		res_stream_V_data_5_V {Type O LastRead -1 FirstWrite 63}
		res_stream_V_data_6_V {Type O LastRead -1 FirstWrite 63}
		res_stream_V_data_7_V {Type O LastRead -1 FirstWrite 63}
		res_stream_V_data_8_V {Type O LastRead -1 FirstWrite 63}
		res_stream_V_data_9_V {Type O LastRead -1 FirstWrite 63}}
	dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 1 FirstWrite -1}
		data_2_V_read {Type I LastRead 1 FirstWrite -1}
		data_3_V_read {Type I LastRead 48 FirstWrite -1}
		data_4_V_read {Type I LastRead 1 FirstWrite -1}
		data_5_V_read {Type I LastRead 3 FirstWrite -1}
		data_6_V_read {Type I LastRead 4 FirstWrite -1}
		data_7_V_read {Type I LastRead 6 FirstWrite -1}
		data_8_V_read {Type I LastRead 7 FirstWrite -1}
		data_9_V_read {Type I LastRead 8 FirstWrite -1}
		data_10_V_read {Type I LastRead 10 FirstWrite -1}
		data_11_V_read {Type I LastRead 11 FirstWrite -1}
		data_12_V_read {Type I LastRead 11 FirstWrite -1}
		data_13_V_read {Type I LastRead 12 FirstWrite -1}
		data_14_V_read {Type I LastRead 12 FirstWrite -1}
		data_15_V_read {Type I LastRead 13 FirstWrite -1}
		data_16_V_read {Type I LastRead 15 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_V_read {Type I LastRead 18 FirstWrite -1}
		data_19_V_read {Type I LastRead 20 FirstWrite -1}
		data_20_V_read {Type I LastRead 21 FirstWrite -1}
		data_21_V_read {Type I LastRead 23 FirstWrite -1}
		data_22_V_read {Type I LastRead 25 FirstWrite -1}
		data_23_V_read {Type I LastRead 27 FirstWrite -1}
		data_24_V_read {Type I LastRead 29 FirstWrite -1}
		data_25_V_read {Type I LastRead 31 FirstWrite -1}
		data_26_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_V_read {Type I LastRead 34 FirstWrite -1}
		data_28_V_read {Type I LastRead 36 FirstWrite -1}
		data_29_V_read {Type I LastRead 38 FirstWrite -1}
		data_30_V_read {Type I LastRead 40 FirstWrite -1}
		data_31_V_read {Type I LastRead 0 FirstWrite -1}}
	tanh_array_ap_fixed_10u_array_ap_fixed_16_6_5_3_0_10u_tanh_config10_s {
		data_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_8_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_9_V {Type I LastRead 0 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 2}
		tanh_table1 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "29853", "Max" : "29853"}
	, {"Name" : "Interval", "Min" : "29795", "Max" : "29795"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	conv2d_input_V_data_0_V { axis {  { conv2d_input_V_data_0_V_TDATA in_data 0 16 }  { conv2d_input_V_data_0_V_TVALID in_vld 0 1 }  { conv2d_input_V_data_0_V_TREADY in_acc 1 1 } } }
	layer10_out_V_data_0_V { axis {  { layer10_out_V_data_0_V_TDATA out_data 1 16 }  { layer10_out_V_data_0_V_TVALID out_vld 1 1 }  { layer10_out_V_data_0_V_TREADY out_acc 0 1 } } }
	layer10_out_V_data_1_V { axis {  { layer10_out_V_data_1_V_TDATA out_data 1 16 }  { layer10_out_V_data_1_V_TVALID out_vld 1 1 }  { layer10_out_V_data_1_V_TREADY out_acc 0 1 } } }
	layer10_out_V_data_2_V { axis {  { layer10_out_V_data_2_V_TDATA out_data 1 16 }  { layer10_out_V_data_2_V_TVALID out_vld 1 1 }  { layer10_out_V_data_2_V_TREADY out_acc 0 1 } } }
	layer10_out_V_data_3_V { axis {  { layer10_out_V_data_3_V_TDATA out_data 1 16 }  { layer10_out_V_data_3_V_TVALID out_vld 1 1 }  { layer10_out_V_data_3_V_TREADY out_acc 0 1 } } }
	layer10_out_V_data_4_V { axis {  { layer10_out_V_data_4_V_TDATA out_data 1 16 }  { layer10_out_V_data_4_V_TVALID out_vld 1 1 }  { layer10_out_V_data_4_V_TREADY out_acc 0 1 } } }
	layer10_out_V_data_5_V { axis {  { layer10_out_V_data_5_V_TDATA out_data 1 16 }  { layer10_out_V_data_5_V_TVALID out_vld 1 1 }  { layer10_out_V_data_5_V_TREADY out_acc 0 1 } } }
	layer10_out_V_data_6_V { axis {  { layer10_out_V_data_6_V_TDATA out_data 1 16 }  { layer10_out_V_data_6_V_TVALID out_vld 1 1 }  { layer10_out_V_data_6_V_TREADY out_acc 0 1 } } }
	layer10_out_V_data_7_V { axis {  { layer10_out_V_data_7_V_TDATA out_data 1 16 }  { layer10_out_V_data_7_V_TVALID out_vld 1 1 }  { layer10_out_V_data_7_V_TREADY out_acc 0 1 } } }
	layer10_out_V_data_8_V { axis {  { layer10_out_V_data_8_V_TDATA out_data 1 16 }  { layer10_out_V_data_8_V_TVALID out_vld 1 1 }  { layer10_out_V_data_8_V_TREADY out_acc 0 1 } } }
	layer10_out_V_data_9_V { axis {  { layer10_out_V_data_9_V_TDATA out_data 1 16 }  { layer10_out_V_data_9_V_TVALID out_vld 1 1 }  { layer10_out_V_data_9_V_TREADY out_acc 0 1 } } }
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
