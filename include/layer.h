#ifndef LAYER_H
#define LAYER_H

typedef struct layer
{
    unsigned int size;
    float* nodes;
} layer;

layer* layer_create(unsigned int size); // create and init a layer

#endif
