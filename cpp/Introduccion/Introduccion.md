Introducción al lenguaje C++
====
## Contenido
1. [Llamadas a biblioteca]("#id1")
2. [Flujos]("#id2")


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

## Flujos<div id='id2' />
