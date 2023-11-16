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
        ram[0] = "0b000111100111";
        ram[1] = "0b001001000000";
        ram[2] = "0b010110000001";
        ram[3] = "0b111000011011";
        ram[4] = "0b000000010011";
        ram[5] = "0b001011011111";
        ram[6] = "0b001101100101";
        ram[7] = "0b001110000100";
        ram[8] = "0b001011010010";
        ram[9] = "0b001100110000";
        ram[10] = "0b000101010110";
        ram[11] = "0b110010100010";
        ram[12] = "0b001001100111";
        ram[13] = "0b000000011100";
        ram[14] = "0b101001100110";
        ram[15] = "0b001001011010";
        ram[16] = "0b001110111011";
        ram[17] = "0b001001011000";
        ram[18] = "0b010000000011";
        ram[19] = "0b001010010010";
        ram[20] = "0b001011100000";
        ram[21] = "0b000111000111";
        ram[22] = "0b111111110110";
        ram[23] = "0b000111111111";
        ram[24] = "0b110000000000";
        ram[25] = "0b110100001011";
        ram[26] = "0b000000010101";
        ram[27] = "0b111111101110";
        ram[28] = "0b001100000110";
        ram[29] = "0b001110000101";
        ram[30] = "0b101010110010";
        ram[31] = "0b000011100101";
        ram[32] = "0b111110000011";
        ram[33] = "0b110101100000";
        ram[34] = "0b110010001010";
        ram[35] = "0b110000011101";


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
