#include <iostream>
using namespace std;

int main()
{
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;
    
    switch (letra)
    {
        case 'R':
        cout << "El color es Rojo";
        break;

        case 'Y':
        cout << "El color es Amarillo";
        break;

        case 'B':
        cout << "El color es Azul";
        break;

        case 'W':
        cout << "El color es Blanco";
        break;

        case 'K':
        cout << "El color es Negro";
        break;

        case 'C':
        cout << "El color es Cian";
        break;

        case 'G':
        cout << "El color es Verde";
        break;

        default:
        cout << "Datos incorrectos";
    }
    
    return 0;
}