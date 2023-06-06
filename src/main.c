#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "nn.h"

int main()
{
    srand(time(NULL));

    layer* inp_layer = layer_create(2);
    inp_layer->nodes[0] = 1;
    inp_layer->nodes[1] = -1;
    layer* out_layer = layer_create(2);
    out_layer->nodes[0] = 1;
    out_layer->nodes[1] = 1;
    float weights[out_layer->size][inp_layer->size];
    for (size_t i = 0; i < out_layer->size; ++i)
    {
        for (size_t j = 0; j < inp_layer->size; ++j)
        {
            weights[i][j] = rand() % 2000001 / 1000000.0 - 1;
            printf("%f\n", weights[i][j]);
        }
    }
    nn_forward_propagate(inp_layer, out_layer, weights);
    for (size_t i = 0; i < out_layer->size; ++i)
    {
        printf("%f\n", out_layer->nodes[i]);
    }
};
