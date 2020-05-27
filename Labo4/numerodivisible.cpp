#include "iostream"

using namespace std;

int main(void)
{

    int num, den, total;

    cout << endl << "VERIFICAR SI UN NUMERO ES DIVISIBLE ENTRE OTRO" << endl;

    cout << endl << "Ingrese el numerador: ";
    cin >> num;
    cout << endl << "Ingrese el denominador: ";
    cin >> den;


    if (num > den)
    {
        cout << endl << "El numero " << num << " SI es divisible entre " << den << endl;
    }else 
    {
        cout << endl << "El numero " << num << " NO es divisible entre " << den << endl;
    }
    




}