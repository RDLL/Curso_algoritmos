/*************************************************************
* Uso de operador new para crear "arreglos".                 *
* Uso de funciones para sumar e imprimir "arreglos".         *
* Si recuerdan lo que dije del operador new es que como      *
* tal no se crean arreglos pero funciona de manera parecida. *
**************************************************************/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void suma(int *a, int* b, int *c, int length);
void printVec(int *A, int length);

int main(){
    int i, length,*A, *B, *C;
    cout << "How many elements do you want to consider ";
    cin >> length;
    A = new int[length];B = new int[length];
    C = new int[length];
    if ((A != NULL)&&(B!= NULL)&&(C!= NULL)){
        srand ( time(NULL) );
        for (i = 0; i < length; i++){
            A[i] = rand()%100 +1;
            B[i] = rand()%100 +1;
        }
        suma(A,B,C,length);
        cout << "\n\n A:";
        printVec(A,length);
        cout << "\n\n B:";
        printVec(B,length);
        cout << "\n\n C:";
        printVec(C,length);
        delete [] A;
        delete [] B;
        delete [] C;
    }
    else
        cout << "Not enough memory";
    return 0;
}

void suma(int *a, int* b, int *c, int length)
{
for(int i= 0; i< length; i++)
*(c+i)=*(a+i)+*(b+i);
}

void printVec(int *A, int length){
    for(int i=0; i< length; i++)
    cout << A[i] << ",";
    cout << endl;
}
