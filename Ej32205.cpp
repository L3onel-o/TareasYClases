#include <iostream>
using namespace std;

int main()
{
    //Programa solicita notas y devuelve el primedio
    float nota[6];
    float promedio;
    
    cout << "El siguiente programa solicita las notas y saca el promedio \n";

    for (int i = 0; i < 6; i++)
    {
        cout << "Ingrese su nota " << i + 1 << ": ";
        cin >> nota[i];
        promedio = promedio + nota[i];
    }

    promedio = promedio / 6;
    cout << "El promedio de las notas es: " << promedio;

    return 0;
}