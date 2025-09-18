#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int ile;
clock_t start, stop;
double czas;

/*
 ZADANIE 1

int main()
{
	cout << "Ile liczb w tablicy!\n";
	cin >> ile;

	int* tablica;
	tablica = new int[ile];

	for (int i = 0; i < ile; i++)
	{
		cout << (int)tablica << endl;
		tablica++;
	}

	delete[] tablica;
}
*/

int main()
{
	cout << "Ile liczb w tablicy!\n";
	cin >> ile;

	int* tablica;
	tablica = new int[ile];

	start = clock();

	for (int i = 0; i < ile; i++)
	{
		tablica[i] = i;
		tablica[i] += 50;
	}

	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC ;
	cout << "czas zapisu: " << czas << endl;
	delete[] tablica;


	cout << "Ile liczb w tablicy!\n";
	cin >> ile;

	int* wskaznik =  tablica;
	tablica = new int[ile];

	start = clock();

	for (int i = 0; i < ile; i++)
	{
		*wskaznik = i;
		*wskaznik += 50;
		wskaznik++;
	}

	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	cout << "czas zapisu: " << czas << endl;
	delete[] tablica;


}
