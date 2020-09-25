#include <iostream>

using namespace std;

int main()
{
    cout << "\'A\' en ASCII es igual a \"65\"\n";
    cout << "¿Como te llamas\?\n";
    cout << "¿Como te llamas\?\n";
    cout << "A \\ B significa: el conjunto que contiene todos aquellos elementos de A que no se encuentran en B\n";
    cout << " \0 esto no se muestra\n"; //El carácter nulo nos indica que ahí acaba el mensaje
    cout << '\0' << "pero esto si\n"; //Lo primero que manda cout es el carácter nulo y después el mensaje, recuerda que se maneja por flujos
    cout << "oyes eso? \a\n";
    cout << "La letra \'a\' se va a borra\br\n";
    cout << "\\f se ve muy parecido\fa usar \\n\n";
    cout << "que se ve \fparecido\f a usar endl \f pero ";
    cout << "como puedes\f ver \\f no funciona igual a \\n\n";
    cout << "pero \\n si funciona como endl al menos en la parte del salto de línea\n";
    cout << "Esto se va a sobreescrbir\r";
    cout << "con lo que pongas aquí, y así funciona \\r como el retorno de la máquina de escribir\n";
    cout << "de ahí su nombre" << endl;
    cout << "\\t\t es parecido a oprimir el TAB en el teclado\n";
    cout << "y \\v\v es parecido a oprimir Enter en el teclado\vaunque más bien se parece a \\f\f";
    cout << "no lo crees\?";
    cout << "Si ya te diste cuenta como funciona \\f\f" << endl;
    cout << "Ahora puedes ver lo que hace endl" << endl;
    cout << "\120 es igual a 80 en ASCII" << endl;
    cout << "\x41 es igual a 65 en ASCII" << endl;
    cout << "\u00B6 es igual a \U000000B6 \n";
    cout << "pero \u102AF no es igual a \U000102AF" << endl;
    return 0;
}
