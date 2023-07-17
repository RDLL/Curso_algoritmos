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

int* suma(int *a, int* b, int length);
void printVec(int *A, int length);

int main(){
    int i, length,*A, *B, *C;
    cout << "How many elements do you want to consider ";
    cin >> length;
    A = new int[length];
    B = new int[length];
    if ((A != NULL)&&(B!= NULL)){
        srand ( time(NULL) );
        for (i = 0; i < length; i++){
            A[i] = rand()%100 +1;
            B[i] = rand()%100 +1;
        }
        C = suma(A,B,length);
        if (C != NULL){
            cout << "\n\n A = "; printVec(A,length);
            cout << "\n\n B = "; printVec(B,length);
            cout << "\n\n C = "; printVec(C,length);
            delete [] C;
        }
        else
            cout << "Error: Not enough memory....\n";
        delete [] A;
        delete [] B;
    }else
        cout << "Not enough memory\n\n";
    return 0;
}

int* suma(int *a, int* b, int length){
    int i,*c = new int[length];
    if (c != NULL)
    {
        for(i= 0; i< length; i++)
        c[i]=a[i]+b[i];
    }
    return c;
}

void printVec(int *A, int length){
    for(int i=0; i< length; i++)
    cout << A[i] << ",";
    cout << endl;
}
