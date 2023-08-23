#include <iostream>
#include <cstdlib>
#include "simple.hpp"
#include <exception>
#include <limits>

int main(){
    int op = 0;
    SIMPLE l = NULL;
    void (*fptr[2])(SIMPLE *);
    fptr[0] = push;
    fptr[1] = pop;
    while(op != 4){
        op = menu();
        if(op == 3)
            imprimir(l);
        else if(op != 4)
                fptr[op-1](&l);
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Presiona una tecla para continuar";
        std::cin.get();
    } 
    std::cout << std::endl;
    return 0;
}

