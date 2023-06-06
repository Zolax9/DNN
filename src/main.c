#include <stdio.h>

#include "nn.h"

int main()
{
    float inp_layer[2] = { 1, -1 };
    float weights[4] = { 0, 1, 1, 0 };
    float* out_layer = nn_forward_propagate(&inp_layer, 2, 2, &weights);
    for (size_t i = 0; i < 2; ++i)
    {
        printf("%f\n", out_layer[i]);
    }
};
