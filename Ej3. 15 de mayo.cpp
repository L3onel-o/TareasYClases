#include <iostream>
using namespace std;

int main()
{
    float angulo;
    cout << "Ingrese un angulo: ";
    cin >> angulo;

    if (angulo < 90)
    {
        cout << "El angulo que ingreso es: Agudo";
    }
    else if (angulo == 90)
    {
        cout << "El angulo que ingreso es: Recto";
    }
    else
    {
        cout << "El aungulo es: Obtuso";
    }
    
    return 0;
    
}