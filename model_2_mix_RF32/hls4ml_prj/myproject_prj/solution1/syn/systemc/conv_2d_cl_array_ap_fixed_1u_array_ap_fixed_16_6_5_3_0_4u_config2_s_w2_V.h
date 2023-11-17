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
        ram[0] = "0b001110111100";
        ram[1] = "0b010000000101";
        ram[2] = "0b000001001000";
        ram[3] = "0b000100011000";
        ram[4] = "0b000000101011";
        ram[5] = "0b111000111011";
        ram[6] = "0b000001100111";
        ram[7] = "0b001010010001";
        ram[8] = "0b001110110010";
        ram[9] = "0b110001101100";
        ram[10] = "0b000100000000";
        ram[11] = "0b001101110011";
        ram[12] = "0b101100101110";
        ram[13] = "0b000001111001";
        ram[14] = "0b000101100000";
        ram[15] = "0b000001101101";
        ram[16] = "0b001100000101";
        ram[17] = "0b001001100011";
        ram[18] = "0b001011111110";
        ram[19] = "0b000011010000";
        ram[20] = "0b101101110111";
        ram[21] = "0b001000110001";
        ram[22] = "0b000000011100";
        ram[23] = "0b110100100110";
        ram[24] = "0b010011000101";
        ram[25] = "0b111011100100";
        ram[26] = "0b111010000100";
        ram[27] = "0b000100001011";
        ram[28] = "0b101111111101";
        ram[29] = "0b110001010001";
        ram[30] = "0b001100101111";
        ram[31] = "0b000100100101";
        ram[32] = "0b111010110111";
        ram[33] = "0b000011000110";
        ram[34] = "0b001001001100";
        ram[35] = "0b010000001100";


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
