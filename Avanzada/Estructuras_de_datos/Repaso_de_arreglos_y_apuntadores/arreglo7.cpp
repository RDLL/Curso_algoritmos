/********************************************************
* Uso de arreglos.                                      *
* Uso de constantes.                                    *
* Uso de funcion setw(n).                               *
* Esta funcion nos permite asignar un espacio de campo  *
* para la siguiente entrada o salida de manera que nos  *
* permite mostrar nuestra salida con espacio según      *
* el tamaño indicado por n.                             *
*********************************************************/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){// la variable constante se puede usar para especificar el tamaño de los arreglos
    const int tamanioArreglo= 10; // debe inicializarse en la declaración
    int s[tamanioArreglo]; // el arreglo s tiene 10 elementos
    for( int i = 0; i < tamanioArreglo; i++ ) // establece los valores
        s[ i ] = 2 + 2 * i;
    cout<< "Elemento" << setw( 13 ) << "Valor" << endl; // imprime el contenido del arreglo s en formato tabular
    for( int j = 0; j < tamanioArreglo; j++)
        cout<< setw( 7 ) << j << setw( 13 ) << s[ j ] << endl;
        return 0; // indica que terminó correctamente
} // fin de main
