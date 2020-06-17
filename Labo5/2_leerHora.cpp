#include "iostream"

using namespace std;

int main()
{
    int hora = 0, minutos = 0, segundos = 0;


    if(hora <= 23 && minutos <= 59 && segundos <= 59)
    {
    cout << endl << "Ingrese la hora en el modo de 24 horas" << endl;

    cout << endl << "Ingrese la hora: ";
    cin >> hora;

    cout << endl << "Ingrese los minutos: ";
    cin >> minutos;

    cout << endl << "Ingrese los segundos: ";
    cin >> segundos;
        if(hora == 23 && minutos == 59 && segundos == 59)
        {
            hora = 0;
            minutos = 0;
            segundos = 0;
            cout << "0" << hora << " h : " << "0" << minutos << " min : " << "0" << segundos << " seg";

        }
        else if (minutos == 59 && segundos == 59)
        {
            hora ++;
            minutos = 0;
            segundos = 0;
            cout << hora << " h : " << "0" << minutos << " min : " << "0" << segundos << " seg";

        }
        else if(hora < 23 && minutos < 59 && segundos < 59)
        {
            segundos ++;
            cout << hora << " h : "  << minutos << " min : " << segundos << " seg";
        }else if (segundos == 59)
        {
            minutos ++;
            segundos = 0;
            cout << hora << " h : " << minutos << " min : 0"  << segundos << " seg";
        }
        else if(hora >= 23 || minutos >= 59|| segundos >= 59)
        {
            cout << endl << "Escribe bien la fecha porfis :)" << endl; 
        }
    } 
        
return 0;
}