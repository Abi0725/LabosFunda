#include "iostream"

using namespace std;


void suma(int arreglo1[], int arreglo2[], int arregloR[], int tam);
void resultado(int arregloR[], int tam);


int main()
{
    const int tam = 3;
    int arreglo1[tam] = {2, 4, 6};
    int arreglo2[tam] = {1, 3, 5};
    int arregloR[tam];

    cout << "Los elementos del arreglo 1 son: " << arreglo1[0] << " " << arreglo1[1] << " " << arreglo1[2] << endl;
    cout << "Los elementos del arreglo 2 son: " << arreglo2[0] << " " << arreglo2[1] << " " << arreglo2[2] << endl;


    suma(arreglo1, arreglo2, arregloR, tam);
    resultado(arregloR, tam);

  return 0;



}

void suma(int arreglo1[], int arreglo2[], int arregloR[], int tam)
{
    for(int i=0; i < tam; i++){
        arregloR[i] = arreglo1[i] + arreglo2[i];
    }
}

void resultado(int arregloR[], int tam)
{
    cout << "La suma es: ";
    for(int i=0; i < tam; i++){
        cout << arregloR[i] << " ";
    }
}
