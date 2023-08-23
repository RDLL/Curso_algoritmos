#ifndef SIMPLE_H
#define SIMPLE_H

#include <iostream>
#include <cstdlib>


typedef struct nod{
    float x,y;
    nod *sig;
}SIMPLE;

typedef SIMPLE* lista;

void push(lista *L, float x, float y);
void mostrar(SIMPLE *L);
void pop(lista *L);

#endif

