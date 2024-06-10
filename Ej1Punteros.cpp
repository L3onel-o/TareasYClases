#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int x;
    int *apuntador = &x; //Creamos un apuntador a la memoria de x
    cout << "Ingrese el numero entero: ";
    cin >> *apuntador; //Almacenamos en la memoria el dato

    delete [] apuntador; //Despues de operar con punteros es necesario liberra la memoria
    apuntador = NULL;

    cout << "Usted ingreso el numero: " << x << "\n";
    cout << "El espacio de memoria del valor que ingreso es: " << &apuntador << "\n";
    
    return 0;
}