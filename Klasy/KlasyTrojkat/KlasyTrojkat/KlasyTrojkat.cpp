#include <iostream>
using namespace std;

class Trojkat {
private:
    double a, b, c;
    string nazwa;
    bool wypelnienie;

    bool czyMoznaZbudowac(double a, double b, double c) {
        return (a + b > c) && (a + c > b) && (b + c > a);
    }

public:
    Trojkat() {
        a = 3, b = 1, c = 2;
        nazwa = "Zbyszek";
        wypelnienie = false;
        if (!czyMoznaZbudowac(a, b, c)) {
            cout << " Nie mozna zbudowac trojkata o bokach: " << a << ", " << b << ", " << c << endl;
            a = b = c = 0;
            nazwa = "Niepoprawny";
        }
    }

    Trojkat(double a, double b, double c) {
        if (czyMoznaZbudowac(a, b, c)) {
            this->a = a;
            this->b = b;
            this->c = c;
            nazwa = "Bez nazwy";
            wypelnienie = false;
        }
        else {
            cout << " Nie mozna zbudowac trojkata o bokach: " << a << ", " << b << ", " << c << endl;
            this->a = this->b = this->c = 0;
            nazwa = "Niepoprawny";
            wypelnienie = false;
        }
    }

    Trojkat(double a, double b, double c, string nazwa) {
        if (czyMoznaZbudowac(a, b, c)) {
            this->a = a;
            this->b = b;
            this->c = c;
            this->nazwa = nazwa;
            wypelnienie = false;
        }
        else {
            cout << " Nie mozna zbudowac trojkata o bokach: " << a << ", " << b << ", " << c << endl;
            this->a = this->b = this->c = 0;
            this->nazwa = "Niepoprawny";
            wypelnienie = false;
        }
    }

    Trojkat(double a, double b, double c, string nazwa, bool wypelnienie) {
        if (czyMoznaZbudowac(a, b, c)) {
            this->a = a;
            this->b = b;
            this->c = c;
            this->nazwa = nazwa;
            this->wypelnienie = wypelnienie;
        }
        else {
            cout << " Nie mozna zbudowac trojkata o bokach: " << a << ", " << b << ", " << c << endl;
            this->a = this->b = this->c = 0;
            this->nazwa = "Niepoprawny";
            this->wypelnienie = wypelnienie;
        }
    }

    ~Trojkat() {
        cout << "Usuwam trojkat o nazwie: " << nazwa << endl;
    }

    void wypisz() {
        cout << " Trojkat o nazwie: " << nazwa << endl
            << "   wypelnienie: " << (wypelnienie ? "tak" : "nie") << endl
            << "   bok a: " << a << endl
            << "   bok b: " << b << endl
            << "   bok c: " << c << endl;

    }
};

void kreski() {
    cout << "------------------------------------------------" << endl;
}

int main() {
    Trojkat t1;
    t1.wypisz();
    kreski();

    Trojkat t2(5, 6, 9);
    t2.wypisz();
    kreski();

    Trojkat t3(1, 2, 8, "Krysia"); // nie da się zbudować
    t3.wypisz();
    kreski();

    Trojkat t4(5, 6, 9, "Krysia", true);
    t4.wypisz();
    kreski();
}
