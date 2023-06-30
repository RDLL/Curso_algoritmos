/*********************************************************
* Uso del operador new[] para la asignación de memoria   *
* en tiempo de ejecución de una manera sencilla.         *
* Uso del operador delete[] para liberar la memoria      *
* reservada por el operador new[].                       *
**********************************************************/

#include <iostream>

using namespace std;

int main(void)
{
    float average=0;
    int i,size,*ptrA;
    cout << "How many elements do you want to consider "; //Pedimos el tamaño de memoria a reservar
    cin >> size;
    ptrA = new int[size]; //Reservamos la memoria con tamaño "size"
    if (ptrA != NULL) //Verificamos que se haya asignado la memoria para evitar errores
    {
        for (i = 0; i < size; i++)
        {
            *(ptrA+i) = i*2;
            cout << *(ptrA+i) << " , ";
        }
        for (i = 0; i < size; i++)
                average += *(ptrA+i);
        average/=size;
        cout << "\n\nThe average is " << average << "\n\n";
        delete [] ptrA; //Liberamos la memoria una vez que sabemos que ya no la utilizamos
    }
    else
        cout << "Not enough memory\n\n"; //Mensaje en caso de que no se haya reservado la memoria
    return 0;
}
