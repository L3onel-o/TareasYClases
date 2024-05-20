#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Ingresa un numero: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        m = m * i;
    }

    cout << "Factorial de " << n << " es: " << m << "\n";
    
    return 0;
}