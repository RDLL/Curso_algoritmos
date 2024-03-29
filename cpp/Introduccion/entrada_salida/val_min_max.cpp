/***************************************************
* Declaración e inicialización de variables.       *
* Uso de cout y operador de inserción de flujo <<  *
* para mostrar información sobre las variable.     *
* Uso de macros que contienen los valores minimos  *
* o maximos que puede tener una variable según     *
* su tipo.                                         *
* Uso de funcion sizeof(variable) la cual devuelve *
* el tamaño en bytes que ocupa una variable en la  *
* memoria.                                         *
****************************************************/
#include <iostream> // Cabecera para funciones de los flujos de entrada y salida
#include <climits> // Cabecera para el uso de macros de valores minimos y maximos de bool, char e int
#include <cfloat> // Cabecera para macros de valores minimos y maximo de float y double

using namespace std;

int main()
{
    bool p = true;
    char letter = 'A'; // Esto sirve para asignar el valor literal de A a letter en ASCII sería 65
    int x;
    float y;
    x = 5;
    y = 3.45;
    double z = 324.456;
    unsigned char letterA = 65;
    unsigned int num = -1; // Esto está mal pero le asignara el máximo valor posible que puede manejar o un 0
    long long int b = 4243345359035;
    unsigned long int c = -1; // Esto está mal pero le asignara el máximo valor posible que puede manejar o un 0
    cout<<"Tamaño en Bytes de bool: " << sizeof(p) << " con un valor de: " << p << '\n';
    cout<<"Tamaño en Bytes de char es: "<<sizeof(letter)<<" con valores entre "<<SCHAR_MIN<<" y "<<SCHAR_MAX<<" valor actual: " << letter << '\n';
    cout<<"Tamaño en Bytes de int es: "<<sizeof(x)<<" con valores entre "<<INT_MIN<<" y "<<INT_MAX<<" valor actual: "<< x << '\n';
    cout<<"Tamaño en Bytes de float es: "<<sizeof(y)<<" con valores entre "<<FLT_MIN<<" y "<<FLT_MAX<<" valor actual: "<<y<< '\n';
    cout<<"Tamaño en Bytes de double es: "<<sizeof(z)<<" con valores entre "<<DBL_MIN<<" y "<<DBL_MAX<<" valor actual: "<<z<< '\n';
    cout<<"Tamaño en Bytes de unsigned char es: "<<sizeof(letterA)<<" con valor maximo de: "<<UCHAR_MAX<<" valor actual: "<<letterA<< '\n';
    cout<<"Tamaño en Bytes de unsigned int es: "<<sizeof(num)<<" con valor maximo de: "<<UINT_MAX<<" valor actual: "<<num<< '\n';
    cout<<"Tamaño en Bytes de long long int es: "<<sizeof(b)<<" con valores entre "<<LONG_MIN<<" y "<<LONG_MAX<<" valor actual: "<<b<< '\n';
    cout<<"Tamaño en Bytes de unsigned long int es: "<<sizeof(c)<<" con valor maximo de: "<<ULONG_MAX<<" valor actual: "<<c<< '\n';
    return 0;
}

