#include "Samochod.h"

Samochod::Samochod() {
    nazwa = 0;
}

Samochod::Samochod(int nazwa) {
    this->nazwa = nazwa;
}

void Samochod::wypisz_s() {
    cout << "Nazwa samochodu to: " << nazwa << endl;
}
