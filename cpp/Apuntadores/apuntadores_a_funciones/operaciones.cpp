#include <iostream>

using namespace std;


void suma(float &x, float &y);
void resta(float &x, float &y);
void multiplicacion(float &x, float &y);
void division(float &x, float &y);
void salida(float &x,float &y);
float get(float &y);
int menu();

int main(){
    float x,y;
    x=y=0;
    int op;
    void (*fptr[5])(float &,float &);
    fptr[0] = suma;
    fptr[1] = resta;
    fptr[2] = multiplicacion;
    fptr[3] = division;
    fptr[4] = salida;
    op = menu();
    fptr[op](x,y);
    return 0;
}


void suma(float &x, float &y){
    x = get(y);
    cout << x + y << endl;
}

void multiplicacion(float &x, float &y){
    x = get(y);
    cout << x * y << endl;
}

void division(float &x, float &y){
    x = get(y);
    cout << x / y << endl;
}

void resta(float &x, float &y){
    x = get(y);
    cout << x - y << endl;
}

void salida(float &x, float &y){
    cout << "Hasta luego" << endl;
}

int menu(){
    int op;
    cout << "Selecciona una opcion:\n";
    cout << "1.- Suma\n";
    cout << "2.- Resta\n";
    cout << "3.- Multiplicacion\n";
    cout << "4.- Division\n";
    cout << "5.- Salir\n";
    cin >> op;
    return (op > 4 || op < 1) ? 4 : op-1;
}

float get(float &y){
    float x;
    cout << "Ingresa dos numeros:\n";
    cin >> x >> y;
    return x;
}

