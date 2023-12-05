# This script segment is generated automatically by AutoPilot

set id 57
set name myproject_mux_42_32_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 32
set din0_signed 0
set din1_width 32
set din1_signed 0
set din2_width 32
set din2_signed 0
set din3_width 32
set din3_signed 0
set din4_width 2
set din4_signed 0
set dout_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 62
set hasByteEnable 0
set MemName conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_32_16_5_3_0_8u_config5_s_w5_V
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 497
set AddrRange 18
set AddrWd 5
set TrueReset 0
set IsROM 1
set ROMData { "00001111000110100000000000000000000110100011110001111111111111111110011101100100000000000000000000011110110011000000000000000000001000110110100000000000000000000001110111001000000000000000000001001110101000000000000000000000001110111010100001111111111111111110101011100000000000000000000000010100110100000111111111111111111100110101010000000000000000000010110010010000000000000000000000000001100010000111111111111111111010110111000001111111111111111100100111000000011111111111111111000010110010000" "11001111001100000111111111111111111100001101001001111111111111111101011111000000000000000000000000000000110100010111111111111111111111100111100111111111111111111110111011011000000000000000000000011100100000000000000000000000010000100000000000000000000000000001111001101000011111111111111111110011011110000000000000000000000111111101100000000000000000000001010101000100000000000000000000101100111100000000000000000000000100000101000001111111111111111111101100101010011111111111111111011001001000000" "11000011110010000111111111111111110111100001100001111111111111111110010100101100011111111111111111101010110001000111111111111111111110001000010100000000000000000000001000000010000000000000000000000110010100010000000000000000010100111000000000000000000000000011101100101000011111111111111110001110001000000111111111111111110010110000100000000000000000000101010011110000000000000000000000010111111111000000000000000000000100010110100001111111111111111110001000001000011111111111111111110111110010000" "00111011001100000000000000000000000000110101001111111111111111111010100000000000000000000000000000000110011100100111111111111111111110010100010100000000000000000001000111111100000000000000000000011111111001000000000000000000001011011000000001111111111111111111101110100010011111111111111111010110111110000111111111111111111100011100010000000000000000000000000100111010111111111111111111110110010001100111111111111111111001111110100000000000000000000010011101101000000000000000000000001010111011000" "01101001011100000000000000000000000011111010111001111111111111111110011110111100011111111111111111110101011011000000000000000000000101111010000000000000000000000100011000100000000000000000000000111011100100000000000000000000001101100000000001111111111111111111011110010110000000000000000001101000000000000111111111111111111001010111100001111111111111111111010110111110000000000000000000111010000000000111111111111111111101110111000000000000000000000001111000010100011111111111111110101100001000000" "00010110001000000000000000000000000001110101100001111111111111111110001111011100000000000000000000001011100100100111111111111111111001000000010001111111111111111111010110010000011111111111111111111000000001010000000000000000001011110011100000000000000000000000101100101000011111111111111111111111110101010000000000000000001110000101000000000000000000000000111111101110011111111111111111100011010110000000000000000000001001101110100000000000000000000100000101110000011111111111111111100011000011000" "11011000001000000000000000000000001010001110100001111111111111111110001001100000000000000000000000010000010000000000000000000000100101110010000001111111111111111101101111111000011111111111111110101110010000000111111111111111110111100100100000000000000000000101010111100000011111111111111101110100100000000111111111111111111110101110111000000000000000000010010001111000011111111111111110001100000100000000000000000000001011111010100001111111111111111111100111011000011111111111111111110001100111000" "00010001000100000000000000000000000101101110100000000000000000000001111000110000000000000000000000010110111100000111111111111111111100111111101001111111111111111110100000001000000000000000000000001111101100000000000000000000001100000011100001111111111111111110011100111000011111111111111111001001000010000111111111111111111011001101110001111111111111111010101110110000000000000000000000000111011100000000000000000000001011000100000000000000000000000000111000101010011111111111111111111001010110000" "10100100010100000000000000000000000000010101000110000000000000000001001101110100011111111111111111111101001011010000000000000000010010011110000000000000000000000001010111010000000000000000000000001100100011100000000000000000000111101101000000000000000000000000100001100110000000000000000001000001011000000111111111111111111101000001010001111111111111111101110110001000000000000000000001000001100100000111111111111111111001111100010001111111111111111111000110011000011111111111111110011100001000000" "11101100011010000000000000000000000001101010000100000000000000000000000010010100111111111111111111110011101100000000000000000000000011011000010000000000000000000000110111011110011111111111111111100010101001000111111111111111111100011001100001111111111111111110101101101000011111111111111111100011101001000000000000000000001110001101000000000000000000000101111011110000011111111111111111100000111001000000000000000000000010000001100000000000000000000000000001011011011111111111111110111001010000000" "10011000010000000000000000000000001011011011100000000000000000000011101001110000000000000000000001000000010100000000000000000000110110010010000000000000000000000000101000010100011111111111111111010011101000000111111111111111111100111001010001111111111111111111111001000010011111111111111110101111110000000111111111111111111101000001011000000000000000000000101010001110000000000000000001011000011100000000000000000000000101111110010001111111111111111101111010111000000000000000000000101000001110000" "01100010110000000000000000000000001011011000100000000000000000000001001111001100011111111111111111100101111011000000000000000000001010001000100001111111111111111110111001011100011111111111111111111011101101110111111111111111110111010010100000000000000000000010110000101000011111111111111111001101100110000111111111111111110101111010100000000000000000000110000001110000000000000000000000100011111010000000000000000000001101100011100000000000000000000011110100000000011111111111111111110110000111100" "00011000011111000000000000000000011000100101000000000000000000000010101100101000011111111111111111000000100010000111111111111111111110111100000001111111111111111110001110011100000000000000000000100011000000000000000000000000000101000111010000000000000000000001000110001000011111111111111111110011110011100111111111111111101111001011000001111111111111111100111000100000000000000000000001010000100100000111111111111111111111100011110110000000000000000001100111001000000000000000000000010000011000000" "01001000101100000111111111111111101111000110000000000000000000000010000111001000000000000000000000001100000001000111111111111111111110000110110000000000000000000010011111000000000000000000000000101100101000000111111111111111111111101110111110000000000000000001001110100000000000000000000000000011001100100111111111111111111011001011110001111111111111111111101111101010000000000000000000010101000010000000000000000000000100110001110000000000000000000001100110011100000000000000000000000001111100000" "11011101100110000111111111111111110000111011000000000000000000000010000100111000000000000000000000000101001001010111111111111111111111100010010100000000000000000100100011010000000000000000000000011010010010000111111111111111110100011100100001111111111111111101100001011000000000000000000001101101011000000111111111111111110100111101000000000000000000000100001110000000000000000000000001110110110000000111111111111111011110000100000000000000000000000010101001110000011111111111111111100101010100000" "11011011100100000111111111111111111010010001010000000000000000000001111111000000000000000000000000011101110011000000000000000000001011000100100000000000000000000010010100010000011111111111111111100100110110000000000000000000000100101010100000000000000000000000111001011100000000000000000000101100111010000111111111111111110010001111000001111111111111111110111010001100000000000000000000100010101110000000000000000000000011111110000000000000000000000000011100111101000000000000000000001110110111000" "01110000101100000111111111111111111101001111000000000000000000000001000111001100011111111111111111100110110100000000000000000000000110000011110001111111111111111111101001001011011111111111111111111001010001110000000000000000000000110101101101111111111111111110101111110100000000000000000000111101000110000111111111111111111001010001110000000000000000000010100111100000011111111111111111001001011010000000000000000000001011000111100001111111111111111101101010001000011111111111111111010000001000000" "11100011001010000000000000000000000011100010111001111111111111111111000001110110011111111111111111011110101000000000000000000000000111101100100001111111111111111111101110000101011111111111111111100110001110000000000000000000001011000011100001111111111111111101111111111000000000000000000000001000101001000111111111111111111010010011010000000000000000000100111100100000000000000000000000001011111001000000000000000000001100001110000000000000000000000001011111110100000000000000000000110000000100000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.158
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 63
set hasByteEnable 0
set MemName conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_32_16_5_3_0_8u_config5_s_line_bufpcA
set CoreName ShiftReg
set PortList { 2 }
set DataWd 32
set AddrRange 6
set AddrWd 3
set Style srl
set TrueReset 0
set IsROM 0
set ROMData { }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 1
set MaxLatency -1
set DelayBudget 0.611
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_shiftreg] == "ap_gen_simcore_shiftreg"} {
    eval "ap_gen_simcore_shiftreg { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${Style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_shiftreg, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ShiftReg
if {${::AESL::PGuard_autocg_gen} && !${::AESL::PGuard_simmodel_gen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ShiftReg] == "::AESL_LIB_VIRTEX::xil_gen_ShiftReg"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ShiftReg { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${Style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ShiftReg, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 64 \
    name data_V_data_0_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_V_data_0_V \
    op interface \
    ports { data_V_data_0_V_dout { I 32 vector } data_V_data_0_V_empty_n { I 1 bit } data_V_data_0_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 65 \
    name data_V_data_1_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_V_data_1_V \
    op interface \
    ports { data_V_data_1_V_dout { I 32 vector } data_V_data_1_V_empty_n { I 1 bit } data_V_data_1_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 66 \
    name data_V_data_2_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_V_data_2_V \
    op interface \
    ports { data_V_data_2_V_dout { I 32 vector } data_V_data_2_V_empty_n { I 1 bit } data_V_data_2_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 67 \
    name data_V_data_3_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_V_data_3_V \
    op interface \
    ports { data_V_data_3_V_dout { I 32 vector } data_V_data_3_V_empty_n { I 1 bit } data_V_data_3_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 68 \
    name res_V_data_0_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_V_data_0_V \
    op interface \
    ports { res_V_data_0_V_din { O 32 vector } res_V_data_0_V_full_n { I 1 bit } res_V_data_0_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 69 \
    name res_V_data_1_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_V_data_1_V \
    op interface \
    ports { res_V_data_1_V_din { O 32 vector } res_V_data_1_V_full_n { I 1 bit } res_V_data_1_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 70 \
    name res_V_data_2_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_V_data_2_V \
    op interface \
    ports { res_V_data_2_V_din { O 32 vector } res_V_data_2_V_full_n { I 1 bit } res_V_data_2_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 71 \
    name res_V_data_3_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_V_data_3_V \
    op interface \
    ports { res_V_data_3_V_din { O 32 vector } res_V_data_3_V_full_n { I 1 bit } res_V_data_3_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 72 \
    name res_V_data_4_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_V_data_4_V \
    op interface \
    ports { res_V_data_4_V_din { O 32 vector } res_V_data_4_V_full_n { I 1 bit } res_V_data_4_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 73 \
    name res_V_data_5_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_V_data_5_V \
    op interface \
    ports { res_V_data_5_V_din { O 32 vector } res_V_data_5_V_full_n { I 1 bit } res_V_data_5_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 74 \
    name res_V_data_6_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_V_data_6_V \
    op interface \
    ports { res_V_data_6_V_din { O 32 vector } res_V_data_6_V_full_n { I 1 bit } res_V_data_6_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 75 \
    name res_V_data_7_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_V_data_7_V \
    op interface \
    ports { res_V_data_7_V_din { O 32 vector } res_V_data_7_V_full_n { I 1 bit } res_V_data_7_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


