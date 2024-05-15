#include <iostream>
using namespace std;

int main()
{
    //Declaro variable y solicito los datos
    int tipoMotor;
    cout << "Ingrese el tipo de Motor, los posibles valores son: 1, 2, 3, 4 : ";
    cin >> tipoMotor;

    //Analizo los posibles casos mediante switch
    switch (tipoMotor)
    {
    case 0:
        cout << "No esta establecido un valor para este tipo de bombas";
        break;
    
    case 1:
        cout << "La bomba es una bomba de agua";
        break;
    case 2:
        cout << "La bomba es una bomba de gasolina";
        break;
    case 3:
        cout << "La bomba es una bomba de hormigon";
        break;
    case 4: 
        cout << "La bomba es una bomba de de pasta alimenticia";
        break;

    default:
        cout << "No existe un valor valido para este tipo de bombas";
        break;
    }

    return 0;
}