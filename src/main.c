#include <stdio.h>

#include "nn.h"

int main()
{
    layer* inp_layer = layer_create(2);
    inp_layer->nodes[0] = 1;
    inp_layer->nodes[1] = -1;
    layer* out_layer = layer_create(2);
    out_layer->nodes[0] = 1;
    out_layer->nodes[1] = 1;
    float weights[out_layer->size][inp_layer->size];
    weights[0][0] = 0;
    weights[0][1] = 0.5;
    weights[1][0] = 0.2;
    weights[1][1] = 0;
    nn_forward_propagate(inp_layer, out_layer, weights);
    for (size_t i = 0; i < out_layer->size; ++i)
    {
        printf("%f\n", out_layer->nodes[i]);
    }
};
