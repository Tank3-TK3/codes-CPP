#include <iostream>

using namespace std;

int cal;

void determinaCal(int cal);

int main()
{
    cout << "Dame una calificacion:\n";
    cin >> cal;
    determinaCal(cal);
    return 0;
}

void determinaCal(int cal)
{
    if (cal >= 60)
    {
        cout << "Aprobado";
    } else
    {
        cout << "Reprobado";
    }
}
