// KlasyFigury.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

class kwadrat {
private:
    string nazwa;
    string kolor_wypelnienia;
    string jednostka;
    int bok;

public:
    void set_nazwa() {
        cout << "Podaj nazwe kwadratu: ";
        cin >> nazwa;
    }

    void set_bok(int ilosc) {
        if (ilosc >= 0)
            bok = ilosc;
        else
            bok = -ilosc;
    }

    void set_jednostka() {
        cout << "Podaj jednostke boku: ";
        cin >> jednostka;
    }

    void set_kolor_wypelnienia() {
        cout << "Podaj kolor wypelnienia kwadratu: ";
        cin >> kolor_wypelnienia;
    }

    string get_nazwa() { return nazwa; }
    int get_bok() { return bok; }
    string get_jednostka() { return jednostka; }
    string get_kolor_wypelnienia() { return kolor_wypelnienia; }

    int oblicz_pole() {
        return bok * bok;
    }

    int oblicz_obwod() {
        return 4 * bok;
    }
};


class prostokat {
private:
    string nazwa;
    string kolor_wypelnienia;
    string jednostka;
    int bok_a;
    int bok_b;

public:
    void Prostokat(int b1, int b2) {
        bok_a = b1;
        bok_b = b2;
    }
    /*
    void ThisProstokat(int bok_a, int bok_b) {
        this->bok_a = bok_a;
        this->bok_b = bok_b;
    }*/

    void set_nazwa() {
        cout << "Podaj nazwe prostokata: ";
        cin >> nazwa;
    }

    void set_boki(int a, int b) {
        if ((bok_a > 0) && (bok_b > 0)) {
            this->bok_a = a;
            this->bok_b = b;
        }
        else {
            this->bok_a* (-1);
            this->bok_b* (-1);
        }
    }

    void set_jednostka() {
        cout << "Podaj jednostke bokow: ";
        cin >> jednostka;
    }

    void set_kolor_wypelnienia() {
        cout << "Podaj kolor wypelnienia prostokata: ";
        cin >> kolor_wypelnienia;
    }

    string get_nazwa() {
        return nazwa;
    }
    int get_bok_a() {
        return bok_a;
    }
    int get_bok_b() {
        return bok_b;
    }
    string get_jednostka() {
        return jednostka;
    }
    string get_kolor_wypelnienia() {
        return kolor_wypelnienia;
    }

    int oblicz_pole() {
        return bok_a * bok_b;
    }

    int oblicz_obwod() {
        return 2 * (bok_a + bok_b);
    }
};


int main()
{
    cout << "Hello World!\n";
    kwadrat n1;
    int bok_kw;
    cout << "Podaj dlugosc boku kwadratu: ";
    cin >> bok_kw;

    n1.set_nazwa();
    n1.set_bok(bok_kw);
    n1.set_jednostka();
    n1.set_kolor_wypelnienia();

    cout << "\nKwadrat: " << n1.get_nazwa()
        << "\nBok: " << n1.get_bok() << " " << n1.get_jednostka()
        << "\nKolor: " << n1.get_kolor_wypelnienia()
        << "\nPole: " << n1.oblicz_pole()
        << "\nObwod: " << n1.oblicz_obwod() << endl;

    cout << "\n------------------------------------\n";

    prostokat p1;
    int a, b;
    cout << "Podaj dlugosc boku A prostokata: ";
    cin >> a;
    cout << "Podaj dlugosc boku B prostokata: ";
    cin >> b;

    p1.set_nazwa();
    p1.set_boki(a, b);
    p1.set_jednostka();
    p1.set_kolor_wypelnienia();

    cout << "\nProstokat: " << p1.get_nazwa()
        << "\nBok A: " << p1.get_bok_a() << " " << p1.get_jednostka()
        << "\nBok B: " << p1.get_bok_b() << " " << p1.get_jednostka()
        << "\nKolor: " << p1.get_kolor_wypelnienia()
        << "\nPole: " << p1.oblicz_pole()
        << "\nObwod: " << p1.oblicz_obwod() << endl;
    prostokat tab[100];
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        int los1 = (int)(rand() % 100 + 1);
        int los2 = (int)(rand() % 100 + 1);
        tab[i].set_boki(los1, los2);
    }
    for (int i = 0; i < 10; i++) {
        cout << "\nProstokat: " << tab[i].get_nazwa()
            << "\nBok A: " << tab[i].get_bok_a() << " " << tab[i].get_jednostka()
            << "\nBok B: " << tab[i].get_bok_b() << " " << tab[i].get_jednostka()
            << "\nKolor: " << tab[i].get_kolor_wypelnienia()
            << "\nPole: " << tab[i].oblicz_pole()
            << "\nObwod: " << tab[i].oblicz_obwod() << endl;

        prostokat p2; //kontsturkot domyslny
        cout << "\nProstokat: " << p2.get_nazwa()
            << "\nBok A: " << p2.get_bok_a() << " " << p2.get_jednostka()
            << "\nBok B: " << p2.get_bok_b() << " " << p2.get_jednostka()
            << "\nKolor: " << p2.get_kolor_wypelnienia()
            << "\nPole: " << p2.oblicz_pole()
            << "\nObwod: " << p2.oblicz_obwod() << endl;
        prostokat p3(89,56); //konsktruktor z 2 paramtetiami
        cout << "\nProstokat: " << p3.get_nazwa()
            << "\nBok A: " << p3.get_bok_a() << " " << p3.get_jednostka()
            << "\nBok B: " << p3.get_bok_b() << " " << p3.get_jednostka()
            << "\nKolor: " << p3.get_kolor_wypelnienia()
            << "\nPole: " << p3.oblicz_pole()
            << "\nObwod: " << p3.oblicz_obwod() << endl;
    }
}

