#include "layer.h"

layer* layer_create(unsigned int size)
{
    layer* l = malloc(sizeof(layer));
    float* n = malloc(size * sizeof(float));
    l->nodes = n;
    l->size = size;
    return l;
};

void weights_rand(unsigned int inp_size, unsigned int out_size, float* weights[][inp_size])
{
    for (size_t i = 0; i < out_size; ++i)
    {
        for (size_t j = 0; j < inp_size; ++j)
        {
            printf("i: %d, j: %d\n", i, j);
            (*weights)[i][j] = 2;
        }
    }
};
