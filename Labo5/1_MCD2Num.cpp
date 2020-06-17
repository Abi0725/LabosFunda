#include "iostream"

using namespace std;

int main()
{
    int num1, num2, residuo;

    cout << endl << "Ingrese el primer numero: ";
    cin >> num1;

    cout << endl << "Ingrese el segundo numero: ";
    cin >> num2;

    while (residuo != 0)
    {
        if (residuo = num1 % num2)
        {
            num1 = num2;
            num2 = residuo;
        }
        
    }
        cout << "El MCD es: " << num2 << endl;


return 0;
}