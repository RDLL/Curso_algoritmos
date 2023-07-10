/*********************************************************
* Uso del operador de asignación de memoria new[]        *
* Este operador nos permite reservar memoria para un     *
* arreglo, esto nos permite de cierta manera hacer uso   *
* de memoria dinámica.                                   *
* Este operador devuelve un apuntador que apunta al      *
* primer elemento del bloque de memoria o arreglo.       *
* Podriamos considerarlo un arreglo sin embargo no es    *
* exactamente lo mismo, trata de borrar un arreglo       *
* usando delete[] y recibiras un error o un warning.     *
**********************************************************/

#include <iostream>

using namespace std;

int main(void)
{
    float average=0;
    int i,*ptrA = new int[10];
    float *ptrAverage = &average;
    for (i = 0; i < 10; i++)
    {
        *(ptrA+i) = i*2;
        cout << *(ptrA+i) << " , ";
    }
    cout<<endl;
    for (i = 0; i < 10; i++){
        average += *ptrA; //Accedemos al valor donde esta apuntando ptrA
        cout<<"address : "<< ptrA <<endl;
        cout<<"pointer value : "<< *ptrA <<endl;
        ptrA ++; //Avanzamos a la siguiente direccion de memoria
    }
    average/=10;
    cout << "\n\nAddress of average is " << &ptrAverage <<"\n\n";
    
    cout << "\n\nThe average is " << average <<"\n\n";
    ptrAverage ++;
    cout << "\n\nNew addres of average is " << ptrAverage <<"\n\n";
    return 0;
}
