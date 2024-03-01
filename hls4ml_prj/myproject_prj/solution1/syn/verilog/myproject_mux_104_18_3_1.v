// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================

`timescale 1ns/1ps

module myproject_mux_104_18_3_1 #(
parameter
    ID                = 0,
    NUM_STAGE         = 1,
    din0_WIDTH       = 32,
    din1_WIDTH       = 32,
    din2_WIDTH       = 32,
    din3_WIDTH       = 32,
    din4_WIDTH       = 32,
    din5_WIDTH       = 32,
    din6_WIDTH       = 32,
    din7_WIDTH       = 32,
    din8_WIDTH       = 32,
    din9_WIDTH       = 32,
    din10_WIDTH         = 32,
    dout_WIDTH            = 32
)(
    input             clk,
    input             reset,
    input             ce,
    input  [17 : 0]     din0,
    input  [17 : 0]     din1,
    input  [17 : 0]     din2,
    input  [17 : 0]     din3,
    input  [17 : 0]     din4,
    input  [17 : 0]     din5,
    input  [17 : 0]     din6,
    input  [17 : 0]     din7,
    input  [17 : 0]     din8,
    input  [17 : 0]     din9,
    input  [3 : 0]    din10,
    output [17 : 0]   dout);

// puts internal signals
wire [3 : 0]     sel;
// level 1 signals
wire [17 : 0]         mux_1_0;
wire [17 : 0]         mux_1_1;
wire [17 : 0]         mux_1_2;
wire [17 : 0]         mux_1_3;
wire [17 : 0]         mux_1_4;
// level 2 signals
reg  [17 : 0]         mux_2_0_reg;
reg  [17 : 0]         mux_2_1_reg;
reg  [17 : 0]         mux_2_2_reg;
reg  [3 : 2]      sel2;
// level 3 signals
reg  [17 : 0]         mux_3_0_reg;
reg  [17 : 0]         mux_3_1_reg;
reg  [3 : 3]      sel3;
// level 4 signals
wire [17 : 0]         mux_4_0;

assign sel = din10;

// Generate level 1 logic
assign mux_1_0 = (sel[0] == 0)? din0 : din1;
assign mux_1_1 = (sel[0] == 0)? din2 : din3;
assign mux_1_2 = (sel[0] == 0)? din4 : din5;
assign mux_1_3 = (sel[0] == 0)? din6 : din7;
assign mux_1_4 = (sel[0] == 0)? din8 : din9;

// Generate level 2 logic
always @(posedge clk) begin
    if (reset == 1)
        sel2 <= 0;
    else if (ce == 1)
        sel2 <= sel[3 : 2];
end

always @(posedge clk) begin
    if (reset == 1)
        mux_2_0_reg <= 0;
    else if (ce == 1) begin
        if (sel[1] == 0)
            mux_2_0_reg <= mux_1_0;
        else
            mux_2_0_reg <= mux_1_1;
    end
end

always @(posedge clk) begin
    if (reset == 1)
        mux_2_1_reg <= 0;
    else if (ce == 1) begin
        if (sel[1] == 0)
            mux_2_1_reg <= mux_1_2;
        else
            mux_2_1_reg <= mux_1_3;
    end
end

always @(posedge clk) begin
    if (reset == 1)
        mux_2_2_reg <= 0;
    else if (ce == 1) begin
        mux_2_2_reg <= mux_1_4;
    end
end


// Generate level 3 logic
always @(posedge clk) begin
    if (reset == 1)
        sel3 <= 0;
    else if (ce == 1)
        sel3 <= sel2[3 : 3];
end

always @(posedge clk) begin
    if (reset == 1)
        mux_3_0_reg <= 0;
    else if (ce == 1) begin
        if (sel2[2] == 0)
            mux_3_0_reg <= mux_2_0_reg;
        else
            mux_3_0_reg <= mux_2_1_reg;
    end
end

always @(posedge clk) begin
    if (reset == 1)
        mux_3_1_reg <= 0;
    else if (ce == 1) begin
        mux_3_1_reg <= mux_2_2_reg;
    end
end


// Generate level 4 logic
assign mux_4_0 = (sel3[3] == 0)? mux_3_0_reg : mux_3_1_reg;

// output logic
assign dout = mux_4_0;

endmodule
