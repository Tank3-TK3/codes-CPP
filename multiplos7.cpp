#include <iostream>

using namespace std;

int main()
{
    int num = 7;
    cout << "~MULTIPLOS DE 7~\n";
    int cont = 1;
    while (num < 147)
    {
        cout << cont << ".- "<< num << "\n";
        num += 7;
        cont++;
    }

    return 0;
}
