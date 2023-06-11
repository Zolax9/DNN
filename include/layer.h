#ifndef LAYER_H
#define LAYER_H

#include <stdlib.h>
#include <time.h>

typedef struct layer
{
    unsigned int size;
    float* nodes;
} layer;

layer* layer_create(unsigned int size); // create and init a layer
void weights_rand(unsigned int inp_size, unsigned int out_size, float* weights[][inp_size]); // randomise weights

#endif
