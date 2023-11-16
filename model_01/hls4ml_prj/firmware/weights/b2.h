//Numpy array shape [4]
//Min -0.419433593750
//Max 0.002153396606
//Number of zeros 0

#ifndef B2_H_
#define B2_H_

#ifndef __SYNTHESIS__
conv2d_bias_t b2[4];
#else
conv2d_bias_t b2[4] = {0.0021533966, -0.4194335938, -0.0141448975, -0.1494140625};
#endif

#endif
