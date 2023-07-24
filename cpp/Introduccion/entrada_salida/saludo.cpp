#include <iostream>
#include <cstring> //Biblioteca para el uso de cadenas
#include <cstdlib> //Biblioteca de funciones de proposito general

using namespace std;

int main(){
    string nombre;
    cout << "¿como te llamas?\n";
    getline(cin,nombre);
    cout<< "Hola " << nombre << endl;
}
