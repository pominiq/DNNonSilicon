-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_w9_V_rom is 
    generic(
             DWIDTH     : integer := 75; 
             AWIDTH     : integer := 6; 
             MEM_SIZE    : integer := 64
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_w9_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "001000000011111111111101101111111110110101100000001000111011111111101001011", 
    1 => "000010100101111110010000011111111001101010100000000001110011111111011001101", 
    2 => "001101001001111111001100001111111111010001011111110100101011111111010011100", 
    3 => "000001011101111110101100110111111110010110111111111010110010000000001100000", 
    4 => "111001011110000001010101001000000011100100111111111101000000000000001101110", 
    5 => "110111111011111110110010110111111011001110100000001001010111111111011001011", 
    6 => "111101000110000001011001111111111111110110011111101010010011111111100000001", 
    7 => "111001010101111110100111110000000010110100100000000110101011111111111111110", 
    8 => "000101100110000000011011111111111110100011111111110100010110000000010011100", 
    9 => "001110110010000000100111100111111111011011011111111110100111111111100001011", 
    10 => "111101110101111110010110101000000000011110000000000111001110000000111011001", 
    11 => "110011111100000000101000011111111101001100111111110011000010000000000001010", 
    12 => "111100010000000001000011000000000011100010111111111011010100000000001110010", 
    13 => "111010010101111111111000000111110111100001011111110100111000000000000111100", 
    14 => "110110010000000001001000111111111110111111111111111011101101111111111101010", 
    15 => "110111100001111111100110000111111011011111000000001110110010000000000100000", 
    16 => "111001000101111111110110001111111111110010000000001101100100000000110011001", 
    17 => "110010100111111110100001100000000001000101000000000010110111111111001011111", 
    18 => "001111010000000000111000101000000001010111111111110001111000000000001001100", 
    19 => "000100001100000000001111101111111100011100100000011001111001111110111000101", 
    20 => "000100011000000000110000110000000000001111111111111001111100000001011011101", 
    21 => "101100110001111110111010001000000001111010111111111010111101111110111001011", 
    22 => "111011001001111111011010000111111111011000111111111110001110000000001101001", 
    23 => "110101101100000000100001000000000000011010011111101111111100000000011110011", 
    24 => "000010110100000001000110001111111110000010100000010010100110000000010010110", 
    25 => "001001011010000000101001010111111101001011111111101011000011111111111100100", 
    26 => "111101011111111110111110000000000011100000111111101111100000000000000000111", 
    27 => "100001110000000001010101010111111100110100100000001010100111111111010100100", 
    28 => "111001000001111111011111111000000001001011100000001000111111111111011101011", 
    29 => "000010101001111111111010010000000011100111100000000110100111111111001110110", 
    30 => "001001100101111110101001000000000010001100011111111001011101111111000110010", 
    31 => "001000000101111111111100011111111110001011100000000101110111111111010100110", 
    32 => "110100100101111111101001101111111101111101111111111010110111111111111111111", 
    33 => "101001111010000000010111010111111111010000100000001001000011111111110111011", 
    34 => "000100101011111111110110000000000010111000111111110110100001111111110111101", 
    35 => "010100000101111111011111100000000001110100111111101100100101111111011110111", 
    36 => "000100111001111111110101010111111110110110111111100011000001111110111111110", 
    37 => "000101101010000001001110111111111100101011100000001000101011111111101001001", 
    38 => "111010100111111111010011011111111110110111011111100100000100000000011011001", 
    39 => "101001000010000000111100000111111101110100011111111101100111111111110001100", 
    40 => "110001010100000000100101010000000010110000011111111110110001111111100110010", 
    41 => "001011101101111111001011100000000000111101011111111110110011111101111100101", 
    42 => "000101011010000000100010000111111001111110000000000100100011111111000011001", 
    43 => "001100100100000000110001000000000000000001011111110110001110000000001101100", 
    44 => "101111101100000000011110010111111100011110111111111111101000000001000010100", 
    45 => "110101110010000000000001001000000101110100111111110011111001111111100111011", 
    46 => "000000011101111111100010010000000100110111011111110111111010000000111100000", 
    47 => "010011011110000000011111100111111011110101100000000010010000000000010110011", 
    48 => "001001000101111111000100110000000000010001000000000000111111111111100100110", 
    49 => "000110110111111111100110001000000011000110100000010011001110000000010011101", 
    50 => "111001001001111110111011100111111101111011111111111111100111111111010111010", 
    51 => "101000101001111111010101101111111111010100000000001011101100000000010110110", 
    52 => "111100111101111110111000100111111110000000011111111001011111111111010101011", 
    53 => "010010100010000000000010100111111110111111011111111101111101111110111101000", 
    54 => "110000101000000000010001111111111010110010011111101011101110000001001111000", 
    55 => "111001001101111110100101110000000010010010100000000000001000000000100110110", 
    56 => "101001010011111111101110100111111101110100111111111011101101111111110000110", 
    57 => "110101110001111111000101101000000100011001100000010001100111111110000110111", 
    58 => "001010010010000000000001111111111111100011100000001111011111111111111011100", 
    59 => "110010001110000000010001001000000001011011111111101111010000000000111110111", 
    60 => "001000010000000000100111001111111111001000011111111000001110000001000101110", 
    61 => "111000100100000000010001010111111101100110111111110110111111111111110100101", 
    62 => "111101100010000000111001000111111100010111100000000000000100000001010101001", 
    63 => "110101001001111110111001101000000011001001000000010010110000000000100011011" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_w9_V is
    generic (
        DataWidth : INTEGER := 75;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_w9_V is
    component dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_w9_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_w9_V_rom_U :  component dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config9_s_w9_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

