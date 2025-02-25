#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	int tab[100] = {};
	tab[0] = 77;
	tab[1] = 99;
	tab[2] = -88;
	cout << "pierwszy element tablicy " << tab[0] << endl;
	cout << "drugi element tablicy " << tab[1] << endl;
	cout << "trzeci element tablicy " << tab[2] << endl;
	cout << "czwarty element tablicy " << tab[3] << endl;	
	for(int i = 0; i < 100; i++)
	{
		//tab [i] = 0;
		cout << "\nKolejny element tablicy to : " << tab[i] << endl;
	}
		cout << "\n-+=======================================+-\n" << endl;
	int losowe[30], i = 0;
	srand(time(NULL));
	{
		losowe[i] = rand()%100 + 1;
		cout << "Losowa liczba to : " << losowe[i] << endl;
	}
		cout << "\n-+=======================================+-\n" << endl;
	int suma = 0;
	int dlugosc_losowe = sizeof(losowe)/sizeof(int);
	int ile = sizeof(int);
	cout << "Dlugosc tablicy: " << dlugosc_losowe << endl;
	cout <<"Wielkosc INT " << ile << endl;
		cout << "\n-+=======================================+-\n" << endl;
	for(int i = 0; i < dlugosc_losowe; i++)
	{
		suma = suma + losowe[i];
			
	}
	cout << "Suma z losowych to: " << suma << endl;
	double srednia = suma/dlugosc_losowe;
	cout << "srednia z losowych w tablicy" << srednia << endl;
	int c=0;
	cout << "\n-+=======================================+-\n" << endl;	
	//odczytac co drugi element tablicy wpisz liczby w jednej lini po przecinku
	for(int i=0;i<10;i++)
	{
		cout << losowe[i] << ",";
		i++;
	}
	cout << "\n-+=======================================+-\n" << endl;
	//odczytac pierwszy element tablicy
	
	
	
	
	cout << "\n-+=======================================+-\n" << endl;	
	//odczytac ostatni element tablicy
	
	
	
	
	cout << "\n-+=======================================+-\n" << endl;	
	//odczytac pioty od konca element tablicy
	
	
	
	
	cout << "\n-+=======================================+-\n" << endl;	
	//przepisz 
	
	
	
	
	cout << "\n-+=======================================+-\n" << endl;	
	//tlko liczby parzyste
	int ilep = 0, ilen = 0;
	
	for(int i = 0;i < dlugosc_losowe; i++)
	{
		if(losowe[i]%2 == 0)
		{
			cout << "Parzysta z tablicy: " << losowe[i] << ". na index: " << i << endl;
			ilep++;		
		}
	 	else
	 	ilen++;
	 
	 } 
	 cout << "ilosc liczb parzystych to: " << ilep << endl;
	 cout << "ilosc liczb nieparzysthcn to: " << ilen << endl;
}

