// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1 ns / 1 ps
(* rom_style = "distributed" *) module conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s_w2_V_rom (
addr0, ce0, q0, clk);

parameter DWIDTH = 60;
parameter AWIDTH = 4;
parameter MEM_SIZE = 9;

input[AWIDTH-1:0] addr0;
input ce0;
output reg[DWIDTH-1:0] q0;
input clk;

(* ram_style = "distributed" *)reg [DWIDTH-1:0] ram[0:MEM_SIZE-1];

initial begin
    $readmemh("./conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s_w2_V_rom.dat", ram);
end



always @(posedge clk)  
begin 
    if (ce0) 
    begin
        q0 <= ram[addr0];
    end
end



endmodule

`timescale 1 ns / 1 ps
module conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s_w2_V(
    reset,
    clk,
    address0,
    ce0,
    q0);

parameter DataWidth = 32'd60;
parameter AddressRange = 32'd9;
parameter AddressWidth = 32'd4;
input reset;
input clk;
input[AddressWidth - 1:0] address0;
input ce0;
output[DataWidth - 1:0] q0;



conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s_w2_V_rom conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s_w2_V_rom_U(
    .clk( clk ),
    .addr0( address0 ),
    .ce0( ce0 ),
    .q0( q0 ));

endmodule
