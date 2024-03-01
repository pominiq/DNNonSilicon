#include "pointwise_conv_2d_cl_array_array_ap_fixed_64u_config6_pointwise_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config6_pointwise_s::thread_trunc_ln708_971_fu_180970_p1() {
    trunc_ln708_971_fu_180970_p1 =  (sc_lv<24>) (grp_fu_3284_p2.read());
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config6_pointwise_s::thread_trunc_ln708_971_fu_180970_p4() {
    trunc_ln708_971_fu_180970_p4 = trunc_ln708_971_fu_180970_p1.read().range(23, 10);
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config6_pointwise_s::thread_trunc_ln708_981_fu_162884_p1() {
    trunc_ln708_981_fu_162884_p1 = data_V_data_30_V_dout.read();
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config6_pointwise_s::thread_trunc_ln708_984_fu_171403_p4() {
    trunc_ln708_984_fu_171403_p4 = grp_fu_168894_p2.read().range(21, 10);
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config6_pointwise_s::thread_trunc_ln708_986_fu_171417_p4() {
    trunc_ln708_986_fu_171417_p4 = grp_fu_168900_p2.read().range(21, 10);
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config6_pointwise_s::thread_trunc_ln708_989_fu_165861_p4() {
    trunc_ln708_989_fu_165861_p4 = grp_fu_164930_p2.read().range(24, 10);
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config6_pointwise_s::thread_trunc_ln708_993_fu_177488_p4() {
    trunc_ln708_993_fu_177488_p4 = grp_fu_175811_p2.read().range(22, 10);
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config6_pointwise_s::thread_trunc_ln708_99_fu_163426_p1() {
    trunc_ln708_99_fu_163426_p1 =  (sc_lv<24>) (grp_fu_3248_p2.read());
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config6_pointwise_s::thread_trunc_ln708_s_fu_166305_p4() {
    trunc_ln708_s_fu_166305_p4 = grp_fu_165245_p2.read().range(23, 10);
}

void pointwise_conv_2d_cl_array_array_ap_fixed_64u_config6_pointwise_s::thread_trunc_ln_fu_162759_p1() {
    trunc_ln_fu_162759_p1 = data_V_data_1_V_dout.read();
}

}

