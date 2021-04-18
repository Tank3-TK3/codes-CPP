#include <iostream>

using namespace std;

int dia;

void determinaDia(int dia);

int main()
{
    cout << "Escribe el numero del dia:\n";
    cin >> dia;
    determinaDia(dia);
    return 0;
}

void determinaDia(int dia)
{
    switch(dia)
    {
        case 1:
            cout << "Lunes";
            break;
        case 2:
            cout << "Martes";
            break;
        case 3:
            cout << "Miercoles";
            break;
        case 4:
            cout << "Jueves";
            break;
        case 5:
            cout << "Viernes";
            break;
        case 6:
            cout << "Sabado";
            break;
        case 7:
            cout << "Domingo";
            break;
        default:
            cout << "Dato no valido!!";
    }
}
