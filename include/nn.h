#ifndef NN_H
#define NN_H

#include <stddef.h>
#include <stdlib.h>

float* nn_forward_propagate(float* inp_layer, unsigned int inp_size, unsigned int out_size, float* weights);

#endif
