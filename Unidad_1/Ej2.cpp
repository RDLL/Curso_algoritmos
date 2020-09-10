/*************************************
* Apuntadores y Operadores "&" y "*". *
* Uso del operador & para obtener la *
* dirección de memoria a la que      *
* apunta un puntero.                 *
* Uso del operador * para obtener el *
* valor de la variable a la que      *
* apunta un puntero.                 *
**************************************/

#include <iostream>

using std::cout;
using std::endl;

int main(){
    int a; // a es un entero
    int*aPtr; // aPtres un int* --apuntador a un entero
    a = 7; // se asigna 7 a la variable a
    aPtr= &a; // se asigna la dirección de a a aPtr
    cout<< "La direccionde a es " << &a<< "\nEl valor de aPtres " << aPtr;
    cout << "\n\nEl valor de a es " << a<< "\nEl valor de *aPtres " << *aPtr;
    cout<< "\n\nDemostracion de que * y & son inversos "<< "uno del otro.\n&*aPtr= " << &*aPtr<< "\n*&aPtr = " << *&aPtr << endl;
    return 0; // indica que terminó correctamente
} // fin de main
