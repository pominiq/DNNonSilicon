// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s (
        ap_clk,
        ap_rst,
        ap_start,
        start_full_n,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        start_out,
        start_write,
        data_V_data_V_TDATA,
        data_V_data_V_TVALID,
        data_V_data_V_TREADY,
        res_V_data_0_V_din,
        res_V_data_0_V_full_n,
        res_V_data_0_V_write,
        res_V_data_1_V_din,
        res_V_data_1_V_full_n,
        res_V_data_1_V_write,
        res_V_data_2_V_din,
        res_V_data_2_V_full_n,
        res_V_data_2_V_write,
        res_V_data_3_V_din,
        res_V_data_3_V_full_n,
        res_V_data_3_V_write
);

parameter    ap_ST_fsm_state1 = 6'd1;
parameter    ap_ST_fsm_state2 = 6'd2;
parameter    ap_ST_fsm_state3 = 6'd4;
parameter    ap_ST_fsm_state4 = 6'd8;
parameter    ap_ST_fsm_pp1_stage0 = 6'd16;
parameter    ap_ST_fsm_state9 = 6'd32;

input   ap_clk;
input   ap_rst;
input   ap_start;
input   start_full_n;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output   start_out;
output   start_write;
input  [15:0] data_V_data_V_TDATA;
input   data_V_data_V_TVALID;
output   data_V_data_V_TREADY;
output  [15:0] res_V_data_0_V_din;
input   res_V_data_0_V_full_n;
output   res_V_data_0_V_write;
output  [15:0] res_V_data_1_V_din;
input   res_V_data_1_V_full_n;
output   res_V_data_1_V_write;
output  [15:0] res_V_data_2_V_din;
input   res_V_data_2_V_full_n;
output   res_V_data_2_V_write;
output  [15:0] res_V_data_3_V_din;
input   res_V_data_3_V_full_n;
output   res_V_data_3_V_write;

reg ap_done;
reg ap_idle;
reg start_write;
reg data_V_data_V_TREADY;
reg res_V_data_0_V_write;
reg res_V_data_1_V_write;
reg res_V_data_2_V_write;
reg res_V_data_3_V_write;

reg    real_start;
reg    start_once_reg;
reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [5:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
reg   [15:0] kernel_data_V_1143;
reg   [15:0] kernel_data_V_4;
reg   [15:0] kernel_data_V_7;
reg   [15:0] kernel_data_V_2144;
reg   [15:0] kernel_data_V_5;
reg   [15:0] kernel_data_V_8;
reg   [31:0] sX_3;
reg   [31:0] sY_3;
reg   [31:0] pY_3;
reg   [31:0] pX_3;
reg   [15:0] kernel_data_V_0;
reg   [15:0] kernel_data_V_3145;
reg   [15:0] kernel_data_V_6;
wire   [3:0] w2_V_address0;
reg    w2_V_ce0;
wire   [59:0] w2_V_q0;
reg    line_buffer_Array_V_0_0_ce0;
reg    line_buffer_Array_V_0_0_we0;
wire   [15:0] line_buffer_Array_V_0_0_q0;
reg    line_buffer_Array_V_1142_0_ce0;
reg    line_buffer_Array_V_1142_0_we0;
wire   [15:0] line_buffer_Array_V_1142_0_q0;
reg    data_V_data_V_TDATA_blk_n;
wire    ap_CS_fsm_state2;
reg    res_V_data_0_V_blk_n;
wire    ap_CS_fsm_state9;
reg   [0:0] and_ln289_4_reg_1041;
reg    res_V_data_1_V_blk_n;
reg    res_V_data_2_V_blk_n;
reg    res_V_data_3_V_blk_n;
reg   [3:0] w_index40_reg_272;
reg   [15:0] tmp_data_0_V_738_reg_284;
reg   [15:0] tmp_data_1_V_736_reg_295;
reg   [15:0] tmp_data_2_V_734_reg_306;
reg   [15:0] tmp_data_3_V_732_reg_317;
reg   [15:0] tmp_data_0_V_reg_963;
reg   [15:0] DataOut_V_8_reg_968;
reg   [15:0] DataOut_V_reg_973;
reg   [15:0] kernel_data_V_2144_load_reg_978;
reg   [15:0] kernel_data_V_5_load_reg_983;
reg   [15:0] kernel_data_V_8_load_reg_988;
wire   [9:0] add_ln79_fu_382_p2;
reg   [9:0] add_ln79_reg_993;
wire   [1:0] i_iw_fu_394_p2;
wire    ap_CS_fsm_state3;
reg   [31:0] sX_3_load_reg_1009;
wire    ap_CS_fsm_state4;
wire   [0:0] icmp_ln289_fu_480_p2;
reg   [0:0] icmp_ln289_reg_1014;
reg   [31:0] sY_3_load_reg_1019;
wire   [0:0] icmp_ln289_4_fu_490_p2;
reg   [0:0] icmp_ln289_4_reg_1024;
reg   [31:0] pY_3_load_reg_1029;
reg   [31:0] pX_3_load_reg_1035;
wire   [0:0] and_ln289_4_fu_548_p2;
wire    ap_CS_fsm_pp1_stage0;
wire    ap_block_state5_pp1_stage0_iter0;
wire    ap_block_state6_pp1_stage0_iter1;
wire    ap_block_state7_pp1_stage0_iter2;
wire    ap_block_state8_pp1_stage0_iter3;
wire    ap_block_pp1_stage0_11001;
wire   [3:0] w_index_fu_559_p2;
reg   [3:0] w_index_reg_1050;
reg    ap_enable_reg_pp1_iter0;
wire   [0:0] icmp_ln43_fu_565_p2;
reg   [0:0] icmp_ln43_reg_1055;
reg   [0:0] icmp_ln43_reg_1055_pp1_iter1_reg;
reg   [0:0] icmp_ln43_reg_1055_pp1_iter2_reg;
wire   [15:0] select_ln19_7_fu_729_p3;
reg   [15:0] select_ln19_7_reg_1059;
wire   [15:0] trunc_ln56_fu_737_p1;
reg  signed [15:0] trunc_ln56_reg_1064;
reg  signed [15:0] tmp_82_reg_1069;
reg  signed [15:0] tmp_83_reg_1074;
reg  signed [11:0] tmp_84_reg_1079;
reg   [15:0] trunc_ln3_reg_1084;
reg   [15:0] trunc_ln708_s_reg_1089;
reg   [15:0] trunc_ln708_69_reg_1094;
reg   [15:0] trunc_ln708_70_reg_1099;
wire   [15:0] acc_0_V_fu_822_p2;
reg   [15:0] acc_0_V_reg_1104;
reg    ap_enable_reg_pp1_iter3;
wire   [15:0] acc_1_V_fu_827_p2;
reg   [15:0] acc_1_V_reg_1110;
wire   [15:0] acc_2_V_fu_832_p2;
reg   [15:0] acc_2_V_reg_1116;
wire   [15:0] acc_3_V_fu_837_p2;
reg   [15:0] acc_3_V_reg_1122;
wire    ap_block_pp1_stage0_subdone;
reg    ap_enable_reg_pp1_iter1;
reg    ap_enable_reg_pp1_iter2;
reg   [9:0] indvar_flatten41_reg_249;
reg    ap_block_state1;
wire    io_acc_block_signal_op151;
reg    ap_block_state9;
wire   [0:0] icmp_ln79_fu_929_p2;
reg   [1:0] i_iw_0_i_i_i_i_reg_261;
wire   [0:0] icmp_ln194_fu_388_p2;
reg   [3:0] ap_phi_mux_w_index40_phi_fu_276_p4;
wire    ap_block_pp1_stage0;
wire   [31:0] select_ln323_fu_909_p3;
reg   [31:0] ap_phi_mux_storemerge_i_i_phi_fu_331_p4;
wire   [0:0] icmp_ln313_fu_842_p2;
wire   [0:0] icmp_ln317_fu_888_p2;
wire   [63:0] zext_ln56_fu_554_p1;
wire   [15:0] select_ln203_fu_404_p3;
wire   [0:0] trunc_ln201_fu_400_p1;
wire   [15:0] select_ln203_12_fu_423_p3;
wire   [15:0] select_ln203_13_fu_442_p3;
wire   [31:0] select_ln328_fu_863_p3;
wire   [31:0] add_ln321_fu_893_p2;
wire   [31:0] add_ln326_fu_847_p2;
wire   [30:0] tmp_fu_500_p4;
wire   [30:0] tmp_2_fu_520_p4;
wire   [0:0] icmp_ln289_5_fu_510_p2;
wire   [0:0] icmp_ln289_6_fu_530_p2;
wire   [0:0] and_ln289_3_fu_542_p2;
wire   [0:0] and_ln289_fu_536_p2;
wire   [0:0] icmp_ln19_7_fu_625_p2;
wire   [0:0] icmp_ln19_6_fu_619_p2;
wire   [0:0] icmp_ln19_5_fu_613_p2;
wire   [0:0] icmp_ln19_4_fu_607_p2;
wire   [0:0] icmp_ln19_3_fu_601_p2;
wire   [0:0] icmp_ln19_2_fu_595_p2;
wire   [0:0] icmp_ln19_1_fu_589_p2;
wire   [0:0] icmp_ln19_fu_583_p2;
wire   [0:0] or_ln19_fu_639_p2;
wire   [15:0] select_ln19_fu_631_p3;
wire   [15:0] select_ln19_1_fu_645_p3;
wire   [0:0] or_ln19_1_fu_653_p2;
wire   [0:0] or_ln19_2_fu_667_p2;
wire   [15:0] select_ln19_2_fu_659_p3;
wire   [15:0] select_ln19_3_fu_673_p3;
wire   [0:0] or_ln19_3_fu_681_p2;
wire   [0:0] or_ln19_4_fu_695_p2;
wire   [15:0] select_ln19_4_fu_687_p3;
wire   [15:0] select_ln19_5_fu_701_p3;
wire   [0:0] or_ln19_5_fu_709_p2;
wire   [0:0] or_ln19_6_fu_723_p2;
wire   [15:0] select_ln19_6_fu_715_p3;
wire  signed [25:0] mul_ln1118_fu_935_p2;
wire  signed [25:0] mul_ln1118_71_fu_942_p2;
wire  signed [25:0] mul_ln1118_72_fu_949_p2;
wire  signed [25:0] mul_ln1118_73_fu_956_p2;
wire   [31:0] add_ln328_fu_858_p2;
wire   [31:0] add_ln323_fu_904_p2;
wire  signed [15:0] mul_ln1118_fu_935_p0;
wire  signed [25:0] sext_ln1116_cast_fu_771_p1;
wire  signed [15:0] mul_ln1118_71_fu_942_p0;
wire  signed [15:0] mul_ln1118_72_fu_949_p0;
wire  signed [15:0] mul_ln1118_73_fu_956_p1;
reg   [5:0] ap_NS_fsm;
reg    ap_idle_pp1;
wire    ap_enable_pp1;
wire    regslice_both_data_V_data_V_U_apdone_blk;
wire   [15:0] data_V_data_V_TDATA_int;
wire    data_V_data_V_TVALID_int;
reg    data_V_data_V_TREADY_int;
wire    regslice_both_data_V_data_V_U_ack_in;
reg    ap_condition_250;
reg    ap_condition_326;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 6'd1;
#0 kernel_data_V_1143 = 16'd0;
#0 kernel_data_V_4 = 16'd0;
#0 kernel_data_V_7 = 16'd0;
#0 kernel_data_V_2144 = 16'd0;
#0 kernel_data_V_5 = 16'd0;
#0 kernel_data_V_8 = 16'd0;
#0 sX_3 = 32'd0;
#0 sY_3 = 32'd0;
#0 pY_3 = 32'd0;
#0 pX_3 = 32'd0;
#0 kernel_data_V_0 = 16'd0;
#0 kernel_data_V_3145 = 16'd0;
#0 kernel_data_V_6 = 16'd0;
#0 ap_enable_reg_pp1_iter0 = 1'b0;
#0 ap_enable_reg_pp1_iter3 = 1'b0;
#0 ap_enable_reg_pp1_iter1 = 1'b0;
#0 ap_enable_reg_pp1_iter2 = 1'b0;
end

conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s_w2_V #(
    .DataWidth( 60 ),
    .AddressRange( 9 ),
    .AddressWidth( 4 ))
w2_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(w2_V_address0),
    .ce0(w2_V_ce0),
    .q0(w2_V_q0)
);

conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s_line_buffbkb #(
    .DataWidth( 16 ),
    .AddressRange( 28 ),
    .AddressWidth( 5 ))
line_buffer_Array_V_0_0_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(5'd27),
    .ce0(line_buffer_Array_V_0_0_ce0),
    .we0(line_buffer_Array_V_0_0_we0),
    .d0(data_V_data_V_TDATA_int),
    .q0(line_buffer_Array_V_0_0_q0)
);

conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s_line_buffbkb #(
    .DataWidth( 16 ),
    .AddressRange( 28 ),
    .AddressWidth( 5 ))
line_buffer_Array_V_1142_0_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(5'd27),
    .ce0(line_buffer_Array_V_1142_0_ce0),
    .we0(line_buffer_Array_V_1142_0_we0),
    .d0(line_buffer_Array_V_0_0_q0),
    .q0(line_buffer_Array_V_1142_0_q0)
);

myproject_mul_mul_16s_16s_26_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 16 ),
    .dout_WIDTH( 26 ))
myproject_mul_mul_16s_16s_26_1_1_U1(
    .din0(mul_ln1118_fu_935_p0),
    .din1(trunc_ln56_reg_1064),
    .dout(mul_ln1118_fu_935_p2)
);

myproject_mul_mul_16s_16s_26_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 16 ),
    .dout_WIDTH( 26 ))
myproject_mul_mul_16s_16s_26_1_1_U2(
    .din0(mul_ln1118_71_fu_942_p0),
    .din1(tmp_82_reg_1069),
    .dout(mul_ln1118_71_fu_942_p2)
);

myproject_mul_mul_16s_16s_26_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 16 ),
    .dout_WIDTH( 26 ))
myproject_mul_mul_16s_16s_26_1_1_U3(
    .din0(mul_ln1118_72_fu_949_p0),
    .din1(tmp_83_reg_1074),
    .dout(mul_ln1118_72_fu_949_p2)
);

myproject_mul_mul_12s_16s_26_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 12 ),
    .din1_WIDTH( 16 ),
    .dout_WIDTH( 26 ))
myproject_mul_mul_12s_16s_26_1_1_U4(
    .din0(tmp_84_reg_1079),
    .din1(mul_ln1118_73_fu_956_p1),
    .dout(mul_ln1118_73_fu_956_p2)
);

regslice_both #(
    .DataWidth( 16 ))
regslice_both_data_V_data_V_U(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .data_in(data_V_data_V_TDATA),
    .vld_in(data_V_data_V_TVALID),
    .ack_in(regslice_both_data_V_data_V_U_ack_in),
    .data_out(data_V_data_V_TDATA_int),
    .vld_out(data_V_data_V_TVALID_int),
    .ack_out(data_V_data_V_TREADY_int),
    .apdone_blk(regslice_both_data_V_data_V_U_apdone_blk)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if ((~((io_acc_block_signal_op151 == 1'b0) & (1'd1 == and_ln289_4_reg_1041)) & (1'b1 == ap_CS_fsm_state9) & (icmp_ln79_fu_929_p2 == 1'd1))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp1_stage0_subdone) & (1'b1 == ap_CS_fsm_pp1_stage0) & (icmp_ln43_fu_565_p2 == 1'd1))) begin
            ap_enable_reg_pp1_iter0 <= 1'b0;
        end else if (((1'b1 == ap_CS_fsm_state4) & (1'd1 == and_ln289_4_fu_548_p2))) begin
            ap_enable_reg_pp1_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp1_stage0_subdone)) begin
            ap_enable_reg_pp1_iter1 <= ap_enable_reg_pp1_iter0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp1_stage0_subdone)) begin
            ap_enable_reg_pp1_iter2 <= ap_enable_reg_pp1_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp1_stage0_subdone)) begin
            ap_enable_reg_pp1_iter3 <= ap_enable_reg_pp1_iter2;
        end else if (((1'b1 == ap_CS_fsm_state4) & (1'd1 == and_ln289_4_fu_548_p2))) begin
            ap_enable_reg_pp1_iter3 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        start_once_reg <= 1'b0;
    end else begin
        if (((internal_ap_ready == 1'b0) & (real_start == 1'b1))) begin
            start_once_reg <= 1'b1;
        end else if ((internal_ap_ready == 1'b1)) begin
            start_once_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln194_fu_388_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        i_iw_0_i_i_i_i_reg_261 <= i_iw_fu_394_p2;
    end else if (((data_V_data_V_TVALID_int == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        i_iw_0_i_i_i_i_reg_261 <= 2'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((~((io_acc_block_signal_op151 == 1'b0) & (1'd1 == and_ln289_4_reg_1041)) & (icmp_ln79_fu_929_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state9))) begin
        indvar_flatten41_reg_249 <= add_ln79_reg_993;
    end else if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        indvar_flatten41_reg_249 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_condition_250)) begin
        if ((icmp_ln313_fu_842_p2 == 1'd1)) begin
            pX_3 <= 32'd0;
        end else if ((icmp_ln313_fu_842_p2 == 1'd0)) begin
            pX_3 <= add_ln326_fu_847_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_condition_326)) begin
        if ((icmp_ln317_fu_888_p2 == 1'd1)) begin
            pY_3 <= 32'd0;
        end else if ((icmp_ln317_fu_888_p2 == 1'd0)) begin
            pY_3 <= add_ln321_fu_893_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_condition_250)) begin
        if ((icmp_ln313_fu_842_p2 == 1'd1)) begin
            sX_3 <= 32'd0;
        end else if ((icmp_ln313_fu_842_p2 == 1'd0)) begin
            sX_3 <= select_ln328_fu_863_p3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp1_iter3 == 1'b1) & (icmp_ln43_reg_1055_pp1_iter2_reg == 1'd0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        tmp_data_0_V_738_reg_284 <= acc_0_V_fu_822_p2;
    end else if (((1'b1 == ap_CS_fsm_state4) & (1'd1 == and_ln289_4_fu_548_p2))) begin
        tmp_data_0_V_738_reg_284 <= 16'd2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp1_iter3 == 1'b1) & (icmp_ln43_reg_1055_pp1_iter2_reg == 1'd0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        tmp_data_1_V_736_reg_295 <= acc_1_V_fu_827_p2;
    end else if (((1'b1 == ap_CS_fsm_state4) & (1'd1 == and_ln289_4_fu_548_p2))) begin
        tmp_data_1_V_736_reg_295 <= 16'd65106;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp1_iter3 == 1'b1) & (icmp_ln43_reg_1055_pp1_iter2_reg == 1'd0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        tmp_data_2_V_734_reg_306 <= acc_2_V_fu_832_p2;
    end else if (((1'b1 == ap_CS_fsm_state4) & (1'd1 == and_ln289_4_fu_548_p2))) begin
        tmp_data_2_V_734_reg_306 <= 16'd65521;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp1_iter3 == 1'b1) & (icmp_ln43_reg_1055_pp1_iter2_reg == 1'd0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        tmp_data_3_V_732_reg_317 <= acc_3_V_fu_837_p2;
    end else if (((1'b1 == ap_CS_fsm_state4) & (1'd1 == and_ln289_4_fu_548_p2))) begin
        tmp_data_3_V_732_reg_317 <= 16'd65383;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (icmp_ln43_reg_1055 == 1'd0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        w_index40_reg_272 <= w_index_reg_1050;
    end else if (((1'b1 == ap_CS_fsm_state4) & (1'd1 == and_ln289_4_fu_548_p2))) begin
        w_index40_reg_272 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((data_V_data_V_TVALID_int == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        DataOut_V_8_reg_968 <= line_buffer_Array_V_0_0_q0;
        DataOut_V_reg_973 <= line_buffer_Array_V_1142_0_q0;
        add_ln79_reg_993 <= add_ln79_fu_382_p2;
        kernel_data_V_2144_load_reg_978 <= kernel_data_V_2144;
        kernel_data_V_5_load_reg_983 <= kernel_data_V_5;
        kernel_data_V_8_load_reg_988 <= kernel_data_V_8;
        tmp_data_0_V_reg_963 <= data_V_data_V_TDATA_int;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp1_iter3 == 1'b1) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        acc_0_V_reg_1104 <= acc_0_V_fu_822_p2;
        acc_1_V_reg_1110 <= acc_1_V_fu_827_p2;
        acc_2_V_reg_1116 <= acc_2_V_fu_832_p2;
        acc_3_V_reg_1122 <= acc_3_V_fu_837_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        and_ln289_4_reg_1041 <= and_ln289_4_fu_548_p2;
        icmp_ln289_4_reg_1024 <= icmp_ln289_4_fu_490_p2;
        icmp_ln289_reg_1014 <= icmp_ln289_fu_480_p2;
        kernel_data_V_2144 <= DataOut_V_reg_973;
        kernel_data_V_5 <= DataOut_V_8_reg_968;
        kernel_data_V_8 <= tmp_data_0_V_reg_963;
        pX_3_load_reg_1035 <= pX_3;
        pY_3_load_reg_1029 <= pY_3;
        sX_3_load_reg_1009 <= sX_3;
        sY_3_load_reg_1019 <= sY_3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        icmp_ln43_reg_1055 <= icmp_ln43_fu_565_p2;
        icmp_ln43_reg_1055_pp1_iter1_reg <= icmp_ln43_reg_1055;
        select_ln19_7_reg_1059 <= select_ln19_7_fu_729_p3;
        tmp_82_reg_1069 <= {{w2_V_q0[31:16]}};
        tmp_83_reg_1074 <= {{w2_V_q0[47:32]}};
        tmp_84_reg_1079 <= {{w2_V_q0[59:48]}};
        trunc_ln56_reg_1064 <= trunc_ln56_fu_737_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp1_stage0_11001)) begin
        icmp_ln43_reg_1055_pp1_iter2_reg <= icmp_ln43_reg_1055_pp1_iter1_reg;
        trunc_ln3_reg_1084 <= {{mul_ln1118_fu_935_p2[25:10]}};
        trunc_ln708_69_reg_1094 <= {{mul_ln1118_72_fu_949_p2[25:10]}};
        trunc_ln708_70_reg_1099 <= {{mul_ln1118_73_fu_956_p2[25:10]}};
        trunc_ln708_s_reg_1089 <= {{mul_ln1118_71_fu_942_p2[25:10]}};
    end
end

always @ (posedge ap_clk) begin
    if (((trunc_ln201_fu_400_p1 == 1'd0) & (icmp_ln194_fu_388_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        kernel_data_V_0 <= select_ln203_fu_404_p3;
        kernel_data_V_3145 <= select_ln203_12_fu_423_p3;
        kernel_data_V_6 <= select_ln203_13_fu_442_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln194_fu_388_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3) & (trunc_ln201_fu_400_p1 == 1'd1))) begin
        kernel_data_V_1143 <= select_ln203_fu_404_p3;
        kernel_data_V_4 <= select_ln203_12_fu_423_p3;
        kernel_data_V_7 <= select_ln203_13_fu_442_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((~((io_acc_block_signal_op151 == 1'b0) & (1'd1 == and_ln289_4_reg_1041)) & (1'b1 == ap_CS_fsm_state9) & (icmp_ln313_fu_842_p2 == 1'd1))) begin
        sY_3 <= ap_phi_mux_storemerge_i_i_phi_fu_331_p4;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        w_index_reg_1050 <= w_index_fu_559_p2;
    end
end

always @ (*) begin
    if ((~((io_acc_block_signal_op151 == 1'b0) & (1'd1 == and_ln289_4_reg_1041)) & (1'b1 == ap_CS_fsm_state9) & (icmp_ln79_fu_929_p2 == 1'd1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((real_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter2 == 1'b0) & (ap_enable_reg_pp1_iter1 == 1'b0) & (ap_enable_reg_pp1_iter3 == 1'b0) & (ap_enable_reg_pp1_iter0 == 1'b0))) begin
        ap_idle_pp1 = 1'b1;
    end else begin
        ap_idle_pp1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) & (icmp_ln313_fu_842_p2 == 1'd1))) begin
        if ((icmp_ln317_fu_888_p2 == 1'd1)) begin
            ap_phi_mux_storemerge_i_i_phi_fu_331_p4 = 32'd0;
        end else if ((icmp_ln317_fu_888_p2 == 1'd0)) begin
            ap_phi_mux_storemerge_i_i_phi_fu_331_p4 = select_ln323_fu_909_p3;
        end else begin
            ap_phi_mux_storemerge_i_i_phi_fu_331_p4 = 'bx;
        end
    end else begin
        ap_phi_mux_storemerge_i_i_phi_fu_331_p4 = 'bx;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp1_stage0) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (icmp_ln43_reg_1055 == 1'd0))) begin
        ap_phi_mux_w_index40_phi_fu_276_p4 = w_index_reg_1050;
    end else begin
        ap_phi_mux_w_index40_phi_fu_276_p4 = w_index40_reg_272;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        data_V_data_V_TDATA_blk_n = data_V_data_V_TVALID_int;
    end else begin
        data_V_data_V_TDATA_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((regslice_both_data_V_data_V_U_ack_in == 1'b1) & (data_V_data_V_TVALID == 1'b1))) begin
        data_V_data_V_TREADY = 1'b1;
    end else begin
        data_V_data_V_TREADY = 1'b0;
    end
end

always @ (*) begin
    if (((data_V_data_V_TVALID_int == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        data_V_data_V_TREADY_int = 1'b1;
    end else begin
        data_V_data_V_TREADY_int = 1'b0;
    end
end

always @ (*) begin
    if ((~((io_acc_block_signal_op151 == 1'b0) & (1'd1 == and_ln289_4_reg_1041)) & (1'b1 == ap_CS_fsm_state9) & (icmp_ln79_fu_929_p2 == 1'd1))) begin
        internal_ap_ready = 1'b1;
    end else begin
        internal_ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((data_V_data_V_TVALID_int == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        line_buffer_Array_V_0_0_ce0 = 1'd1;
    end else begin
        line_buffer_Array_V_0_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((data_V_data_V_TVALID_int == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        line_buffer_Array_V_0_0_we0 = 1'd1;
    end else begin
        line_buffer_Array_V_0_0_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((data_V_data_V_TVALID_int == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        line_buffer_Array_V_1142_0_ce0 = 1'd1;
    end else begin
        line_buffer_Array_V_1142_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((data_V_data_V_TVALID_int == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        line_buffer_Array_V_1142_0_we0 = 1'd1;
    end else begin
        line_buffer_Array_V_1142_0_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (start_full_n == 1'b0))) begin
        real_start = 1'b0;
    end else begin
        real_start = ap_start;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) & (1'd1 == and_ln289_4_reg_1041))) begin
        res_V_data_0_V_blk_n = res_V_data_0_V_full_n;
    end else begin
        res_V_data_0_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((io_acc_block_signal_op151 == 1'b0) & (1'd1 == and_ln289_4_reg_1041)) & (1'b1 == ap_CS_fsm_state9) & (1'd1 == and_ln289_4_reg_1041))) begin
        res_V_data_0_V_write = 1'b1;
    end else begin
        res_V_data_0_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) & (1'd1 == and_ln289_4_reg_1041))) begin
        res_V_data_1_V_blk_n = res_V_data_1_V_full_n;
    end else begin
        res_V_data_1_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((io_acc_block_signal_op151 == 1'b0) & (1'd1 == and_ln289_4_reg_1041)) & (1'b1 == ap_CS_fsm_state9) & (1'd1 == and_ln289_4_reg_1041))) begin
        res_V_data_1_V_write = 1'b1;
    end else begin
        res_V_data_1_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) & (1'd1 == and_ln289_4_reg_1041))) begin
        res_V_data_2_V_blk_n = res_V_data_2_V_full_n;
    end else begin
        res_V_data_2_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((io_acc_block_signal_op151 == 1'b0) & (1'd1 == and_ln289_4_reg_1041)) & (1'b1 == ap_CS_fsm_state9) & (1'd1 == and_ln289_4_reg_1041))) begin
        res_V_data_2_V_write = 1'b1;
    end else begin
        res_V_data_2_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) & (1'd1 == and_ln289_4_reg_1041))) begin
        res_V_data_3_V_blk_n = res_V_data_3_V_full_n;
    end else begin
        res_V_data_3_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((io_acc_block_signal_op151 == 1'b0) & (1'd1 == and_ln289_4_reg_1041)) & (1'b1 == ap_CS_fsm_state9) & (1'd1 == and_ln289_4_reg_1041))) begin
        res_V_data_3_V_write = 1'b1;
    end else begin
        res_V_data_3_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (real_start == 1'b1))) begin
        start_write = 1'b1;
    end else begin
        start_write = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        w2_V_ce0 = 1'b1;
    end else begin
        w2_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((data_V_data_V_TVALID_int == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((icmp_ln194_fu_388_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((1'b1 == ap_CS_fsm_state4) & (1'd1 == and_ln289_4_fu_548_p2))) begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end
        end
        ap_ST_fsm_pp1_stage0 : begin
            if (~((ap_enable_reg_pp1_iter2 == 1'b0) & (1'b0 == ap_block_pp1_stage0_subdone) & (ap_enable_reg_pp1_iter3 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end else if (((ap_enable_reg_pp1_iter2 == 1'b0) & (1'b0 == ap_block_pp1_stage0_subdone) & (ap_enable_reg_pp1_iter3 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end
        end
        ap_ST_fsm_state9 : begin
            if ((~((io_acc_block_signal_op151 == 1'b0) & (1'd1 == and_ln289_4_reg_1041)) & (1'b1 == ap_CS_fsm_state9) & (icmp_ln79_fu_929_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else if ((~((io_acc_block_signal_op151 == 1'b0) & (1'd1 == and_ln289_4_reg_1041)) & (icmp_ln79_fu_929_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state9))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign acc_0_V_fu_822_p2 = (tmp_data_0_V_738_reg_284 + trunc_ln3_reg_1084);

assign acc_1_V_fu_827_p2 = (tmp_data_1_V_736_reg_295 + trunc_ln708_s_reg_1089);

assign acc_2_V_fu_832_p2 = (tmp_data_2_V_734_reg_306 + trunc_ln708_69_reg_1094);

assign acc_3_V_fu_837_p2 = (tmp_data_3_V_732_reg_317 + trunc_ln708_70_reg_1099);

assign add_ln321_fu_893_p2 = (pY_3_load_reg_1029 + 32'd1);

assign add_ln323_fu_904_p2 = (sY_3_load_reg_1019 + 32'd1);

assign add_ln326_fu_847_p2 = (pX_3_load_reg_1035 + 32'd1);

assign add_ln328_fu_858_p2 = (sX_3_load_reg_1009 + 32'd1);

assign add_ln79_fu_382_p2 = (indvar_flatten41_reg_249 + 10'd1);

assign and_ln289_3_fu_542_p2 = (icmp_ln289_6_fu_530_p2 & icmp_ln289_5_fu_510_p2);

assign and_ln289_4_fu_548_p2 = (and_ln289_fu_536_p2 & and_ln289_3_fu_542_p2);

assign and_ln289_fu_536_p2 = (icmp_ln289_fu_480_p2 & icmp_ln289_4_fu_490_p2);

assign ap_CS_fsm_pp1_stage0 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd5];

assign ap_block_pp1_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp1_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp1_stage0_subdone = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state1 = ((real_start == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_block_state5_pp1_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp1_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp1_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp1_stage0_iter3 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state9 = ((io_acc_block_signal_op151 == 1'b0) & (1'd1 == and_ln289_4_reg_1041));
end

always @ (*) begin
    ap_condition_250 = (~((io_acc_block_signal_op151 == 1'b0) & (1'd1 == and_ln289_4_reg_1041)) & (1'b1 == ap_CS_fsm_state9));
end

always @ (*) begin
    ap_condition_326 = (~((io_acc_block_signal_op151 == 1'b0) & (1'd1 == and_ln289_4_reg_1041)) & (1'b1 == ap_CS_fsm_state9) & (icmp_ln313_fu_842_p2 == 1'd1));
end

assign ap_enable_pp1 = (ap_idle_pp1 ^ 1'b1);

assign ap_ready = internal_ap_ready;

assign i_iw_fu_394_p2 = (i_iw_0_i_i_i_i_reg_261 + 2'd1);

assign icmp_ln194_fu_388_p2 = ((i_iw_0_i_i_i_i_reg_261 == 2'd2) ? 1'b1 : 1'b0);

assign icmp_ln19_1_fu_589_p2 = ((w_index40_reg_272 == 4'd1) ? 1'b1 : 1'b0);

assign icmp_ln19_2_fu_595_p2 = ((w_index40_reg_272 == 4'd2) ? 1'b1 : 1'b0);

assign icmp_ln19_3_fu_601_p2 = ((w_index40_reg_272 == 4'd3) ? 1'b1 : 1'b0);

assign icmp_ln19_4_fu_607_p2 = ((w_index40_reg_272 == 4'd4) ? 1'b1 : 1'b0);

assign icmp_ln19_5_fu_613_p2 = ((w_index40_reg_272 == 4'd5) ? 1'b1 : 1'b0);

assign icmp_ln19_6_fu_619_p2 = ((w_index40_reg_272 == 4'd6) ? 1'b1 : 1'b0);

assign icmp_ln19_7_fu_625_p2 = ((w_index40_reg_272 == 4'd7) ? 1'b1 : 1'b0);

assign icmp_ln19_fu_583_p2 = ((w_index40_reg_272 == 4'd0) ? 1'b1 : 1'b0);

assign icmp_ln289_4_fu_490_p2 = ((sY_3 == 32'd2) ? 1'b1 : 1'b0);

assign icmp_ln289_5_fu_510_p2 = (($signed(tmp_fu_500_p4) > $signed(31'd0)) ? 1'b1 : 1'b0);

assign icmp_ln289_6_fu_530_p2 = (($signed(tmp_2_fu_520_p4) > $signed(31'd0)) ? 1'b1 : 1'b0);

assign icmp_ln289_fu_480_p2 = ((sX_3 == 32'd2) ? 1'b1 : 1'b0);

assign icmp_ln313_fu_842_p2 = ((pX_3_load_reg_1035 == 32'd27) ? 1'b1 : 1'b0);

assign icmp_ln317_fu_888_p2 = ((pY_3_load_reg_1029 == 32'd27) ? 1'b1 : 1'b0);

assign icmp_ln43_fu_565_p2 = ((ap_phi_mux_w_index40_phi_fu_276_p4 == 4'd8) ? 1'b1 : 1'b0);

assign icmp_ln79_fu_929_p2 = ((indvar_flatten41_reg_249 == 10'd783) ? 1'b1 : 1'b0);

assign io_acc_block_signal_op151 = (res_V_data_3_V_full_n & res_V_data_2_V_full_n & res_V_data_1_V_full_n & res_V_data_0_V_full_n);

assign mul_ln1118_71_fu_942_p0 = sext_ln1116_cast_fu_771_p1;

assign mul_ln1118_72_fu_949_p0 = sext_ln1116_cast_fu_771_p1;

assign mul_ln1118_73_fu_956_p1 = sext_ln1116_cast_fu_771_p1;

assign mul_ln1118_fu_935_p0 = sext_ln1116_cast_fu_771_p1;

assign or_ln19_1_fu_653_p2 = (icmp_ln19_5_fu_613_p2 | icmp_ln19_4_fu_607_p2);

assign or_ln19_2_fu_667_p2 = (icmp_ln19_3_fu_601_p2 | icmp_ln19_2_fu_595_p2);

assign or_ln19_3_fu_681_p2 = (icmp_ln19_fu_583_p2 | icmp_ln19_1_fu_589_p2);

assign or_ln19_4_fu_695_p2 = (or_ln19_fu_639_p2 | or_ln19_1_fu_653_p2);

assign or_ln19_5_fu_709_p2 = (or_ln19_3_fu_681_p2 | or_ln19_2_fu_667_p2);

assign or_ln19_6_fu_723_p2 = (or_ln19_5_fu_709_p2 | or_ln19_4_fu_695_p2);

assign or_ln19_fu_639_p2 = (icmp_ln19_7_fu_625_p2 | icmp_ln19_6_fu_619_p2);

assign res_V_data_0_V_din = acc_0_V_reg_1104;

assign res_V_data_1_V_din = acc_1_V_reg_1110;

assign res_V_data_2_V_din = acc_2_V_reg_1116;

assign res_V_data_3_V_din = acc_3_V_reg_1122;

assign select_ln19_1_fu_645_p3 = ((icmp_ln19_5_fu_613_p2[0:0] === 1'b1) ? kernel_data_V_5 : kernel_data_V_4);

assign select_ln19_2_fu_659_p3 = ((icmp_ln19_3_fu_601_p2[0:0] === 1'b1) ? kernel_data_V_3145 : kernel_data_V_2144);

assign select_ln19_3_fu_673_p3 = ((icmp_ln19_1_fu_589_p2[0:0] === 1'b1) ? kernel_data_V_1143 : kernel_data_V_0);

assign select_ln19_4_fu_687_p3 = ((or_ln19_fu_639_p2[0:0] === 1'b1) ? select_ln19_fu_631_p3 : select_ln19_1_fu_645_p3);

assign select_ln19_5_fu_701_p3 = ((or_ln19_2_fu_667_p2[0:0] === 1'b1) ? select_ln19_2_fu_659_p3 : select_ln19_3_fu_673_p3);

assign select_ln19_6_fu_715_p3 = ((or_ln19_4_fu_695_p2[0:0] === 1'b1) ? select_ln19_4_fu_687_p3 : select_ln19_5_fu_701_p3);

assign select_ln19_7_fu_729_p3 = ((or_ln19_6_fu_723_p2[0:0] === 1'b1) ? select_ln19_6_fu_715_p3 : kernel_data_V_8);

assign select_ln19_fu_631_p3 = ((icmp_ln19_7_fu_625_p2[0:0] === 1'b1) ? kernel_data_V_7 : kernel_data_V_6);

assign select_ln203_12_fu_423_p3 = ((trunc_ln201_fu_400_p1[0:0] === 1'b1) ? kernel_data_V_5_load_reg_983 : kernel_data_V_4);

assign select_ln203_13_fu_442_p3 = ((trunc_ln201_fu_400_p1[0:0] === 1'b1) ? kernel_data_V_8_load_reg_988 : kernel_data_V_7);

assign select_ln203_fu_404_p3 = ((trunc_ln201_fu_400_p1[0:0] === 1'b1) ? kernel_data_V_2144_load_reg_978 : kernel_data_V_1143);

assign select_ln323_fu_909_p3 = ((icmp_ln289_4_reg_1024[0:0] === 1'b1) ? 32'd2 : add_ln323_fu_904_p2);

assign select_ln328_fu_863_p3 = ((icmp_ln289_reg_1014[0:0] === 1'b1) ? 32'd2 : add_ln328_fu_858_p2);

assign sext_ln1116_cast_fu_771_p1 = $signed(select_ln19_7_reg_1059);

assign start_out = real_start;

assign tmp_2_fu_520_p4 = {{pX_3[31:1]}};

assign tmp_fu_500_p4 = {{pY_3[31:1]}};

assign trunc_ln201_fu_400_p1 = i_iw_0_i_i_i_i_reg_261[0:0];

assign trunc_ln56_fu_737_p1 = w2_V_q0[15:0];

assign w2_V_address0 = zext_ln56_fu_554_p1;

assign w_index_fu_559_p2 = (4'd1 + ap_phi_mux_w_index40_phi_fu_276_p4);

assign zext_ln56_fu_554_p1 = ap_phi_mux_w_index40_phi_fu_276_p4;

endmodule //conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s