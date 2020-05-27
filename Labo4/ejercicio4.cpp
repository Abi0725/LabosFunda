#include "iostream"
#include "string.h"
#include "stdlib.h"

using namespace std;

int main()
{
    char palabra[20];
    int longitud = 0;

    cout << endl << "EJERCICIO 4" << endl;

    cout << "Escriba cualquier palabra: ";
    cin .getline(palabra, 20);

    longitud = strlen(palabra);

    if (longitud > 10)
    {
        cout << endl << "La palabra es MAYOR a 10 caracteres" << endl;
       
    }else 
    {
        cout << endl <<  "La palabra es MENOR a 10 caracteres" << endl;
        
    }
    
    if (longitud % 2 == 0)
    {
        cout << endl << "La longitud de la palabra es PAR " << endl;
    }else
    {
        cout << endl << "La longitud de la palabra es IMPAR";
    }
    
    



   


}