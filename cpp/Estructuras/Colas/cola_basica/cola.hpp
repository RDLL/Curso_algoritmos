#ifndef COLA_HPP
#define COLA_HPP

#include <iostream>

using namespace std;

const int tam = 10;

typedef struct cola{
    int frente = 0;
    int fin = 0;
    float arr[tam];
    void queue(float dato);
    void dequeue();
    bool llena();
    bool vacia();
}COLA;

#endif

