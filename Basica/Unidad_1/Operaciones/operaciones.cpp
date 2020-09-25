#include <iostream>

using namespace std;

int main()
{
    int a,b;
    float c,d;
    cout << "******" << "Operaciones con enteros" << "******"<< endl;
    cout << "Dame dos numeros enteros" << endl;
    cin >> a >> b;
    cout << "La suma es: " << a+b << endl;
    cout << "La resta es: " << a-b << endl;
    cout << "La multiplicacion es: " << a*b << endl;
    cout << "La division es: " << a/b << endl;
    cout << "El modulo es: " << a%b << endl;
    cout << "******" << "Operaciones con flotantes" << "******"<< endl;
    cout << "Dame dos numeros flotantes" << endl;
    cin >> c >> d;
    cout << "La suma es: " << c+d << endl;
    cout << "La resta es: " << c-d << endl;
    cout << "La multiplicacion es: " << c*b << endl;
    cout << "La division es: " << c/d << endl;
    return 0;
}
