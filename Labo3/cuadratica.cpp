#include "iostream"
#include "cmath"

using namespace std;

int main(void)
{
    int a, b, c, primterm, cuadrado, ac, dosa, rest;
    float sol1, sol2;

    cout << endl << "RESULTADO DE LA FORMULA CUADRATICA" << endl << endl;

    cout << "Ingrese el valor de a: " << endl;
    cin >> a;
    
    cout << "Ingrese el valor de b: " << endl;
    cin >> b;

    cout << "Ingrese el valor de c: " << endl;
    cin >> c;

    primterm = (-b); 

    cuadrado = pow(b,2);
    ac = 4*a*c;
    dosa = 2*a;
    rest = cuadrado - ac;
    sqrt(rest);

    sol1 = (float) (primterm - sqrt(rest)) / dosa;
    sol2 = (float) (primterm + sqrt(rest)) / dosa;

    cout << "La solucion 1 es: " << sol1 << endl << endl;
    cout << "La solucion 2 es: " << sol2 << endl; 


}