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
    for (i = 0; i < 10; i++)
    {
        *(ptrA+i) = i*2;
        cout << *(ptrA+i) << " , ";
    }
    cout<<endl;
    for (i = 0; i < 10; i++){
        average += *ptrA; //Al poner el ++ en esta parte, se genera un pequeño error, cambia de posicion de memoria
        //cout<<"pointer : "<<*ptrA<<endl;
        *ptrA++;
    }
    average/=10;
    cout << "\n\nThe average is " << average <<"\n\n";
    return 0;
}
