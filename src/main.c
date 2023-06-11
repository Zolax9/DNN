#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "nn.h"

int main()
{
    srand(time(NULL));

    layer* inp_layer = layer_create(2);
    layer* hid_layer = layer_create(4);
    layer* out_layer = layer_create(1);
    float inp_hid_weights[hid_layer->size][inp_layer->size];
    weights_rand(inp_layer->size, hid_layer->size, &inp_hid_weights);

    inp_layer->nodes[0] = rand() % 2;
    inp_layer->nodes[1] = rand() % 2;

    for (size_t i = 0; i < hid_layer->size; ++i)
    {
        for (size_t j = 0; j < inp_layer->size; ++j)
        {
            printf("%f\n", inp_hid_weights[i][j]);
        }
    }
    nn_forward_propagate(inp_layer, hid_layer, inp_hid_weights);
    for (size_t i = 0; i < hid_layer->size; ++i)
    {
        printf("%f\n", hid_layer->nodes[i]);
    }
};
