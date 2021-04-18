#include <iostream>

using namespace std;

float convCelcius(float temp)
{
    float cel = 0.00;
    cel = (temp - 32.00)*(5.00 / 9.00);
    return cel;
}

float convKelvin(float temp)
{
    float kel = 0.00;
    kel = temp + 273.00;
    return kel;
}

float convRankine(float temp)
{
    float ran = 0.00;
    ran =  temp + 460.00;
    return ran;
}

int main()
{
    float far = 0.00;
    float cel = 0.00;
    float kel = 0.00;
    float ran = 0.00;

    cout << "Dame una temperatura en Fahrenheit: ";
    cin >> far;

    cel = convCelcius(far);
    kel = convKelvin(cel);
    ran = convRankine(far);

    cout << "Tu temperatura en Celcius: " << cel << "\n";
    cout << "Tu temperatura en Kelvin: " << kel << "\n";
    cout << "Tu temperatura en Rankine: " << ran << "\n";

    return 0;
}
