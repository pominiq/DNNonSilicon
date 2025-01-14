-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.NUMERIC_STD.all;

entity myproject_mux_104_18_3_1 is
generic (
    ID            :integer := 0;
    NUM_STAGE     :integer := 1;
    din0_WIDTH       :integer := 32;
    din1_WIDTH       :integer := 32;
    din2_WIDTH       :integer := 32;
    din3_WIDTH       :integer := 32;
    din4_WIDTH       :integer := 32;
    din5_WIDTH       :integer := 32;
    din6_WIDTH       :integer := 32;
    din7_WIDTH       :integer := 32;
    din8_WIDTH       :integer := 32;
    din9_WIDTH       :integer := 32;
    din10_WIDTH       :integer := 32;
    dout_WIDTH        :integer := 32);
port (
    clk    :in  std_logic;
    reset  :in  std_logic;
    ce     :in  std_logic;
    din0   :in  std_logic_vector(17 downto 0);
    din1   :in  std_logic_vector(17 downto 0);
    din2   :in  std_logic_vector(17 downto 0);
    din3   :in  std_logic_vector(17 downto 0);
    din4   :in  std_logic_vector(17 downto 0);
    din5   :in  std_logic_vector(17 downto 0);
    din6   :in  std_logic_vector(17 downto 0);
    din7   :in  std_logic_vector(17 downto 0);
    din8   :in  std_logic_vector(17 downto 0);
    din9   :in  std_logic_vector(17 downto 0);
    din10   :in  std_logic_vector(3 downto 0);
    dout     :out std_logic_vector(17 downto 0));
end entity;

architecture rtl of myproject_mux_104_18_3_1 is
    -- puts internal signals
    signal sel    : std_logic_vector(3 downto 0);
    -- level 1 signals
    signal mux_1_0    : std_logic_vector(17 downto 0);
    signal mux_1_1    : std_logic_vector(17 downto 0);
    signal mux_1_2    : std_logic_vector(17 downto 0);
    signal mux_1_3    : std_logic_vector(17 downto 0);
    signal mux_1_4    : std_logic_vector(17 downto 0);
    -- level 2 signals
    signal mux_2_0_reg    : std_logic_vector(17 downto 0);
    signal mux_2_1_reg    : std_logic_vector(17 downto 0);
    signal mux_2_2_reg    : std_logic_vector(17 downto 0);
    signal sel2   : std_logic_vector(3 downto 2);
    -- level 3 signals
    signal mux_3_0_reg    : std_logic_vector(17 downto 0);
    signal mux_3_1_reg    : std_logic_vector(17 downto 0);
    signal sel3   : std_logic_vector(3 downto 3);
    -- level 4 signals
    signal mux_4_0    : std_logic_vector(17 downto 0);
begin

sel <= din10;

-- Generate level 1 logic
mux_1_0 <= din0 when sel(0) = '0' else din1;
mux_1_1 <= din2 when sel(0) = '0' else din3;
mux_1_2 <= din4 when sel(0) = '0' else din5;
mux_1_3 <= din6 when sel(0) = '0' else din7;
mux_1_4 <= din8 when sel(0) = '0' else din9;

-- Generate level 2 logic
process (clk)
begin
    if (clk'event and clk='1') then
        if (reset = '1') then
            sel2 <= (others => '0');
        elsif (ce = '1') then
            sel2 <= sel(3 downto 2);
        end if;
    end if;
end process;

process (clk)
begin
    if (clk'event and clk='1') then
        if (reset = '1') then
            mux_2_0_reg <= (others => '0');
        elsif (ce = '1') then
            if (sel(1) = '0') then
                mux_2_0_reg <= mux_1_0;
            else
                mux_2_0_reg <= mux_1_1;
            end if;
        end if;
    end if;
end process;

process (clk)
begin
    if (clk'event and clk='1') then
        if (reset = '1') then
            mux_2_1_reg <= (others => '0');
        elsif (ce = '1') then
            if (sel(1) = '0') then
                mux_2_1_reg <= mux_1_2;
            else
                mux_2_1_reg <= mux_1_3;
            end if;
        end if;
    end if;
end process;

process (clk)
begin
    if (clk'event and clk='1') then
        if (reset = '1') then
            mux_2_2_reg <= (others => '0');
        elsif (ce = '1') then
            mux_2_2_reg <= mux_1_4;
        end if;
    end if;
end process;


-- Generate level 3 logic
process (clk)
begin
    if (clk'event and clk='1') then
        if (reset = '1') then
            sel3 <= (others => '0');
        elsif (ce = '1') then
            sel3 <= sel2(3 downto 3);
        end if;
    end if;
end process;

process (clk)
begin
    if (clk'event and clk='1') then
        if (reset = '1') then
            mux_3_0_reg <= (others => '0');
        elsif (ce = '1') then
            if (sel2(2) = '0') then
                mux_3_0_reg <= mux_2_0_reg;
            else
                mux_3_0_reg <= mux_2_1_reg;
            end if;
        end if;
    end if;
end process;

process (clk)
begin
    if (clk'event and clk='1') then
        if (reset = '1') then
            mux_3_1_reg <= (others => '0');
        elsif (ce = '1') then
            mux_3_1_reg <= mux_2_2_reg;
        end if;
    end if;
end process;


-- Generate level 4 logic
mux_4_0 <= mux_3_0_reg when sel3(3) = '0' else mux_3_1_reg;

-- output logic
dout <= mux_4_0;

end architecture;
