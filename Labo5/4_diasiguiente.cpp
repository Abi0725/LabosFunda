#include "iostream"

using namespace std;


int diasmes(int mes, int year)
{
    int dias;
    if (mes == 1 || mes == 3 || mes == 5 ||mes == 7 ||mes == 8  ||mes == 10  ||mes == 12)
    {
        dias = 31;
    } else if(mes == 4 || mes == 6 || mes ==9 ||mes ==11)
    {
        dias = 30;
    }
     if (mes == 2 && ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)))
    {
        dias = 29;
    }
    else 
    {
        dias = 28;
    }
    
    return dias;
}


int main()
{
    int dia, mes, year;

    cout << "Ingrese el numero del dia correspondiente: ";
    cin >> dia;

    cout << "Ingrese el numero del mes correspondiente: ";
    cin >> mes;

    cout << "Ingrese el numero del a" << char(164) << "o correspondiente: ";
    cin >> year;

   
    if (dia >= diasmes(mes, year))
    {
        dia = 1;
        mes ++;
        if(mes >= 12)
        {
            mes = 1;
            year ++;
             
        }
        cout << dia << " / " << mes << " / " << year;
    }else
    {
        dia ++;
        cout << dia << " / " << mes << " / " << year;
    }

    


return 0;
}
