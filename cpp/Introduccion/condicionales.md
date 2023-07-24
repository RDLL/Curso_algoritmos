# Condicionales

```C++
#include <iostream>

using namespace std;

int main(){
    int a = 50;
    int b = 38;
    if(a > b){
        cout << a << "es mayor que" << b << endl;
    }else{
        cout << b << "es mayor que" << a << endl;
    }
    return 0;
}
```

Son una estructura o bloque de código que nos permite ejecutar código en base a un evento o resultado de operaciones lógicas.

## Operaciones lógicas

***
Son operaciones que su resultado puede ser verdadero o falso y en la cuál se hacen comparaciones y se ve involucrada un poco del álgebra booleana.

Al igual que con las operaciones matemáticas se realizan entre pares y de izquierda a derecha, a continuación se enlistan de mayor a menor jerarquía.

- Menor que `<`
- Mayor que `>`
- Menor o igual que `<=`
- Mayor o igual que `>=`
- Igual `==`
- Diferente `!=`
- Y `&&`
- O `||`
