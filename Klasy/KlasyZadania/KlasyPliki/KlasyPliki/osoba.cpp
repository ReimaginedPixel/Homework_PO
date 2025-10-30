#include <iostream>;
#include "Osoba.h"

using namespace std;

Osoba::Osoba() {
	wiek = 0;
}


	Osoba::Osoba(int wiek) {
		this->wiek = wiek;
	}


void Osoba::wypisz() {
	cout << "Wiek Naszej osoby to: " << wiek << endl;
}