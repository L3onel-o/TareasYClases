#include <iostream>
using namespace std;


//Las funciones se declaran antes del programa principal
int suma(int x, int y)
{
    int resultado = 0;
    resultado = x + y;
    return resultado;
}

int resta(int x, int y)
{
    int resultado = 0;
    resultado = x - y;
    return resultado;
}

int multiplicacion(int x, int y)
{
    int resultado = 0;
    resultado = x * y;
    return resultado;
}

float division(float x, float y)
{
    float resultado = 0;
    resultado = x / y;
    return resultado;
}



int main()
{
    int a, b, opc; //Declaro variables que deseo usar en el programa

    //Ingreso el primer numero
    cout << "Ingrese un numero entero a= " ;
    cin >> a;
    //Ingreso el segundo numero
    cout << "Ingrese el numero entero b= ";
    cin >> b;

    cout << "Elija que opcion desea: \n \t 1. Sumar \n \t 2. Restar \n \t 3. Multiplicar \n \t 4.Dividir \n \tOtro numero salir: Salir \n";
    cout << "Su opcion es: ";
    cin >> opc;

    switch(opc)
    {
    case 1: 
        cout << "El resultado de la suma de: " << a << " + " <<  b << " es: " << suma(a, b);
        break;

    case 2:
        cout << "El resultado de la resta de: " << a << " - " << b << " es: " << resta(a, b);
        break;

    case 3: 
        cout << "El resultado de la multiplicacion de: " << a << " * " << b << " es: " << multiplicacion(a, b);
        break;

    case 4: 
        cout << "El resultado de la division de: " << a << " / " << b << " es: " << division(a, b);
        break;

    default: 
        cout << "No hice nada";
        break;
    }

    return 0;
}