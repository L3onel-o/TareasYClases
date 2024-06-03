#include <iostream>
using namespace std;

string posOrNegaNum(int x)
{
    string posNega;
    if (x > 0)
    {
        posNega = " el numero es positivo";
    }
    else
    {
        posNega = " el numero es negativo";
    }
    return posNega;
    
}


string parOrImpar(int x)
{
    string parImpar;
    if (x % 2 == 0)
    {
        parImpar = "el numero es par";
    }
    else
    {
        parImpar = "el numero es impar";
    }
    return parImpar;
    
}


int main()
{

    int num;
    cout << "Ingresa un numero entero: ";
    cin >> num;

    cout << "El numero que ingresaste es: " << num << " y"<< posOrNegaNum(num) << " y " << parOrImpar(num);

    return 0;
}