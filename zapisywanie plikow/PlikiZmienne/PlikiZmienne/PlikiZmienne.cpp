#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool wczytajPlik(string nazwaPliku);
void wykonajOperacje(int a, string b, int c);

bool wczytajPlik(string nazwaPliku)
{
	ifstream plik;
	plik.open(nazwaPliku.c_str());
	if (!plik.good())
	{
		return false;
	}

	int a;
	string b;
	int c;
	while (plik >> a >> b >> c)
	{
		wykonajOperacje(a, b, c);
	}

	return true;
}

void wykonajOperacje(int a, string b, int c)
{
	if (b == "dodac")
	{
		cout << a << " + " << c << " = " << a + c << endl;
	}
	else if (b == "odjac")
	{
		cout << a << " - " << c << " = " << a - c << endl;
	}
	else
	{
		cout << "Nieznana operacja: \"" << b << "\"" << endl;
	}
}

int main() {
	if (!wczytajPlik("danezez2.txt"))
	{
		cout << "Blad otwarcia pliku!" << endl;
	}

	// Testowanie drugiego pliku
	fstream plik;
	plik.open("danezez.txt", ios::in | ios::out);
	if (plik.good())
	{
		cout << "Plik otwarty poprawnie." << endl;
		for (int i = 1; i < 100; i++)
		{
			plik << i << endl;
			plik.flush();
		}
	}
	else
	{
		cout << "Blad otwarcia pliku!" << endl;
	}

	return 0;
}