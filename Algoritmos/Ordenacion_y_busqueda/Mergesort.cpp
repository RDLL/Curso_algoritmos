#include <iostream>
#include <time.h>

#define N 50

using namespace std;

void mezclar(int arr[], int izq, int md, int der);
void mergesort(int arr[], int prim, int ult);
void genera(int arr[]);
void imprime(int arr[]);

int main(){
    srand(time(NULL));
    int arr[N];
    genera(arr);
    cout<<"Vector original:"<<endl;
    imprime(arr);
    mergesort(arr,0,49);
    cout<<endl<<"Vector ordenado:"<<endl;
    imprime(arr);
}

void genera(int arr[]){
    for(int i=0;i<N;i++)
        arr[i]=rand()%100;
}

void imprime(int arr[]){
    for(int i=0;i<N;i++){
        if(i%10==0)
            cout<<endl;
        cout<<arr[i]<<"\t";
    }
}

void mergesort(int arr[], int prim, int ult){
    int centro;
    if(prim < ult){
        centro=(prim+ult)/2;
        mergesort(arr,prim,centro);
        mergesort(arr,centro+1,ult);
        mezclar(arr,prim,centro,ult);
    }
}

void mezclar(int arr[], int izq, int md, int der){
    int aux[N];
    int x,y,z;
    x=z=izq;
    y=md+1;
    while(x<=md && y<=der){
        if(arr[x]<=arr[y])
            aux[z++]=arr[x++];
        else
            aux[z++]=arr[y++];
    }
    while(x<=md)
        aux[z++]=arr[x++];
    while(y<=der)
        aux[z++]=arr[y++];
    for(z=izq;z<=der;z++)
        arr[z]=aux[z];
}
