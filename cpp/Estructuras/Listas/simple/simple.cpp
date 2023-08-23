#include "simple.hpp"

void push(SIMPLE *head){
    int x;
    x = pedir();
    SIMPLE nuevo;
    try{
        nuevo = new LISTA;
        nuevo->data = x;
        nuevo->sig = *head;
        *head = nuevo;
    }
    catch(std::bad_alloc&){
        std::cout << "Memory Error!\n";
        return;
    }
}

void imprimir(SIMPLE head){
    int i = 0;
    while(head != NULL){
        ++i;
        std::cout << "ID nodo lista: " << i << " Valor: " << head->data << '\n';
        head =  head->sig;
    }
}

void pop(SIMPLE *head){
    SIMPLE actual;
    while(*head != NULL){
        actual = *head;
        *head = (*head)->sig;
        delete actual;
    }
}

int menu(){
    system("clear"); //cls en windows
    int op;
    std::cout << "Selecciona una opcion:\n";
    std::cout << "1.- Insertar\n";
    std::cout << "2.- Eliminar\n";
    std::cout << "3.- Mostrar\n";
    std::cout << "4.- Salir\n";
    std::cin >> op;
    if(op > 4 || op < 1){
        system("clear"); //cls en windows
        std::cout << "Ingresa una opcion valida\n";
        std::cout << "Oprime una tecla para continuar\n";
        std::cin.get();
        op = menu();
    }else
        return op;
    return op;
}

int pedir(){
    int x;
    std::cout << "Ingresa un dato: \n";
    std::cin >> x;
    std::cout << '\n';
    return x;
}
