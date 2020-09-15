#include <iostream>
//#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{
    int high=0;
    int i,size,*ptrA;
    cout << "Cuantos elementos desea considerar?";
    cin >> size;
    ptrA = new int[size];
    if (ptrA)
    {
        /* initialize random seed: */
        srand ( time(NULL) );
        for (i = 0; i < size; i++)
        {
            ptrA[i] = rand();
            cout << *(ptrA+i) << " , ";
        }
        for (i = 0; i < size; i++)
            if (high < *(ptrA+i))
                high = *(ptrA+i);
        cout << "\n\nEl número más grande es: " <<high << "\n\n";
        delete [] ptrA;
    }
    else
        cout << "Not enough memory\n\n";
    return 0;
}
