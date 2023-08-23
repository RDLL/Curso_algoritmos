#ifndef SIMPLE_H
#define SIMPLE_H

#include <iostream>
#include <cstdlib>
#include <exception>

typedef struct nod{
    int data;
    nod *sig;
}LISTA;

typedef LISTA* SIMPLE;

void push(SIMPLE *head);
void imprimir(SIMPLE head);
void pop(SIMPLE *head);
int menu();
int pedir();

#endif

