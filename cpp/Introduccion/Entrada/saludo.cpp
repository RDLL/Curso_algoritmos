#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(){
    string nombre;
    cout << "¿como te llamas?\n";
    getline(cin,nombre);
    cout<< "Hola " << nombre << endl;
}