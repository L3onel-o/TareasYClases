#include <iostream>
using namespace std;
//Programa que suma de 2 en dos hasta numero n
int main()
{
    int i, n;
    cout << "Ingresa un numero entero: ";
    cin >> n;
    i = 0;
    
    if(n > 0)
    { 
        while (i < n)
        {
        cout << i << "\n";
        i = i + 2;
        }
    }
    else
    {
        cout << "Error, el numero n debe ser positivo";
    }

    return 0;
}