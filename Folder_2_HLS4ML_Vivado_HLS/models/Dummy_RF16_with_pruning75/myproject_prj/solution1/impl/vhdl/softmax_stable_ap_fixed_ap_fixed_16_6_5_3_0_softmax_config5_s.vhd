-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2020.1
-- Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config5_s is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    ap_ce : IN STD_LOGIC;
    data_0_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    data_1_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    data_2_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    ap_return_0 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_1 : OUT STD_LOGIC_VECTOR (15 downto 0);
    ap_return_2 : OUT STD_LOGIC_VECTOR (15 downto 0) );
end;


architecture behav of softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config5_s is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv32_10 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010000";
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv10_1FF : STD_LOGIC_VECTOR (9 downto 0) := "0111111111";
    constant ap_const_lv10_200 : STD_LOGIC_VECTOR (9 downto 0) := "1000000000";
    constant ap_const_lv32_11 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010001";
    constant ap_const_lv17_1FFFF : STD_LOGIC_VECTOR (16 downto 0) := "11111111111111111";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv32_19 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011001";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (0 downto 0) := "1";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC;
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter2 : STD_LOGIC := '0';
    signal ap_idle_pp0 : STD_LOGIC;
    signal ap_block_state1_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state2_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_state3_pp0_stage0_iter2 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal exp_table1_address0 : STD_LOGIC_VECTOR (9 downto 0);
    signal exp_table1_ce0 : STD_LOGIC;
    signal exp_table1_q0 : STD_LOGIC_VECTOR (16 downto 0);
    signal exp_table1_address1 : STD_LOGIC_VECTOR (9 downto 0);
    signal exp_table1_ce1 : STD_LOGIC;
    signal exp_table1_q1 : STD_LOGIC_VECTOR (16 downto 0);
    signal exp_table1_address2 : STD_LOGIC_VECTOR (9 downto 0);
    signal exp_table1_ce2 : STD_LOGIC;
    signal exp_table1_q2 : STD_LOGIC_VECTOR (16 downto 0);
    signal invert_table2_address0 : STD_LOGIC_VECTOR (9 downto 0);
    signal invert_table2_ce0 : STD_LOGIC;
    signal invert_table2_q0 : STD_LOGIC_VECTOR (17 downto 0);
    signal exp_res_0_V_reg_618 : STD_LOGIC_VECTOR (16 downto 0);
    signal exp_res_1_V_reg_623 : STD_LOGIC_VECTOR (16 downto 0);
    signal exp_res_2_V_reg_628 : STD_LOGIC_VECTOR (16 downto 0);
    signal ap_block_pp0_stage0_subdone : BOOLEAN;
    signal zext_ln255_fu_360_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln255_1_fu_399_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln255_2_fu_438_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln265_fu_519_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal icmp_ln1496_fu_126_p0 : STD_LOGIC_VECTOR (15 downto 0);
    signal icmp_ln1496_fu_126_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal icmp_ln1496_fu_126_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln65_fu_132_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal select_ln65_fu_132_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal select_ln65_fu_132_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal icmp_ln1496_1_fu_140_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal icmp_ln1496_1_fu_140_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal x_max_V_fu_146_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal sext_ln703_fu_154_p0 : STD_LOGIC_VECTOR (15 downto 0);
    signal x_max_V_fu_146_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal sext_ln703_fu_154_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal sext_ln703_1_fu_158_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal sub_ln1193_fu_162_p2 : STD_LOGIC_VECTOR (16 downto 0);
    signal tmp_3_fu_176_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_1_fu_168_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln786_fu_184_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln340_fu_202_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sext_ln703_2_fu_214_p0 : STD_LOGIC_VECTOR (15 downto 0);
    signal sext_ln703_2_fu_214_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal sub_ln1193_1_fu_218_p2 : STD_LOGIC_VECTOR (16 downto 0);
    signal tmp_7_fu_232_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_5_fu_224_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln786_1_fu_240_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln340_1_fu_258_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sext_ln703_3_fu_270_p0 : STD_LOGIC_VECTOR (15 downto 0);
    signal sext_ln703_3_fu_270_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal sub_ln1193_2_fu_274_p2 : STD_LOGIC_VECTOR (16 downto 0);
    signal tmp_9_fu_288_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_8_fu_280_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln786_2_fu_296_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln340_2_fu_314_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln340_3_fu_196_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_fu_326_p4 : STD_LOGIC_VECTOR (9 downto 0);
    signal and_ln786_fu_190_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln340_fu_208_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln340_fu_336_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal select_ln388_fu_344_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal y_V_fu_352_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal xor_ln340_4_fu_252_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_2_fu_365_p4 : STD_LOGIC_VECTOR (9 downto 0);
    signal and_ln786_1_fu_246_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln340_1_fu_264_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln340_2_fu_375_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal select_ln388_1_fu_383_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal y_V_1_fu_391_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal xor_ln340_5_fu_308_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_4_fu_404_p4 : STD_LOGIC_VECTOR (9 downto 0);
    signal and_ln786_2_fu_302_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln340_2_fu_320_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln340_4_fu_414_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal select_ln388_2_fu_422_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal y_V_2_fu_430_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal zext_ln203_1_fu_447_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal zext_ln203_fu_443_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal p_Val2_6_fu_455_p2 : STD_LOGIC_VECTOR (17 downto 0);
    signal p_Result_s_fu_467_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal add_ln746_fu_461_p2 : STD_LOGIC_VECTOR (16 downto 0);
    signal p_Val2_7_fu_475_p3 : STD_LOGIC_VECTOR (16 downto 0);
    signal zext_ln746_fu_483_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal zext_ln203_2_fu_451_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal p_Val2_9_fu_487_p2 : STD_LOGIC_VECTOR (17 downto 0);
    signal p_Result_6_fu_493_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_6_fu_501_p4 : STD_LOGIC_VECTOR (9 downto 0);
    signal y_V_3_fu_511_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal mul_ln1118_fu_582_p2 : STD_LOGIC_VECTOR (25 downto 0);
    signal mul_ln1118_1_fu_589_p2 : STD_LOGIC_VECTOR (25 downto 0);
    signal mul_ln1118_2_fu_596_p2 : STD_LOGIC_VECTOR (25 downto 0);
    signal mul_ln1118_fu_582_p0 : STD_LOGIC_VECTOR (16 downto 0);
    signal mul_ln1118_fu_582_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal sext_ln1116_fu_524_p1 : STD_LOGIC_VECTOR (25 downto 0);
    signal mul_ln1118_1_fu_589_p0 : STD_LOGIC_VECTOR (16 downto 0);
    signal mul_ln1118_1_fu_589_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal mul_ln1118_2_fu_596_p0 : STD_LOGIC_VECTOR (16 downto 0);
    signal mul_ln1118_2_fu_596_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_idle_pp0_0to1 : STD_LOGIC;
    signal ap_reset_idle_pp0 : STD_LOGIC;
    signal ap_enable_pp0 : STD_LOGIC;
    signal mul_ln1118_1_fu_589_p00 : STD_LOGIC_VECTOR (25 downto 0);
    signal mul_ln1118_2_fu_596_p00 : STD_LOGIC_VECTOR (25 downto 0);
    signal mul_ln1118_fu_582_p00 : STD_LOGIC_VECTOR (25 downto 0);

    component myproject_mul_mul_17ns_18s_26_1_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (16 downto 0);
        din1 : IN STD_LOGIC_VECTOR (17 downto 0);
        dout : OUT STD_LOGIC_VECTOR (25 downto 0) );
    end component;


    component softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config5_s_exp_table1 IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (9 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (16 downto 0);
        address1 : IN STD_LOGIC_VECTOR (9 downto 0);
        ce1 : IN STD_LOGIC;
        q1 : OUT STD_LOGIC_VECTOR (16 downto 0);
        address2 : IN STD_LOGIC_VECTOR (9 downto 0);
        ce2 : IN STD_LOGIC;
        q2 : OUT STD_LOGIC_VECTOR (16 downto 0) );
    end component;


    component softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config5_s_invert_table2 IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (9 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (17 downto 0) );
    end component;



begin
    exp_table1_U : component softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config5_s_exp_table1
    generic map (
        DataWidth => 17,
        AddressRange => 1024,
        AddressWidth => 10)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => exp_table1_address0,
        ce0 => exp_table1_ce0,
        q0 => exp_table1_q0,
        address1 => exp_table1_address1,
        ce1 => exp_table1_ce1,
        q1 => exp_table1_q1,
        address2 => exp_table1_address2,
        ce2 => exp_table1_ce2,
        q2 => exp_table1_q2);

    invert_table2_U : component softmax_stable_ap_fixed_ap_fixed_16_6_5_3_0_softmax_config5_s_invert_table2
    generic map (
        DataWidth => 18,
        AddressRange => 1024,
        AddressWidth => 10)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => invert_table2_address0,
        ce0 => invert_table2_ce0,
        q0 => invert_table2_q0);

    myproject_mul_mul_17ns_18s_26_1_1_U120 : component myproject_mul_mul_17ns_18s_26_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 17,
        din1_WIDTH => 18,
        dout_WIDTH => 26)
    port map (
        din0 => mul_ln1118_fu_582_p0,
        din1 => mul_ln1118_fu_582_p1,
        dout => mul_ln1118_fu_582_p2);

    myproject_mul_mul_17ns_18s_26_1_1_U121 : component myproject_mul_mul_17ns_18s_26_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 17,
        din1_WIDTH => 18,
        dout_WIDTH => 26)
    port map (
        din0 => mul_ln1118_1_fu_589_p0,
        din1 => mul_ln1118_1_fu_589_p1,
        dout => mul_ln1118_1_fu_589_p2);

    myproject_mul_mul_17ns_18s_26_1_1_U122 : component myproject_mul_mul_17ns_18s_26_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 17,
        din1_WIDTH => 18,
        dout_WIDTH => 26)
    port map (
        din0 => mul_ln1118_2_fu_596_p0,
        din1 => mul_ln1118_2_fu_596_p1,
        dout => mul_ln1118_2_fu_596_p2);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then 
                    ap_enable_reg_pp0_iter1 <= ap_start;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter2_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter2 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
                end if; 
            end if;
        end if;
    end process;

    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_ce) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                exp_res_0_V_reg_618 <= exp_table1_q0;
                exp_res_1_V_reg_623 <= exp_table1_q1;
                exp_res_2_V_reg_628 <= exp_table1_q2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_CS_fsm, ap_block_pp0_stage0_subdone, ap_reset_idle_pp0)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_pp0_stage0 => 
                ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
            when others =>  
                ap_NS_fsm <= "X";
        end case;
    end process;
    add_ln746_fu_461_p2 <= std_logic_vector(unsigned(exp_table1_q0) + unsigned(exp_table1_q1));
    and_ln786_1_fu_246_p2 <= (xor_ln786_1_fu_240_p2 and tmp_5_fu_224_p3);
    and_ln786_2_fu_302_p2 <= (xor_ln786_2_fu_296_p2 and tmp_8_fu_280_p3);
    and_ln786_fu_190_p2 <= (xor_ln786_fu_184_p2 and tmp_1_fu_168_p3);
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(0);
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_pp0_stage0_11001_assign_proc : process(ap_start)
    begin
                ap_block_pp0_stage0_11001 <= ((ap_start = ap_const_logic_0) and (ap_start = ap_const_logic_1));
    end process;


    ap_block_pp0_stage0_subdone_assign_proc : process(ap_start, ap_ce)
    begin
                ap_block_pp0_stage0_subdone <= ((ap_const_logic_0 = ap_ce) or ((ap_start = ap_const_logic_0) and (ap_start = ap_const_logic_1)));
    end process;


    ap_block_state1_pp0_stage0_iter0_assign_proc : process(ap_start)
    begin
                ap_block_state1_pp0_stage0_iter0 <= (ap_start = ap_const_logic_0);
    end process;

        ap_block_state2_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state3_pp0_stage0_iter2 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0, ap_enable_reg_pp0_iter2, ap_block_pp0_stage0_11001, ap_ce)
    begin
        if ((((ap_start = ap_const_logic_0) and (ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0)) or ((ap_const_logic_1 = ap_ce) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter2 = ap_const_logic_1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;

    ap_enable_pp0 <= (ap_idle_pp0 xor ap_const_logic_1);
    ap_enable_reg_pp0_iter0 <= ap_start;

    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_idle_pp0)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_idle_pp0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter2)
    begin
        if (((ap_enable_reg_pp0_iter2 = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0))) then 
            ap_idle_pp0 <= ap_const_logic_1;
        else 
            ap_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_0to1_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0))) then 
            ap_idle_pp0_0to1 <= ap_const_logic_1;
        else 
            ap_idle_pp0_0to1 <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_ce)
    begin
        if (((ap_const_logic_1 = ap_ce) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    ap_reset_idle_pp0_assign_proc : process(ap_start, ap_idle_pp0_0to1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_idle_pp0_0to1 = ap_const_logic_1))) then 
            ap_reset_idle_pp0 <= ap_const_logic_1;
        else 
            ap_reset_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;

    ap_return_0 <= mul_ln1118_fu_582_p2(25 downto 10);
    ap_return_1 <= mul_ln1118_1_fu_589_p2(25 downto 10);
    ap_return_2 <= mul_ln1118_2_fu_596_p2(25 downto 10);
    exp_table1_address0 <= zext_ln255_fu_360_p1(10 - 1 downto 0);
    exp_table1_address1 <= zext_ln255_1_fu_399_p1(10 - 1 downto 0);
    exp_table1_address2 <= zext_ln255_2_fu_438_p1(10 - 1 downto 0);

    exp_table1_ce0_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_ce)
    begin
        if (((ap_const_logic_1 = ap_ce) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            exp_table1_ce0 <= ap_const_logic_1;
        else 
            exp_table1_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    exp_table1_ce1_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_ce)
    begin
        if (((ap_const_logic_1 = ap_ce) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            exp_table1_ce1 <= ap_const_logic_1;
        else 
            exp_table1_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    exp_table1_ce2_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_ce)
    begin
        if (((ap_const_logic_1 = ap_ce) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            exp_table1_ce2 <= ap_const_logic_1;
        else 
            exp_table1_ce2 <= ap_const_logic_0;
        end if; 
    end process;

    icmp_ln1496_1_fu_140_p1 <= data_2_V_read;
    icmp_ln1496_1_fu_140_p2 <= "1" when (signed(select_ln65_fu_132_p3) < signed(icmp_ln1496_1_fu_140_p1)) else "0";
    icmp_ln1496_fu_126_p0 <= data_0_V_read;
    icmp_ln1496_fu_126_p1 <= data_1_V_read;
    icmp_ln1496_fu_126_p2 <= "1" when (signed(icmp_ln1496_fu_126_p0) < signed(icmp_ln1496_fu_126_p1)) else "0";
    invert_table2_address0 <= zext_ln265_fu_519_p1(10 - 1 downto 0);

    invert_table2_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0_11001, ap_ce)
    begin
        if (((ap_const_logic_1 = ap_ce) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            invert_table2_ce0 <= ap_const_logic_1;
        else 
            invert_table2_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    mul_ln1118_1_fu_589_p0 <= mul_ln1118_1_fu_589_p00(17 - 1 downto 0);
    mul_ln1118_1_fu_589_p00 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(exp_res_1_V_reg_623),26));
    mul_ln1118_1_fu_589_p1 <= sext_ln1116_fu_524_p1(18 - 1 downto 0);
    mul_ln1118_2_fu_596_p0 <= mul_ln1118_2_fu_596_p00(17 - 1 downto 0);
    mul_ln1118_2_fu_596_p00 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(exp_res_2_V_reg_628),26));
    mul_ln1118_2_fu_596_p1 <= sext_ln1116_fu_524_p1(18 - 1 downto 0);
    mul_ln1118_fu_582_p0 <= mul_ln1118_fu_582_p00(17 - 1 downto 0);
    mul_ln1118_fu_582_p00 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(exp_res_0_V_reg_618),26));
    mul_ln1118_fu_582_p1 <= sext_ln1116_fu_524_p1(18 - 1 downto 0);
    or_ln340_1_fu_264_p2 <= (xor_ln340_1_fu_258_p2 or tmp_7_fu_232_p3);
    or_ln340_2_fu_320_p2 <= (xor_ln340_2_fu_314_p2 or tmp_9_fu_288_p3);
    or_ln340_fu_208_p2 <= (xor_ln340_fu_202_p2 or tmp_3_fu_176_p3);
    p_Result_6_fu_493_p3 <= p_Val2_9_fu_487_p2(17 downto 17);
    p_Result_s_fu_467_p3 <= p_Val2_6_fu_455_p2(17 downto 17);
    p_Val2_6_fu_455_p2 <= std_logic_vector(unsigned(zext_ln203_1_fu_447_p1) + unsigned(zext_ln203_fu_443_p1));
    p_Val2_7_fu_475_p3 <= 
        ap_const_lv17_1FFFF when (p_Result_s_fu_467_p3(0) = '1') else 
        add_ln746_fu_461_p2;
    p_Val2_9_fu_487_p2 <= std_logic_vector(unsigned(zext_ln746_fu_483_p1) + unsigned(zext_ln203_2_fu_451_p1));
    select_ln340_2_fu_375_p3 <= 
        ap_const_lv10_1FF when (xor_ln340_4_fu_252_p2(0) = '1') else 
        tmp_2_fu_365_p4;
    select_ln340_4_fu_414_p3 <= 
        ap_const_lv10_1FF when (xor_ln340_5_fu_308_p2(0) = '1') else 
        tmp_4_fu_404_p4;
    select_ln340_fu_336_p3 <= 
        ap_const_lv10_1FF when (xor_ln340_3_fu_196_p2(0) = '1') else 
        tmp_fu_326_p4;
    select_ln388_1_fu_383_p3 <= 
        ap_const_lv10_200 when (and_ln786_1_fu_246_p2(0) = '1') else 
        tmp_2_fu_365_p4;
    select_ln388_2_fu_422_p3 <= 
        ap_const_lv10_200 when (and_ln786_2_fu_302_p2(0) = '1') else 
        tmp_4_fu_404_p4;
    select_ln388_fu_344_p3 <= 
        ap_const_lv10_200 when (and_ln786_fu_190_p2(0) = '1') else 
        tmp_fu_326_p4;
    select_ln65_fu_132_p1 <= data_1_V_read;
    select_ln65_fu_132_p2 <= data_0_V_read;
    select_ln65_fu_132_p3 <= 
        select_ln65_fu_132_p1 when (icmp_ln1496_fu_126_p2(0) = '1') else 
        select_ln65_fu_132_p2;
        sext_ln1116_fu_524_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(invert_table2_q0),26));

        sext_ln703_1_fu_158_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(x_max_V_fu_146_p3),17));

    sext_ln703_2_fu_214_p0 <= data_1_V_read;
        sext_ln703_2_fu_214_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(sext_ln703_2_fu_214_p0),17));

    sext_ln703_3_fu_270_p0 <= data_2_V_read;
        sext_ln703_3_fu_270_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(sext_ln703_3_fu_270_p0),17));

    sext_ln703_fu_154_p0 <= data_0_V_read;
        sext_ln703_fu_154_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(sext_ln703_fu_154_p0),17));

    sub_ln1193_1_fu_218_p2 <= std_logic_vector(signed(sext_ln703_2_fu_214_p1) - signed(sext_ln703_1_fu_158_p1));
    sub_ln1193_2_fu_274_p2 <= std_logic_vector(signed(sext_ln703_3_fu_270_p1) - signed(sext_ln703_1_fu_158_p1));
    sub_ln1193_fu_162_p2 <= std_logic_vector(signed(sext_ln703_fu_154_p1) - signed(sext_ln703_1_fu_158_p1));
    tmp_1_fu_168_p3 <= sub_ln1193_fu_162_p2(16 downto 16);
    tmp_2_fu_365_p4 <= sub_ln1193_1_fu_218_p2(15 downto 6);
    tmp_3_fu_176_p3 <= sub_ln1193_fu_162_p2(15 downto 15);
    tmp_4_fu_404_p4 <= sub_ln1193_2_fu_274_p2(15 downto 6);
    tmp_5_fu_224_p3 <= sub_ln1193_1_fu_218_p2(16 downto 16);
    tmp_6_fu_501_p4 <= p_Val2_9_fu_487_p2(17 downto 8);
    tmp_7_fu_232_p3 <= sub_ln1193_1_fu_218_p2(15 downto 15);
    tmp_8_fu_280_p3 <= sub_ln1193_2_fu_274_p2(16 downto 16);
    tmp_9_fu_288_p3 <= sub_ln1193_2_fu_274_p2(15 downto 15);
    tmp_fu_326_p4 <= sub_ln1193_fu_162_p2(15 downto 6);
    x_max_V_fu_146_p1 <= data_2_V_read;
    x_max_V_fu_146_p3 <= 
        x_max_V_fu_146_p1 when (icmp_ln1496_1_fu_140_p2(0) = '1') else 
        select_ln65_fu_132_p3;
    xor_ln340_1_fu_258_p2 <= (tmp_5_fu_224_p3 xor ap_const_lv1_1);
    xor_ln340_2_fu_314_p2 <= (tmp_8_fu_280_p3 xor ap_const_lv1_1);
    xor_ln340_3_fu_196_p2 <= (tmp_3_fu_176_p3 xor tmp_1_fu_168_p3);
    xor_ln340_4_fu_252_p2 <= (tmp_7_fu_232_p3 xor tmp_5_fu_224_p3);
    xor_ln340_5_fu_308_p2 <= (tmp_9_fu_288_p3 xor tmp_8_fu_280_p3);
    xor_ln340_fu_202_p2 <= (tmp_1_fu_168_p3 xor ap_const_lv1_1);
    xor_ln786_1_fu_240_p2 <= (tmp_7_fu_232_p3 xor ap_const_lv1_1);
    xor_ln786_2_fu_296_p2 <= (tmp_9_fu_288_p3 xor ap_const_lv1_1);
    xor_ln786_fu_184_p2 <= (tmp_3_fu_176_p3 xor ap_const_lv1_1);
    y_V_1_fu_391_p3 <= 
        select_ln340_2_fu_375_p3 when (or_ln340_1_fu_264_p2(0) = '1') else 
        select_ln388_1_fu_383_p3;
    y_V_2_fu_430_p3 <= 
        select_ln340_4_fu_414_p3 when (or_ln340_2_fu_320_p2(0) = '1') else 
        select_ln388_2_fu_422_p3;
    y_V_3_fu_511_p3 <= 
        ap_const_lv10_1FF when (p_Result_6_fu_493_p3(0) = '1') else 
        tmp_6_fu_501_p4;
    y_V_fu_352_p3 <= 
        select_ln340_fu_336_p3 when (or_ln340_fu_208_p2(0) = '1') else 
        select_ln388_fu_344_p3;
    zext_ln203_1_fu_447_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(exp_table1_q1),18));
    zext_ln203_2_fu_451_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(exp_table1_q2),18));
    zext_ln203_fu_443_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(exp_table1_q0),18));
    zext_ln255_1_fu_399_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(y_V_1_fu_391_p3),64));
    zext_ln255_2_fu_438_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(y_V_2_fu_430_p3),64));
    zext_ln255_fu_360_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(y_V_fu_352_p3),64));
    zext_ln265_fu_519_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(y_V_3_fu_511_p3),64));
    zext_ln746_fu_483_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_Val2_7_fu_475_p3),18));
end behav;