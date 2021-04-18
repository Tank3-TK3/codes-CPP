//////////////////////////////////////////////////
//              LIBRERÍAS
#include <iostream>
#include <cstdlib>
#include <ctime>

//////////////////////////////////////////////////
//              CONSTANTES
#define N 15

using namespace std;

//////////////////////////////////////////////////
//              FUNCIONES
void llenarArreglo(int *a)
{
    time_t t;
    srand((unsigned) time(&t));
    for(int i = 0; i < N; i++)
    {
        a[i] = (rand() % (100)) + 1;
    }
}

//Bubblesort
void bubbleSort(int *a)
{
    int temp = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N-1; j++)
        {
            if(a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
//////////

//Quicksort
int dividir(int *a, int inicio, int fin)
{
    int izq;
    int der;
    int pibote;
    int temp;
    
    pibote = a[inicio];
    izq = inicio;
    der = fin;
    
    while (izq < der)
    {
        while (a[der] > pibote)
        {
            der--;
        }
        while ((izq < der) && (a[izq] <= pibote))
        {
            izq++;
        }
        if(izq < der)
        {
            temp= a[izq];
            a[izq] = a[der];
            a[der] = temp;
        }
    }
    
    temp = a[der];
    a[der] = a[inicio];
    a[inicio] = temp;
    return der;
}

void quickSort(int *a, int inicio, int fin)
{
    int pivote;
    if(inicio < fin)
    {
        pivote = dividir(a, inicio, fin);
        quickSort(a, inicio, pivote - 1);
        quickSort(a, pivote + 1, fin);
    }
}
//////////
void imprimirArreglo(int *a)
{
    cout << ">";
    for(int i = 0; i < N; ++i)
    {
        if (i == N-1)
        {
            cout << a[i] << "\n";
        }
        else
        {
            cout << a[i] << ", ";
        }
    }
}
//Shellsort
void shellSort(int *a)
{
    for (int gap = N/2; gap > 0; gap /= 2) 
    { 
        for (int i = gap; i < N; i += 1) 
        {
            int temp = a[i];

            int j;
            for (j = i; j >= gap && a[j - gap] > temp; j -= gap)
                a[j] = a[j - gap];
            a[j] = temp; 
        }
        imprimirArreglo(a);
    }
}
//////////



void menuContextual()
{
    cout << "\t\t<MENU>\n";
    cout << "(1)\tBubblesort.\n";
    cout << "(2)\tQuicksort.\n";
    cout << "(3)\tShellsort.\n";
    cout << "(0)\tSalir.\n";
    cout << "\t >";
}

//////////////////////////////////////////////////
//                 MAIN
int main()
{
    int *a = (int*) malloc(sizeof(int) * N);
    int opcion = 150597;
    clock_t inicio;
    clock_t fin;
    double total = 0;
    /*do
    {
        menuContextual();
        cin >> opcion;
        if (opcion == 1)
        {
            llenarArreglo(a);
            inicio = clock();

            bubbleSort(a);

            fin = clock();

            //imprimirArreglo(a);

            total = ((double) (fin - inicio)) / CLOCKS_PER_SEC;
            cout << "Tiempo: " << total << " seg.\n";
        }
        else if (opcion == 2)
        {
            llenarArreglo(a);
            inicio = clock();

            quickSort(a, 0, N-1);
            
            fin = clock();

            //imprimirArreglo(a);

            total = ((double) (fin - inicio)) / CLOCKS_PER_SEC;
            cout << "Tiempo: " << total << " seg.\n";
        }
        else if (opcion == 3)
        {
            llenarArreglo(a);
            inicio = clock();

            shellSort(a);
            
            fin = clock();

            //imprimirArreglo(a);

            total = ((double) (fin - inicio)) / CLOCKS_PER_SEC;
            cout << "Tiempo: " << total << " seg.\n";
        }
        else if (opcion == 0)
        {
            cout << "Saliendo...\n";
            opcion = 0;
        }
        else
        {
            cout << "Opcion no valida...\n";
        }
    } while (opcion != 0);*/
    

    llenarArreglo(a);
    imprimirArreglo(a);
    inicio = clock();
    shellSort(a);
    fin = clock();
    imprimirArreglo(a);
    total = ((double) (fin - inicio)) / CLOCKS_PER_SEC;
    cout << "Tiempo: " << total << " seg.\n";

    delete(a);
    free(a);
    return 0;
}