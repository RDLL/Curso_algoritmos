/*************************************
* Uso de arreglos.                   *
**************************************/

#include <iostream>

using namespace std;

int main(void){
    int A[]={2,3,8,25,-35, 20,100,-1,0,144}; //Otra forma de inicializar un arreglo
    int i;
    float average=0;
    for (i = 0; i < 10; i++)
        average+= A[i];
    average/=10;
    cout<< "The average is " << average << endl;
    return 0;
}
