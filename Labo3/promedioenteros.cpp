#include "iostream"
#include "cmath"

using namespace std;

int main(void)
{
    int num1, num2, num3, sum, div = 3;
    float prom;
     

    cout << endl << "PROMEDIO DE TRES NUMEROS ENTEROS" << endl << endl ;

    cout << "Ingrese el primer numero: " << endl;
    cin >> num1; 

    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2; 

    cout << "Ingrese el tercer numero: " << endl;
    cin >> num3; 

    sum = num1 + num2 + num3;
    prom = (float) sum / div;
    cout << "El promedio de los tres numeros es: " << prom << endl;

    return 0;


}