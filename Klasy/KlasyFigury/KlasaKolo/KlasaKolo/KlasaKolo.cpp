#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

class Kolo {
private:
    double promien;
    double pole;
public:
    Kolo() {
        promien = 100;
    }
    Kolo(double promien) {
        if (promien > 0)
            this->promien = promien;
        else
            this->promien = promien * (-1);
        pole = M_PI * promien * promien;
    }

    double get_promien(double promien) {
        return promien;
    }
    double get_promien(double pole) {
        return pole;
    }
};

class Trrujkontzeszaaskaksaj {
private:
    int wysykosc;
    int podstawa;
    int pole;
    int bok_1;
    int bok_2;
    int bok_3;
public:
    Trrujkontzeszaaskaksaj() {
        wysykosc = 20;
        podstawa = 6;
    }
    Trrujkontzeszaaskaksaj(int wysokosc, int podstawa) {
        if (wysokosc > 0)
            wysokosc = wysokosc;
        else
            wysokosc = wysokosc
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

