# Ciclos

## Contenido

1. [for](#id1)
2. [while](#id2)
3. [do while](#id3)
4. [¿Cuál usar?](#id4)

```C++
#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int b = 30;
    for(int i = 0; i < 10; i++){
        cout << i << '\n';
    }
    while(a < 20){
        cout << a << '\n';
        a++;
    }
    do{
        cout << b << '\n';
        b++;
    }while(b < 30);
}
```

Son estructuras o bloques de código que se ejecutan un número determinado o no determinado de veces, y que son útiles al momento de tener código que tendríamos que repetir mas de una vez.

## for<div id='id1' />

```C++
    for(inicio; final; paso){
        código
    }
```

Es un ciclo que nos permite controlar el inicio, final y el recorrido.



```C++
    for(int i = 0; i < 10; i++){
        cout << i << '\n';
    }
```

En este ejemplo, se crea una variable temporal entera `i` en cero, si `i` es menor a 10 ejecuta lo que este dentro, y aumenta el contador o paso.

`i` es una variable temporal dado que solo existe en el contexto de `for`, una vez el ciclo haya finalizado, esta variable dejará de existir.

También añadimos una nuevo operador `++`, que aumenta `i` en 1, también existe `--` que resta 1.

## while<div id='id2' />
A diferencia de `for` donde se controla mucho mejor  el como se ejecuta, en `while` se puede seguir ejecutando mientras la condición asignada se siga cumpliendo, a este se le dice que el prgrama se ciclo, ya que nunca sale del ciclo o por otro lado nunca ejecutarse.

```C++
int a = 10;
while(a < 20){
        cout << a << '\n';
        a++;
    }
```

También es necesario asegurarnos de que va a entrar al ciclo antes de ejecutar `while` o podría no entrar, por ejemplo con `int a = 10` nos aseguramos de que entre en el ciclo, hemos de tener en cuenta que `while` primero compara y después entra al ciclo, y para asegurarnos que salga del ciclo hacemos que `a` aumente en uno tras cada ejecución.

## do while<div id='id3' />
Es similar a `while` salvo una diferencia, que sin importar que, se va ejecutar al menos una vez.

```C++
int b = 20;
do{
        cout << b << '\n';
        b++;
    }while(b < 30);
```

A diferencia de `while` no tenemos que preocuparnos porque no entre al ciclo pero si de que no salga del mismo.

## ¿Cuál usar?<div id='id4' />

Todo dependera de nuestro propósito, ya que podríamos necesitar muchas ejecucaciones pero no saber cuantas, por ejemplo al buscar las raíces de una función, con `for` nos sería dificil determinar un número apropiado de ejecuciones y tener mas o menos ejecuciones de las necesarias, en cambio con `while` podrías salir cuando la encuentre y no tener que preocuparnos por el número de ejecuciones.

Ahora que si queremos que algo se repita un n número de veces ya conocido, con `for` nos sería mucho mas sencillo implementarlo.
