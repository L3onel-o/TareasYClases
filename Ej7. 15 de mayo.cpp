#include <iostream>
using namespace std;

int main()
{
    //Declaro variables
    int cantidadDeEntradas;
    int solGeneral = 3;
    int solPreferente = 5;
    int sombra = 8;
    int tribuna = 15;
    int platea = 20;
    char sector;

    //Muestro las diversas opciones y solicito al usuario los datos
    cout << "Elige el sector del estadio en el que quieres estar: " << "\n"
    << "1: Sol general con un costo de $3" << "\n"
    << "2: Sol Preferente con un costo de $5" << "\n"
    << "3: Sombra con un costo de $8" << "\n"
    << "4: Tribuna con un costo de $15" << "\n"
    << "5: Platea con un costo de $20" << "\n";
    cin >> sector;

    cout << "Ingresa la cantidad de entradas que deseas comprar: ";
    cin >> cantidadDeEntradas;
    
    //Verifico los datos
    switch (sector)
    {
    case '1':
        cout << "Usted ha elegido el sector de Sol General y su cantidad de entradas son: " << cantidadDeEntradas
        << "\n" << "El total a pagar por sus entradas es el monto de: $" << cantidadDeEntradas * solGeneral;
        break;

    case '2':
        cout << "Usted ha elegido el sector de Sol Preferente y su cantidad de entradas son: " << cantidadDeEntradas
        << "\n" << "El total a pagar por sus entradas es el monto de: $" << cantidadDeEntradas * solPreferente;
        break;

    case '3':
        cout << "Usted ha elegido el sector de Sombra y su cantidad de entradas son: " << cantidadDeEntradas
        << "\n" << "El total a pagar por sus entradas es el monto de: $" << cantidadDeEntradas * sombra;
        break;

    case '4':
        cout << "Usted ha elegido el sector de Tribuna y su cantidad de entradas son: " << cantidadDeEntradas
        << "\n" << "El total a pagar por sus entradas es el monto de: $" << cantidadDeEntradas * tribuna;
        break;

    case '5':
        cout << "Usted ha elegido el sector de Platea y su cantidad de entradas son: " << cantidadDeEntradas
        << "\n" << "El total a pagar por sus entradas es el monto de: $" << cantidadDeEntradas * platea;
        break;
    
    default:
    cout << "El valor ingresado no es correcto";
        break;
    }

    return 0;
}