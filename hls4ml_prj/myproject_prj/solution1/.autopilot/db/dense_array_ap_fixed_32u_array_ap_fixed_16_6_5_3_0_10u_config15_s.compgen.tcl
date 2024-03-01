# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4802 \
    name data_stream_V_data_0_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_0_V \
    op interface \
    ports { data_stream_V_data_0_V_dout { I 16 vector } data_stream_V_data_0_V_empty_n { I 1 bit } data_stream_V_data_0_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4803 \
    name data_stream_V_data_1_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_1_V \
    op interface \
    ports { data_stream_V_data_1_V_dout { I 16 vector } data_stream_V_data_1_V_empty_n { I 1 bit } data_stream_V_data_1_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4804 \
    name data_stream_V_data_2_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_2_V \
    op interface \
    ports { data_stream_V_data_2_V_dout { I 16 vector } data_stream_V_data_2_V_empty_n { I 1 bit } data_stream_V_data_2_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4805 \
    name data_stream_V_data_3_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_3_V \
    op interface \
    ports { data_stream_V_data_3_V_dout { I 16 vector } data_stream_V_data_3_V_empty_n { I 1 bit } data_stream_V_data_3_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4806 \
    name data_stream_V_data_4_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_4_V \
    op interface \
    ports { data_stream_V_data_4_V_dout { I 16 vector } data_stream_V_data_4_V_empty_n { I 1 bit } data_stream_V_data_4_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4807 \
    name data_stream_V_data_5_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_5_V \
    op interface \
    ports { data_stream_V_data_5_V_dout { I 16 vector } data_stream_V_data_5_V_empty_n { I 1 bit } data_stream_V_data_5_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4808 \
    name data_stream_V_data_6_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_6_V \
    op interface \
    ports { data_stream_V_data_6_V_dout { I 16 vector } data_stream_V_data_6_V_empty_n { I 1 bit } data_stream_V_data_6_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4809 \
    name data_stream_V_data_7_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_7_V \
    op interface \
    ports { data_stream_V_data_7_V_dout { I 16 vector } data_stream_V_data_7_V_empty_n { I 1 bit } data_stream_V_data_7_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4810 \
    name data_stream_V_data_8_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_8_V \
    op interface \
    ports { data_stream_V_data_8_V_dout { I 16 vector } data_stream_V_data_8_V_empty_n { I 1 bit } data_stream_V_data_8_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4811 \
    name data_stream_V_data_9_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_9_V \
    op interface \
    ports { data_stream_V_data_9_V_dout { I 16 vector } data_stream_V_data_9_V_empty_n { I 1 bit } data_stream_V_data_9_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4812 \
    name data_stream_V_data_10_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_10_V \
    op interface \
    ports { data_stream_V_data_10_V_dout { I 16 vector } data_stream_V_data_10_V_empty_n { I 1 bit } data_stream_V_data_10_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4813 \
    name data_stream_V_data_11_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_11_V \
    op interface \
    ports { data_stream_V_data_11_V_dout { I 16 vector } data_stream_V_data_11_V_empty_n { I 1 bit } data_stream_V_data_11_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4814 \
    name data_stream_V_data_12_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_12_V \
    op interface \
    ports { data_stream_V_data_12_V_dout { I 16 vector } data_stream_V_data_12_V_empty_n { I 1 bit } data_stream_V_data_12_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4815 \
    name data_stream_V_data_13_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_13_V \
    op interface \
    ports { data_stream_V_data_13_V_dout { I 16 vector } data_stream_V_data_13_V_empty_n { I 1 bit } data_stream_V_data_13_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4816 \
    name data_stream_V_data_14_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_14_V \
    op interface \
    ports { data_stream_V_data_14_V_dout { I 16 vector } data_stream_V_data_14_V_empty_n { I 1 bit } data_stream_V_data_14_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4817 \
    name data_stream_V_data_15_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_15_V \
    op interface \
    ports { data_stream_V_data_15_V_dout { I 16 vector } data_stream_V_data_15_V_empty_n { I 1 bit } data_stream_V_data_15_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4818 \
    name data_stream_V_data_16_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_16_V \
    op interface \
    ports { data_stream_V_data_16_V_dout { I 16 vector } data_stream_V_data_16_V_empty_n { I 1 bit } data_stream_V_data_16_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4819 \
    name data_stream_V_data_17_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_17_V \
    op interface \
    ports { data_stream_V_data_17_V_dout { I 16 vector } data_stream_V_data_17_V_empty_n { I 1 bit } data_stream_V_data_17_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4820 \
    name data_stream_V_data_18_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_18_V \
    op interface \
    ports { data_stream_V_data_18_V_dout { I 16 vector } data_stream_V_data_18_V_empty_n { I 1 bit } data_stream_V_data_18_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4821 \
    name data_stream_V_data_19_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_19_V \
    op interface \
    ports { data_stream_V_data_19_V_dout { I 16 vector } data_stream_V_data_19_V_empty_n { I 1 bit } data_stream_V_data_19_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4822 \
    name data_stream_V_data_20_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_20_V \
    op interface \
    ports { data_stream_V_data_20_V_dout { I 16 vector } data_stream_V_data_20_V_empty_n { I 1 bit } data_stream_V_data_20_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4823 \
    name data_stream_V_data_21_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_21_V \
    op interface \
    ports { data_stream_V_data_21_V_dout { I 16 vector } data_stream_V_data_21_V_empty_n { I 1 bit } data_stream_V_data_21_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4824 \
    name data_stream_V_data_22_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_22_V \
    op interface \
    ports { data_stream_V_data_22_V_dout { I 16 vector } data_stream_V_data_22_V_empty_n { I 1 bit } data_stream_V_data_22_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4825 \
    name data_stream_V_data_23_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_23_V \
    op interface \
    ports { data_stream_V_data_23_V_dout { I 16 vector } data_stream_V_data_23_V_empty_n { I 1 bit } data_stream_V_data_23_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4826 \
    name data_stream_V_data_24_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_24_V \
    op interface \
    ports { data_stream_V_data_24_V_dout { I 16 vector } data_stream_V_data_24_V_empty_n { I 1 bit } data_stream_V_data_24_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4827 \
    name data_stream_V_data_25_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_25_V \
    op interface \
    ports { data_stream_V_data_25_V_dout { I 16 vector } data_stream_V_data_25_V_empty_n { I 1 bit } data_stream_V_data_25_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4828 \
    name data_stream_V_data_26_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_26_V \
    op interface \
    ports { data_stream_V_data_26_V_dout { I 16 vector } data_stream_V_data_26_V_empty_n { I 1 bit } data_stream_V_data_26_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4829 \
    name data_stream_V_data_27_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_27_V \
    op interface \
    ports { data_stream_V_data_27_V_dout { I 16 vector } data_stream_V_data_27_V_empty_n { I 1 bit } data_stream_V_data_27_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4830 \
    name data_stream_V_data_28_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_28_V \
    op interface \
    ports { data_stream_V_data_28_V_dout { I 16 vector } data_stream_V_data_28_V_empty_n { I 1 bit } data_stream_V_data_28_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4831 \
    name data_stream_V_data_29_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_29_V \
    op interface \
    ports { data_stream_V_data_29_V_dout { I 16 vector } data_stream_V_data_29_V_empty_n { I 1 bit } data_stream_V_data_29_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4832 \
    name data_stream_V_data_30_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_30_V \
    op interface \
    ports { data_stream_V_data_30_V_dout { I 16 vector } data_stream_V_data_30_V_empty_n { I 1 bit } data_stream_V_data_30_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4833 \
    name data_stream_V_data_31_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_31_V \
    op interface \
    ports { data_stream_V_data_31_V_dout { I 16 vector } data_stream_V_data_31_V_empty_n { I 1 bit } data_stream_V_data_31_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4834 \
    name res_stream_V_data_0_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_0_V \
    op interface \
    ports { res_stream_V_data_0_V_din { O 16 vector } res_stream_V_data_0_V_full_n { I 1 bit } res_stream_V_data_0_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4835 \
    name res_stream_V_data_1_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_1_V \
    op interface \
    ports { res_stream_V_data_1_V_din { O 16 vector } res_stream_V_data_1_V_full_n { I 1 bit } res_stream_V_data_1_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4836 \
    name res_stream_V_data_2_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_2_V \
    op interface \
    ports { res_stream_V_data_2_V_din { O 16 vector } res_stream_V_data_2_V_full_n { I 1 bit } res_stream_V_data_2_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4837 \
    name res_stream_V_data_3_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_3_V \
    op interface \
    ports { res_stream_V_data_3_V_din { O 16 vector } res_stream_V_data_3_V_full_n { I 1 bit } res_stream_V_data_3_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4838 \
    name res_stream_V_data_4_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_4_V \
    op interface \
    ports { res_stream_V_data_4_V_din { O 16 vector } res_stream_V_data_4_V_full_n { I 1 bit } res_stream_V_data_4_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4839 \
    name res_stream_V_data_5_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_5_V \
    op interface \
    ports { res_stream_V_data_5_V_din { O 16 vector } res_stream_V_data_5_V_full_n { I 1 bit } res_stream_V_data_5_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4840 \
    name res_stream_V_data_6_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_6_V \
    op interface \
    ports { res_stream_V_data_6_V_din { O 16 vector } res_stream_V_data_6_V_full_n { I 1 bit } res_stream_V_data_6_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4841 \
    name res_stream_V_data_7_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_7_V \
    op interface \
    ports { res_stream_V_data_7_V_din { O 16 vector } res_stream_V_data_7_V_full_n { I 1 bit } res_stream_V_data_7_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4842 \
    name res_stream_V_data_8_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_8_V \
    op interface \
    ports { res_stream_V_data_8_V_din { O 16 vector } res_stream_V_data_8_V_full_n { I 1 bit } res_stream_V_data_8_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4843 \
    name res_stream_V_data_9_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_9_V \
    op interface \
    ports { res_stream_V_data_9_V_din { O 16 vector } res_stream_V_data_9_V_full_n { I 1 bit } res_stream_V_data_9_V_write { O 1 bit } } \
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


