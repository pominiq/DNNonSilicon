// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module softmax_stable_array_array_ap_fixed_16_6_5_3_0_3u_softmax_config5_s (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        data_V_data_0_V_dout,
        data_V_data_0_V_empty_n,
        data_V_data_0_V_read,
        data_V_data_1_V_dout,
        data_V_data_1_V_empty_n,
        data_V_data_1_V_read,
        data_V_data_2_V_dout,
        data_V_data_2_V_empty_n,
        data_V_data_2_V_read,
        res_V_data_0_V_TDATA,
        res_V_data_0_V_TVALID,
        res_V_data_0_V_TREADY,
        res_V_data_1_V_TDATA,
        res_V_data_1_V_TVALID,
        res_V_data_1_V_TREADY,
        res_V_data_2_V_TDATA,
        res_V_data_2_V_TVALID,
        res_V_data_2_V_TREADY,
        data_V_data_0_V_blk_n,
        data_V_data_1_V_blk_n,
        data_V_data_2_V_blk_n,
        res_V_data_0_V_TDATA_blk_n,
        res_V_data_1_V_TDATA_blk_n,
        res_V_data_2_V_TDATA_blk_n
);

parameter    ap_ST_fsm_pp0_stage0 = 3'd1;
parameter    ap_ST_fsm_pp0_stage1 = 3'd2;
parameter    ap_ST_fsm_pp0_stage2 = 3'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [15:0] data_V_data_0_V_dout;
input   data_V_data_0_V_empty_n;
output   data_V_data_0_V_read;
input  [15:0] data_V_data_1_V_dout;
input   data_V_data_1_V_empty_n;
output   data_V_data_1_V_read;
input  [15:0] data_V_data_2_V_dout;
input   data_V_data_2_V_empty_n;
output   data_V_data_2_V_read;
output  [15:0] res_V_data_0_V_TDATA;
output   res_V_data_0_V_TVALID;
input   res_V_data_0_V_TREADY;
output  [15:0] res_V_data_1_V_TDATA;
output   res_V_data_1_V_TVALID;
input   res_V_data_1_V_TREADY;
output  [15:0] res_V_data_2_V_TDATA;
output   res_V_data_2_V_TVALID;
input   res_V_data_2_V_TREADY;
output   data_V_data_0_V_blk_n;
output   data_V_data_1_V_blk_n;
output   data_V_data_2_V_blk_n;
output   res_V_data_0_V_TDATA_blk_n;
output   res_V_data_1_V_TDATA_blk_n;
output   res_V_data_2_V_TDATA_blk_n;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg data_V_data_0_V_read;
reg data_V_data_1_V_read;
reg data_V_data_2_V_read;
reg res_V_data_0_V_TVALID;
reg res_V_data_1_V_TVALID;
reg res_V_data_2_V_TVALID;
reg data_V_data_0_V_blk_n;
reg data_V_data_1_V_blk_n;
reg data_V_data_2_V_blk_n;
reg res_V_data_0_V_TDATA_blk_n;
reg res_V_data_1_V_TDATA_blk_n;
reg res_V_data_2_V_TDATA_blk_n;

(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter0;
wire    ap_block_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
reg    ap_enable_reg_pp0_iter2;
reg    ap_idle_pp0;
wire    ap_CS_fsm_pp0_stage2;
wire    ap_block_state3_pp0_stage2_iter0;
wire    ap_block_state6_pp0_stage2_iter1;
wire    ap_block_pp0_stage2_11001;
reg   [9:0] exp_table1_address0;
reg    exp_table1_ce0;
wire   [16:0] exp_table1_q0;
wire   [9:0] invert_table2_address0;
reg    invert_table2_ce0;
wire   [17:0] invert_table2_q0;
wire    io_acc_block_signal_op8;
reg    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state4_pp0_stage0_iter1;
wire    ap_block_state7_pp0_stage0_iter2;
reg    ap_block_pp0_stage0_11001;
wire   [9:0] y_V_1_fu_496_p3;
reg   [9:0] y_V_1_reg_689;
wire   [9:0] y_V_2_fu_530_p3;
reg   [9:0] y_V_2_reg_694;
reg   [16:0] exp_res_0_V_reg_699;
wire    ap_CS_fsm_pp0_stage1;
wire    ap_block_state2_pp0_stage1_iter0;
wire    ap_block_state5_pp0_stage1_iter1;
wire    ap_block_pp0_stage1_11001;
reg   [16:0] exp_res_1_V_reg_710;
reg   [16:0] exp_res_2_V_reg_721;
wire  signed [25:0] sext_ln241_fu_667_p1;
reg  signed [25:0] sext_ln241_reg_731;
reg   [15:0] tmp_data_0_V_reg_736;
reg   [15:0] tmp_data_1_V_reg_741;
reg    ap_enable_reg_pp0_iter0_reg;
wire    ap_block_pp0_stage2_subdone;
reg    ap_block_pp0_stage0_subdone;
wire   [63:0] zext_ln225_fu_465_p1;
wire   [63:0] zext_ln225_1_fu_538_p1;
wire    ap_block_pp0_stage1;
wire   [63:0] zext_ln225_2_fu_542_p1;
wire    ap_block_pp0_stage2;
wire   [63:0] zext_ln235_fu_662_p1;
reg    ap_block_pp0_stage0_01001;
reg   [16:0] grp_fu_191_p0;
wire   [25:0] zext_ln1118_fu_672_p1;
wire   [25:0] zext_ln1118_1_fu_676_p1;
wire   [25:0] zext_ln1118_2_fu_680_p1;
reg  signed [17:0] grp_fu_191_p1;
wire   [25:0] grp_fu_191_p2;
wire  signed [15:0] icmp_ln1496_fu_231_p0;
wire  signed [15:0] icmp_ln1496_fu_231_p1;
wire   [0:0] icmp_ln1496_fu_231_p2;
wire  signed [15:0] select_ln65_fu_237_p1;
wire  signed [15:0] select_ln65_fu_237_p2;
wire   [15:0] select_ln65_fu_237_p3;
wire  signed [15:0] icmp_ln1496_1_fu_245_p1;
wire   [0:0] icmp_ln1496_1_fu_245_p2;
wire  signed [15:0] x_max_V_fu_251_p1;
wire  signed [15:0] sext_ln703_fu_259_p0;
wire   [15:0] x_max_V_fu_251_p3;
wire  signed [16:0] sext_ln703_fu_259_p1;
wire  signed [16:0] sext_ln703_1_fu_263_p1;
wire   [16:0] sub_ln1193_fu_267_p2;
wire   [0:0] tmp_7_fu_281_p3;
wire   [0:0] tmp_5_fu_273_p3;
wire   [0:0] xor_ln786_fu_289_p2;
wire   [0:0] xor_ln340_fu_307_p2;
wire  signed [15:0] sext_ln703_2_fu_319_p0;
wire  signed [16:0] sext_ln703_2_fu_319_p1;
wire   [16:0] sub_ln1193_1_fu_323_p2;
wire   [0:0] tmp_10_fu_337_p3;
wire   [0:0] tmp_9_fu_329_p3;
wire   [0:0] xor_ln786_1_fu_345_p2;
wire   [0:0] xor_ln340_1_fu_363_p2;
wire  signed [15:0] sext_ln703_3_fu_375_p0;
wire  signed [16:0] sext_ln703_3_fu_375_p1;
wire   [16:0] sub_ln1193_2_fu_379_p2;
wire   [0:0] tmp_12_fu_393_p3;
wire   [0:0] tmp_11_fu_385_p3;
wire   [0:0] xor_ln786_2_fu_401_p2;
wire   [0:0] xor_ln340_2_fu_419_p2;
wire   [0:0] xor_ln340_3_fu_301_p2;
wire   [9:0] tmp_fu_431_p4;
wire   [0:0] and_ln786_fu_295_p2;
wire   [0:0] or_ln340_fu_313_p2;
wire   [9:0] select_ln340_fu_441_p3;
wire   [9:0] select_ln388_fu_449_p3;
wire   [9:0] y_V_fu_457_p3;
wire   [0:0] xor_ln340_4_fu_357_p2;
wire   [9:0] tmp_6_fu_470_p4;
wire   [0:0] and_ln786_1_fu_351_p2;
wire   [0:0] or_ln340_1_fu_369_p2;
wire   [9:0] select_ln340_2_fu_480_p3;
wire   [9:0] select_ln388_1_fu_488_p3;
wire   [0:0] xor_ln340_5_fu_413_p2;
wire   [9:0] tmp_8_fu_504_p4;
wire   [0:0] and_ln786_2_fu_407_p2;
wire   [0:0] or_ln340_2_fu_425_p2;
wire   [9:0] select_ln340_4_fu_514_p3;
wire   [9:0] select_ln388_2_fu_522_p3;
wire   [17:0] zext_ln36_2_fu_553_p1;
wire   [17:0] zext_ln36_1_fu_550_p1;
wire  signed [17:0] ret_V_fu_556_p2;
wire   [18:0] rhs_V_fu_566_p1;
wire  signed [18:0] lhs_V_fu_562_p1;
wire   [18:0] ret_V_1_fu_570_p2;
wire   [17:0] zext_ln36_fu_546_p1;
wire   [17:0] p_Val2_9_fu_584_p2;
wire   [0:0] p_Result_7_fu_590_p3;
wire   [0:0] p_Result_s_fu_576_p3;
wire   [0:0] xor_ln786_3_fu_598_p2;
wire   [0:0] xor_ln340_7_fu_616_p2;
wire   [0:0] xor_ln340_6_fu_610_p2;
wire   [9:0] tmp_s_fu_628_p4;
wire   [0:0] underflow_fu_604_p2;
wire   [0:0] or_ln340_3_fu_622_p2;
wire   [9:0] select_ln340_6_fu_638_p3;
wire   [9:0] select_ln388_3_fu_646_p3;
wire   [9:0] y_V_3_fu_654_p3;
reg   [2:0] ap_NS_fsm;
reg    ap_idle_pp0_0to1;
reg    ap_reset_idle_pp0;
reg    ap_idle_pp0_1to2;
wire    ap_block_pp0_stage1_subdone;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_CS_fsm = 3'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter0_reg = 1'b0;
end

softmax_stable_array_array_ap_fixed_16_6_5_3_0_3u_softmax_config5_s_exp_table1 #(
    .DataWidth( 17 ),
    .AddressRange( 1024 ),
    .AddressWidth( 10 ))
exp_table1_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(exp_table1_address0),
    .ce0(exp_table1_ce0),
    .q0(exp_table1_q0)
);

softmax_stable_array_array_ap_fixed_16_6_5_3_0_3u_softmax_config5_s_invert_tabkb #(
    .DataWidth( 18 ),
    .AddressRange( 1024 ),
    .AddressWidth( 10 ))
invert_table2_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(invert_table2_address0),
    .ce0(invert_table2_ce0),
    .q0(invert_table2_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_pp0_stage0)) begin
            ap_enable_reg_pp0_iter0_reg <= ap_start;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage2) & (1'b0 == ap_block_pp0_stage2_subdone))) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage2) & (1'b0 == ap_block_pp0_stage2_subdone))) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end else if (((ap_enable_reg_pp0_iter1 == 1'b0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter2 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        exp_res_0_V_reg_699 <= exp_table1_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage2_11001) & (1'b1 == ap_CS_fsm_pp0_stage2) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        exp_res_1_V_reg_710 <= exp_table1_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        exp_res_2_V_reg_721 <= exp_table1_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        sext_ln241_reg_731 <= sext_ln241_fu_667_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        tmp_data_0_V_reg_736 <= {{grp_fu_191_p2[25:10]}};
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage2_11001) & (1'b1 == ap_CS_fsm_pp0_stage2) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        tmp_data_1_V_reg_741 <= {{grp_fu_191_p2[25:10]}};
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        y_V_1_reg_689 <= y_V_1_fu_496_p3;
        y_V_2_reg_694 <= y_V_2_fu_530_p3;
    end
end

always @ (*) begin
    if ((((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001)) | ((ap_start == 1'b0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_pp0_stage0)) begin
        ap_enable_reg_pp0_iter0 = ap_start;
    end else begin
        ap_enable_reg_pp0_iter0 = ap_enable_reg_pp0_iter0_reg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0_0to1 = 1'b1;
    end else begin
        ap_idle_pp0_0to1 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
        ap_idle_pp0_1to2 = 1'b1;
    end else begin
        ap_idle_pp0_1to2 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage2_11001) & (1'b1 == ap_CS_fsm_pp0_stage2) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0_0to1 == 1'b1))) begin
        ap_reset_idle_pp0 = 1'b1;
    end else begin
        ap_reset_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_V_data_0_V_blk_n = data_V_data_0_V_empty_n;
    end else begin
        data_V_data_0_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        data_V_data_0_V_read = 1'b1;
    end else begin
        data_V_data_0_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_V_data_1_V_blk_n = data_V_data_1_V_empty_n;
    end else begin
        data_V_data_1_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        data_V_data_1_V_read = 1'b1;
    end else begin
        data_V_data_1_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_V_data_2_V_blk_n = data_V_data_2_V_empty_n;
    end else begin
        data_V_data_2_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        data_V_data_2_V_read = 1'b1;
    end else begin
        data_V_data_2_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b1)) begin
        if (((1'b1 == ap_CS_fsm_pp0_stage2) & (1'b0 == ap_block_pp0_stage2))) begin
            exp_table1_address0 = zext_ln225_2_fu_542_p1;
        end else if (((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1))) begin
            exp_table1_address0 = zext_ln225_1_fu_538_p1;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            exp_table1_address0 = zext_ln225_fu_465_p1;
        end else begin
            exp_table1_address0 = 'bx;
        end
    end else begin
        exp_table1_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage2_11001) & (1'b1 == ap_CS_fsm_pp0_stage2) & (ap_enable_reg_pp0_iter0 == 1'b1)) | ((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001)) | ((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001)))) begin
        exp_table1_ce0 = 1'b1;
    end else begin
        exp_table1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_fu_191_p0 = zext_ln1118_2_fu_680_p1;
    end else if (((1'b1 == ap_CS_fsm_pp0_stage2) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage2))) begin
        grp_fu_191_p0 = zext_ln1118_1_fu_676_p1;
    end else if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1))) begin
        grp_fu_191_p0 = zext_ln1118_fu_672_p1;
    end else begin
        grp_fu_191_p0 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_pp0_stage2) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage2)) | ((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
        grp_fu_191_p1 = sext_ln241_reg_731;
    end else if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1))) begin
        grp_fu_191_p1 = sext_ln241_fu_667_p1;
    end else begin
        grp_fu_191_p1 = 'bx;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        invert_table2_ce0 = 1'b1;
    end else begin
        invert_table2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        res_V_data_0_V_TDATA_blk_n = res_V_data_0_V_TREADY;
    end else begin
        res_V_data_0_V_TDATA_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        res_V_data_0_V_TVALID = 1'b1;
    end else begin
        res_V_data_0_V_TVALID = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        res_V_data_1_V_TDATA_blk_n = res_V_data_1_V_TREADY;
    end else begin
        res_V_data_1_V_TDATA_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        res_V_data_1_V_TVALID = 1'b1;
    end else begin
        res_V_data_1_V_TVALID = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        res_V_data_2_V_TDATA_blk_n = res_V_data_2_V_TREADY;
    end else begin
        res_V_data_2_V_TDATA_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        res_V_data_2_V_TVALID = 1'b1;
    end else begin
        res_V_data_2_V_TVALID = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((ap_start == 1'b0) & (ap_idle_pp0_1to2 == 1'b1)) & (ap_reset_idle_pp0 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end else if (((ap_reset_idle_pp0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_pp0_stage1 : begin
            if ((1'b0 == ap_block_pp0_stage1_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end
        end
        ap_ST_fsm_pp0_stage2 : begin
            if ((1'b0 == ap_block_pp0_stage2_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign and_ln786_1_fu_351_p2 = (xor_ln786_1_fu_345_p2 & tmp_9_fu_329_p3);

assign and_ln786_2_fu_407_p2 = (xor_ln786_2_fu_401_p2 & tmp_11_fu_385_p3);

assign and_ln786_fu_295_p2 = (xor_ln786_fu_289_p2 & tmp_5_fu_273_p3);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_pp0_stage1 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_pp0_stage2 = ap_CS_fsm[32'd2];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_01001 = ((ap_enable_reg_pp0_iter0 == 1'b1) & ((ap_start == 1'b0) | (io_acc_block_signal_op8 == 1'b0)));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = (((res_V_data_0_V_TREADY == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1)) | ((ap_enable_reg_pp0_iter0 == 1'b1) & ((ap_start == 1'b0) | (io_acc_block_signal_op8 == 1'b0))));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = (((res_V_data_0_V_TREADY == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1)) | ((ap_enable_reg_pp0_iter0 == 1'b1) & ((ap_start == 1'b0) | (io_acc_block_signal_op8 == 1'b0))));
end

assign ap_block_pp0_stage1 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage2 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage2_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage2_subdone = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state1_pp0_stage0_iter0 = ((ap_start == 1'b0) | (io_acc_block_signal_op8 == 1'b0));
end

assign ap_block_state2_pp0_stage1_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage2_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage1_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage2_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign grp_fu_191_p2 = ($signed({{1'b0}, {grp_fu_191_p0}}) * $signed(grp_fu_191_p1));

assign icmp_ln1496_1_fu_245_p1 = data_V_data_2_V_dout;

assign icmp_ln1496_1_fu_245_p2 = (($signed(select_ln65_fu_237_p3) < $signed(icmp_ln1496_1_fu_245_p1)) ? 1'b1 : 1'b0);

assign icmp_ln1496_fu_231_p0 = data_V_data_0_V_dout;

assign icmp_ln1496_fu_231_p1 = data_V_data_1_V_dout;

assign icmp_ln1496_fu_231_p2 = (($signed(icmp_ln1496_fu_231_p0) < $signed(icmp_ln1496_fu_231_p1)) ? 1'b1 : 1'b0);

assign invert_table2_address0 = zext_ln235_fu_662_p1;

assign io_acc_block_signal_op8 = (data_V_data_2_V_empty_n & data_V_data_1_V_empty_n & data_V_data_0_V_empty_n);

assign lhs_V_fu_562_p1 = ret_V_fu_556_p2;

assign or_ln340_1_fu_369_p2 = (xor_ln340_1_fu_363_p2 | tmp_10_fu_337_p3);

assign or_ln340_2_fu_425_p2 = (xor_ln340_2_fu_419_p2 | tmp_12_fu_393_p3);

assign or_ln340_3_fu_622_p2 = (xor_ln340_7_fu_616_p2 | p_Result_7_fu_590_p3);

assign or_ln340_fu_313_p2 = (xor_ln340_fu_307_p2 | tmp_7_fu_281_p3);

assign p_Result_7_fu_590_p3 = p_Val2_9_fu_584_p2[32'd17];

assign p_Result_s_fu_576_p3 = ret_V_1_fu_570_p2[32'd18];

assign p_Val2_9_fu_584_p2 = ($signed(zext_ln36_fu_546_p1) + $signed(ret_V_fu_556_p2));

assign res_V_data_0_V_TDATA = tmp_data_0_V_reg_736;

assign res_V_data_1_V_TDATA = tmp_data_1_V_reg_741;

assign res_V_data_2_V_TDATA = {{grp_fu_191_p2[25:10]}};

assign ret_V_1_fu_570_p2 = ($signed(rhs_V_fu_566_p1) + $signed(lhs_V_fu_562_p1));

assign ret_V_fu_556_p2 = (zext_ln36_2_fu_553_p1 + zext_ln36_1_fu_550_p1);

assign rhs_V_fu_566_p1 = exp_table1_q0;

assign select_ln340_2_fu_480_p3 = ((xor_ln340_4_fu_357_p2[0:0] === 1'b1) ? 10'd511 : tmp_6_fu_470_p4);

assign select_ln340_4_fu_514_p3 = ((xor_ln340_5_fu_413_p2[0:0] === 1'b1) ? 10'd511 : tmp_8_fu_504_p4);

assign select_ln340_6_fu_638_p3 = ((xor_ln340_6_fu_610_p2[0:0] === 1'b1) ? 10'd511 : tmp_s_fu_628_p4);

assign select_ln340_fu_441_p3 = ((xor_ln340_3_fu_301_p2[0:0] === 1'b1) ? 10'd511 : tmp_fu_431_p4);

assign select_ln388_1_fu_488_p3 = ((and_ln786_1_fu_351_p2[0:0] === 1'b1) ? 10'd512 : tmp_6_fu_470_p4);

assign select_ln388_2_fu_522_p3 = ((and_ln786_2_fu_407_p2[0:0] === 1'b1) ? 10'd512 : tmp_8_fu_504_p4);

assign select_ln388_3_fu_646_p3 = ((underflow_fu_604_p2[0:0] === 1'b1) ? 10'd512 : tmp_s_fu_628_p4);

assign select_ln388_fu_449_p3 = ((and_ln786_fu_295_p2[0:0] === 1'b1) ? 10'd512 : tmp_fu_431_p4);

assign select_ln65_fu_237_p1 = data_V_data_1_V_dout;

assign select_ln65_fu_237_p2 = data_V_data_0_V_dout;

assign select_ln65_fu_237_p3 = ((icmp_ln1496_fu_231_p2[0:0] === 1'b1) ? select_ln65_fu_237_p1 : select_ln65_fu_237_p2);

assign sext_ln241_fu_667_p1 = $signed(invert_table2_q0);

assign sext_ln703_1_fu_263_p1 = $signed(x_max_V_fu_251_p3);

assign sext_ln703_2_fu_319_p0 = data_V_data_1_V_dout;

assign sext_ln703_2_fu_319_p1 = sext_ln703_2_fu_319_p0;

assign sext_ln703_3_fu_375_p0 = data_V_data_2_V_dout;

assign sext_ln703_3_fu_375_p1 = sext_ln703_3_fu_375_p0;

assign sext_ln703_fu_259_p0 = data_V_data_0_V_dout;

assign sext_ln703_fu_259_p1 = sext_ln703_fu_259_p0;

assign sub_ln1193_1_fu_323_p2 = ($signed(sext_ln703_2_fu_319_p1) - $signed(sext_ln703_1_fu_263_p1));

assign sub_ln1193_2_fu_379_p2 = ($signed(sext_ln703_3_fu_375_p1) - $signed(sext_ln703_1_fu_263_p1));

assign sub_ln1193_fu_267_p2 = ($signed(sext_ln703_fu_259_p1) - $signed(sext_ln703_1_fu_263_p1));

assign tmp_10_fu_337_p3 = sub_ln1193_1_fu_323_p2[32'd15];

assign tmp_11_fu_385_p3 = sub_ln1193_2_fu_379_p2[32'd16];

assign tmp_12_fu_393_p3 = sub_ln1193_2_fu_379_p2[32'd15];

assign tmp_5_fu_273_p3 = sub_ln1193_fu_267_p2[32'd16];

assign tmp_6_fu_470_p4 = {{sub_ln1193_1_fu_323_p2[15:6]}};

assign tmp_7_fu_281_p3 = sub_ln1193_fu_267_p2[32'd15];

assign tmp_8_fu_504_p4 = {{sub_ln1193_2_fu_379_p2[15:6]}};

assign tmp_9_fu_329_p3 = sub_ln1193_1_fu_323_p2[32'd16];

assign tmp_fu_431_p4 = {{sub_ln1193_fu_267_p2[15:6]}};

assign tmp_s_fu_628_p4 = {{p_Val2_9_fu_584_p2[17:8]}};

assign underflow_fu_604_p2 = (xor_ln786_3_fu_598_p2 & p_Result_s_fu_576_p3);

assign x_max_V_fu_251_p1 = data_V_data_2_V_dout;

assign x_max_V_fu_251_p3 = ((icmp_ln1496_1_fu_245_p2[0:0] === 1'b1) ? x_max_V_fu_251_p1 : select_ln65_fu_237_p3);

assign xor_ln340_1_fu_363_p2 = (tmp_9_fu_329_p3 ^ 1'd1);

assign xor_ln340_2_fu_419_p2 = (tmp_11_fu_385_p3 ^ 1'd1);

assign xor_ln340_3_fu_301_p2 = (tmp_7_fu_281_p3 ^ tmp_5_fu_273_p3);

assign xor_ln340_4_fu_357_p2 = (tmp_9_fu_329_p3 ^ tmp_10_fu_337_p3);

assign xor_ln340_5_fu_413_p2 = (tmp_12_fu_393_p3 ^ tmp_11_fu_385_p3);

assign xor_ln340_6_fu_610_p2 = (p_Result_s_fu_576_p3 ^ p_Result_7_fu_590_p3);

assign xor_ln340_7_fu_616_p2 = (p_Result_s_fu_576_p3 ^ 1'd1);

assign xor_ln340_fu_307_p2 = (tmp_5_fu_273_p3 ^ 1'd1);

assign xor_ln786_1_fu_345_p2 = (tmp_10_fu_337_p3 ^ 1'd1);

assign xor_ln786_2_fu_401_p2 = (tmp_12_fu_393_p3 ^ 1'd1);

assign xor_ln786_3_fu_598_p2 = (p_Result_7_fu_590_p3 ^ 1'd1);

assign xor_ln786_fu_289_p2 = (tmp_7_fu_281_p3 ^ 1'd1);

assign y_V_1_fu_496_p3 = ((or_ln340_1_fu_369_p2[0:0] === 1'b1) ? select_ln340_2_fu_480_p3 : select_ln388_1_fu_488_p3);

assign y_V_2_fu_530_p3 = ((or_ln340_2_fu_425_p2[0:0] === 1'b1) ? select_ln340_4_fu_514_p3 : select_ln388_2_fu_522_p3);

assign y_V_3_fu_654_p3 = ((or_ln340_3_fu_622_p2[0:0] === 1'b1) ? select_ln340_6_fu_638_p3 : select_ln388_3_fu_646_p3);

assign y_V_fu_457_p3 = ((or_ln340_fu_313_p2[0:0] === 1'b1) ? select_ln340_fu_441_p3 : select_ln388_fu_449_p3);

assign zext_ln1118_1_fu_676_p1 = exp_res_1_V_reg_710;

assign zext_ln1118_2_fu_680_p1 = exp_res_2_V_reg_721;

assign zext_ln1118_fu_672_p1 = exp_res_0_V_reg_699;

assign zext_ln225_1_fu_538_p1 = y_V_1_reg_689;

assign zext_ln225_2_fu_542_p1 = y_V_2_reg_694;

assign zext_ln225_fu_465_p1 = y_V_fu_457_p3;

assign zext_ln235_fu_662_p1 = y_V_3_fu_654_p3;

assign zext_ln36_1_fu_550_p1 = exp_res_1_V_reg_710;

assign zext_ln36_2_fu_553_p1 = exp_res_0_V_reg_699;

assign zext_ln36_fu_546_p1 = exp_table1_q0;

endmodule //softmax_stable_array_array_ap_fixed_16_6_5_3_0_3u_softmax_config5_s