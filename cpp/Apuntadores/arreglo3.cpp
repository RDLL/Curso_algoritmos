/*********************
* Uso de arreglos.   *
* Uso de constantes. *
**********************/

#include <iostream>

#define SIZE 10 //Constante SIZE de valor 10
/********************************************************
* Esto en realidad define una macro con el nombre SIZE. *
* Esto quiere decir que cuando se encuentre la palabra  *
* SIZE en el código, el prepocesador la reemplazara con *
* el valor de 10.                                       *
* Esto quiere decir que SIZE no es una variable pero    *
* hay casos en los que se puede usar de esa manera.     *
*********************************************************/

using namespace std;

int main(void) {
    int A[SIZE]={2,3,8,25,-35, 20,100,-1,0,144};
    int i;
    float average=0;
    for (i= 0; i< SIZE; i++)
        average += A[i];
    average/=SIZE;
    cout<< "The average is " << average << endl;
    return 0;
}
