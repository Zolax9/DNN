#include "nn.h"

float* nn_forward_propagate(float* inp_layer, unsigned int inp_size, unsigned int out_size, float* weights)
{
    float* out_layer = malloc(out_size * sizeof(float));
    memset(out_layer, 0.0, out_size * sizeof(float));
    for (size_t i = 0; i < out_size; ++i)
    {
        for (size_t j = 0; j < inp_size; ++j)
        {
            out_layer[i] += inp_layer[j] * weights[i * out_size + j];
        }
    }
    return out_layer;
};
