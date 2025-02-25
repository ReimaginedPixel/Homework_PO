#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int a = 1,b=2;
	  double c = 12.0,d = 15.0;
	  int wynik;
	  double wynik2;
	  
	  cout <<"Wynik dzielenia ca³kowitego" << (a/b)<< endl; //operator dzielenia ca³kowitego
	  cout << "dzielenie zmiennych wy¿szego rzêd << (1.0/2" << endl;
	  
	  wynik2 = a/b;
	  cout << "wynik dzielenia ca³kowitego wpisanego do zmiennej typu double:" << wynik2 << endl;
	  
	  system("pause");

	  wynik2 = (double)a/b;
	  cout << "wynik dzielenia przy rzutowaniu: " << wynik2 <<endl;
	  wynik = (double)a/b;
	  cout << "Wynik nie do konca poprawy" << wynik << endl;
	  
	  wynik = c/d; //convert to 'int' from 'double'
	  cout << "Wynik dzielenia dwoch liczb typu zmiennoprzeciwinkwoge" <<
	"i wpsianie go do typu ca³kowitego =" "<< wynik << endl:";
	  
	  }
