//Numpy array shape [4]
//Min -0.472658246756
//Max 0.354082405567
//Number of zeros 0

#ifndef B2_H_
#define B2_H_

#ifndef __SYNTHESIS__
conv2d_bias_t b2[4];
#else
conv2d_bias_t b2[4] = {0.3540824056, -0.3365589976, -0.0046747937, -0.4726582468};
#endif

#endif
