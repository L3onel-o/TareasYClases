#include <iostream>
using namespace std;

int main()
{
    int edad; 
    int *puntero = &edad;
    cout << "Ingrese su edad: ";
    cin >> *puntero;

    if (edad >= 18)
    {
        cout << "Usted es mayor de edad: " << edad << "\n";
    }
    else if (edad < 0)
    {
        cout << "La edad ingresada es invalida";
    }
    
    else
    {
        cout << "Usted es menor de edad: " << edad;
    }
    

    delete[] puntero;
    puntero = NULL;

    cout << " \nEl espacio de memoria es: " << &puntero << "\n";
}