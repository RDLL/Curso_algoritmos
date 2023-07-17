/*************************************
* Memoria.
* Uso del operador & para obtener la *
* dirección de memoria a la que      *
* apunta un puntero.                 *
* Uso de la función sizeof() para la *
* obtención del uso de memoria que   *
* ocupa una variable.                *
**************************************/

#include <iostream>

using namespace std;

int main(){
    int a = 10;
    cout<< " Value: " << a << " Address " << &a << '\n';
    cout<< " Variable a uses " << sizeof(a) << " bytes " <<endl;
    return 0;
}
