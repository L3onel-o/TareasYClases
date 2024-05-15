#include <iostream>
using namespace std;

int main()
{
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18)
    {
        cout << "Usted es mayor de edad";
    }
    else
    {
        cout << "Usted es menor de edad";
    }

    return 0;
    
}