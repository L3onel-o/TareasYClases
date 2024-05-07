#include <iostream>
using namespace std;

//Programa que imprime la tabla de multiplicar del numero solicitado
int main()
{
    int n = 0;
    int i = 1;
    cout << "Ingresar un numero entero, para imprimir su tabla: ";
    cin >> n;

    while(i <= 10)
    {
        cout << n << " * " << i << " = " << n * i << "\n";
        i++;
    }
    return 0;
}