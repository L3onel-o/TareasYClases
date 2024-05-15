#include <iostream>
using namespace std;

int main()
{
    //Declaro variables
    float alfa, beta, gamma;

    //Solicito valores
    cout << "Ingrese el primer angulo: ";
    cin >> alfa;
    cout << "Ingrese el segundo angulo: ";
    cin >> beta;

    gamma = 180 - (alfa + beta);

    cout << "El tercer angulo es de: " << gamma;

    return 0;
}