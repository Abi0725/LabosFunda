#include "iostream"
#include "cmath"

using namespace std;

int main(void)
{
    float pi = 3.1416, radio, area, peri;
    string valor;

    cout << endl << "CALCULAR EL AREA Y PERIMETRO DE UN CIRCULO" << endl << endl;

    cout << "Escriba el valor del radio: ";
    cin >> radio;
    
    area = (float) pi * pow(radio,2);
    cout << endl << "El area del circulo es: " << area << endl << endl;

    peri = 2 * radio * pi;
    cout << "El perimetro del circulo es: " << peri << endl << endl; 


}