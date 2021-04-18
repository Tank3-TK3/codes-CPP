#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Pila
{
    public:
        string pila;
        string expp;
        string expf;
        string aux;

        string convetrtoPrefij()
        {
            reverse(expp.begin(), expp.end());
            for (int i = 0; i < expp.length(); i++)
            {
                if( expp[i] == '0' || expp[i] == '1' || expp[i] == '2' || expp[i] == '3' || expp[i] == '4' 
                 || expp[i] == '5' || expp[i] == '6' || expp[i] == '7' || expp[i] == '8' || expp[i] == '9'
                 || expp[i] == 'A' || expp[i] == 'B' || expp[i] == 'C' || expp[i] == 'D' 
                 || expp[i] == 'a' || expp[i] == 'b' || expp[i] == 'c' || expp[i] == 'd')
                {
                    aux = expp[i];
                    expf.append(aux);
                }
                else if(expp[i] == '/' || expp[i] == '*' || expp[i] == '-' || expp[i] == '+')
                {
                    aux = expp[i];
                    pila.append(aux);
                }
                else if(expp[i] == '(')
                {
                    reverse(pila.begin(), pila.end());
                    expf.append(pila);
                    pila = "";
                }
            }
            reverse(pila.begin(), pila.end());
            expf.append(pila);
            reverse(expf.begin(), expf.end());
            return expf;
        }
};

int main()
{
    Pila p;
    cout << "Dame una exprecion matematica:\n";
    cin >> p.expp;
    cout << p.convetrtoPrefij();
    return 0;
}