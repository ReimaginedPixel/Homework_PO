#include <iostream>
#include <string>
#include <fstream>
#include <locale.h>
using namespace std;
 
bool wyswietlZawartoscPliku(string nazwaPliku) {
	ifstream plik;
	plik.open(nazwaPliku.c_str());
	if (!plik.good())
		return false;
 
	string wiersz;
	while (getline(plik, wiersz))
		cout << wiersz << endl;
	plik.close();
	return true;
}
 
int main()
{
	setlocale(LC_CTYPE, "Polish");
	/*string imie;
	string nazwisko;
	int wiek;
	cout << "Podaj imie: ";
	cin >> imie;
	cout << "Podaj nazwisko ";
	cin >> nazwisko;
	cout << "Podaj wiek: ";
	cin >> wiek;
	cout << imie << " " << nazwisko << " " << wiek;
 
	string tekst;
	getline(cin, tekst);
	cout << "Tekst: " << tekst << endl;*/
 
 
	ifstream plik;
	plik.open("D:/test.txt");
 
	//if ( plik.good() ) {
	//	/*string odczytanyTekst;
	//	getline(plik, odczytanyTekst);
	//	cout << odczytanyTekst;*/
	//	string wiersz;
	//	while (getline(plik, wiersz))
	//		cout << wiersz << endl;
	//} 
	//else {
	//	cout << "Nie otworzyłem pliku";
	//}
 
	if(!wyswietlZawartoscPliku("test.txt"))
		cout << "Nie udalo sie otworzyc pliku o podanej nazwie" << endl;
 
	return 0;
}