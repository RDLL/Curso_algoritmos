/*********************************************************
* Uso de arreglos de apuntadores.                        *
* Se utiliza un arreglo de apuntadores a una cadena      *
* literal esto nos permite hacer un mejor uso de memoria *
* al ser esta un dato especial a diferencia de una       *
* cadena de caracteres.                                  *
**********************************************************/

#include<iostream>

using namespace std;

int main()
{
    const char *palo[ 4 ] = /*Esto crea un arreglo de apuntadores en la que cada apuntador apunta a una
    cadena de estilo c literal "Corazones","Diamantes", "Bastos" o "Espadas", estas cadenas no agregan
    el caracter nulo al final */
    { "Corazones", "Diamantes", "Bastos","Espadas" }; //Cadenas literales
    char corazon[]={"Corazones"};//Esto crea la cadena de caracteres corazones\0
    int i;
    for (i=0;i<4;i++)
        cout<<"palo["<<i<<"] = "<<palo[i]<<endl;
    cout<<"Tamaño cadena literal "<<sizeof(palo[0])<<endl;
    cout<<"Tamaño cadena no literal "<<sizeof(corazon)<<endl;
    /* Como puedes ver al usar el arreglo de apuntadores a la cadena literal nos ahorra espacio de memoria, si bien
    de momentonos puede parecer un poco ridiculo al ser programas pequeños, probablemente en programas mas complejos
    veremos lo necesario que nos podría resultar ahorrar espacio de memoria*/
    return 0;
}
