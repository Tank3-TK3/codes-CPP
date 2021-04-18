#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int num1 = 0;
    int c = 0;
    cout << "Dame un numero:\n";
    cin >> num;
    //num = 2147483647;
    num1 = num;
    do
    {
        num = num / 10;
        c++;
    } while (num >= 1);
    cout << "El numero " << num1 << " tiene " << c << " digitos.";
    return 0;
}
