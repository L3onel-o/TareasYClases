#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    cout << "Ingrese un numero entero: ";
    int n = 0;
    cin >> n;
    while(i <= n)
    {
        cout << i << "\n";
        i = i + 1;
    }

    return 0;
}