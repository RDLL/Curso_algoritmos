# Condicionales

## Contenido
1. [Operaciones lógicas](#id1)
2. [if else](#id2)
3. [elif](#id3)
4. [Operador ternario](#id4)
5. [switch](#id5)
6. [break](#id6)


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

## Operaciones lógicas<div id='id1' />

***
Son operaciones que su resultado puede ser verdadero o falso y en la cuál se hacen comparaciones y se ve involucrada un poco del álgebra booleana.

Al igual que con las operaciones matemáticas se realizan entre pares y de izquierda a derecha, a continuación se enlistan de mayor a menor jerarquía.

- Menor que `<`
- Mayor que `>`
- Menor o igual que `<=`
- Mayor o igual que `>=`
- Igual `==`
- Diferente `!=`
- AND lógico `&&`
- OR lógico `||`

## if else<div id='id2' />

Si dada una condición, dicha condición se cumple, el código contenido en `if` se ejecuta si la condición no se ejecuta, se ejecuta el código en `else`.

Aunque ambas estructuras están relacionadas, no es necesario al menos para `if` incluir el `else` sin embargo para `else` si es necesario.

```C++
    if(30 > 50){
        cout << 30 << "es mayor que" << 50 << endl;
    }else{
        cout << 50 << "es mayor que" << 30 << endl;
    }
```

De igual manera si es solo una línea de código la que se va ejecutar, se pueden omitir las llaves.

```C++
    if(30 > 50)
        cout << 30 << "es mayor que" << 50 << endl;
    else
        cout << 50 << "es mayor que" << 30 << endl;
```

## elif<div id='id3' />

Es una combinación de `else` con un `if`, como si en un `else` pusieras un `if`, y es que en ambas estructuras es posible meter más estructuras, tales como ciclos o funciones.
Tampoco es posible usar `elif` sin un `if`

```C++
    if(30 > 50)
        cout << 30 << "es mayor que" << 50 << endl;
    elif(50 > 40)
        cout << 50 << "es mayor que" << 40 << endl;
```

## Operador ternario<div id='id4' />

Contrario a `if`, el operador ternario nos devuelve un valor de cualquier tipo, por lo que se puede usar de tres maneras diferentes.

```C++
    int a = (10>30)?40:25;
    auto b;
    (a>5)?b=a/3:b=a*2;
    cout << (b<a)? "a es menor": "b es menor" << endl;
```

Para entenderlo un poco mejor, está es su sintaxís.

```C++
    (condición) ? si condición es verdadera:si condición es falsa;
```

De igual manera es posible encadenar múltiples operadores ternarios, pero hemos de tener cuidado de usar adecuadamente los paréntesis o podríamos tener resultados no deseados.

## Switch<div id='id5' />
Esta es una estructura un poco mas compleja, ya que a diferencia de `if`, se maneja por casos según un valor de tipo entero.

```C++
    int dia = 5;
    switch(dia){
        case 1:
            cout << "Hoy es lunes";
            break;
        case 2:
            cout << "Hoy es martes";
            break;
        case 3:
            cout << "Hoy es miercoles";
            break;
        case 4:
            cout << "Hoy es jueves";
            break;
        case 5:
            cout << "Hoy es viernes";
            break;
        case 6:
            cout << "Hoy es sabado";
            break;
        case 7:
            cout << "Hoy es domingo";
            break;

    }
    cout << endl;
```

Esto también se puede hacer con `if` combinado con `elif` pero serían demasiadas comparaciones, así que en caso de tener múltiples casos, como podrían ser días de semana o algunos menús, nuestra mejor opción será un switch.

## break<div id='id6' />
Es una sentencia que nos permite terminar y salir de un ciclo o un `switch` después de que determinado valor se cumpla, en el caso de no ponerlo en `switch` se ejcutarían los demas casos
