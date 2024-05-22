#include <iostream>
using namespace std;

int main()
{
    //Crear un programa que sume los numeros del 1 al 100
    int num[100];
    int suma = 0;

    for (int i = 0 ; i < 100; ++i)
    {
        num[i] = i + 1;
    }

    for (int i = 0; i < 100; ++i)
    {
        suma += num[i];
    }
    
    cout << "La suma de los numeros del 1 al 100 es: " << suma;
    
    return 0;
}