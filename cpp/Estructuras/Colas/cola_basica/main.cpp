#include <iostream>
#include "cola.hpp"
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(NULL)); 
    COLA col;
    float num,den;
    for(int i = 0; i < tam; i++){
        num = rand() % tam;
        den = rand() % tam;
        while(den == 0)
            den = rand() % tam;
        col.queue(num/den);
    }
    for(int i = 0; i < tam; i++)
        col.dequeue();
    cout << endl;
    return 0;
}

