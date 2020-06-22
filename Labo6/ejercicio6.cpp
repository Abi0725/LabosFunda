#include "iostream"

using namespace std;

int main()
{
    int arreglo1[5], numero, contarNum, i;
	contarNum = 0;
    
    cout << endl << "Ingrese 5 numeros enteros para agregar al arreglo" << endl << endl;

	for (i=0; i<5; i++)
    {
		cout << "Ingrese el numero: ";
		cin >> arreglo1[i];
	}

	cout << endl << "Ingrese el numero que quiere saber cuantas veces se repite: ";
	cin >> numero;
	for (i=0; i<5; i++)
    {
		if (numero == arreglo1[i]){
			contarNum++;
		}
	}

	cout << endl << "El numero " << numero << " se repite "  << contarNum << " vez/veces";



	return 0;
}


