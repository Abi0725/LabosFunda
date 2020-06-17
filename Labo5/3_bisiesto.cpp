#include "iostream"

using namespace std;


bool bisiesto(int year)
{
	if(year%400==0)
    {
		return true;
	} 
    else if(year%4 == 0 && year % 100 !=0)
    {
		return true;
	}
    else
        return false;
      
}



int main()
{
    int year;

    cout << endl << "Ingrese un a" << char(164) << "o para saber si es bisiesto: ";
    cin >> year;

    bool valor = bisiesto(year);

	if(valor){
		cout<<"El a" << char(164) << "o es bisiesto";
	} else{
		cout<<"El a" << char(164) << "o no es bisiesto";
	}


return 0;
}