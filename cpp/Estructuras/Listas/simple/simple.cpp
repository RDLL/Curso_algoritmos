#include "simple.hpp"

void push(lista *L,float x, float y){
    lista aux = new SIMPLE;
    aux -> x = x;
    aux -> y = y;
    aux -> sig = *L;
    *L = aux;
    std::cout << "Se agrego a la lista\n";
}

void mostrar(SIMPLE *L){
    while(L!=NULL){
        std::cout << "x: " << L -> x << " y: " << L -> y << "\n";
        L = L->sig;
    }
    std::cout << "Fin de la lista\n";
}

void pop(lista *L){
    lista aux = *L;
    (*L) = (*L) -> sig;
    delete aux;
}

