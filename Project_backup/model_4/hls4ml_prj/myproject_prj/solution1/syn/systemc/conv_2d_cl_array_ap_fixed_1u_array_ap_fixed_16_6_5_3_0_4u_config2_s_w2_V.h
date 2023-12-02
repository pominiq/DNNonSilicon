// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s_w2_V_H__
#define __conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s_w2_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s_w2_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 12;
  static const unsigned AddressRange = 36;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s_w2_V_ram) {
        ram[0] = "0b001011111010";
        ram[1] = "0b000100111111";
        ram[2] = "0b110001000001";
        ram[3] = "0b001001100011";
        ram[4] = "0b000101101001";
        ram[5] = "0b101101110000";
        ram[6] = "0b001100001101";
        ram[7] = "0b000100100001";
        ram[8] = "0b111101100010";
        ram[9] = "0b110111110110";
        ram[10] = "0b101000101101";
        ram[11] = "0b110000010111";
        ram[12] = "0b001000111001";
        ram[13] = "0b111010011111";
        ram[14] = "0b001010000000";
        ram[15] = "0b010101001101";
        ram[16] = "0b010001111110";
        ram[17] = "0b010000011010";
        ram[18] = "0b001010001010";
        ram[19] = "0b001100010000";
        ram[20] = "0b010001111001";
        ram[21] = "0b110000000001";
        ram[22] = "0b000111000001";
        ram[23] = "0b001011000110";
        ram[24] = "0b101010010110";
        ram[25] = "0b101111001010";
        ram[26] = "0b100111010100";
        ram[27] = "0b101011111100";
        ram[28] = "0b111100111101";
        ram[29] = "0b011100011100";
        ram[30] = "0b101001010000";
        ram[31] = "0b001001110111";
        ram[32] = "0b001010101100";
        ram[33] = "0b000110000011";
        ram[34] = "0b001010000011";
        ram[35] = "0b001010011101";


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


SC_MODULE(conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s_w2_V) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 36;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s_w2_V_ram* meminst;


SC_CTOR(conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s_w2_V) {
meminst = new conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s_w2_V_ram("conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s_w2_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_2d_cl_array_ap_fixed_1u_array_ap_fixed_16_6_5_3_0_4u_config2_s_w2_V() {
    delete meminst;
}


};//endmodule
#endif
