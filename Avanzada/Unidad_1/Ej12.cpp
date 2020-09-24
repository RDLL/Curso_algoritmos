/************************************
* Uso de funciones.                 *
* Función square que nos regresa    *
* el valor que le mandemos al       *
* cuadrado.                         *
*************************************/
#include <iostream>

using namespace std;

int square(int); //Prototipo de función

int main(){
    int x=3,resultado;
    resultado=square(x); //Llamada a función
    cout<<"Resultado: "<<resultado<<endl;
    return 0;
}

int square(int y){  //Cuerpo de la función
    return y*y;
}
