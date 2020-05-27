#include "iostream"
#include "string.h"
#include "stdlib.h"
#include "ctype.h"
#include "cmath"

using namespace std;

int main()
{
    string palabra, letra1, letra2;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    letra1 = palabra.front();
    letra2 = palabra.back();

    if (letra1 == letra2)
    {
        cout << endl << "SI, la palabra incia y termina con la misma letra" << endl;
    }else
    {
        cout << endl << "NO, la palabra no inicia ni termina con la misma letra" << endl;
    }
     
    


}