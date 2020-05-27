#include "iostream"

using namespace std;

int main (void)
{
    int numero;

    cout << "VERFICAR SI UN NUMERO ES PAR O IMPAR" << endl;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero % 2 == 0)
    {
       cout << "Es par";
    }else
    {
        cout << "Es impar";
    }
    
    



}