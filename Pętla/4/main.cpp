#include <iostream>

using namespace std;

int main()
{
	int parzyste = 0;
	int i = 0;
	int suma = 0;
	while(i < 10)
	{
		i++;
		cout << "i: " << i << endl;
		parzyste = parzyste + 2;
		cout << "Liczba Parzysta: " << parzyste << endl;
		suma = suma + parzyste;
		cout << "Sumy Poœrednie: " << suma << endl;
	}
	cout <<"suma 10 kolejnych liczb parzystych w petli while to: " << suma << endl;
	cout << "|===+-------------------------------------------+===|\n";
	
	parzyste = 0;
	i = 0;
	suma = 0;
	do
	{
		i++;
//		cout << "i: " << i << endl;
		parzyste = parzyste + 2;
//		cout << "Liczba Parzysta: " << parzyste << endl;
		suma = suma + parzyste;
//		cout << "Sumy Poœrednie: " << suma << endl;
	} while(i < 10);
	cout <<"suma 10 kolejnych liczb parzystych w petli do-while to: " << suma << endl;
	cout << "|===+-------------------------------------------+===|\n";
	
	int parzyste2 = 0;
	int suma2 = 0;
	for(int i = 0; i < 10; i++)
	{
		parzyste2 += 2; //parzyste = parzyste + 2;
		suma2 = suma2 + parzyste2;
	}
	cout <<"suma 10 kolejnych liczb parzystych w petli for to: " << suma << endl;
	cout << "|===+-------------------------------------------+===|\n";
	
	//kolejne zadanie 4
	int zlote = 2;
	int suma_syn = 0;
	for(int i=0; i < 30; i++)
	{
		suma_syn = suma_syn + zlote;
		zlote += 2;
		
	}
	cout << "Zaoszczedzone pienioadze: " << suma_syn << endl;
}
