-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2020.1
-- Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    in_elem_data_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
    res_stream_V_data_0_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    res_stream_V_data_0_V_full_n : IN STD_LOGIC;
    res_stream_V_data_0_V_write : OUT STD_LOGIC;
    res_stream_V_data_1_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    res_stream_V_data_1_V_full_n : IN STD_LOGIC;
    res_stream_V_data_1_V_write : OUT STD_LOGIC;
    res_stream_V_data_2_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    res_stream_V_data_2_V_full_n : IN STD_LOGIC;
    res_stream_V_data_2_V_write : OUT STD_LOGIC;
    res_stream_V_data_3_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    res_stream_V_data_3_V_full_n : IN STD_LOGIC;
    res_stream_V_data_3_V_write : OUT STD_LOGIC;
    res_stream_V_data_0_V_blk_n : OUT STD_LOGIC;
    res_stream_V_data_1_V_blk_n : OUT STD_LOGIC;
    res_stream_V_data_2_V_blk_n : OUT STD_LOGIC;
    res_stream_V_data_3_V_blk_n : OUT STD_LOGIC;
    ap_ce : IN STD_LOGIC );
end;


architecture behav of compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (11 downto 0) := "000000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (11 downto 0) := "000000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (11 downto 0) := "000000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (11 downto 0) := "000000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (11 downto 0) := "000000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (11 downto 0) := "000000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (11 downto 0) := "000001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (11 downto 0) := "000010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (11 downto 0) := "000100000000";
    constant ap_ST_fsm_state10 : STD_LOGIC_VECTOR (11 downto 0) := "001000000000";
    constant ap_ST_fsm_state11 : STD_LOGIC_VECTOR (11 downto 0) := "010000000000";
    constant ap_ST_fsm_state12 : STD_LOGIC_VECTOR (11 downto 0) := "100000000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001011";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv31_0 : STD_LOGIC_VECTOR (30 downto 0) := "0000000000000000000000000000000";
    constant ap_const_lv32_1B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011011";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (11 downto 0) := "000000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal kernel_data_V_1283 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    signal kernel_data_V_2284 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    signal kernel_data_V_4 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    signal kernel_data_V_5 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    signal kernel_data_V_7 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    signal kernel_data_V_8 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    signal sX_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    signal sY_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    signal pY_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    signal pX_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    signal ap_CS_fsm_state12 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state12 : signal is "none";
    signal and_ln289_4_reg_499 : STD_LOGIC_VECTOR (0 downto 0);
    signal sX_3_load_reg_467 : STD_LOGIC_VECTOR (31 downto 0);
    signal icmp_ln289_fu_175_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln289_reg_472 : STD_LOGIC_VECTOR (0 downto 0);
    signal sY_3_load_reg_477 : STD_LOGIC_VECTOR (31 downto 0);
    signal icmp_ln289_4_fu_185_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln289_4_reg_482 : STD_LOGIC_VECTOR (0 downto 0);
    signal pY_3_load_reg_487 : STD_LOGIC_VECTOR (31 downto 0);
    signal pX_3_load_reg_493 : STD_LOGIC_VECTOR (31 downto 0);
    signal and_ln289_4_fu_243_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal ap_port_reg_in_elem_data_V_read : STD_LOGIC_VECTOR (15 downto 0);
    signal grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_start : STD_LOGIC;
    signal grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_done : STD_LOGIC;
    signal grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_idle : STD_LOGIC;
    signal grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_ready : STD_LOGIC;
    signal grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_return_0 : STD_LOGIC_VECTOR (15 downto 0);
    signal grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_return_1 : STD_LOGIC_VECTOR (15 downto 0);
    signal grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_return_2 : STD_LOGIC_VECTOR (15 downto 0);
    signal grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_return_3 : STD_LOGIC_VECTOR (15 downto 0);
    signal grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_ce : STD_LOGIC;
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal ap_CS_fsm_state10 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state10 : signal is "none";
    signal ap_CS_fsm_state11 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state11 : signal is "none";
    signal io_acc_block_signal_op69 : STD_LOGIC;
    signal ap_block_state12_ignore_call0 : BOOLEAN;
    signal call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_start : STD_LOGIC;
    signal call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_done : STD_LOGIC;
    signal call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_idle : STD_LOGIC;
    signal call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_ready : STD_LOGIC;
    signal call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_0 : STD_LOGIC_VECTOR (15 downto 0);
    signal call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_1 : STD_LOGIC_VECTOR (15 downto 0);
    signal call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_2 : STD_LOGIC_VECTOR (15 downto 0);
    signal call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_3 : STD_LOGIC_VECTOR (15 downto 0);
    signal call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_4 : STD_LOGIC_VECTOR (15 downto 0);
    signal call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_5 : STD_LOGIC_VECTOR (15 downto 0);
    signal call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_6 : STD_LOGIC_VECTOR (15 downto 0);
    signal call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_7 : STD_LOGIC_VECTOR (15 downto 0);
    signal call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_8 : STD_LOGIC_VECTOR (15 downto 0);
    signal call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_ce : STD_LOGIC;
    signal select_ln323_fu_447_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_phi_mux_storemerge_phi_fu_135_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_block_state12 : BOOLEAN;
    signal icmp_ln313_fu_380_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln317_fu_426_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_start_reg : STD_LOGIC := '0';
    signal ap_NS_fsm : STD_LOGIC_VECTOR (11 downto 0);
    signal ap_NS_fsm_state2 : STD_LOGIC;
    signal select_ln328_fu_401_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal add_ln321_fu_431_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal add_ln326_fu_385_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_fu_195_p4 : STD_LOGIC_VECTOR (30 downto 0);
    signal tmp_57_fu_215_p4 : STD_LOGIC_VECTOR (30 downto 0);
    signal icmp_ln289_5_fu_205_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln289_6_fu_225_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal and_ln289_3_fu_237_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal and_ln289_fu_231_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal add_ln328_fu_396_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal add_ln323_fu_442_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_condition_227 : BOOLEAN;
    signal ap_condition_294 : BOOLEAN;

    component dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0 IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        data_0_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
        data_1_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
        data_2_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
        data_3_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
        data_4_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
        data_5_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
        data_6_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
        data_7_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
        data_8_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
        ap_return_0 : OUT STD_LOGIC_VECTOR (15 downto 0);
        ap_return_1 : OUT STD_LOGIC_VECTOR (15 downto 0);
        ap_return_2 : OUT STD_LOGIC_VECTOR (15 downto 0);
        ap_return_3 : OUT STD_LOGIC_VECTOR (15 downto 0);
        ap_ce : IN STD_LOGIC );
    end component;


    component shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        in_elem_data_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
        kernel_window_1_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
        kernel_window_2_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
        kernel_window_4_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
        kernel_window_5_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
        kernel_window_7_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
        kernel_window_8_V_read : IN STD_LOGIC_VECTOR (15 downto 0);
        ap_return_0 : OUT STD_LOGIC_VECTOR (15 downto 0);
        ap_return_1 : OUT STD_LOGIC_VECTOR (15 downto 0);
        ap_return_2 : OUT STD_LOGIC_VECTOR (15 downto 0);
        ap_return_3 : OUT STD_LOGIC_VECTOR (15 downto 0);
        ap_return_4 : OUT STD_LOGIC_VECTOR (15 downto 0);
        ap_return_5 : OUT STD_LOGIC_VECTOR (15 downto 0);
        ap_return_6 : OUT STD_LOGIC_VECTOR (15 downto 0);
        ap_return_7 : OUT STD_LOGIC_VECTOR (15 downto 0);
        ap_return_8 : OUT STD_LOGIC_VECTOR (15 downto 0);
        ap_ce : IN STD_LOGIC );
    end component;



begin
    grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142 : component dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_start,
        ap_done => grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_done,
        ap_idle => grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_idle,
        ap_ready => grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_ready,
        data_0_V_read => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_0,
        data_1_V_read => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_3,
        data_2_V_read => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_4,
        data_3_V_read => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_1,
        data_4_V_read => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_5,
        data_5_V_read => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_6,
        data_6_V_read => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_2,
        data_7_V_read => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_7,
        data_8_V_read => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_8,
        ap_return_0 => grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_return_0,
        ap_return_1 => grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_return_1,
        ap_return_2 => grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_return_2,
        ap_return_3 => grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_return_3,
        ap_ce => grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_ce);

    call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155 : component shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_start,
        ap_done => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_done,
        ap_idle => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_idle,
        ap_ready => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_ready,
        in_elem_data_V_read => ap_port_reg_in_elem_data_V_read,
        kernel_window_1_V_read => kernel_data_V_1283,
        kernel_window_2_V_read => kernel_data_V_2284,
        kernel_window_4_V_read => kernel_data_V_4,
        kernel_window_5_V_read => kernel_data_V_5,
        kernel_window_7_V_read => kernel_data_V_7,
        kernel_window_8_V_read => kernel_data_V_8,
        ap_return_0 => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_0,
        ap_return_1 => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_1,
        ap_return_2 => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_2,
        ap_return_3 => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_3,
        ap_return_4 => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_4,
        ap_return_5 => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_5,
        ap_return_6 => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_6,
        ap_return_7 => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_7,
        ap_return_8 => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_8,
        ap_ce => call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_ce);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_start_reg <= ap_const_logic_0;
            else
                if (((ap_const_lv1_1 = and_ln289_4_fu_243_p2) and (ap_const_logic_1 = ap_CS_fsm_state1) and (ap_const_logic_1 = ap_NS_fsm_state2))) then 
                    grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_ready = ap_const_logic_1)) then 
                    grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    pX_3_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_boolean_1 = ap_condition_227)) then
                if ((icmp_ln313_fu_380_p2 = ap_const_lv1_1)) then 
                    pX_3 <= ap_const_lv32_0;
                elsif ((icmp_ln313_fu_380_p2 = ap_const_lv1_0)) then 
                    pX_3 <= add_ln326_fu_385_p2;
                end if;
            end if; 
        end if;
    end process;

    pY_3_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_boolean_1 = ap_condition_294)) then
                if ((icmp_ln317_fu_426_p2 = ap_const_lv1_1)) then 
                    pY_3 <= ap_const_lv32_0;
                elsif ((icmp_ln317_fu_426_p2 = ap_const_lv1_0)) then 
                    pY_3 <= add_ln321_fu_431_p2;
                end if;
            end if; 
        end if;
    end process;

    sX_3_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_boolean_1 = ap_condition_227)) then
                if ((icmp_ln313_fu_380_p2 = ap_const_lv1_1)) then 
                    sX_3 <= ap_const_lv32_0;
                elsif ((icmp_ln313_fu_380_p2 = ap_const_lv1_0)) then 
                    sX_3 <= select_ln328_fu_401_p3;
                end if;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                and_ln289_4_reg_499 <= and_ln289_4_fu_243_p2;
                ap_port_reg_in_elem_data_V_read <= in_elem_data_V_read;
                icmp_ln289_4_reg_482 <= icmp_ln289_4_fu_185_p2;
                icmp_ln289_reg_472 <= icmp_ln289_fu_175_p2;
                pX_3_load_reg_493 <= pX_3;
                pY_3_load_reg_487 <= pY_3;
                sX_3_load_reg_467 <= sX_3;
                sY_3_load_reg_477 <= sY_3;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                kernel_data_V_1283 <= call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_3;
                kernel_data_V_2284 <= call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_4;
                kernel_data_V_4 <= call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_5;
                kernel_data_V_5 <= call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_6;
                kernel_data_V_7 <= call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_7;
                kernel_data_V_8 <= call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_return_8;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((ap_const_lv1_1 = and_ln289_4_reg_499) and (io_acc_block_signal_op69 = ap_const_logic_0))) and (ap_const_logic_1 = ap_ce) and (icmp_ln313_fu_380_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state12))) then
                sY_3 <= ap_phi_mux_storemerge_phi_fu_135_p4;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state12, and_ln289_4_reg_499, ap_ce, ap_CS_fsm_state2, ap_CS_fsm_state3, ap_CS_fsm_state4, ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state8, ap_CS_fsm_state9, ap_CS_fsm_state10, ap_CS_fsm_state11, io_acc_block_signal_op69)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state2;
                end if;
            when ap_ST_fsm_state3 => 
                if (((ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state4;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state4 => 
                if (((ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                    ap_NS_fsm <= ap_ST_fsm_state5;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state5 => 
                if (((ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state5))) then
                    ap_NS_fsm <= ap_ST_fsm_state6;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state6 => 
                if (((ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state6))) then
                    ap_NS_fsm <= ap_ST_fsm_state7;
                else
                    ap_NS_fsm <= ap_ST_fsm_state6;
                end if;
            when ap_ST_fsm_state7 => 
                if (((ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state7))) then
                    ap_NS_fsm <= ap_ST_fsm_state8;
                else
                    ap_NS_fsm <= ap_ST_fsm_state7;
                end if;
            when ap_ST_fsm_state8 => 
                if (((ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state8))) then
                    ap_NS_fsm <= ap_ST_fsm_state9;
                else
                    ap_NS_fsm <= ap_ST_fsm_state8;
                end if;
            when ap_ST_fsm_state9 => 
                if (((ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state9))) then
                    ap_NS_fsm <= ap_ST_fsm_state10;
                else
                    ap_NS_fsm <= ap_ST_fsm_state9;
                end if;
            when ap_ST_fsm_state10 => 
                if (((ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state10))) then
                    ap_NS_fsm <= ap_ST_fsm_state11;
                else
                    ap_NS_fsm <= ap_ST_fsm_state10;
                end if;
            when ap_ST_fsm_state11 => 
                if (((ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state11))) then
                    ap_NS_fsm <= ap_ST_fsm_state12;
                else
                    ap_NS_fsm <= ap_ST_fsm_state11;
                end if;
            when ap_ST_fsm_state12 => 
                if ((not(((ap_const_lv1_1 = and_ln289_4_reg_499) and (io_acc_block_signal_op69 = ap_const_logic_0))) and (ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state12))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state12;
                end if;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXXXXX";
        end case;
    end process;
    add_ln321_fu_431_p2 <= std_logic_vector(unsigned(pY_3_load_reg_487) + unsigned(ap_const_lv32_1));
    add_ln323_fu_442_p2 <= std_logic_vector(unsigned(sY_3_load_reg_477) + unsigned(ap_const_lv32_1));
    add_ln326_fu_385_p2 <= std_logic_vector(unsigned(pX_3_load_reg_493) + unsigned(ap_const_lv32_1));
    add_ln328_fu_396_p2 <= std_logic_vector(unsigned(sX_3_load_reg_467) + unsigned(ap_const_lv32_1));
    and_ln289_3_fu_237_p2 <= (icmp_ln289_6_fu_225_p2 and icmp_ln289_5_fu_205_p2);
    and_ln289_4_fu_243_p2 <= (and_ln289_fu_231_p2 and and_ln289_3_fu_237_p2);
    and_ln289_fu_231_p2 <= (icmp_ln289_fu_175_p2 and icmp_ln289_4_fu_185_p2);
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state10 <= ap_CS_fsm(9);
    ap_CS_fsm_state11 <= ap_CS_fsm(10);
    ap_CS_fsm_state12 <= ap_CS_fsm(11);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);
    ap_CS_fsm_state9 <= ap_CS_fsm(8);
    ap_NS_fsm_state2 <= ap_NS_fsm(1);

    ap_block_state12_assign_proc : process(and_ln289_4_reg_499, io_acc_block_signal_op69)
    begin
                ap_block_state12 <= ((ap_const_lv1_1 = and_ln289_4_reg_499) and (io_acc_block_signal_op69 = ap_const_logic_0));
    end process;


    ap_block_state12_ignore_call0_assign_proc : process(and_ln289_4_reg_499, io_acc_block_signal_op69)
    begin
                ap_block_state12_ignore_call0 <= ((ap_const_lv1_1 = and_ln289_4_reg_499) and (io_acc_block_signal_op69 = ap_const_logic_0));
    end process;


    ap_condition_227_assign_proc : process(ap_CS_fsm_state12, and_ln289_4_reg_499, ap_ce, io_acc_block_signal_op69)
    begin
                ap_condition_227 <= (not(((ap_const_lv1_1 = and_ln289_4_reg_499) and (io_acc_block_signal_op69 = ap_const_logic_0))) and (ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state12));
    end process;


    ap_condition_294_assign_proc : process(ap_CS_fsm_state12, and_ln289_4_reg_499, ap_ce, io_acc_block_signal_op69, icmp_ln313_fu_380_p2)
    begin
                ap_condition_294 <= (not(((ap_const_lv1_1 = and_ln289_4_reg_499) and (io_acc_block_signal_op69 = ap_const_logic_0))) and (ap_const_logic_1 = ap_ce) and (icmp_ln313_fu_380_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state12));
    end process;


    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state12, and_ln289_4_reg_499, ap_ce, io_acc_block_signal_op69)
    begin
        if (((not(((ap_const_lv1_1 = and_ln289_4_reg_499) and (io_acc_block_signal_op69 = ap_const_logic_0))) and (ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state12)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_phi_mux_storemerge_phi_fu_135_p4_assign_proc : process(ap_CS_fsm_state12, select_ln323_fu_447_p3, icmp_ln313_fu_380_p2, icmp_ln317_fu_426_p2)
    begin
        if (((icmp_ln313_fu_380_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state12))) then
            if ((icmp_ln317_fu_426_p2 = ap_const_lv1_1)) then 
                ap_phi_mux_storemerge_phi_fu_135_p4 <= ap_const_lv32_0;
            elsif ((icmp_ln317_fu_426_p2 = ap_const_lv1_0)) then 
                ap_phi_mux_storemerge_phi_fu_135_p4 <= select_ln323_fu_447_p3;
            else 
                ap_phi_mux_storemerge_phi_fu_135_p4 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
            end if;
        else 
            ap_phi_mux_storemerge_phi_fu_135_p4 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state12, and_ln289_4_reg_499, ap_ce, io_acc_block_signal_op69)
    begin
        if ((not(((ap_const_lv1_1 = and_ln289_4_reg_499) and (io_acc_block_signal_op69 = ap_const_logic_0))) and (ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state12))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_ce_assign_proc : process(ap_ce, ap_CS_fsm_state2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) and (ap_const_logic_1 = ap_ce))) then 
            call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_ce <= ap_const_logic_1;
        else 
            call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_ce <= ap_const_logic_0;
        end if; 
    end process;


    call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_start_assign_proc : process(ap_ce, ap_CS_fsm_state2)
    begin
        if (((ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_start <= ap_const_logic_1;
        else 
            call_ret2_shift_line_buffer_array_ap_fixed_16_6_5_3_0_1u_config2_s_fu_155_ap_start <= ap_const_logic_0;
        end if; 
    end process;


    grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_ce_assign_proc : process(ap_CS_fsm_state12, and_ln289_4_reg_499, ap_ce, ap_CS_fsm_state2, ap_CS_fsm_state3, ap_CS_fsm_state4, ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state8, ap_CS_fsm_state9, ap_CS_fsm_state10, ap_CS_fsm_state11, io_acc_block_signal_op69)
    begin
        if (((ap_const_logic_1 = ap_ce) and ((ap_const_logic_1 = ap_CS_fsm_state2) or (ap_const_logic_1 = ap_CS_fsm_state11) or (ap_const_logic_1 = ap_CS_fsm_state10) or (ap_const_logic_1 = ap_CS_fsm_state9) or (ap_const_logic_1 = ap_CS_fsm_state8) or (ap_const_logic_1 = ap_CS_fsm_state7) or (ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state3) or (not(((ap_const_lv1_1 = and_ln289_4_reg_499) and (io_acc_block_signal_op69 = ap_const_logic_0))) and (ap_const_logic_1 = ap_CS_fsm_state12))))) then 
            grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_ce <= ap_const_logic_1;
        else 
            grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_ce <= ap_const_logic_0;
        end if; 
    end process;

    grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_start <= grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_start_reg;
    icmp_ln289_4_fu_185_p2 <= "1" when (sY_3 = ap_const_lv32_2) else "0";
    icmp_ln289_5_fu_205_p2 <= "1" when (signed(tmp_fu_195_p4) > signed(ap_const_lv31_0)) else "0";
    icmp_ln289_6_fu_225_p2 <= "1" when (signed(tmp_57_fu_215_p4) > signed(ap_const_lv31_0)) else "0";
    icmp_ln289_fu_175_p2 <= "1" when (sX_3 = ap_const_lv32_2) else "0";
    icmp_ln313_fu_380_p2 <= "1" when (pX_3_load_reg_493 = ap_const_lv32_1B) else "0";
    icmp_ln317_fu_426_p2 <= "1" when (pY_3_load_reg_487 = ap_const_lv32_1B) else "0";
    io_acc_block_signal_op69 <= (res_stream_V_data_3_V_full_n and res_stream_V_data_2_V_full_n and res_stream_V_data_1_V_full_n and res_stream_V_data_0_V_full_n);

    res_stream_V_data_0_V_blk_n_assign_proc : process(res_stream_V_data_0_V_full_n, ap_CS_fsm_state12, and_ln289_4_reg_499)
    begin
        if (((ap_const_lv1_1 = and_ln289_4_reg_499) and (ap_const_logic_1 = ap_CS_fsm_state12))) then 
            res_stream_V_data_0_V_blk_n <= res_stream_V_data_0_V_full_n;
        else 
            res_stream_V_data_0_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    res_stream_V_data_0_V_din <= grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_return_0;

    res_stream_V_data_0_V_write_assign_proc : process(ap_CS_fsm_state12, and_ln289_4_reg_499, ap_ce, io_acc_block_signal_op69)
    begin
        if ((not(((ap_const_lv1_1 = and_ln289_4_reg_499) and (io_acc_block_signal_op69 = ap_const_logic_0))) and (ap_const_logic_1 = ap_ce) and (ap_const_lv1_1 = and_ln289_4_reg_499) and (ap_const_logic_1 = ap_CS_fsm_state12))) then 
            res_stream_V_data_0_V_write <= ap_const_logic_1;
        else 
            res_stream_V_data_0_V_write <= ap_const_logic_0;
        end if; 
    end process;


    res_stream_V_data_1_V_blk_n_assign_proc : process(res_stream_V_data_1_V_full_n, ap_CS_fsm_state12, and_ln289_4_reg_499)
    begin
        if (((ap_const_lv1_1 = and_ln289_4_reg_499) and (ap_const_logic_1 = ap_CS_fsm_state12))) then 
            res_stream_V_data_1_V_blk_n <= res_stream_V_data_1_V_full_n;
        else 
            res_stream_V_data_1_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    res_stream_V_data_1_V_din <= grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_return_1;

    res_stream_V_data_1_V_write_assign_proc : process(ap_CS_fsm_state12, and_ln289_4_reg_499, ap_ce, io_acc_block_signal_op69)
    begin
        if ((not(((ap_const_lv1_1 = and_ln289_4_reg_499) and (io_acc_block_signal_op69 = ap_const_logic_0))) and (ap_const_logic_1 = ap_ce) and (ap_const_lv1_1 = and_ln289_4_reg_499) and (ap_const_logic_1 = ap_CS_fsm_state12))) then 
            res_stream_V_data_1_V_write <= ap_const_logic_1;
        else 
            res_stream_V_data_1_V_write <= ap_const_logic_0;
        end if; 
    end process;


    res_stream_V_data_2_V_blk_n_assign_proc : process(res_stream_V_data_2_V_full_n, ap_CS_fsm_state12, and_ln289_4_reg_499)
    begin
        if (((ap_const_lv1_1 = and_ln289_4_reg_499) and (ap_const_logic_1 = ap_CS_fsm_state12))) then 
            res_stream_V_data_2_V_blk_n <= res_stream_V_data_2_V_full_n;
        else 
            res_stream_V_data_2_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    res_stream_V_data_2_V_din <= grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_return_2;

    res_stream_V_data_2_V_write_assign_proc : process(ap_CS_fsm_state12, and_ln289_4_reg_499, ap_ce, io_acc_block_signal_op69)
    begin
        if ((not(((ap_const_lv1_1 = and_ln289_4_reg_499) and (io_acc_block_signal_op69 = ap_const_logic_0))) and (ap_const_logic_1 = ap_ce) and (ap_const_lv1_1 = and_ln289_4_reg_499) and (ap_const_logic_1 = ap_CS_fsm_state12))) then 
            res_stream_V_data_2_V_write <= ap_const_logic_1;
        else 
            res_stream_V_data_2_V_write <= ap_const_logic_0;
        end if; 
    end process;


    res_stream_V_data_3_V_blk_n_assign_proc : process(res_stream_V_data_3_V_full_n, ap_CS_fsm_state12, and_ln289_4_reg_499)
    begin
        if (((ap_const_lv1_1 = and_ln289_4_reg_499) and (ap_const_logic_1 = ap_CS_fsm_state12))) then 
            res_stream_V_data_3_V_blk_n <= res_stream_V_data_3_V_full_n;
        else 
            res_stream_V_data_3_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    res_stream_V_data_3_V_din <= grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_mult_0_0_0_0_0_fu_142_ap_return_3;

    res_stream_V_data_3_V_write_assign_proc : process(ap_CS_fsm_state12, and_ln289_4_reg_499, ap_ce, io_acc_block_signal_op69)
    begin
        if ((not(((ap_const_lv1_1 = and_ln289_4_reg_499) and (io_acc_block_signal_op69 = ap_const_logic_0))) and (ap_const_logic_1 = ap_ce) and (ap_const_lv1_1 = and_ln289_4_reg_499) and (ap_const_logic_1 = ap_CS_fsm_state12))) then 
            res_stream_V_data_3_V_write <= ap_const_logic_1;
        else 
            res_stream_V_data_3_V_write <= ap_const_logic_0;
        end if; 
    end process;

    select_ln323_fu_447_p3 <= 
        ap_const_lv32_2 when (icmp_ln289_4_reg_482(0) = '1') else 
        add_ln323_fu_442_p2;
    select_ln328_fu_401_p3 <= 
        ap_const_lv32_2 when (icmp_ln289_reg_472(0) = '1') else 
        add_ln328_fu_396_p2;
    tmp_57_fu_215_p4 <= pX_3(31 downto 1);
    tmp_fu_195_p4 <= pY_3(31 downto 1);
end behav;