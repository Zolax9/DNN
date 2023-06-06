#include "nn.h"
#include <stdio.h>

void nn_forward_propagate(layer* inp_layer, layer* out_layer, float* weights)
{
    memset(out_layer->nodes, 0, out_layer->size * sizeof(float));
    for (size_t i = 0; i < out_layer->size; ++i)
    {
        for (size_t j = 0; j < inp_layer->size; ++j)
        {
            out_layer->nodes[i] += inp_layer->nodes[j] * weights[i * out_layer->size+ j];
        }
    }
};
