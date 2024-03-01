set moduleName separable_conv_2d_cl_array_array_array_ap_fixed_32u_config2_s
set isTopModule 0
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
set C_modelName {separable_conv_2d_cl<array,array,array<ap_fixed,32u>,config2>}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_V_data_0_V int 16 regular {axi_s 0 volatile  { data_V_data_0_V Data } }  }
	{ data_V_data_1_V int 16 regular {axi_s 0 volatile  { data_V_data_1_V Data } }  }
	{ data_V_data_2_V int 16 regular {axi_s 0 volatile  { data_V_data_2_V Data } }  }
	{ res_V_data_0_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_1_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_2_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_3_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_4_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_5_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_6_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_7_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_8_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_9_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_10_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_11_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_12_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_13_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_14_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_15_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_16_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_17_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_18_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_19_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_20_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_21_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_22_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_23_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_24_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_25_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_26_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_27_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_28_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_29_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_30_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_31_V int 16 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_V_data_0_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_1_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_2_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "res_V_data_0_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_1_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_2_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_3_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_4_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_5_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_6_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_7_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_8_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_9_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_10_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_11_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_12_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_13_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_14_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_15_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_16_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_17_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_18_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_19_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_20_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_21_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_22_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_23_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_24_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_25_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_26_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_27_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_28_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_29_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_30_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_31_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 115
set portList { 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ data_V_data_0_V_TDATA sc_in sc_lv 16 signal 0 } 
	{ data_V_data_1_V_TDATA sc_in sc_lv 16 signal 1 } 
	{ data_V_data_2_V_TDATA sc_in sc_lv 16 signal 2 } 
	{ res_V_data_0_V_din sc_out sc_lv 16 signal 3 } 
	{ res_V_data_0_V_full_n sc_in sc_logic 1 signal 3 } 
	{ res_V_data_0_V_write sc_out sc_logic 1 signal 3 } 
	{ res_V_data_1_V_din sc_out sc_lv 16 signal 4 } 
	{ res_V_data_1_V_full_n sc_in sc_logic 1 signal 4 } 
	{ res_V_data_1_V_write sc_out sc_logic 1 signal 4 } 
	{ res_V_data_2_V_din sc_out sc_lv 16 signal 5 } 
	{ res_V_data_2_V_full_n sc_in sc_logic 1 signal 5 } 
	{ res_V_data_2_V_write sc_out sc_logic 1 signal 5 } 
	{ res_V_data_3_V_din sc_out sc_lv 16 signal 6 } 
	{ res_V_data_3_V_full_n sc_in sc_logic 1 signal 6 } 
	{ res_V_data_3_V_write sc_out sc_logic 1 signal 6 } 
	{ res_V_data_4_V_din sc_out sc_lv 16 signal 7 } 
	{ res_V_data_4_V_full_n sc_in sc_logic 1 signal 7 } 
	{ res_V_data_4_V_write sc_out sc_logic 1 signal 7 } 
	{ res_V_data_5_V_din sc_out sc_lv 16 signal 8 } 
	{ res_V_data_5_V_full_n sc_in sc_logic 1 signal 8 } 
	{ res_V_data_5_V_write sc_out sc_logic 1 signal 8 } 
	{ res_V_data_6_V_din sc_out sc_lv 16 signal 9 } 
	{ res_V_data_6_V_full_n sc_in sc_logic 1 signal 9 } 
	{ res_V_data_6_V_write sc_out sc_logic 1 signal 9 } 
	{ res_V_data_7_V_din sc_out sc_lv 16 signal 10 } 
	{ res_V_data_7_V_full_n sc_in sc_logic 1 signal 10 } 
	{ res_V_data_7_V_write sc_out sc_logic 1 signal 10 } 
	{ res_V_data_8_V_din sc_out sc_lv 16 signal 11 } 
	{ res_V_data_8_V_full_n sc_in sc_logic 1 signal 11 } 
	{ res_V_data_8_V_write sc_out sc_logic 1 signal 11 } 
	{ res_V_data_9_V_din sc_out sc_lv 16 signal 12 } 
	{ res_V_data_9_V_full_n sc_in sc_logic 1 signal 12 } 
	{ res_V_data_9_V_write sc_out sc_logic 1 signal 12 } 
	{ res_V_data_10_V_din sc_out sc_lv 16 signal 13 } 
	{ res_V_data_10_V_full_n sc_in sc_logic 1 signal 13 } 
	{ res_V_data_10_V_write sc_out sc_logic 1 signal 13 } 
	{ res_V_data_11_V_din sc_out sc_lv 16 signal 14 } 
	{ res_V_data_11_V_full_n sc_in sc_logic 1 signal 14 } 
	{ res_V_data_11_V_write sc_out sc_logic 1 signal 14 } 
	{ res_V_data_12_V_din sc_out sc_lv 16 signal 15 } 
	{ res_V_data_12_V_full_n sc_in sc_logic 1 signal 15 } 
	{ res_V_data_12_V_write sc_out sc_logic 1 signal 15 } 
	{ res_V_data_13_V_din sc_out sc_lv 16 signal 16 } 
	{ res_V_data_13_V_full_n sc_in sc_logic 1 signal 16 } 
	{ res_V_data_13_V_write sc_out sc_logic 1 signal 16 } 
	{ res_V_data_14_V_din sc_out sc_lv 16 signal 17 } 
	{ res_V_data_14_V_full_n sc_in sc_logic 1 signal 17 } 
	{ res_V_data_14_V_write sc_out sc_logic 1 signal 17 } 
	{ res_V_data_15_V_din sc_out sc_lv 16 signal 18 } 
	{ res_V_data_15_V_full_n sc_in sc_logic 1 signal 18 } 
	{ res_V_data_15_V_write sc_out sc_logic 1 signal 18 } 
	{ res_V_data_16_V_din sc_out sc_lv 16 signal 19 } 
	{ res_V_data_16_V_full_n sc_in sc_logic 1 signal 19 } 
	{ res_V_data_16_V_write sc_out sc_logic 1 signal 19 } 
	{ res_V_data_17_V_din sc_out sc_lv 16 signal 20 } 
	{ res_V_data_17_V_full_n sc_in sc_logic 1 signal 20 } 
	{ res_V_data_17_V_write sc_out sc_logic 1 signal 20 } 
	{ res_V_data_18_V_din sc_out sc_lv 16 signal 21 } 
	{ res_V_data_18_V_full_n sc_in sc_logic 1 signal 21 } 
	{ res_V_data_18_V_write sc_out sc_logic 1 signal 21 } 
	{ res_V_data_19_V_din sc_out sc_lv 16 signal 22 } 
	{ res_V_data_19_V_full_n sc_in sc_logic 1 signal 22 } 
	{ res_V_data_19_V_write sc_out sc_logic 1 signal 22 } 
	{ res_V_data_20_V_din sc_out sc_lv 16 signal 23 } 
	{ res_V_data_20_V_full_n sc_in sc_logic 1 signal 23 } 
	{ res_V_data_20_V_write sc_out sc_logic 1 signal 23 } 
	{ res_V_data_21_V_din sc_out sc_lv 16 signal 24 } 
	{ res_V_data_21_V_full_n sc_in sc_logic 1 signal 24 } 
	{ res_V_data_21_V_write sc_out sc_logic 1 signal 24 } 
	{ res_V_data_22_V_din sc_out sc_lv 16 signal 25 } 
	{ res_V_data_22_V_full_n sc_in sc_logic 1 signal 25 } 
	{ res_V_data_22_V_write sc_out sc_logic 1 signal 25 } 
	{ res_V_data_23_V_din sc_out sc_lv 16 signal 26 } 
	{ res_V_data_23_V_full_n sc_in sc_logic 1 signal 26 } 
	{ res_V_data_23_V_write sc_out sc_logic 1 signal 26 } 
	{ res_V_data_24_V_din sc_out sc_lv 16 signal 27 } 
	{ res_V_data_24_V_full_n sc_in sc_logic 1 signal 27 } 
	{ res_V_data_24_V_write sc_out sc_logic 1 signal 27 } 
	{ res_V_data_25_V_din sc_out sc_lv 16 signal 28 } 
	{ res_V_data_25_V_full_n sc_in sc_logic 1 signal 28 } 
	{ res_V_data_25_V_write sc_out sc_logic 1 signal 28 } 
	{ res_V_data_26_V_din sc_out sc_lv 16 signal 29 } 
	{ res_V_data_26_V_full_n sc_in sc_logic 1 signal 29 } 
	{ res_V_data_26_V_write sc_out sc_logic 1 signal 29 } 
	{ res_V_data_27_V_din sc_out sc_lv 16 signal 30 } 
	{ res_V_data_27_V_full_n sc_in sc_logic 1 signal 30 } 
	{ res_V_data_27_V_write sc_out sc_logic 1 signal 30 } 
	{ res_V_data_28_V_din sc_out sc_lv 16 signal 31 } 
	{ res_V_data_28_V_full_n sc_in sc_logic 1 signal 31 } 
	{ res_V_data_28_V_write sc_out sc_logic 1 signal 31 } 
	{ res_V_data_29_V_din sc_out sc_lv 16 signal 32 } 
	{ res_V_data_29_V_full_n sc_in sc_logic 1 signal 32 } 
	{ res_V_data_29_V_write sc_out sc_logic 1 signal 32 } 
	{ res_V_data_30_V_din sc_out sc_lv 16 signal 33 } 
	{ res_V_data_30_V_full_n sc_in sc_logic 1 signal 33 } 
	{ res_V_data_30_V_write sc_out sc_logic 1 signal 33 } 
	{ res_V_data_31_V_din sc_out sc_lv 16 signal 34 } 
	{ res_V_data_31_V_full_n sc_in sc_logic 1 signal 34 } 
	{ res_V_data_31_V_write sc_out sc_logic 1 signal 34 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ data_V_data_0_V_TVALID sc_in sc_logic 1 invld 0 } 
	{ data_V_data_0_V_TREADY sc_out sc_logic 1 inacc 0 } 
	{ data_V_data_1_V_TVALID sc_in sc_logic 1 invld 1 } 
	{ data_V_data_1_V_TREADY sc_out sc_logic 1 inacc 1 } 
	{ data_V_data_2_V_TVALID sc_in sc_logic 1 invld 2 } 
	{ data_V_data_2_V_TREADY sc_out sc_logic 1 inacc 2 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
}
set NewPortList {[ 
	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "data_V_data_0_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "data_V_data_1_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_1_V", "role": "TDATA" }} , 
 	{ "name": "data_V_data_2_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_2_V", "role": "TDATA" }} , 
 	{ "name": "res_V_data_0_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_0_V", "role": "din" }} , 
 	{ "name": "res_V_data_0_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_0_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_0_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_0_V", "role": "write" }} , 
 	{ "name": "res_V_data_1_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_1_V", "role": "din" }} , 
 	{ "name": "res_V_data_1_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_1_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_1_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_1_V", "role": "write" }} , 
 	{ "name": "res_V_data_2_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_2_V", "role": "din" }} , 
 	{ "name": "res_V_data_2_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_2_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_2_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_2_V", "role": "write" }} , 
 	{ "name": "res_V_data_3_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_3_V", "role": "din" }} , 
 	{ "name": "res_V_data_3_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_3_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_3_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_3_V", "role": "write" }} , 
 	{ "name": "res_V_data_4_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_4_V", "role": "din" }} , 
 	{ "name": "res_V_data_4_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_4_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_4_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_4_V", "role": "write" }} , 
 	{ "name": "res_V_data_5_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_5_V", "role": "din" }} , 
 	{ "name": "res_V_data_5_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_5_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_5_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_5_V", "role": "write" }} , 
 	{ "name": "res_V_data_6_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_6_V", "role": "din" }} , 
 	{ "name": "res_V_data_6_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_6_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_6_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_6_V", "role": "write" }} , 
 	{ "name": "res_V_data_7_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_7_V", "role": "din" }} , 
 	{ "name": "res_V_data_7_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_7_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_7_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_7_V", "role": "write" }} , 
 	{ "name": "res_V_data_8_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_8_V", "role": "din" }} , 
 	{ "name": "res_V_data_8_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_8_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_8_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_8_V", "role": "write" }} , 
 	{ "name": "res_V_data_9_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_9_V", "role": "din" }} , 
 	{ "name": "res_V_data_9_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_9_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_9_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_9_V", "role": "write" }} , 
 	{ "name": "res_V_data_10_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_10_V", "role": "din" }} , 
 	{ "name": "res_V_data_10_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_10_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_10_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_10_V", "role": "write" }} , 
 	{ "name": "res_V_data_11_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_11_V", "role": "din" }} , 
 	{ "name": "res_V_data_11_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_11_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_11_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_11_V", "role": "write" }} , 
 	{ "name": "res_V_data_12_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_12_V", "role": "din" }} , 
 	{ "name": "res_V_data_12_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_12_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_12_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_12_V", "role": "write" }} , 
 	{ "name": "res_V_data_13_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_13_V", "role": "din" }} , 
 	{ "name": "res_V_data_13_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_13_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_13_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_13_V", "role": "write" }} , 
 	{ "name": "res_V_data_14_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_14_V", "role": "din" }} , 
 	{ "name": "res_V_data_14_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_14_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_14_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_14_V", "role": "write" }} , 
 	{ "name": "res_V_data_15_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_15_V", "role": "din" }} , 
 	{ "name": "res_V_data_15_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_15_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_15_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_15_V", "role": "write" }} , 
 	{ "name": "res_V_data_16_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_16_V", "role": "din" }} , 
 	{ "name": "res_V_data_16_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_16_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_16_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_16_V", "role": "write" }} , 
 	{ "name": "res_V_data_17_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_17_V", "role": "din" }} , 
 	{ "name": "res_V_data_17_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_17_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_17_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_17_V", "role": "write" }} , 
 	{ "name": "res_V_data_18_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_18_V", "role": "din" }} , 
 	{ "name": "res_V_data_18_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_18_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_18_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_18_V", "role": "write" }} , 
 	{ "name": "res_V_data_19_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_19_V", "role": "din" }} , 
 	{ "name": "res_V_data_19_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_19_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_19_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_19_V", "role": "write" }} , 
 	{ "name": "res_V_data_20_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_20_V", "role": "din" }} , 
 	{ "name": "res_V_data_20_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_20_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_20_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_20_V", "role": "write" }} , 
 	{ "name": "res_V_data_21_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_21_V", "role": "din" }} , 
 	{ "name": "res_V_data_21_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_21_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_21_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_21_V", "role": "write" }} , 
 	{ "name": "res_V_data_22_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_22_V", "role": "din" }} , 
 	{ "name": "res_V_data_22_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_22_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_22_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_22_V", "role": "write" }} , 
 	{ "name": "res_V_data_23_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_23_V", "role": "din" }} , 
 	{ "name": "res_V_data_23_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_23_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_23_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_23_V", "role": "write" }} , 
 	{ "name": "res_V_data_24_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_24_V", "role": "din" }} , 
 	{ "name": "res_V_data_24_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_24_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_24_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_24_V", "role": "write" }} , 
 	{ "name": "res_V_data_25_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_25_V", "role": "din" }} , 
 	{ "name": "res_V_data_25_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_25_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_25_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_25_V", "role": "write" }} , 
 	{ "name": "res_V_data_26_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_26_V", "role": "din" }} , 
 	{ "name": "res_V_data_26_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_26_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_26_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_26_V", "role": "write" }} , 
 	{ "name": "res_V_data_27_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_27_V", "role": "din" }} , 
 	{ "name": "res_V_data_27_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_27_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_27_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_27_V", "role": "write" }} , 
 	{ "name": "res_V_data_28_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_28_V", "role": "din" }} , 
 	{ "name": "res_V_data_28_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_28_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_28_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_28_V", "role": "write" }} , 
 	{ "name": "res_V_data_29_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_29_V", "role": "din" }} , 
 	{ "name": "res_V_data_29_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_29_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_29_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_29_V", "role": "write" }} , 
 	{ "name": "res_V_data_30_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_30_V", "role": "din" }} , 
 	{ "name": "res_V_data_30_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_30_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_30_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_30_V", "role": "write" }} , 
 	{ "name": "res_V_data_31_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_31_V", "role": "din" }} , 
 	{ "name": "res_V_data_31_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_31_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_31_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_31_V", "role": "write" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "data_V_data_0_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "data_V_data_0_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "data_V_data_1_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_V_data_1_V", "role": "TVALID" }} , 
 	{ "name": "data_V_data_1_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_V_data_1_V", "role": "TREADY" }} , 
 	{ "name": "data_V_data_2_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_V_data_2_V", "role": "TVALID" }} , 
 	{ "name": "data_V_data_2_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_V_data_2_V", "role": "TREADY" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "22", "38", "39", "40", "41"],
		"CDFG" : "separable_conv_2d_cl_array_array_array_ap_fixed_32u_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "14409", "EstimateLatencyMax" : "14409",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0"}],
		"OutputProcess" : [
			{"ID" : "22", "Name" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0"}],
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "data_V_data_0_V"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "data_V_data_1_V"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "data_V_data_2_V"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_0_V"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_1_V"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_2_V"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_3_V"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_4_V"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_5_V"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_6_V"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_7_V"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_8_V"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_9_V"}]},
			{"Name" : "res_V_data_10_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_10_V"}]},
			{"Name" : "res_V_data_11_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_11_V"}]},
			{"Name" : "res_V_data_12_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_12_V"}]},
			{"Name" : "res_V_data_13_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_13_V"}]},
			{"Name" : "res_V_data_14_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_14_V"}]},
			{"Name" : "res_V_data_15_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_15_V"}]},
			{"Name" : "res_V_data_16_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_16_V"}]},
			{"Name" : "res_V_data_17_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_17_V"}]},
			{"Name" : "res_V_data_18_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_18_V"}]},
			{"Name" : "res_V_data_19_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_19_V"}]},
			{"Name" : "res_V_data_20_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_20_V"}]},
			{"Name" : "res_V_data_21_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_21_V"}]},
			{"Name" : "res_V_data_22_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_22_V"}]},
			{"Name" : "res_V_data_23_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_23_V"}]},
			{"Name" : "res_V_data_24_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_24_V"}]},
			{"Name" : "res_V_data_25_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_25_V"}]},
			{"Name" : "res_V_data_26_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_26_V"}]},
			{"Name" : "res_V_data_27_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_27_V"}]},
			{"Name" : "res_V_data_28_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_28_V"}]},
			{"Name" : "res_V_data_29_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_29_V"}]},
			{"Name" : "res_V_data_30_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_30_V"}]},
			{"Name" : "res_V_data_31_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Port" : "res_V_data_31_V"}]},
			{"Name" : "pX_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "pX_3"}]},
			{"Name" : "sX_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "sX_3"}]},
			{"Name" : "pY_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "pY_3"}]},
			{"Name" : "sY_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "sY_3"}]},
			{"Name" : "kernel_data_V_1_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "kernel_data_V_1_3"}]},
			{"Name" : "kernel_data_V_1_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "kernel_data_V_1_4"}]},
			{"Name" : "kernel_data_V_1_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "kernel_data_V_1_5"}]},
			{"Name" : "kernel_data_V_1_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "kernel_data_V_1_12"}]},
			{"Name" : "kernel_data_V_1_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "kernel_data_V_1_13"}]},
			{"Name" : "kernel_data_V_1_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "kernel_data_V_1_14"}]},
			{"Name" : "kernel_data_V_1_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "kernel_data_V_1_21"}]},
			{"Name" : "kernel_data_V_1_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "kernel_data_V_1_22"}]},
			{"Name" : "kernel_data_V_1_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "kernel_data_V_1_23"}]},
			{"Name" : "kernel_data_V_1_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "kernel_data_V_1_6"}]},
			{"Name" : "kernel_data_V_1_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "kernel_data_V_1_7"}]},
			{"Name" : "kernel_data_V_1_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "kernel_data_V_1_8"}]},
			{"Name" : "kernel_data_V_1_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "kernel_data_V_1_15"}]},
			{"Name" : "kernel_data_V_1_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "kernel_data_V_1_16"}]},
			{"Name" : "kernel_data_V_1_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "kernel_data_V_1_17"}]},
			{"Name" : "kernel_data_V_1_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "kernel_data_V_1_24"}]},
			{"Name" : "kernel_data_V_1_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "kernel_data_V_1_25"}]},
			{"Name" : "kernel_data_V_1_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "kernel_data_V_1_26"}]},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "line_buffer_Array_V_1_0_0"}]},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "line_buffer_Array_V_1_1_0"}]},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "line_buffer_Array_V_1_0_1"}]},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "line_buffer_Array_V_1_1_1"}]},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "line_buffer_Array_V_1_0_2"}]},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Port" : "line_buffer_Array_V_1_1_2"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21"],
		"CDFG" : "depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "8194", "EstimateLatencyMax" : "8194",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "22", "DependentChan" : "38",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "22", "DependentChan" : "39",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "22", "DependentChan" : "40",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "pX_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_21", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_22", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_23", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_16", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_17", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_24", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_25", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_26", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0.line_buffer_Array_V_1_0_0_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0.line_buffer_Array_V_1_1_0_U", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0.line_buffer_Array_V_1_0_1_U", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0.line_buffer_Array_V_1_1_1_U", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0.line_buffer_Array_V_1_0_2_U", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0.line_buffer_Array_V_1_1_2_U", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0.myproject_mul_16s_11s_26_4_1_U1", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0.myproject_mul_16s_10ns_26_4_1_U2", "Parent" : "1"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0.myproject_mul_16s_10s_26_4_1_U3", "Parent" : "1"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0.myproject_mul_16s_10s_25_4_1_U4", "Parent" : "1"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0.myproject_mul_16s_11s_26_4_1_U5", "Parent" : "1"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0.myproject_mul_16s_11s_26_4_1_U6", "Parent" : "1"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0.myproject_sub_21s_21s_21_2_1_U7", "Parent" : "1"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0.myproject_add_32ns_32ns_32_2_1_U8", "Parent" : "1"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0.myproject_add_32ns_32ns_32_2_1_U9", "Parent" : "1"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0.myproject_add_32ns_32ns_32_2_1_U10", "Parent" : "1"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0.myproject_add_32ns_32ns_32_2_1_U11", "Parent" : "1"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0.regslice_both_data_V_data_0_V_U", "Parent" : "1"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0.regslice_both_data_V_data_1_V_U", "Parent" : "1"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_U0.regslice_both_data_V_data_2_V_U", "Parent" : "1"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0", "Parent" : "0", "Child" : ["23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37"],
		"CDFG" : "pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "14402", "EstimateLatencyMax" : "14402",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "1",
		"StartFifo" : "start_for_pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "38",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "39",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "40",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_10_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_10_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_11_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_11_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_12_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_12_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_13_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_13_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_14_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_14_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_15_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_15_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_16_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_16_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_17_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_17_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_18_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_18_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_19_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_19_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_20_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_20_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_21_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_21_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_22_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_22_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_23_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_23_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_24_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_24_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_25_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_25_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_26_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_26_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_27_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_27_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_28_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_28_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_29_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_29_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_30_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_30_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_31_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_31_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0.myproject_mul_16s_12s_26_4_1_U26", "Parent" : "22"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0.myproject_mul_16s_12s_26_4_1_U27", "Parent" : "22"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0.myproject_mul_16s_12s_26_4_1_U28", "Parent" : "22"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0.myproject_mul_16s_12s_26_4_1_U29", "Parent" : "22"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0.myproject_mul_16s_12s_26_4_1_U30", "Parent" : "22"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0.myproject_sub_23ns_23s_23_2_1_U31", "Parent" : "22"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0.myproject_sub_24s_24s_24_2_1_U32", "Parent" : "22"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0.myproject_sub_24s_24s_24_2_1_U33", "Parent" : "22"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0.myproject_sub_23ns_23s_23_2_1_U34", "Parent" : "22"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0.myproject_sub_23s_23s_23_2_1_U35", "Parent" : "22"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0.myproject_add_26s_26s_26_2_1_U36", "Parent" : "22"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0.myproject_sub_24s_24s_24_2_1_U37", "Parent" : "22"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0.myproject_add_24s_24s_24_2_1_U38", "Parent" : "22"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0.myproject_sub_24ns_24s_24_2_1_U39", "Parent" : "22"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0.myproject_sub_24ns_24s_24_2_1_U40", "Parent" : "22"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.depthwise_res_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.depthwise_res_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.depthwise_res_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_U0_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	separable_conv_2d_cl_array_array_array_ap_fixed_32u_config2_s {
		data_V_data_0_V {Type I LastRead 4 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 4 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 4 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_10_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_11_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_12_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_13_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_14_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_15_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_16_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_17_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_18_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_19_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_20_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_21_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_22_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_23_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_24_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_25_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_26_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_27_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_28_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_29_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_30_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_31_V {Type O LastRead -1 FirstWrite 17}
		pX_3 {Type IO LastRead -1 FirstWrite -1}
		sX_3 {Type IO LastRead -1 FirstWrite -1}
		pY_3 {Type IO LastRead -1 FirstWrite -1}
		sY_3 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_3 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_26 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}}
	depthwise_conv_2d_cl_array_array_ap_fixed_3u_config2_depthwise_s {
		data_V_data_0_V {Type I LastRead 4 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 4 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 4 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 8}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 8}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 8}
		pX_3 {Type IO LastRead -1 FirstWrite -1}
		sX_3 {Type IO LastRead -1 FirstWrite -1}
		pY_3 {Type IO LastRead -1 FirstWrite -1}
		sY_3 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_3 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_26 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}}
	pointwise_conv_2d_cl_array_array_ap_fixed_32u_config2_pointwise_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_10_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_11_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_12_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_13_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_14_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_15_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_16_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_17_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_18_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_19_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_20_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_21_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_22_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_23_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_24_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_25_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_26_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_27_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_28_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_29_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_30_V {Type O LastRead -1 FirstWrite 17}
		res_V_data_31_V {Type O LastRead -1 FirstWrite 17}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "14409", "Max" : "14409"}
	, {"Name" : "Interval", "Min" : "14403", "Max" : "14403"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_V_data_0_V { axis {  { data_V_data_0_V_TDATA in_data 0 16 }  { data_V_data_0_V_TVALID in_vld 0 1 }  { data_V_data_0_V_TREADY in_acc 1 1 } } }
	data_V_data_1_V { axis {  { data_V_data_1_V_TDATA in_data 0 16 }  { data_V_data_1_V_TVALID in_vld 0 1 }  { data_V_data_1_V_TREADY in_acc 1 1 } } }
	data_V_data_2_V { axis {  { data_V_data_2_V_TDATA in_data 0 16 }  { data_V_data_2_V_TVALID in_vld 0 1 }  { data_V_data_2_V_TREADY in_acc 1 1 } } }
	res_V_data_0_V { ap_fifo {  { res_V_data_0_V_din fifo_data 1 16 }  { res_V_data_0_V_full_n fifo_status 0 1 }  { res_V_data_0_V_write fifo_update 1 1 } } }
	res_V_data_1_V { ap_fifo {  { res_V_data_1_V_din fifo_data 1 16 }  { res_V_data_1_V_full_n fifo_status 0 1 }  { res_V_data_1_V_write fifo_update 1 1 } } }
	res_V_data_2_V { ap_fifo {  { res_V_data_2_V_din fifo_data 1 16 }  { res_V_data_2_V_full_n fifo_status 0 1 }  { res_V_data_2_V_write fifo_update 1 1 } } }
	res_V_data_3_V { ap_fifo {  { res_V_data_3_V_din fifo_data 1 16 }  { res_V_data_3_V_full_n fifo_status 0 1 }  { res_V_data_3_V_write fifo_update 1 1 } } }
	res_V_data_4_V { ap_fifo {  { res_V_data_4_V_din fifo_data 1 16 }  { res_V_data_4_V_full_n fifo_status 0 1 }  { res_V_data_4_V_write fifo_update 1 1 } } }
	res_V_data_5_V { ap_fifo {  { res_V_data_5_V_din fifo_data 1 16 }  { res_V_data_5_V_full_n fifo_status 0 1 }  { res_V_data_5_V_write fifo_update 1 1 } } }
	res_V_data_6_V { ap_fifo {  { res_V_data_6_V_din fifo_data 1 16 }  { res_V_data_6_V_full_n fifo_status 0 1 }  { res_V_data_6_V_write fifo_update 1 1 } } }
	res_V_data_7_V { ap_fifo {  { res_V_data_7_V_din fifo_data 1 16 }  { res_V_data_7_V_full_n fifo_status 0 1 }  { res_V_data_7_V_write fifo_update 1 1 } } }
	res_V_data_8_V { ap_fifo {  { res_V_data_8_V_din fifo_data 1 16 }  { res_V_data_8_V_full_n fifo_status 0 1 }  { res_V_data_8_V_write fifo_update 1 1 } } }
	res_V_data_9_V { ap_fifo {  { res_V_data_9_V_din fifo_data 1 16 }  { res_V_data_9_V_full_n fifo_status 0 1 }  { res_V_data_9_V_write fifo_update 1 1 } } }
	res_V_data_10_V { ap_fifo {  { res_V_data_10_V_din fifo_data 1 16 }  { res_V_data_10_V_full_n fifo_status 0 1 }  { res_V_data_10_V_write fifo_update 1 1 } } }
	res_V_data_11_V { ap_fifo {  { res_V_data_11_V_din fifo_data 1 16 }  { res_V_data_11_V_full_n fifo_status 0 1 }  { res_V_data_11_V_write fifo_update 1 1 } } }
	res_V_data_12_V { ap_fifo {  { res_V_data_12_V_din fifo_data 1 16 }  { res_V_data_12_V_full_n fifo_status 0 1 }  { res_V_data_12_V_write fifo_update 1 1 } } }
	res_V_data_13_V { ap_fifo {  { res_V_data_13_V_din fifo_data 1 16 }  { res_V_data_13_V_full_n fifo_status 0 1 }  { res_V_data_13_V_write fifo_update 1 1 } } }
	res_V_data_14_V { ap_fifo {  { res_V_data_14_V_din fifo_data 1 16 }  { res_V_data_14_V_full_n fifo_status 0 1 }  { res_V_data_14_V_write fifo_update 1 1 } } }
	res_V_data_15_V { ap_fifo {  { res_V_data_15_V_din fifo_data 1 16 }  { res_V_data_15_V_full_n fifo_status 0 1 }  { res_V_data_15_V_write fifo_update 1 1 } } }
	res_V_data_16_V { ap_fifo {  { res_V_data_16_V_din fifo_data 1 16 }  { res_V_data_16_V_full_n fifo_status 0 1 }  { res_V_data_16_V_write fifo_update 1 1 } } }
	res_V_data_17_V { ap_fifo {  { res_V_data_17_V_din fifo_data 1 16 }  { res_V_data_17_V_full_n fifo_status 0 1 }  { res_V_data_17_V_write fifo_update 1 1 } } }
	res_V_data_18_V { ap_fifo {  { res_V_data_18_V_din fifo_data 1 16 }  { res_V_data_18_V_full_n fifo_status 0 1 }  { res_V_data_18_V_write fifo_update 1 1 } } }
	res_V_data_19_V { ap_fifo {  { res_V_data_19_V_din fifo_data 1 16 }  { res_V_data_19_V_full_n fifo_status 0 1 }  { res_V_data_19_V_write fifo_update 1 1 } } }
	res_V_data_20_V { ap_fifo {  { res_V_data_20_V_din fifo_data 1 16 }  { res_V_data_20_V_full_n fifo_status 0 1 }  { res_V_data_20_V_write fifo_update 1 1 } } }
	res_V_data_21_V { ap_fifo {  { res_V_data_21_V_din fifo_data 1 16 }  { res_V_data_21_V_full_n fifo_status 0 1 }  { res_V_data_21_V_write fifo_update 1 1 } } }
	res_V_data_22_V { ap_fifo {  { res_V_data_22_V_din fifo_data 1 16 }  { res_V_data_22_V_full_n fifo_status 0 1 }  { res_V_data_22_V_write fifo_update 1 1 } } }
	res_V_data_23_V { ap_fifo {  { res_V_data_23_V_din fifo_data 1 16 }  { res_V_data_23_V_full_n fifo_status 0 1 }  { res_V_data_23_V_write fifo_update 1 1 } } }
	res_V_data_24_V { ap_fifo {  { res_V_data_24_V_din fifo_data 1 16 }  { res_V_data_24_V_full_n fifo_status 0 1 }  { res_V_data_24_V_write fifo_update 1 1 } } }
	res_V_data_25_V { ap_fifo {  { res_V_data_25_V_din fifo_data 1 16 }  { res_V_data_25_V_full_n fifo_status 0 1 }  { res_V_data_25_V_write fifo_update 1 1 } } }
	res_V_data_26_V { ap_fifo {  { res_V_data_26_V_din fifo_data 1 16 }  { res_V_data_26_V_full_n fifo_status 0 1 }  { res_V_data_26_V_write fifo_update 1 1 } } }
	res_V_data_27_V { ap_fifo {  { res_V_data_27_V_din fifo_data 1 16 }  { res_V_data_27_V_full_n fifo_status 0 1 }  { res_V_data_27_V_write fifo_update 1 1 } } }
	res_V_data_28_V { ap_fifo {  { res_V_data_28_V_din fifo_data 1 16 }  { res_V_data_28_V_full_n fifo_status 0 1 }  { res_V_data_28_V_write fifo_update 1 1 } } }
	res_V_data_29_V { ap_fifo {  { res_V_data_29_V_din fifo_data 1 16 }  { res_V_data_29_V_full_n fifo_status 0 1 }  { res_V_data_29_V_write fifo_update 1 1 } } }
	res_V_data_30_V { ap_fifo {  { res_V_data_30_V_din fifo_data 1 16 }  { res_V_data_30_V_full_n fifo_status 0 1 }  { res_V_data_30_V_write fifo_update 1 1 } } }
	res_V_data_31_V { ap_fifo {  { res_V_data_31_V_din fifo_data 1 16 }  { res_V_data_31_V_full_n fifo_status 0 1 }  { res_V_data_31_V_write fifo_update 1 1 } } }
}
