#include "iostream"

using namespace std;

int main()
{
    int num;

    cout << endl;
    cout << "Determinar si un numero es positivo, negativo o 0" << endl << endl;
    cout << "Digite un numero: ";
    cin >> num;

    if (num > 0)
    {
        cout << endl << "El numero " << num << " es positivo" << endl;
    }else if (num < 0)
    {
        cout << endl << "El numero " << num << " es negativo" << endl;
    }else 
    {
        cout << endl << "El numero que ingreso es 0" << endl;
    }



}