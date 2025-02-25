#include <iostream>
#include <unistd.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main() 
{
/*	//wypisz mi liczby od 1 do 10
	int i = 0; // warunki poczatku pêtli
	while(i < 5) // warunek konca pêtli
	{
		i++; // i++; - instrukcja, która przeprowadza od warunków pocz¹tkowych do warunku koñca
		cout << "Kolejna w petli while Liczba To: " << i << endl;
	}//i = 5
	cout << "BUMMMMMM \n";
	i =  0; //warunek poczotku pentli
	do 
	{
		i++;	
		cout << "Kolejna w petli do Liczba To: " << i << endl;
	}
	while(i < 5);// warunek konca pêtli
		cout << "BUMMMMMM po petli while\n";
	
	//pêtla nieskonczona
	i = 0; 
	while(true)
	{
		i++;
		cout << "Kolejna w petli nieskonczonej: " << i << endl;
		if(i >= 100) break;
		cout<<"bum"
	}*/
	int i = 1;
	cout << "Przed petla i = " << i << endl;
	for(int i = 1;i <= 10;i++)
	{
		cout << "Kolejna liczba w petli to: " << i << endl;
	}
	cout << "Po petla i = " << i << endl;
	
	srand(time(NULL));
	int losowa = 0;
	for(int i = 1;true;i++)
	{
		losowa = rand()%2;
		cout << "losowa: " << losowa << endl;
	}
	//wypisz liczby parzyste od 1 do 20
	//wypisz liczby od 20 do 1 BUMMM
	
}
