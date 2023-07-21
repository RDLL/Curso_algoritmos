Introducción al lenguaje C++
====
## Contenido
1. [Llamadas a biblioteca](#id1)
2. [Funcion main](#id2)
3. [Flujos](#id3)
4. [Espacio de nombres](#id4)
5. [Operador de resolución de ámbito](#id5)
```C++
#include <iostream>

int main(){
    std::cout << "¡Hola Mundo!" << std::endl;
    return 0; 
}
```

El códgio anterior es el ejemplo más sencillo de programación, nos imprimirá en la terminal el mensaje `¡Hola Mundo!`.

## Llamadas a biblioteca<div id='id1' />

```C++
#include <iostream>
```
En esta parte usamos la instrucción del preprocesador `#include` que nos sirve para incluir o añadir un archivo a nuestro código.

Seguido de esto tenemos la cabecera a incluir, que es `<iostream>`, esta cabecera nos ayuda para poder hacer uso de los flujos de entrada y salida. 

Existen dos maneras de incluir bibliotecas en C++, con `<>` y `""`, con el primero se busca en los directorios o entornos ya definidos por `INCLUDE` y la otra busca en el directorio en el que se esta trabajando

## Funcion main <div id='id2' />

```C++
int main(){
    ...
    ...
    return 0;
}
```
Es la función principal y base de nuestro programa, desde aquí se declararan las variables y se harán las llamadas a otras funciones.

En resumidas cuentas, una función es una porción de código para realizar una acción especifica.

Se declara como tipo `int`, que es un tipo de dato númerico entero, se recomienda siempre definir la función principal como entero ya que por cuestiones del manejo de errores de la consola podremos saber si el programa tuvo algún problema.

`return 0;` manda un 0 a la terminal para indicar que el programa termino sin errores, siempre es necesario incluirlo para el manejo de errores de la terminal.

## Flujos<div id='id3' />

En C++ la entrada y salida de datos se ven como un flujo de datos, en términos sencillos es una secuencia lineal de bytes. Una de las ventajas o desventaja tal vez, es que los bytes de entrada pueden venir no solo del teclado sino también de algún fichero o un dispostivo de almacenamiento. De igual manera los flujos de salida pueden ir hacia cualquier dispositivo de salida, como la pantalla, una impresora, un fichero, u otro programa.
```C++
std::cout << "¡Hola Mundo!" << std::endl;
```

Aquí estamos llamando al objeto `std::cout` que representa al flujo estándar de salida, seguido del operador de inserción `<<` que inserta la frase `¡Hola Mundo!` al flujo de salida, seguido de la función `std::endl`, cabe mencionar que la función `std::endl` borra el flujo de salida, lo podemos ver como si de borrar un pizarrón se tratara.

## Espacio de nombres <div id='id4' />

Un espacio de nombres es un conjunto de funciones, clases o estructuras que están dentro de un nombre. Es algo parecido a tener categorías.
Entonces `std` es un espacio de nombre que contiene funciones, objetos y estructuras de entrada y salida.
Podemos hacer uso del espacio de nombre con la palabra reservada `using` para evitar estar declarandola a cada rato sin embargo si usamos muchas bibliotecas debemos tener cuidado que las bibliotecas no tengan espacios de nombre iguales.

## Operador de resolución de ámbito <div id='id5' />

El operador `::` nos ayuda a acceder al objeto `cout` del espacio de nombre, de ahí el nombre de este operador.

Si hacemos uso del espacio de nombre, el código quedaría así:

```C++
#include <iostream>

using namespace std;

int main(){
    cout << "¡Hola Mundo!" << endl;
    return 0; 
}
```

Y se ve un poco más compacto.