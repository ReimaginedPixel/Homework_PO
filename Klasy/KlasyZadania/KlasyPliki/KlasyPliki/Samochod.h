#pragma once

#include <iostream>
using namespace std;

class Samochod {
public:
    int nazwa;

    Samochod();             // Konstruktor domyœlny
    Samochod(int nazwa);    // Konstruktor z parametrem

    void wypisz_s();        // Deklaracja metody
};
