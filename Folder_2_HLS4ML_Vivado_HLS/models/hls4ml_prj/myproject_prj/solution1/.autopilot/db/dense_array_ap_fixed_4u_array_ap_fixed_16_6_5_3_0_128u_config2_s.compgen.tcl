# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 5 \
    name data_stream_V_data_0_V \
    reset_level 1 \
    sync_rst true \
    corename {} \
    metadata {  } \
    op interface \
    ports { data_stream_V_data_0_V_TDATA { I 16 vector } data_stream_V_data_0_V_TVALID { I 1 bit } data_stream_V_data_0_V_TREADY { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'data_stream_V_data_0_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 6 \
    name data_stream_V_data_1_V \
    reset_level 1 \
    sync_rst true \
    corename {} \
    metadata {  } \
    op interface \
    ports { data_stream_V_data_1_V_TDATA { I 16 vector } data_stream_V_data_1_V_TVALID { I 1 bit } data_stream_V_data_1_V_TREADY { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'data_stream_V_data_1_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 7 \
    name data_stream_V_data_2_V \
    reset_level 1 \
    sync_rst true \
    corename {} \
    metadata {  } \
    op interface \
    ports { data_stream_V_data_2_V_TDATA { I 16 vector } data_stream_V_data_2_V_TVALID { I 1 bit } data_stream_V_data_2_V_TREADY { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'data_stream_V_data_2_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 8 \
    name data_stream_V_data_3_V \
    reset_level 1 \
    sync_rst true \
    corename {} \
    metadata {  } \
    op interface \
    ports { data_stream_V_data_3_V_TDATA { I 16 vector } data_stream_V_data_3_V_TVALID { I 1 bit } data_stream_V_data_3_V_TREADY { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'data_stream_V_data_3_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 9 \
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
    id 10 \
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
    id 11 \
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
    id 12 \
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
    id 13 \
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
    id 14 \
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
    id 15 \
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
    id 16 \
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
    id 17 \
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
    id 18 \
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
    id 19 \
    name res_stream_V_data_10_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_10_V \
    op interface \
    ports { res_stream_V_data_10_V_din { O 16 vector } res_stream_V_data_10_V_full_n { I 1 bit } res_stream_V_data_10_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 20 \
    name res_stream_V_data_11_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_11_V \
    op interface \
    ports { res_stream_V_data_11_V_din { O 16 vector } res_stream_V_data_11_V_full_n { I 1 bit } res_stream_V_data_11_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 21 \
    name res_stream_V_data_12_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_12_V \
    op interface \
    ports { res_stream_V_data_12_V_din { O 16 vector } res_stream_V_data_12_V_full_n { I 1 bit } res_stream_V_data_12_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 22 \
    name res_stream_V_data_13_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_13_V \
    op interface \
    ports { res_stream_V_data_13_V_din { O 16 vector } res_stream_V_data_13_V_full_n { I 1 bit } res_stream_V_data_13_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 23 \
    name res_stream_V_data_14_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_14_V \
    op interface \
    ports { res_stream_V_data_14_V_din { O 16 vector } res_stream_V_data_14_V_full_n { I 1 bit } res_stream_V_data_14_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 24 \
    name res_stream_V_data_15_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_15_V \
    op interface \
    ports { res_stream_V_data_15_V_din { O 16 vector } res_stream_V_data_15_V_full_n { I 1 bit } res_stream_V_data_15_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 25 \
    name res_stream_V_data_16_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_16_V \
    op interface \
    ports { res_stream_V_data_16_V_din { O 16 vector } res_stream_V_data_16_V_full_n { I 1 bit } res_stream_V_data_16_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 26 \
    name res_stream_V_data_17_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_17_V \
    op interface \
    ports { res_stream_V_data_17_V_din { O 16 vector } res_stream_V_data_17_V_full_n { I 1 bit } res_stream_V_data_17_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 27 \
    name res_stream_V_data_18_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_18_V \
    op interface \
    ports { res_stream_V_data_18_V_din { O 16 vector } res_stream_V_data_18_V_full_n { I 1 bit } res_stream_V_data_18_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 28 \
    name res_stream_V_data_19_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_19_V \
    op interface \
    ports { res_stream_V_data_19_V_din { O 16 vector } res_stream_V_data_19_V_full_n { I 1 bit } res_stream_V_data_19_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 29 \
    name res_stream_V_data_20_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_20_V \
    op interface \
    ports { res_stream_V_data_20_V_din { O 16 vector } res_stream_V_data_20_V_full_n { I 1 bit } res_stream_V_data_20_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 30 \
    name res_stream_V_data_21_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_21_V \
    op interface \
    ports { res_stream_V_data_21_V_din { O 16 vector } res_stream_V_data_21_V_full_n { I 1 bit } res_stream_V_data_21_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 31 \
    name res_stream_V_data_22_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_22_V \
    op interface \
    ports { res_stream_V_data_22_V_din { O 16 vector } res_stream_V_data_22_V_full_n { I 1 bit } res_stream_V_data_22_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 32 \
    name res_stream_V_data_23_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_23_V \
    op interface \
    ports { res_stream_V_data_23_V_din { O 16 vector } res_stream_V_data_23_V_full_n { I 1 bit } res_stream_V_data_23_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 33 \
    name res_stream_V_data_24_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_24_V \
    op interface \
    ports { res_stream_V_data_24_V_din { O 16 vector } res_stream_V_data_24_V_full_n { I 1 bit } res_stream_V_data_24_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 34 \
    name res_stream_V_data_25_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_25_V \
    op interface \
    ports { res_stream_V_data_25_V_din { O 16 vector } res_stream_V_data_25_V_full_n { I 1 bit } res_stream_V_data_25_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 35 \
    name res_stream_V_data_26_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_26_V \
    op interface \
    ports { res_stream_V_data_26_V_din { O 16 vector } res_stream_V_data_26_V_full_n { I 1 bit } res_stream_V_data_26_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 36 \
    name res_stream_V_data_27_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_27_V \
    op interface \
    ports { res_stream_V_data_27_V_din { O 16 vector } res_stream_V_data_27_V_full_n { I 1 bit } res_stream_V_data_27_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 37 \
    name res_stream_V_data_28_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_28_V \
    op interface \
    ports { res_stream_V_data_28_V_din { O 16 vector } res_stream_V_data_28_V_full_n { I 1 bit } res_stream_V_data_28_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 38 \
    name res_stream_V_data_29_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_29_V \
    op interface \
    ports { res_stream_V_data_29_V_din { O 16 vector } res_stream_V_data_29_V_full_n { I 1 bit } res_stream_V_data_29_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 39 \
    name res_stream_V_data_30_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_30_V \
    op interface \
    ports { res_stream_V_data_30_V_din { O 16 vector } res_stream_V_data_30_V_full_n { I 1 bit } res_stream_V_data_30_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 40 \
    name res_stream_V_data_31_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_31_V \
    op interface \
    ports { res_stream_V_data_31_V_din { O 16 vector } res_stream_V_data_31_V_full_n { I 1 bit } res_stream_V_data_31_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 41 \
    name res_stream_V_data_32_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_32_V \
    op interface \
    ports { res_stream_V_data_32_V_din { O 16 vector } res_stream_V_data_32_V_full_n { I 1 bit } res_stream_V_data_32_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 42 \
    name res_stream_V_data_33_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_33_V \
    op interface \
    ports { res_stream_V_data_33_V_din { O 16 vector } res_stream_V_data_33_V_full_n { I 1 bit } res_stream_V_data_33_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 43 \
    name res_stream_V_data_34_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_34_V \
    op interface \
    ports { res_stream_V_data_34_V_din { O 16 vector } res_stream_V_data_34_V_full_n { I 1 bit } res_stream_V_data_34_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 44 \
    name res_stream_V_data_35_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_35_V \
    op interface \
    ports { res_stream_V_data_35_V_din { O 16 vector } res_stream_V_data_35_V_full_n { I 1 bit } res_stream_V_data_35_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 45 \
    name res_stream_V_data_36_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_36_V \
    op interface \
    ports { res_stream_V_data_36_V_din { O 16 vector } res_stream_V_data_36_V_full_n { I 1 bit } res_stream_V_data_36_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 46 \
    name res_stream_V_data_37_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_37_V \
    op interface \
    ports { res_stream_V_data_37_V_din { O 16 vector } res_stream_V_data_37_V_full_n { I 1 bit } res_stream_V_data_37_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 47 \
    name res_stream_V_data_38_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_38_V \
    op interface \
    ports { res_stream_V_data_38_V_din { O 16 vector } res_stream_V_data_38_V_full_n { I 1 bit } res_stream_V_data_38_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 48 \
    name res_stream_V_data_39_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_39_V \
    op interface \
    ports { res_stream_V_data_39_V_din { O 16 vector } res_stream_V_data_39_V_full_n { I 1 bit } res_stream_V_data_39_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 49 \
    name res_stream_V_data_40_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_40_V \
    op interface \
    ports { res_stream_V_data_40_V_din { O 16 vector } res_stream_V_data_40_V_full_n { I 1 bit } res_stream_V_data_40_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 50 \
    name res_stream_V_data_41_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_41_V \
    op interface \
    ports { res_stream_V_data_41_V_din { O 16 vector } res_stream_V_data_41_V_full_n { I 1 bit } res_stream_V_data_41_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 51 \
    name res_stream_V_data_42_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_42_V \
    op interface \
    ports { res_stream_V_data_42_V_din { O 16 vector } res_stream_V_data_42_V_full_n { I 1 bit } res_stream_V_data_42_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 52 \
    name res_stream_V_data_43_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_43_V \
    op interface \
    ports { res_stream_V_data_43_V_din { O 16 vector } res_stream_V_data_43_V_full_n { I 1 bit } res_stream_V_data_43_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 53 \
    name res_stream_V_data_44_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_44_V \
    op interface \
    ports { res_stream_V_data_44_V_din { O 16 vector } res_stream_V_data_44_V_full_n { I 1 bit } res_stream_V_data_44_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 54 \
    name res_stream_V_data_45_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_45_V \
    op interface \
    ports { res_stream_V_data_45_V_din { O 16 vector } res_stream_V_data_45_V_full_n { I 1 bit } res_stream_V_data_45_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 55 \
    name res_stream_V_data_46_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_46_V \
    op interface \
    ports { res_stream_V_data_46_V_din { O 16 vector } res_stream_V_data_46_V_full_n { I 1 bit } res_stream_V_data_46_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 56 \
    name res_stream_V_data_47_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_47_V \
    op interface \
    ports { res_stream_V_data_47_V_din { O 16 vector } res_stream_V_data_47_V_full_n { I 1 bit } res_stream_V_data_47_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 57 \
    name res_stream_V_data_48_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_48_V \
    op interface \
    ports { res_stream_V_data_48_V_din { O 16 vector } res_stream_V_data_48_V_full_n { I 1 bit } res_stream_V_data_48_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 58 \
    name res_stream_V_data_49_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_49_V \
    op interface \
    ports { res_stream_V_data_49_V_din { O 16 vector } res_stream_V_data_49_V_full_n { I 1 bit } res_stream_V_data_49_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 59 \
    name res_stream_V_data_50_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_50_V \
    op interface \
    ports { res_stream_V_data_50_V_din { O 16 vector } res_stream_V_data_50_V_full_n { I 1 bit } res_stream_V_data_50_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 60 \
    name res_stream_V_data_51_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_51_V \
    op interface \
    ports { res_stream_V_data_51_V_din { O 16 vector } res_stream_V_data_51_V_full_n { I 1 bit } res_stream_V_data_51_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 61 \
    name res_stream_V_data_52_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_52_V \
    op interface \
    ports { res_stream_V_data_52_V_din { O 16 vector } res_stream_V_data_52_V_full_n { I 1 bit } res_stream_V_data_52_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 62 \
    name res_stream_V_data_53_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_53_V \
    op interface \
    ports { res_stream_V_data_53_V_din { O 16 vector } res_stream_V_data_53_V_full_n { I 1 bit } res_stream_V_data_53_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 63 \
    name res_stream_V_data_54_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_54_V \
    op interface \
    ports { res_stream_V_data_54_V_din { O 16 vector } res_stream_V_data_54_V_full_n { I 1 bit } res_stream_V_data_54_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 64 \
    name res_stream_V_data_55_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_55_V \
    op interface \
    ports { res_stream_V_data_55_V_din { O 16 vector } res_stream_V_data_55_V_full_n { I 1 bit } res_stream_V_data_55_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 65 \
    name res_stream_V_data_56_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_56_V \
    op interface \
    ports { res_stream_V_data_56_V_din { O 16 vector } res_stream_V_data_56_V_full_n { I 1 bit } res_stream_V_data_56_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 66 \
    name res_stream_V_data_57_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_57_V \
    op interface \
    ports { res_stream_V_data_57_V_din { O 16 vector } res_stream_V_data_57_V_full_n { I 1 bit } res_stream_V_data_57_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 67 \
    name res_stream_V_data_58_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_58_V \
    op interface \
    ports { res_stream_V_data_58_V_din { O 16 vector } res_stream_V_data_58_V_full_n { I 1 bit } res_stream_V_data_58_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 68 \
    name res_stream_V_data_59_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_59_V \
    op interface \
    ports { res_stream_V_data_59_V_din { O 16 vector } res_stream_V_data_59_V_full_n { I 1 bit } res_stream_V_data_59_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 69 \
    name res_stream_V_data_60_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_60_V \
    op interface \
    ports { res_stream_V_data_60_V_din { O 16 vector } res_stream_V_data_60_V_full_n { I 1 bit } res_stream_V_data_60_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 70 \
    name res_stream_V_data_61_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_61_V \
    op interface \
    ports { res_stream_V_data_61_V_din { O 16 vector } res_stream_V_data_61_V_full_n { I 1 bit } res_stream_V_data_61_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 71 \
    name res_stream_V_data_62_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_62_V \
    op interface \
    ports { res_stream_V_data_62_V_din { O 16 vector } res_stream_V_data_62_V_full_n { I 1 bit } res_stream_V_data_62_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 72 \
    name res_stream_V_data_63_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_63_V \
    op interface \
    ports { res_stream_V_data_63_V_din { O 16 vector } res_stream_V_data_63_V_full_n { I 1 bit } res_stream_V_data_63_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 73 \
    name res_stream_V_data_64_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_64_V \
    op interface \
    ports { res_stream_V_data_64_V_din { O 16 vector } res_stream_V_data_64_V_full_n { I 1 bit } res_stream_V_data_64_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 74 \
    name res_stream_V_data_65_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_65_V \
    op interface \
    ports { res_stream_V_data_65_V_din { O 16 vector } res_stream_V_data_65_V_full_n { I 1 bit } res_stream_V_data_65_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 75 \
    name res_stream_V_data_66_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_66_V \
    op interface \
    ports { res_stream_V_data_66_V_din { O 16 vector } res_stream_V_data_66_V_full_n { I 1 bit } res_stream_V_data_66_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 76 \
    name res_stream_V_data_67_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_67_V \
    op interface \
    ports { res_stream_V_data_67_V_din { O 16 vector } res_stream_V_data_67_V_full_n { I 1 bit } res_stream_V_data_67_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 77 \
    name res_stream_V_data_68_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_68_V \
    op interface \
    ports { res_stream_V_data_68_V_din { O 16 vector } res_stream_V_data_68_V_full_n { I 1 bit } res_stream_V_data_68_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 78 \
    name res_stream_V_data_69_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_69_V \
    op interface \
    ports { res_stream_V_data_69_V_din { O 16 vector } res_stream_V_data_69_V_full_n { I 1 bit } res_stream_V_data_69_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 79 \
    name res_stream_V_data_70_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_70_V \
    op interface \
    ports { res_stream_V_data_70_V_din { O 16 vector } res_stream_V_data_70_V_full_n { I 1 bit } res_stream_V_data_70_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 80 \
    name res_stream_V_data_71_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_71_V \
    op interface \
    ports { res_stream_V_data_71_V_din { O 16 vector } res_stream_V_data_71_V_full_n { I 1 bit } res_stream_V_data_71_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 81 \
    name res_stream_V_data_72_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_72_V \
    op interface \
    ports { res_stream_V_data_72_V_din { O 16 vector } res_stream_V_data_72_V_full_n { I 1 bit } res_stream_V_data_72_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 82 \
    name res_stream_V_data_73_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_73_V \
    op interface \
    ports { res_stream_V_data_73_V_din { O 16 vector } res_stream_V_data_73_V_full_n { I 1 bit } res_stream_V_data_73_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 83 \
    name res_stream_V_data_74_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_74_V \
    op interface \
    ports { res_stream_V_data_74_V_din { O 16 vector } res_stream_V_data_74_V_full_n { I 1 bit } res_stream_V_data_74_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 84 \
    name res_stream_V_data_75_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_75_V \
    op interface \
    ports { res_stream_V_data_75_V_din { O 16 vector } res_stream_V_data_75_V_full_n { I 1 bit } res_stream_V_data_75_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 85 \
    name res_stream_V_data_76_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_76_V \
    op interface \
    ports { res_stream_V_data_76_V_din { O 16 vector } res_stream_V_data_76_V_full_n { I 1 bit } res_stream_V_data_76_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 86 \
    name res_stream_V_data_77_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_77_V \
    op interface \
    ports { res_stream_V_data_77_V_din { O 16 vector } res_stream_V_data_77_V_full_n { I 1 bit } res_stream_V_data_77_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 87 \
    name res_stream_V_data_78_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_78_V \
    op interface \
    ports { res_stream_V_data_78_V_din { O 16 vector } res_stream_V_data_78_V_full_n { I 1 bit } res_stream_V_data_78_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 88 \
    name res_stream_V_data_79_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_79_V \
    op interface \
    ports { res_stream_V_data_79_V_din { O 16 vector } res_stream_V_data_79_V_full_n { I 1 bit } res_stream_V_data_79_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 89 \
    name res_stream_V_data_80_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_80_V \
    op interface \
    ports { res_stream_V_data_80_V_din { O 16 vector } res_stream_V_data_80_V_full_n { I 1 bit } res_stream_V_data_80_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 90 \
    name res_stream_V_data_81_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_81_V \
    op interface \
    ports { res_stream_V_data_81_V_din { O 16 vector } res_stream_V_data_81_V_full_n { I 1 bit } res_stream_V_data_81_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 91 \
    name res_stream_V_data_82_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_82_V \
    op interface \
    ports { res_stream_V_data_82_V_din { O 16 vector } res_stream_V_data_82_V_full_n { I 1 bit } res_stream_V_data_82_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 92 \
    name res_stream_V_data_83_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_83_V \
    op interface \
    ports { res_stream_V_data_83_V_din { O 16 vector } res_stream_V_data_83_V_full_n { I 1 bit } res_stream_V_data_83_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 93 \
    name res_stream_V_data_84_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_84_V \
    op interface \
    ports { res_stream_V_data_84_V_din { O 16 vector } res_stream_V_data_84_V_full_n { I 1 bit } res_stream_V_data_84_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 94 \
    name res_stream_V_data_85_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_85_V \
    op interface \
    ports { res_stream_V_data_85_V_din { O 16 vector } res_stream_V_data_85_V_full_n { I 1 bit } res_stream_V_data_85_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 95 \
    name res_stream_V_data_86_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_86_V \
    op interface \
    ports { res_stream_V_data_86_V_din { O 16 vector } res_stream_V_data_86_V_full_n { I 1 bit } res_stream_V_data_86_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 96 \
    name res_stream_V_data_87_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_87_V \
    op interface \
    ports { res_stream_V_data_87_V_din { O 16 vector } res_stream_V_data_87_V_full_n { I 1 bit } res_stream_V_data_87_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 97 \
    name res_stream_V_data_88_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_88_V \
    op interface \
    ports { res_stream_V_data_88_V_din { O 16 vector } res_stream_V_data_88_V_full_n { I 1 bit } res_stream_V_data_88_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 98 \
    name res_stream_V_data_89_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_89_V \
    op interface \
    ports { res_stream_V_data_89_V_din { O 16 vector } res_stream_V_data_89_V_full_n { I 1 bit } res_stream_V_data_89_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 99 \
    name res_stream_V_data_90_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_90_V \
    op interface \
    ports { res_stream_V_data_90_V_din { O 16 vector } res_stream_V_data_90_V_full_n { I 1 bit } res_stream_V_data_90_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 100 \
    name res_stream_V_data_91_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_91_V \
    op interface \
    ports { res_stream_V_data_91_V_din { O 16 vector } res_stream_V_data_91_V_full_n { I 1 bit } res_stream_V_data_91_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 101 \
    name res_stream_V_data_92_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_92_V \
    op interface \
    ports { res_stream_V_data_92_V_din { O 16 vector } res_stream_V_data_92_V_full_n { I 1 bit } res_stream_V_data_92_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 102 \
    name res_stream_V_data_93_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_93_V \
    op interface \
    ports { res_stream_V_data_93_V_din { O 16 vector } res_stream_V_data_93_V_full_n { I 1 bit } res_stream_V_data_93_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 103 \
    name res_stream_V_data_94_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_94_V \
    op interface \
    ports { res_stream_V_data_94_V_din { O 16 vector } res_stream_V_data_94_V_full_n { I 1 bit } res_stream_V_data_94_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 104 \
    name res_stream_V_data_95_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_95_V \
    op interface \
    ports { res_stream_V_data_95_V_din { O 16 vector } res_stream_V_data_95_V_full_n { I 1 bit } res_stream_V_data_95_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 105 \
    name res_stream_V_data_96_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_96_V \
    op interface \
    ports { res_stream_V_data_96_V_din { O 16 vector } res_stream_V_data_96_V_full_n { I 1 bit } res_stream_V_data_96_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 106 \
    name res_stream_V_data_97_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_97_V \
    op interface \
    ports { res_stream_V_data_97_V_din { O 16 vector } res_stream_V_data_97_V_full_n { I 1 bit } res_stream_V_data_97_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 107 \
    name res_stream_V_data_98_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_98_V \
    op interface \
    ports { res_stream_V_data_98_V_din { O 16 vector } res_stream_V_data_98_V_full_n { I 1 bit } res_stream_V_data_98_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 108 \
    name res_stream_V_data_99_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_99_V \
    op interface \
    ports { res_stream_V_data_99_V_din { O 16 vector } res_stream_V_data_99_V_full_n { I 1 bit } res_stream_V_data_99_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 109 \
    name res_stream_V_data_100_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_100_V \
    op interface \
    ports { res_stream_V_data_100_V_din { O 16 vector } res_stream_V_data_100_V_full_n { I 1 bit } res_stream_V_data_100_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 110 \
    name res_stream_V_data_101_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_101_V \
    op interface \
    ports { res_stream_V_data_101_V_din { O 16 vector } res_stream_V_data_101_V_full_n { I 1 bit } res_stream_V_data_101_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 111 \
    name res_stream_V_data_102_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_102_V \
    op interface \
    ports { res_stream_V_data_102_V_din { O 16 vector } res_stream_V_data_102_V_full_n { I 1 bit } res_stream_V_data_102_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 112 \
    name res_stream_V_data_103_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_103_V \
    op interface \
    ports { res_stream_V_data_103_V_din { O 16 vector } res_stream_V_data_103_V_full_n { I 1 bit } res_stream_V_data_103_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 113 \
    name res_stream_V_data_104_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_104_V \
    op interface \
    ports { res_stream_V_data_104_V_din { O 16 vector } res_stream_V_data_104_V_full_n { I 1 bit } res_stream_V_data_104_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 114 \
    name res_stream_V_data_105_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_105_V \
    op interface \
    ports { res_stream_V_data_105_V_din { O 16 vector } res_stream_V_data_105_V_full_n { I 1 bit } res_stream_V_data_105_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 115 \
    name res_stream_V_data_106_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_106_V \
    op interface \
    ports { res_stream_V_data_106_V_din { O 16 vector } res_stream_V_data_106_V_full_n { I 1 bit } res_stream_V_data_106_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 116 \
    name res_stream_V_data_107_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_107_V \
    op interface \
    ports { res_stream_V_data_107_V_din { O 16 vector } res_stream_V_data_107_V_full_n { I 1 bit } res_stream_V_data_107_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 117 \
    name res_stream_V_data_108_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_108_V \
    op interface \
    ports { res_stream_V_data_108_V_din { O 16 vector } res_stream_V_data_108_V_full_n { I 1 bit } res_stream_V_data_108_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 118 \
    name res_stream_V_data_109_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_109_V \
    op interface \
    ports { res_stream_V_data_109_V_din { O 16 vector } res_stream_V_data_109_V_full_n { I 1 bit } res_stream_V_data_109_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 119 \
    name res_stream_V_data_110_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_110_V \
    op interface \
    ports { res_stream_V_data_110_V_din { O 16 vector } res_stream_V_data_110_V_full_n { I 1 bit } res_stream_V_data_110_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 120 \
    name res_stream_V_data_111_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_111_V \
    op interface \
    ports { res_stream_V_data_111_V_din { O 16 vector } res_stream_V_data_111_V_full_n { I 1 bit } res_stream_V_data_111_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 121 \
    name res_stream_V_data_112_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_112_V \
    op interface \
    ports { res_stream_V_data_112_V_din { O 16 vector } res_stream_V_data_112_V_full_n { I 1 bit } res_stream_V_data_112_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 122 \
    name res_stream_V_data_113_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_113_V \
    op interface \
    ports { res_stream_V_data_113_V_din { O 16 vector } res_stream_V_data_113_V_full_n { I 1 bit } res_stream_V_data_113_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 123 \
    name res_stream_V_data_114_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_114_V \
    op interface \
    ports { res_stream_V_data_114_V_din { O 16 vector } res_stream_V_data_114_V_full_n { I 1 bit } res_stream_V_data_114_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 124 \
    name res_stream_V_data_115_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_115_V \
    op interface \
    ports { res_stream_V_data_115_V_din { O 16 vector } res_stream_V_data_115_V_full_n { I 1 bit } res_stream_V_data_115_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 125 \
    name res_stream_V_data_116_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_116_V \
    op interface \
    ports { res_stream_V_data_116_V_din { O 16 vector } res_stream_V_data_116_V_full_n { I 1 bit } res_stream_V_data_116_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 126 \
    name res_stream_V_data_117_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_117_V \
    op interface \
    ports { res_stream_V_data_117_V_din { O 16 vector } res_stream_V_data_117_V_full_n { I 1 bit } res_stream_V_data_117_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 127 \
    name res_stream_V_data_118_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_118_V \
    op interface \
    ports { res_stream_V_data_118_V_din { O 16 vector } res_stream_V_data_118_V_full_n { I 1 bit } res_stream_V_data_118_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 128 \
    name res_stream_V_data_119_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_119_V \
    op interface \
    ports { res_stream_V_data_119_V_din { O 16 vector } res_stream_V_data_119_V_full_n { I 1 bit } res_stream_V_data_119_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 129 \
    name res_stream_V_data_120_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_120_V \
    op interface \
    ports { res_stream_V_data_120_V_din { O 16 vector } res_stream_V_data_120_V_full_n { I 1 bit } res_stream_V_data_120_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 130 \
    name res_stream_V_data_121_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_121_V \
    op interface \
    ports { res_stream_V_data_121_V_din { O 16 vector } res_stream_V_data_121_V_full_n { I 1 bit } res_stream_V_data_121_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 131 \
    name res_stream_V_data_122_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_122_V \
    op interface \
    ports { res_stream_V_data_122_V_din { O 16 vector } res_stream_V_data_122_V_full_n { I 1 bit } res_stream_V_data_122_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 132 \
    name res_stream_V_data_123_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_123_V \
    op interface \
    ports { res_stream_V_data_123_V_din { O 16 vector } res_stream_V_data_123_V_full_n { I 1 bit } res_stream_V_data_123_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 133 \
    name res_stream_V_data_124_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_124_V \
    op interface \
    ports { res_stream_V_data_124_V_din { O 16 vector } res_stream_V_data_124_V_full_n { I 1 bit } res_stream_V_data_124_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 134 \
    name res_stream_V_data_125_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_125_V \
    op interface \
    ports { res_stream_V_data_125_V_din { O 16 vector } res_stream_V_data_125_V_full_n { I 1 bit } res_stream_V_data_125_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 135 \
    name res_stream_V_data_126_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_126_V \
    op interface \
    ports { res_stream_V_data_126_V_din { O 16 vector } res_stream_V_data_126_V_full_n { I 1 bit } res_stream_V_data_126_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 136 \
    name res_stream_V_data_127_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_127_V \
    op interface \
    ports { res_stream_V_data_127_V_din { O 16 vector } res_stream_V_data_127_V_full_n { I 1 bit } res_stream_V_data_127_V_write { O 1 bit } } \
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


# RegSlice definition:
set ID 137
set RegSliceName regslice_core
set RegSliceInstName regslice_core_U
set CoreName ap_simcore_regslice_core
if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $RegSliceName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_regSlice] == "::AESL_LIB_VIRTEX::xil_gen_regSlice"} {
eval "::AESL_LIB_VIRTEX::xil_gen_regSlice { \
    name ${RegSliceName} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_regSlice, check your platform lib"
}
}


