#include "iostream"
#include "cmath"

using namespace std;

int main(void)
{
    string nombre;
    int cantidad;
    float precio, pfinal;

    cout << endl << "PRODUCTO COMPRADO" << endl << endl;

    cout << "Ingrese el nombre del producto:  ";
    cin >> nombre;

    cout << endl << "Ingrese el precio del producto: $";
    cin >> precio;

    cout << endl << "Ingrese la cantidad de producto que ha comprado: ";
    cin >> cantidad;

    pfinal = (float) precio * cantidad;

    cout << endl << "El total de dinero que usted ha gastado es: " << endl << "$" << pfinal << " en " << nombre << endl;

    return 0;

}