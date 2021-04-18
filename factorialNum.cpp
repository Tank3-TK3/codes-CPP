#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    long double fact = 1;

    cout << "Dame el numero para calcular el factorial:\n";
    cin >> x;

    for (int i = x; i > 1; i--)
    {
        fact = fact * i;
    }

    cout << "El factorial de " << x << " es " << fact;

    return 0;
}
