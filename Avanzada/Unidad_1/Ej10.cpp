/*********************************************************
* Uso del operador de desasignación de memoria delete[]  *
* Este operador nos permite liberar la memoria utilizada *
* por un puntero que apunta a un arreglo                 *
* Esto suena un poco confuso debido a que en pocas       *
* palabras, libera la memoria que ocupa el arreglo o el  *
* bloque de memoria creado mediante el operador new[],   *
* sin embargo lo que recibe el operador delete[] es la   *
* dirección de memoria del primer elemento de ese bloque *
* de memoria o arreglo, si así se puede ver.             *
**********************************************************/

#include <iostream>

using namespace std;

int main(void)
{
    float average=0;
    int i,*ptrA = new int[10];
    for (i = 0; i < 10; i++)
    {
        *(ptrA+i) = i*2;
        cout << *(ptrA+i) << " , ";
    }
    for (i = 0; i < 10; i++)
        average += *(ptrA+i);
    average/=10;
    cout << "\n\nThe average is " << average <<"\n\n";
    delete [] ptrA; //Se libera el bloque de memoria al que apunta ptrA.
    /* Si bien al salir del programa se libera la memoria, en programas de ejecución casi constante como
    un sistema operativo, un antivirus o algún sistema de gestión de archivos como un sistema de almacén
    el uso de la memoria juega un papel muy importante*/
    return 0;
}
