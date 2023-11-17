//Numpy array shape [4]
//Min -0.212768554688
//Max -0.012756347656
//Number of zeros 0

#ifndef B2_H_
#define B2_H_

#ifndef __SYNTHESIS__
conv2d_bias_t b2[4];
#else
conv2d_bias_t b2[4] = {-0.0127563477, -0.2127685547, -0.0323181152, -0.0477294922};
#endif

#endif
