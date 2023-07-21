Operaciones
====
```C++
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
```
Como en todo lenguaje de programación, C++ puede realizar operaciones matemáticas y lógicas, aunque las lógicas son más una comparación que otra cosa, ambos tipos de operación se realiza entre pares.


Son las operaciones básicas que conocemos de matemáticas, suma,resta,división,multiplicación y se añade el modulo o residuo de una división.

La jerarquía es igual que en matemáticas, pero hay que recordar que se les llamana operadores, operador de suma, operador de división, que coinciden con sus simbolos matemáticos, para el residuo se usa  `%`.

También es posible guardar los valores de una operación sin embargo hemos de tener cuidado con los tipos de datos que se estén trabajando las operaciones.

## Suma y resta
