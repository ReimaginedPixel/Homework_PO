#include "Glosnik.h"

// Settery
void Glosnik::set_nazwa(string nazwa) {
    this->nazwa = nazwa;
}

void Glosnik::set_glosnosc(int glosnosc) {
    this->glosnosc = glosnosc;
}

void Glosnik::set_kolor(string kolor) {
    this->kolor = kolor;
}

void Glosnik::set_wlaczony(bool wlaczony) {
    this->wlaczony = wlaczony;
}

// Gettery
string Glosnik::get_nazwa() {
    return nazwa;
}

int Glosnik::get_glosnosc() {
    return glosnosc;
}

string Glosnik::get_kolor() {
    return kolor;
}

string Glosnik::get_wlaczony() {
    if (wlaczony)
        return "Wlaczony";
    else
        return "Wylaczony";
}

// Dodatkowe metody
void Glosnik::wlacz() {
    wlaczony = true;
    cout << nazwa << " zostal wlaczony!" << endl;
}

void Glosnik::wylacz() {
    wlaczony = false;
    cout << nazwa << " zostal wylaczony!" << endl;
}

void Glosnik::wypisz_wszystko() {
    cout << "Nazwa: " << get_nazwa() << endl;
    cout << "Glosnosc: " << get_glosnosc() << endl;
    cout << "Kolor: " << get_kolor() << endl;
    cout << "Stan: " << get_wlaczony() << endl;
}
