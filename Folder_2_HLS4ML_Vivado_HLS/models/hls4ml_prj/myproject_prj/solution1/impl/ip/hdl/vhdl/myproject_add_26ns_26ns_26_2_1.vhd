-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.NUMERIC_STD.all;

entity myproject_add_26ns_26ns_26_2_1_AddSubnS_9 is
port (
    clk   : IN STD_LOGIC;
    reset : IN STD_LOGIC;
    ce    : IN STD_LOGIC;
    a     : IN STD_LOGIC_VECTOR(25 downto 0);
    b     : IN STD_LOGIC_VECTOR(25 downto 0);
    s     : OUT STD_LOGIC_VECTOR(25 downto 0));
end entity;

architecture behav of myproject_add_26ns_26ns_26_2_1_AddSubnS_9 is
  component myproject_add_26ns_26ns_26_2_1_AddSubnS_9_comb_adder is 
    generic(N : natural := 32);
    port (
      a    : IN  STD_LOGIC_VECTOR (N-1 downto 0);
      b    : IN  STD_LOGIC_VECTOR (N-1 downto 0);
      cin  : IN  STD_LOGIC_VECTOR (0 downto 0);
      s    : OUT STD_LOGIC_VECTOR (N-1 downto 0);
      cout : OUT STD_LOGIC_VECTOR (0 downto 0));
  end component;

-- ---- register and wire type variables list here ----

-- wire for the primary inputs
  signal ain_s0 : STD_LOGIC_VECTOR(25 downto 0);
  signal bin_s0 : STD_LOGIC_VECTOR(25 downto 0);

-- Stage 1 signals
  signal  fas_s1     : STD_LOGIC_VECTOR(13 -1 downto 0);
  signal  facout_s1  : STD_LOGIC_VECTOR(0 downto 0);
  signal  ain_s1     : STD_LOGIC_VECTOR(13 - 1 downto 0);
  signal  bin_s1     : STD_LOGIC_VECTOR(13 - 1 downto 0);
  signal  sum_s1     : STD_LOGIC_VECTOR(13 - 1 downto 0);
  signal  carry_s1   : STD_LOGIC_VECTOR(0 downto 0);

-- Stage 2 signals
  signal  fas_s2     : STD_LOGIC_VECTOR(13 -1 downto 0);
  signal  facout_s2  : STD_LOGIC_VECTOR(0 downto 0);
begin

ain_s0 <= std_logic_vector(resize(unsigned(a), 26));
bin_s0 <= std_logic_vector(resize(unsigned(b), 26));

-- This AddSub module have totally 2 stages. For each stage the adder's width are:
-- 13 13

u1 : myproject_add_26ns_26ns_26_2_1_AddSubnS_9_comb_adder
  generic map
    ( N => 13 )
  port map
    (a    => ain_s0(13 - 1 downto 0),
     b    => bin_s0(13 - 1 downto 0),
     cin  => "0",
     s    => fas_s1,
     cout => facout_s1);

-- Stage 1 logic
process (clk) begin
  if (clk'event and clk = '1') then
    if (ce = '1') then
        sum_s1   <= fas_s1;
        carry_s1 <= facout_s1;
    end if;
  end if;
end process;

process (clk) begin
  if (clk'event and clk = '1') then
    if (ce = '1') then
        ain_s1 <= ain_s0(26 - 1 downto 13);
    end if;
  end if;
end process;

process (clk) begin
  if (clk'event and clk = '1') then
    if (ce = '1') then
        bin_s1 <= bin_s0(26 - 1 downto 13);
    end if;
  end if;
end process;

u2 : myproject_add_26ns_26ns_26_2_1_AddSubnS_9_comb_adder
  generic map
    ( N => 13 )
  port map
    (a    => ain_s1(13 - 1 downto 0),
     b    => bin_s1(13 - 1 downto 0),
     cin  => carry_s1,
     s    => fas_s2,
     cout => facout_s2);

-- Stage 2 logic
s <= fas_s2 & sum_s1;

end architecture;

-- small adder
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.NUMERIC_STD.all;

entity myproject_add_26ns_26ns_26_2_1_AddSubnS_9_comb_adder is
  generic(N : natural := 32);
  port (
      a    : IN  STD_LOGIC_VECTOR (N-1 downto 0);
      b    : IN  STD_LOGIC_VECTOR (N-1 downto 0);
      cin  : IN  STD_LOGIC_VECTOR (0 downto 0);
      s    : OUT STD_LOGIC_VECTOR (N-1 downto 0);
      cout : OUT STD_LOGIC_VECTOR (0 downto 0));
end;

architecture behav of myproject_add_26ns_26ns_26_2_1_AddSubnS_9_comb_adder is
    signal tmp : STD_LOGIC_VECTOR (N downto 0);
begin

  tmp  <= std_logic_vector(resize(unsigned(a),N+1) + unsigned(b) + unsigned(cin));
  s    <= tmp(N-1 downto 0 );
  cout <= tmp(N downto N);

end architecture;

Library IEEE;
use IEEE.std_logic_1164.all;

entity myproject_add_26ns_26ns_26_2_1 is
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER);
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        ce : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR(din0_WIDTH - 1 DOWNTO 0);
        din1 : IN STD_LOGIC_VECTOR(din1_WIDTH - 1 DOWNTO 0);
        dout : OUT STD_LOGIC_VECTOR(dout_WIDTH - 1 DOWNTO 0));
end entity;

architecture arch of myproject_add_26ns_26ns_26_2_1 is
    component myproject_add_26ns_26ns_26_2_1_AddSubnS_9 is
        port (
            clk : IN STD_LOGIC;
            reset : IN STD_LOGIC;
            ce : IN STD_LOGIC;
            a : IN STD_LOGIC_VECTOR;
            b : IN STD_LOGIC_VECTOR;
            s : OUT STD_LOGIC_VECTOR);
    end component;



begin
    myproject_add_26ns_26ns_26_2_1_AddSubnS_9_U :  component myproject_add_26ns_26ns_26_2_1_AddSubnS_9
    port map (
        clk => clk,
        reset => reset,
        ce => ce,
        a => din0,
        b => din1,
        s => dout);

end architecture;


