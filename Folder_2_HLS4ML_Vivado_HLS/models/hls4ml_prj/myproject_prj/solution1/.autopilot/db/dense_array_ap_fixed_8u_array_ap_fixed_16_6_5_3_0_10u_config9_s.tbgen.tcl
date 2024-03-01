set moduleName dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_s
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {dense<array<ap_fixed,8u>,array<ap_fixed<16,6,5,3,0>,10u>,config9>}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_stream_V_data_0_V int 16 regular {fifo 0 volatile }  }
	{ data_stream_V_data_1_V int 16 regular {fifo 0 volatile }  }
	{ data_stream_V_data_2_V int 16 regular {fifo 0 volatile }  }
	{ data_stream_V_data_3_V int 16 regular {fifo 0 volatile }  }
	{ data_stream_V_data_4_V int 16 regular {fifo 0 volatile }  }
	{ data_stream_V_data_5_V int 16 regular {fifo 0 volatile }  }
	{ data_stream_V_data_6_V int 16 regular {fifo 0 volatile }  }
	{ data_stream_V_data_7_V int 16 regular {fifo 0 volatile }  }
	{ res_stream_V_data_0_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_1_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_2_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_3_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_4_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_5_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_6_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_7_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_8_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_9_V int 16 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_stream_V_data_0_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_1_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_2_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_3_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_4_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_5_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_6_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_7_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "res_stream_V_data_0_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_1_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_2_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_3_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_4_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_5_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_6_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_7_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_8_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_9_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 64
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ data_stream_V_data_0_V_dout sc_in sc_lv 16 signal 0 } 
	{ data_stream_V_data_0_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ data_stream_V_data_0_V_read sc_out sc_logic 1 signal 0 } 
	{ data_stream_V_data_1_V_dout sc_in sc_lv 16 signal 1 } 
	{ data_stream_V_data_1_V_empty_n sc_in sc_logic 1 signal 1 } 
	{ data_stream_V_data_1_V_read sc_out sc_logic 1 signal 1 } 
	{ data_stream_V_data_2_V_dout sc_in sc_lv 16 signal 2 } 
	{ data_stream_V_data_2_V_empty_n sc_in sc_logic 1 signal 2 } 
	{ data_stream_V_data_2_V_read sc_out sc_logic 1 signal 2 } 
	{ data_stream_V_data_3_V_dout sc_in sc_lv 16 signal 3 } 
	{ data_stream_V_data_3_V_empty_n sc_in sc_logic 1 signal 3 } 
	{ data_stream_V_data_3_V_read sc_out sc_logic 1 signal 3 } 
	{ data_stream_V_data_4_V_dout sc_in sc_lv 16 signal 4 } 
	{ data_stream_V_data_4_V_empty_n sc_in sc_logic 1 signal 4 } 
	{ data_stream_V_data_4_V_read sc_out sc_logic 1 signal 4 } 
	{ data_stream_V_data_5_V_dout sc_in sc_lv 16 signal 5 } 
	{ data_stream_V_data_5_V_empty_n sc_in sc_logic 1 signal 5 } 
	{ data_stream_V_data_5_V_read sc_out sc_logic 1 signal 5 } 
	{ data_stream_V_data_6_V_dout sc_in sc_lv 16 signal 6 } 
	{ data_stream_V_data_6_V_empty_n sc_in sc_logic 1 signal 6 } 
	{ data_stream_V_data_6_V_read sc_out sc_logic 1 signal 6 } 
	{ data_stream_V_data_7_V_dout sc_in sc_lv 16 signal 7 } 
	{ data_stream_V_data_7_V_empty_n sc_in sc_logic 1 signal 7 } 
	{ data_stream_V_data_7_V_read sc_out sc_logic 1 signal 7 } 
	{ res_stream_V_data_0_V_din sc_out sc_lv 16 signal 8 } 
	{ res_stream_V_data_0_V_full_n sc_in sc_logic 1 signal 8 } 
	{ res_stream_V_data_0_V_write sc_out sc_logic 1 signal 8 } 
	{ res_stream_V_data_1_V_din sc_out sc_lv 16 signal 9 } 
	{ res_stream_V_data_1_V_full_n sc_in sc_logic 1 signal 9 } 
	{ res_stream_V_data_1_V_write sc_out sc_logic 1 signal 9 } 
	{ res_stream_V_data_2_V_din sc_out sc_lv 16 signal 10 } 
	{ res_stream_V_data_2_V_full_n sc_in sc_logic 1 signal 10 } 
	{ res_stream_V_data_2_V_write sc_out sc_logic 1 signal 10 } 
	{ res_stream_V_data_3_V_din sc_out sc_lv 16 signal 11 } 
	{ res_stream_V_data_3_V_full_n sc_in sc_logic 1 signal 11 } 
	{ res_stream_V_data_3_V_write sc_out sc_logic 1 signal 11 } 
	{ res_stream_V_data_4_V_din sc_out sc_lv 16 signal 12 } 
	{ res_stream_V_data_4_V_full_n sc_in sc_logic 1 signal 12 } 
	{ res_stream_V_data_4_V_write sc_out sc_logic 1 signal 12 } 
	{ res_stream_V_data_5_V_din sc_out sc_lv 16 signal 13 } 
	{ res_stream_V_data_5_V_full_n sc_in sc_logic 1 signal 13 } 
	{ res_stream_V_data_5_V_write sc_out sc_logic 1 signal 13 } 
	{ res_stream_V_data_6_V_din sc_out sc_lv 16 signal 14 } 
	{ res_stream_V_data_6_V_full_n sc_in sc_logic 1 signal 14 } 
	{ res_stream_V_data_6_V_write sc_out sc_logic 1 signal 14 } 
	{ res_stream_V_data_7_V_din sc_out sc_lv 16 signal 15 } 
	{ res_stream_V_data_7_V_full_n sc_in sc_logic 1 signal 15 } 
	{ res_stream_V_data_7_V_write sc_out sc_logic 1 signal 15 } 
	{ res_stream_V_data_8_V_din sc_out sc_lv 16 signal 16 } 
	{ res_stream_V_data_8_V_full_n sc_in sc_logic 1 signal 16 } 
	{ res_stream_V_data_8_V_write sc_out sc_logic 1 signal 16 } 
	{ res_stream_V_data_9_V_din sc_out sc_lv 16 signal 17 } 
	{ res_stream_V_data_9_V_full_n sc_in sc_logic 1 signal 17 } 
	{ res_stream_V_data_9_V_write sc_out sc_logic 1 signal 17 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "data_stream_V_data_0_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_stream_V_data_0_V", "role": "dout" }} , 
 	{ "name": "data_stream_V_data_0_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_0_V", "role": "empty_n" }} , 
 	{ "name": "data_stream_V_data_0_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_0_V", "role": "read" }} , 
 	{ "name": "data_stream_V_data_1_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_stream_V_data_1_V", "role": "dout" }} , 
 	{ "name": "data_stream_V_data_1_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_1_V", "role": "empty_n" }} , 
 	{ "name": "data_stream_V_data_1_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_1_V", "role": "read" }} , 
 	{ "name": "data_stream_V_data_2_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_stream_V_data_2_V", "role": "dout" }} , 
 	{ "name": "data_stream_V_data_2_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_2_V", "role": "empty_n" }} , 
 	{ "name": "data_stream_V_data_2_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_2_V", "role": "read" }} , 
 	{ "name": "data_stream_V_data_3_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_stream_V_data_3_V", "role": "dout" }} , 
 	{ "name": "data_stream_V_data_3_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_3_V", "role": "empty_n" }} , 
 	{ "name": "data_stream_V_data_3_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_3_V", "role": "read" }} , 
 	{ "name": "data_stream_V_data_4_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_stream_V_data_4_V", "role": "dout" }} , 
 	{ "name": "data_stream_V_data_4_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_4_V", "role": "empty_n" }} , 
 	{ "name": "data_stream_V_data_4_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_4_V", "role": "read" }} , 
 	{ "name": "data_stream_V_data_5_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_stream_V_data_5_V", "role": "dout" }} , 
 	{ "name": "data_stream_V_data_5_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_5_V", "role": "empty_n" }} , 
 	{ "name": "data_stream_V_data_5_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_5_V", "role": "read" }} , 
 	{ "name": "data_stream_V_data_6_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_stream_V_data_6_V", "role": "dout" }} , 
 	{ "name": "data_stream_V_data_6_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_6_V", "role": "empty_n" }} , 
 	{ "name": "data_stream_V_data_6_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_6_V", "role": "read" }} , 
 	{ "name": "data_stream_V_data_7_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_stream_V_data_7_V", "role": "dout" }} , 
 	{ "name": "data_stream_V_data_7_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_7_V", "role": "empty_n" }} , 
 	{ "name": "data_stream_V_data_7_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_7_V", "role": "read" }} , 
 	{ "name": "res_stream_V_data_0_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_0_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_0_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_1_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_1_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_1_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_2_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_2_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_2_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_3_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_3_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_3_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_4_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_4_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_4_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_5_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_5_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_5_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_6_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_6_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_6_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_7_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_7_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_7_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_8_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_8_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_8_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_9_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_9_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_9_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "19", "EstimateLatencyMax" : "19",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_9_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_497", "Parent" : "0",
		"CDFG" : "dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "14",
		"VariableLatency" : "0", "ExactLatency" : "13", "EstimateLatencyMin" : "13", "EstimateLatencyMax" : "13",
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
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_s {
		data_stream_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 15}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 15}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 15}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 15}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 15}
		res_stream_V_data_5_V {Type O LastRead -1 FirstWrite 15}
		res_stream_V_data_6_V {Type O LastRead -1 FirstWrite 15}
		res_stream_V_data_7_V {Type O LastRead -1 FirstWrite 15}
		res_stream_V_data_8_V {Type O LastRead -1 FirstWrite 15}
		res_stream_V_data_9_V {Type O LastRead -1 FirstWrite 15}}
	dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 1 FirstWrite -1}
		data_4_V_read {Type I LastRead 1 FirstWrite -1}
		data_5_V_read {Type I LastRead 2 FirstWrite -1}
		data_6_V_read {Type I LastRead 2 FirstWrite -1}
		data_7_V_read {Type I LastRead 2 FirstWrite -1}
		data_8_V_read {Type I LastRead 3 FirstWrite -1}
		data_9_V_read {Type I LastRead 3 FirstWrite -1}
		data_10_V_read {Type I LastRead 4 FirstWrite -1}
		data_11_V_read {Type I LastRead 4 FirstWrite -1}
		data_12_V_read {Type I LastRead 5 FirstWrite -1}
		data_13_V_read {Type I LastRead 5 FirstWrite -1}
		data_14_V_read {Type I LastRead 5 FirstWrite -1}
		data_15_V_read {Type I LastRead 6 FirstWrite -1}
		data_16_V_read {Type I LastRead 6 FirstWrite -1}
		data_17_V_read {Type I LastRead 7 FirstWrite -1}
		data_18_V_read {Type I LastRead 7 FirstWrite -1}
		data_19_V_read {Type I LastRead 8 FirstWrite -1}
		data_20_V_read {Type I LastRead 8 FirstWrite -1}
		data_21_V_read {Type I LastRead 8 FirstWrite -1}
		data_22_V_read {Type I LastRead 8 FirstWrite -1}
		data_23_V_read {Type I LastRead 9 FirstWrite -1}
		data_24_V_read {Type I LastRead 9 FirstWrite -1}
		data_25_V_read {Type I LastRead 10 FirstWrite -1}
		data_26_V_read {Type I LastRead 9 FirstWrite -1}
		data_27_V_read {Type I LastRead 11 FirstWrite -1}
		data_28_V_read {Type I LastRead 11 FirstWrite -1}
		data_29_V_read {Type I LastRead 12 FirstWrite -1}
		data_30_V_read {Type I LastRead 8 FirstWrite -1}
		data_31_V_read {Type I LastRead 12 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "19", "Max" : "19"}
	, {"Name" : "Interval", "Min" : "19", "Max" : "19"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	data_stream_V_data_0_V { ap_fifo {  { data_stream_V_data_0_V_dout fifo_data 0 16 }  { data_stream_V_data_0_V_empty_n fifo_status 0 1 }  { data_stream_V_data_0_V_read fifo_update 1 1 } } }
	data_stream_V_data_1_V { ap_fifo {  { data_stream_V_data_1_V_dout fifo_data 0 16 }  { data_stream_V_data_1_V_empty_n fifo_status 0 1 }  { data_stream_V_data_1_V_read fifo_update 1 1 } } }
	data_stream_V_data_2_V { ap_fifo {  { data_stream_V_data_2_V_dout fifo_data 0 16 }  { data_stream_V_data_2_V_empty_n fifo_status 0 1 }  { data_stream_V_data_2_V_read fifo_update 1 1 } } }
	data_stream_V_data_3_V { ap_fifo {  { data_stream_V_data_3_V_dout fifo_data 0 16 }  { data_stream_V_data_3_V_empty_n fifo_status 0 1 }  { data_stream_V_data_3_V_read fifo_update 1 1 } } }
	data_stream_V_data_4_V { ap_fifo {  { data_stream_V_data_4_V_dout fifo_data 0 16 }  { data_stream_V_data_4_V_empty_n fifo_status 0 1 }  { data_stream_V_data_4_V_read fifo_update 1 1 } } }
	data_stream_V_data_5_V { ap_fifo {  { data_stream_V_data_5_V_dout fifo_data 0 16 }  { data_stream_V_data_5_V_empty_n fifo_status 0 1 }  { data_stream_V_data_5_V_read fifo_update 1 1 } } }
	data_stream_V_data_6_V { ap_fifo {  { data_stream_V_data_6_V_dout fifo_data 0 16 }  { data_stream_V_data_6_V_empty_n fifo_status 0 1 }  { data_stream_V_data_6_V_read fifo_update 1 1 } } }
	data_stream_V_data_7_V { ap_fifo {  { data_stream_V_data_7_V_dout fifo_data 0 16 }  { data_stream_V_data_7_V_empty_n fifo_status 0 1 }  { data_stream_V_data_7_V_read fifo_update 1 1 } } }
	res_stream_V_data_0_V { ap_fifo {  { res_stream_V_data_0_V_din fifo_data 1 16 }  { res_stream_V_data_0_V_full_n fifo_status 0 1 }  { res_stream_V_data_0_V_write fifo_update 1 1 } } }
	res_stream_V_data_1_V { ap_fifo {  { res_stream_V_data_1_V_din fifo_data 1 16 }  { res_stream_V_data_1_V_full_n fifo_status 0 1 }  { res_stream_V_data_1_V_write fifo_update 1 1 } } }
	res_stream_V_data_2_V { ap_fifo {  { res_stream_V_data_2_V_din fifo_data 1 16 }  { res_stream_V_data_2_V_full_n fifo_status 0 1 }  { res_stream_V_data_2_V_write fifo_update 1 1 } } }
	res_stream_V_data_3_V { ap_fifo {  { res_stream_V_data_3_V_din fifo_data 1 16 }  { res_stream_V_data_3_V_full_n fifo_status 0 1 }  { res_stream_V_data_3_V_write fifo_update 1 1 } } }
	res_stream_V_data_4_V { ap_fifo {  { res_stream_V_data_4_V_din fifo_data 1 16 }  { res_stream_V_data_4_V_full_n fifo_status 0 1 }  { res_stream_V_data_4_V_write fifo_update 1 1 } } }
	res_stream_V_data_5_V { ap_fifo {  { res_stream_V_data_5_V_din fifo_data 1 16 }  { res_stream_V_data_5_V_full_n fifo_status 0 1 }  { res_stream_V_data_5_V_write fifo_update 1 1 } } }
	res_stream_V_data_6_V { ap_fifo {  { res_stream_V_data_6_V_din fifo_data 1 16 }  { res_stream_V_data_6_V_full_n fifo_status 0 1 }  { res_stream_V_data_6_V_write fifo_update 1 1 } } }
	res_stream_V_data_7_V { ap_fifo {  { res_stream_V_data_7_V_din fifo_data 1 16 }  { res_stream_V_data_7_V_full_n fifo_status 0 1 }  { res_stream_V_data_7_V_write fifo_update 1 1 } } }
	res_stream_V_data_8_V { ap_fifo {  { res_stream_V_data_8_V_din fifo_data 1 16 }  { res_stream_V_data_8_V_full_n fifo_status 0 1 }  { res_stream_V_data_8_V_write fifo_update 1 1 } } }
	res_stream_V_data_9_V { ap_fifo {  { res_stream_V_data_9_V_din fifo_data 1 16 }  { res_stream_V_data_9_V_full_n fifo_status 0 1 }  { res_stream_V_data_9_V_write fifo_update 1 1 } } }
}
set moduleName dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_s
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {dense<array<ap_fixed,8u>,array<ap_fixed<16,6,5,3,0>,10u>,config9>}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_stream_V_data_0_V int 16 regular {fifo 0 volatile }  }
	{ data_stream_V_data_1_V int 16 regular {fifo 0 volatile }  }
	{ data_stream_V_data_2_V int 16 regular {fifo 0 volatile }  }
	{ data_stream_V_data_3_V int 16 regular {fifo 0 volatile }  }
	{ data_stream_V_data_4_V int 16 regular {fifo 0 volatile }  }
	{ data_stream_V_data_5_V int 16 regular {fifo 0 volatile }  }
	{ data_stream_V_data_6_V int 16 regular {fifo 0 volatile }  }
	{ data_stream_V_data_7_V int 16 regular {fifo 0 volatile }  }
	{ res_stream_V_data_0_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_1_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_2_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_3_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_4_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_5_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_6_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_7_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_8_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_9_V int 16 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_stream_V_data_0_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_1_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_2_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_3_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_4_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_5_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_6_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_7_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "res_stream_V_data_0_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_1_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_2_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_3_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_4_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_5_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_6_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_7_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_8_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_9_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 64
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ data_stream_V_data_0_V_dout sc_in sc_lv 16 signal 0 } 
	{ data_stream_V_data_0_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ data_stream_V_data_0_V_read sc_out sc_logic 1 signal 0 } 
	{ data_stream_V_data_1_V_dout sc_in sc_lv 16 signal 1 } 
	{ data_stream_V_data_1_V_empty_n sc_in sc_logic 1 signal 1 } 
	{ data_stream_V_data_1_V_read sc_out sc_logic 1 signal 1 } 
	{ data_stream_V_data_2_V_dout sc_in sc_lv 16 signal 2 } 
	{ data_stream_V_data_2_V_empty_n sc_in sc_logic 1 signal 2 } 
	{ data_stream_V_data_2_V_read sc_out sc_logic 1 signal 2 } 
	{ data_stream_V_data_3_V_dout sc_in sc_lv 16 signal 3 } 
	{ data_stream_V_data_3_V_empty_n sc_in sc_logic 1 signal 3 } 
	{ data_stream_V_data_3_V_read sc_out sc_logic 1 signal 3 } 
	{ data_stream_V_data_4_V_dout sc_in sc_lv 16 signal 4 } 
	{ data_stream_V_data_4_V_empty_n sc_in sc_logic 1 signal 4 } 
	{ data_stream_V_data_4_V_read sc_out sc_logic 1 signal 4 } 
	{ data_stream_V_data_5_V_dout sc_in sc_lv 16 signal 5 } 
	{ data_stream_V_data_5_V_empty_n sc_in sc_logic 1 signal 5 } 
	{ data_stream_V_data_5_V_read sc_out sc_logic 1 signal 5 } 
	{ data_stream_V_data_6_V_dout sc_in sc_lv 16 signal 6 } 
	{ data_stream_V_data_6_V_empty_n sc_in sc_logic 1 signal 6 } 
	{ data_stream_V_data_6_V_read sc_out sc_logic 1 signal 6 } 
	{ data_stream_V_data_7_V_dout sc_in sc_lv 16 signal 7 } 
	{ data_stream_V_data_7_V_empty_n sc_in sc_logic 1 signal 7 } 
	{ data_stream_V_data_7_V_read sc_out sc_logic 1 signal 7 } 
	{ res_stream_V_data_0_V_din sc_out sc_lv 16 signal 8 } 
	{ res_stream_V_data_0_V_full_n sc_in sc_logic 1 signal 8 } 
	{ res_stream_V_data_0_V_write sc_out sc_logic 1 signal 8 } 
	{ res_stream_V_data_1_V_din sc_out sc_lv 16 signal 9 } 
	{ res_stream_V_data_1_V_full_n sc_in sc_logic 1 signal 9 } 
	{ res_stream_V_data_1_V_write sc_out sc_logic 1 signal 9 } 
	{ res_stream_V_data_2_V_din sc_out sc_lv 16 signal 10 } 
	{ res_stream_V_data_2_V_full_n sc_in sc_logic 1 signal 10 } 
	{ res_stream_V_data_2_V_write sc_out sc_logic 1 signal 10 } 
	{ res_stream_V_data_3_V_din sc_out sc_lv 16 signal 11 } 
	{ res_stream_V_data_3_V_full_n sc_in sc_logic 1 signal 11 } 
	{ res_stream_V_data_3_V_write sc_out sc_logic 1 signal 11 } 
	{ res_stream_V_data_4_V_din sc_out sc_lv 16 signal 12 } 
	{ res_stream_V_data_4_V_full_n sc_in sc_logic 1 signal 12 } 
	{ res_stream_V_data_4_V_write sc_out sc_logic 1 signal 12 } 
	{ res_stream_V_data_5_V_din sc_out sc_lv 16 signal 13 } 
	{ res_stream_V_data_5_V_full_n sc_in sc_logic 1 signal 13 } 
	{ res_stream_V_data_5_V_write sc_out sc_logic 1 signal 13 } 
	{ res_stream_V_data_6_V_din sc_out sc_lv 16 signal 14 } 
	{ res_stream_V_data_6_V_full_n sc_in sc_logic 1 signal 14 } 
	{ res_stream_V_data_6_V_write sc_out sc_logic 1 signal 14 } 
	{ res_stream_V_data_7_V_din sc_out sc_lv 16 signal 15 } 
	{ res_stream_V_data_7_V_full_n sc_in sc_logic 1 signal 15 } 
	{ res_stream_V_data_7_V_write sc_out sc_logic 1 signal 15 } 
	{ res_stream_V_data_8_V_din sc_out sc_lv 16 signal 16 } 
	{ res_stream_V_data_8_V_full_n sc_in sc_logic 1 signal 16 } 
	{ res_stream_V_data_8_V_write sc_out sc_logic 1 signal 16 } 
	{ res_stream_V_data_9_V_din sc_out sc_lv 16 signal 17 } 
	{ res_stream_V_data_9_V_full_n sc_in sc_logic 1 signal 17 } 
	{ res_stream_V_data_9_V_write sc_out sc_logic 1 signal 17 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "data_stream_V_data_0_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_stream_V_data_0_V", "role": "dout" }} , 
 	{ "name": "data_stream_V_data_0_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_0_V", "role": "empty_n" }} , 
 	{ "name": "data_stream_V_data_0_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_0_V", "role": "read" }} , 
 	{ "name": "data_stream_V_data_1_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_stream_V_data_1_V", "role": "dout" }} , 
 	{ "name": "data_stream_V_data_1_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_1_V", "role": "empty_n" }} , 
 	{ "name": "data_stream_V_data_1_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_1_V", "role": "read" }} , 
 	{ "name": "data_stream_V_data_2_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_stream_V_data_2_V", "role": "dout" }} , 
 	{ "name": "data_stream_V_data_2_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_2_V", "role": "empty_n" }} , 
 	{ "name": "data_stream_V_data_2_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_2_V", "role": "read" }} , 
 	{ "name": "data_stream_V_data_3_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_stream_V_data_3_V", "role": "dout" }} , 
 	{ "name": "data_stream_V_data_3_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_3_V", "role": "empty_n" }} , 
 	{ "name": "data_stream_V_data_3_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_3_V", "role": "read" }} , 
 	{ "name": "data_stream_V_data_4_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_stream_V_data_4_V", "role": "dout" }} , 
 	{ "name": "data_stream_V_data_4_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_4_V", "role": "empty_n" }} , 
 	{ "name": "data_stream_V_data_4_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_4_V", "role": "read" }} , 
 	{ "name": "data_stream_V_data_5_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_stream_V_data_5_V", "role": "dout" }} , 
 	{ "name": "data_stream_V_data_5_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_5_V", "role": "empty_n" }} , 
 	{ "name": "data_stream_V_data_5_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_5_V", "role": "read" }} , 
 	{ "name": "data_stream_V_data_6_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_stream_V_data_6_V", "role": "dout" }} , 
 	{ "name": "data_stream_V_data_6_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_6_V", "role": "empty_n" }} , 
 	{ "name": "data_stream_V_data_6_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_6_V", "role": "read" }} , 
 	{ "name": "data_stream_V_data_7_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_stream_V_data_7_V", "role": "dout" }} , 
 	{ "name": "data_stream_V_data_7_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_7_V", "role": "empty_n" }} , 
 	{ "name": "data_stream_V_data_7_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_stream_V_data_7_V", "role": "read" }} , 
 	{ "name": "res_stream_V_data_0_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_0_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_0_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_1_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_1_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_1_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_2_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_2_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_2_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_3_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_3_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_3_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_4_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_4_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_4_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_5_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_5_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_5_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_6_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_6_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_6_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_7_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_7_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_7_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_8_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_8_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_8_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_9_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_9_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_9_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_s",
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
		"Port" : [
			{"Name" : "data_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_9_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_fu_497", "Parent" : "0",
		"CDFG" : "dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "14",
		"VariableLatency" : "0", "ExactLatency" : "13", "EstimateLatencyMin" : "13", "EstimateLatencyMax" : "13",
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
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	dense_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_10u_config9_s {
		data_stream_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_stream_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 16}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 16}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 16}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 16}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 16}
		res_stream_V_data_5_V {Type O LastRead -1 FirstWrite 16}
		res_stream_V_data_6_V {Type O LastRead -1 FirstWrite 16}
		res_stream_V_data_7_V {Type O LastRead -1 FirstWrite 16}
		res_stream_V_data_8_V {Type O LastRead -1 FirstWrite 16}
		res_stream_V_data_9_V {Type O LastRead -1 FirstWrite 16}}
	dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 1 FirstWrite -1}
		data_5_V_read {Type I LastRead 2 FirstWrite -1}
		data_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_V_read {Type I LastRead 2 FirstWrite -1}
		data_8_V_read {Type I LastRead 3 FirstWrite -1}
		data_9_V_read {Type I LastRead 3 FirstWrite -1}
		data_10_V_read {Type I LastRead 4 FirstWrite -1}
		data_11_V_read {Type I LastRead 4 FirstWrite -1}
		data_12_V_read {Type I LastRead 5 FirstWrite -1}
		data_13_V_read {Type I LastRead 5 FirstWrite -1}
		data_14_V_read {Type I LastRead 5 FirstWrite -1}
		data_15_V_read {Type I LastRead 6 FirstWrite -1}
		data_16_V_read {Type I LastRead 6 FirstWrite -1}
		data_17_V_read {Type I LastRead 7 FirstWrite -1}
		data_18_V_read {Type I LastRead 7 FirstWrite -1}
		data_19_V_read {Type I LastRead 8 FirstWrite -1}
		data_20_V_read {Type I LastRead 8 FirstWrite -1}
		data_21_V_read {Type I LastRead 8 FirstWrite -1}
		data_22_V_read {Type I LastRead 8 FirstWrite -1}
		data_23_V_read {Type I LastRead 9 FirstWrite -1}
		data_24_V_read {Type I LastRead 9 FirstWrite -1}
		data_25_V_read {Type I LastRead 10 FirstWrite -1}
		data_26_V_read {Type I LastRead 9 FirstWrite -1}
		data_27_V_read {Type I LastRead 11 FirstWrite -1}
		data_28_V_read {Type I LastRead 11 FirstWrite -1}
		data_29_V_read {Type I LastRead 12 FirstWrite -1}
		data_30_V_read {Type I LastRead 8 FirstWrite -1}
		data_31_V_read {Type I LastRead 12 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "20", "Max" : "20"}
	, {"Name" : "Interval", "Min" : "20", "Max" : "20"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	data_stream_V_data_0_V { ap_fifo {  { data_stream_V_data_0_V_dout fifo_data 0 16 }  { data_stream_V_data_0_V_empty_n fifo_status 0 1 }  { data_stream_V_data_0_V_read fifo_update 1 1 } } }
	data_stream_V_data_1_V { ap_fifo {  { data_stream_V_data_1_V_dout fifo_data 0 16 }  { data_stream_V_data_1_V_empty_n fifo_status 0 1 }  { data_stream_V_data_1_V_read fifo_update 1 1 } } }
	data_stream_V_data_2_V { ap_fifo {  { data_stream_V_data_2_V_dout fifo_data 0 16 }  { data_stream_V_data_2_V_empty_n fifo_status 0 1 }  { data_stream_V_data_2_V_read fifo_update 1 1 } } }
	data_stream_V_data_3_V { ap_fifo {  { data_stream_V_data_3_V_dout fifo_data 0 16 }  { data_stream_V_data_3_V_empty_n fifo_status 0 1 }  { data_stream_V_data_3_V_read fifo_update 1 1 } } }
	data_stream_V_data_4_V { ap_fifo {  { data_stream_V_data_4_V_dout fifo_data 0 16 }  { data_stream_V_data_4_V_empty_n fifo_status 0 1 }  { data_stream_V_data_4_V_read fifo_update 1 1 } } }
	data_stream_V_data_5_V { ap_fifo {  { data_stream_V_data_5_V_dout fifo_data 0 16 }  { data_stream_V_data_5_V_empty_n fifo_status 0 1 }  { data_stream_V_data_5_V_read fifo_update 1 1 } } }
	data_stream_V_data_6_V { ap_fifo {  { data_stream_V_data_6_V_dout fifo_data 0 16 }  { data_stream_V_data_6_V_empty_n fifo_status 0 1 }  { data_stream_V_data_6_V_read fifo_update 1 1 } } }
	data_stream_V_data_7_V { ap_fifo {  { data_stream_V_data_7_V_dout fifo_data 0 16 }  { data_stream_V_data_7_V_empty_n fifo_status 0 1 }  { data_stream_V_data_7_V_read fifo_update 1 1 } } }
	res_stream_V_data_0_V { ap_fifo {  { res_stream_V_data_0_V_din fifo_data 1 16 }  { res_stream_V_data_0_V_full_n fifo_status 0 1 }  { res_stream_V_data_0_V_write fifo_update 1 1 } } }
	res_stream_V_data_1_V { ap_fifo {  { res_stream_V_data_1_V_din fifo_data 1 16 }  { res_stream_V_data_1_V_full_n fifo_status 0 1 }  { res_stream_V_data_1_V_write fifo_update 1 1 } } }
	res_stream_V_data_2_V { ap_fifo {  { res_stream_V_data_2_V_din fifo_data 1 16 }  { res_stream_V_data_2_V_full_n fifo_status 0 1 }  { res_stream_V_data_2_V_write fifo_update 1 1 } } }
	res_stream_V_data_3_V { ap_fifo {  { res_stream_V_data_3_V_din fifo_data 1 16 }  { res_stream_V_data_3_V_full_n fifo_status 0 1 }  { res_stream_V_data_3_V_write fifo_update 1 1 } } }
	res_stream_V_data_4_V { ap_fifo {  { res_stream_V_data_4_V_din fifo_data 1 16 }  { res_stream_V_data_4_V_full_n fifo_status 0 1 }  { res_stream_V_data_4_V_write fifo_update 1 1 } } }
	res_stream_V_data_5_V { ap_fifo {  { res_stream_V_data_5_V_din fifo_data 1 16 }  { res_stream_V_data_5_V_full_n fifo_status 0 1 }  { res_stream_V_data_5_V_write fifo_update 1 1 } } }
	res_stream_V_data_6_V { ap_fifo {  { res_stream_V_data_6_V_din fifo_data 1 16 }  { res_stream_V_data_6_V_full_n fifo_status 0 1 }  { res_stream_V_data_6_V_write fifo_update 1 1 } } }
	res_stream_V_data_7_V { ap_fifo {  { res_stream_V_data_7_V_din fifo_data 1 16 }  { res_stream_V_data_7_V_full_n fifo_status 0 1 }  { res_stream_V_data_7_V_write fifo_update 1 1 } } }
	res_stream_V_data_8_V { ap_fifo {  { res_stream_V_data_8_V_din fifo_data 1 16 }  { res_stream_V_data_8_V_full_n fifo_status 0 1 }  { res_stream_V_data_8_V_write fifo_update 1 1 } } }
	res_stream_V_data_9_V { ap_fifo {  { res_stream_V_data_9_V_din fifo_data 1 16 }  { res_stream_V_data_9_V_full_n fifo_status 0 1 }  { res_stream_V_data_9_V_write fifo_update 1 1 } } }
}
