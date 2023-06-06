#ifndef NN_H
#define NN_H

#include <stddef.h>
#include <stdlib.h>

#include "layer.h"

void nn_forward_propagate(layer* inp_layer, layer* out_layer, float* weights);

#endif
