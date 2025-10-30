#include <iostream>
#include "Osoba.h"
#include "Samochod.h"
using namespace std;

class Lizaczek {
public:
    int wartosc;
    Lizaczek(int w) {
        wartosc = w;
    }
};

void zmienKlase(Lizaczek& licz) {
    licz.wartosc += 10;
    cout << "W funkcji (klasa przez referencję): " << licz.wartosc << endl;
}

int main() {
    Osoba ja;
    ja.wiek = 18;
    ja.wypisz();

    Osoba ty;
    ty.wypisz();

    Samochod jeden;

    Lizaczek licz(5);
    cout << "Przed zmianą: " << licz.wartosc << endl;
    zmienKlase(licz);
    cout << "Po zmianie: " << licz.wartosc << endl;

    return 0;
}
