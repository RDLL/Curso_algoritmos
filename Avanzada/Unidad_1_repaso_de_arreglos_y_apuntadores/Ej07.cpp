/********************************************************
* Uso de arreglos.                                      *
* Uso de apuntadores para reccorrer un arreglo          *
*********************************************************/


#include <iostream>

using namespace std;

int main(void){
    int A[10],i;
    float average=0;
    int *ptrA = &A[0];
    for (i = 0; i < 10; i++)
    {
        *ptrA = i*2;
        cout << *ptrA << " , ";
        ptrA++;
    }
    ptrA = &A[0];
    for (i = 0; i < 10; i++)
        average += *ptrA++;
    average/=10;
    cout << "\n\nThe average is " << average << "\n\n";
    return 0;
}
