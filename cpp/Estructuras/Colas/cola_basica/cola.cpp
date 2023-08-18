#include "cola.hpp"

void COLA::queue(float dato){
    if(llena())
        cout << "Cola llena\n";
    else{
        arr[fin] = dato;
        cout << arr[fin] << " insertado en " << fin;
        ++fin;
        cout << "\nNueva posicion: " << fin << '\n';
    }
}

void COLA::dequeue(){
    if(vacia())
        cout << "Pila vacia\n";
    else{
        int a = arr[frente];
        cout << arr[frente] << " eliminado\n";
        ++frente;
    }
}

bool COLA::llena(){
    if(fin >= tam){
        cout << "cola llena, posicion actual: " << fin << '\n';
        return true;
    }
    else{
        cout << "cola vacia, posicion actual: " << fin << '\n';
        return false;
    }
}

bool COLA::vacia(){
    if(frente == fin)
        return true;
    else 
        return false;
}
