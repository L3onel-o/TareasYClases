#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int edad; 
    int *puntero = &edad;
    cout << "Ingrese su edad: ";
    cin >> *puntero;

    if (*puntero >= 18)
    {
        cout << "Usted es mayor de edad: " << *puntero;
    }
    else if (*puntero < 0)
    {
        cout << "La edad ingresada es invalida";
    }
    
    else
    {
        cout << "Usted es menor de edad: " << *puntero;
    }
    
    cout << "\nEl espacio de memoria es: " << &puntero;

    delete[] puntero;
    puntero = NULL;

    return 0;
}