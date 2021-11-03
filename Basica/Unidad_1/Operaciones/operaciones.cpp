#include <iostream>

using namespace std;

int main()
{
    int a,b;
    float c,d;
    cout << "******" << "Operaciones con enteros" << "******"<< '\n';
    cout << "Dame dos numeros enteros" << '\n';
    cin >> a >> b;
    cout << "La suma es: " << a+b << '\n';
    cout << "La resta es: " << a-b << '\n';
    cout << "La multiplicacion es: " << a*b << '\n';
    cout << "La division es: " << a/b << '\n';
    cout << "El modulo es: " << a%b << '\n';
    cout << "******" << "Operaciones con flotantes" << "******"<< '\n';
    cout << "Dame dos numeros flotantes" << '\n';
    cin >> c >> d;
    cout << "La suma es: " << c+d << '\n';
    cout << "La resta es: " << c-d << '\n';
    cout << "La multiplicacion es: " << c*b << '\n';
    cout << "La division es: " << c/d << endl;
    return 0;
}
