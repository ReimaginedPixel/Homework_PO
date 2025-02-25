#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	for (int i = 0; i < 20; i++)
	{
		cout << "Kolejne i = " << i << endl;
		if(i == 10)
		{
			cout << "dla 10 pominiety obieg petli\n";
			continue;	
		}
		else
		cout << "Kolejne i = " << i << endl;
	} 
//
	cout<< ".............................................\n";
	int i = 0;
	for ( ; ; )
	{
		if(i < 20)
		{
		cout << "Kolejne i = " << i << endl;
		i++;	
		}
		else break;	
	}
	// wylosuj dok³adnie 509 liczb parzystych z przedzia³u od 0 do 100 oraz podaj ich ilosc losowañ
	//oraz podaj ilosc losowan
	srand(time(NULL));
	
	int los=0;
	int parzysta = 0;
	int ilosc_losowan = 0;
	while (ilosc_losowan < 80) {
	while(parzysta < 50) 
	{
		los = rand()%100;
		if( los % 2 == 0) 
		{
			cout << "Losowa liczba " << los << endl;
			parzysta++;
		}
		ilosc_losowan++;
	}
	cout << ilosc_losowan << endl;
	cout << "===+---------------------------------------------------+==="<< endl;
	//wykonaj kwadrat z znaków '#' 5x5
	//zmieñ program aby zapytaæ o iloœæ wierszy ze znaków #
	//Zmieñ program i zapytaj u¿ytkownika jaki chce znak w kwadracie
	
	//#####
	//#####
	//#####
	//#####
	//#####
	cout << "podaj iloœc boku\n";
	int n = 0;
	cin >> n;
	cout << "Podaj Znak\n";
	char znak;
	cin >> znak;
	for (int j = 1;j < n; j++)
	{
		for (int i = 0;i < j; i++)//petla wewnetrzna
		{
			cout << znak;	
		}
			
		cout << endl;
	}
	cout << "===+---------------------------------------------------+==="<< endl;	
		for (int j = 6;j < 1; j--)
	{
		for (int i = 1;i < j; i++)//petla wewnetrzna
		{
			cout << znak;	
		}
		//#####\n	
		cout << endl;
	}
	
	
	}	


}
