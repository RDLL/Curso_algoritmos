Variables
====
## Contenido
1. [Entero](#id1)
2. [Flotante](#id2)
3. [Flotante de doble precisión](#id3)
4. [Caracter](#id4)
5. [Booleano](#id5)
6. [Declaración de variables](#id6)
7. [Inicializar variables](#id7)
8. [Flujo de entrada](#id8)

```C++
#include <iostream>

using namespace std;

int main(){
    int a = 34;
    float b = 23.12;
    double c = 1212.24341;
    char d = 'a';
    bool e = 0;
    cout << "Un entero: " << a << '\n';
    cout << "Un flotante: " << a << '\n';
    cout << "Un double: " << a << '\n';
    cout << "Un caracter: " << a << '\n';
    cout << "Un booleano: " << a << endl;
    return 0; 
}
```
## Entero<div id='id1' />

Es un tipo de dato que solo acepta números enteros, si bien al momento de ingresar datos podemos poner decimales, estos serán desechados.
Se declara como `int`

## Flotante<div id='id2' />

También conocido como real, es un tipo de dato que acepta números con o sin decimal, en el caso de no tener decimales, les pondrá un 0 como decimal.
Se declara como `float`

## Flotante de doble precisión<div id='id3' />

Es muy similar al flotante con la diferencia de que puede representar números mas grandes que `float` y puede almacenar resultados de operaciones entre `int` y `float`.
Se declara como `double`

## Caracter<div id='id4' />

Es un tipo de dato que representa simbolos y letras aunque también puede aceptar números, estos los convertirá según la tabla [ASCII](https://elcodigoascii.com.ar/)
Se declara como `char`

## Booleano<div id='id5' />

Es un tipo de dato lógico, solo acepta 0 y 1 como valores, también se puede ver como falso y verdadero.
Se declara como `bool`

## Declaración de variables<div id='id6' />

Para declarar variables solo hay que poner el tipo y el nombre que le querramos poner.

```C++
    int a;
    float b;
    double c;
    char d;
    bool e;
```
Hay que considerar que hay nombres que no son válidos, como aquellos que comienzan en número o tengan espacios así como signos de puntuación o que sean una palabra reservada. En el caso de las palabras reservadas nos daremos cuenta al compilar.

## Inicializar variables<div id='id7' />

Hay dos maneras de iniciar o asignar valores a una variable, ya sea asignarle un valor al declararla o después, o asignarle un valor mediante los flujos de entrada.

```C++
    int a = 34;
    float b;
    b = 23.12
    double c;
    char d = 'a';
    d = 'a';
    bool e = 0;
    cin >> d;
```

## Flujo de entrada<div id='id8' />

Para la lectura de datos de entrada haremos uso del objeto `cin` que representa al flujo estándar de entrada y el operador de extracción `>>`. Este operador lo que hace es extraer lo que se capture en el flujo hacia la variable que asignemos, en el caso del código de arriba, se guarda en la variable `d`