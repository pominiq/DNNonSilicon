// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_s_w5_V_H__
#define __conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_s_w5_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_s_w5_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 1145;
  static const unsigned AddressRange = 4;
  static const unsigned AddressWidth = 2;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_s_w5_V_ram) {
        ram[0] = "0b00001100100000000100101010000000011001000000000100001101000000000111001110000000100011101111111110100101100000000111011101111111111010100000000010010010100000000100100000000001000111110111111111010110100000000011101001111111111110000111111101011100000000000011000010000000000101100111111110000111000000001110101111111111111111101000000000010010000000000111111101111111001100001111111111111001100000000111101010000001000000110000000001011010100000000001101000000000000000011111111111110010100000001000110100000000011011000000000000110101000000001011100110000000000110101000000011001010000000000100001011111111001011110000000010010100111111111000000011111111010001010111111111100110100000000010101010000000000001101111111110010100100000000010101010000000000110000000000001101000000000000101010100000000000110001000000010000100100000000100100001111111111101100111111101001010011111110011001001111111001111100000000001010011100000010011010010000000001110000111111110100000100000010010001001111111101000011000000000110010000000001011101100000000010001011000000001100000100000001000111110000000010000001111111110000110111111111011110001111110111101110";
        ram[1] = "0b00010101011111110010100101111111011010100111111111110010100000000100110110000000110011111111111111001111000000010010010101111111100000001000000000111111100000000100011111111111010111100000000110110100100000010000111111111110101001110000000000110100111111101111011100000000010010010000000000001001111111111000010111111111101010011111111101100000011111111011000101111111111011111111111101111000100000001010110100000000100001100111111100000101011111101010110011111111000011110111111000110110011111100101001101111111111011100111110111101000111111101101111101111111110001001111111110101001111111110001101101111110011110000000000100110001100000010110110000000001011100101000000000111010100000000101010001111111011110101000000010001010111111111110100110000000001101001000000000100110000000001111000000000001011010111000000001111110011111110100100011111111110000000111111100001011011111110100000001111111111101110000000101100011000000011101100100000000010101000111111010011101111111111110010001111111110010001000000101001001100000001000100001111111011010110000000001010010011111110101011011111111011100100111111101101101011111110111101000000000010100001";
        ram[2] = "0b10000011111111111010110000000000100110101111111110111011000000001001100110000000000110000111111110000110100000010100010000000000111010000000000011100010100000000110010111111110001111011000000010100101100000001001001001111111101000001000000010111101000000001011011010000000000001000111111011111001011111101011001110000000010001111111111011000001011111110100000011111111001111110111111110100100011111111001001000000000001010010000000100011010000000001000101011111111110111000111111100101111111111101100010110000000010110111111111101101000011111111101011100000000000100110111111100111011000000010000000000000010010100000111111110110011000000000100011101111111010010100000000001011111100000000110110000000000001011010111111101100110011111111010101000000000111111001000000000011001111111110100100100000000111001010000000001010111111111111000101101111111101100011111111011000111011111110001110101111110101110011000000010000101111111111000100110000000011111111000000100111000011111111000100001111111101010011000000000111111000000000110111000000000011111010000000100010011100000010000100000000000100101010111111100011000100000001010110110000001001110000";
        ram[3] = "0b00000101000000001101011000000000001111101000000010001100000000000110000001111111110101111111111101111101111111110110001100000000011010111000000100000111000000000101110010000001001000100111111100100101100000001010010110000001010000000111111111100011100000000000001111111111110110010111111110111101100000001010001100000001000011101000000001010011000000010111111110000000010001010000000001101110100000000010010110000000000000010000000001111000000000001000011110000000001100001000000011001111000000001100010010000000101110001000000001010101000000000111010111111111110010110000000011110011100000000100010111111111000111000111111110101110011111110011010101111111001101011000000000010011111111111100111000000000001111101111111001111010111111111101010001111111111000111000000001000100100000001001000001111110101100010111111111111100000000010000011110000000011010000111111111101110100000000001001111111111000010110000000010100110111111111001011110000000001101100111111110101110100000000110011010000000100001011111111101110101111111110011111000000000010111011111111111010000100000000011101010000000000111000111111011111101011111111011101111111110111101110";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_s_w5_V) {


static const unsigned DataWidth = 1145;
static const unsigned AddressRange = 4;
static const unsigned AddressWidth = 2;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_s_w5_V_ram* meminst;


SC_CTOR(conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_s_w5_V) {
meminst = new conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_s_w5_V_ram("conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_s_w5_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_8u_config5_s_w5_V() {
    delete meminst;
}


};//endmodule
#endif