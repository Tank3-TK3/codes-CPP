#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float pi = 3.14159;
    float radio, area, volumen;
    cout << "Area y volumen de una esfera en cm.\n";
    cout << "Cuanto mide el radio:\n";
    cin >> radio;
    area = pi * pow(radio , 2);
    cout << "\nEl area del circulo es: " << area << "\n";
    volumen = 4/3 * pi * pow(radio,3);
    cout << "\nEl volumen de la esfera es: " << volumen << "\n";
    return 0;
}
