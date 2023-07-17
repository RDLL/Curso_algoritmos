/*************************************
* Uso de arreglos.                   *
**************************************/

#include <iostream>

using namespace std;

int main(void) {
    int A[10],i;
    float average=0;
    for (i = 0; i < 10; i++)
        A[i]=i*2; // Inicializacion del arreglo
    for (i = 0; i < 10; i++)
        average+= A[i];
    average/=10;
    cout<< "The average is " << average << endl;
    return 0;
}
