#include <iostream>

using namespace std;

class drzefo {
private:
    string nazwa = "normalne";
    string kolor_lisci = "biały";
    string typ = "brzoza";
    int wiek = 1;
    int grubosc = 10;

public:
    string set_nazwa(string podana_nazwa;) {
        return nazwa = podana_nazwa;
    }

    string get_nazwa() {
        return nazwa;
    }
    string get_kolor_lisci() {
        return kolor_lisci;
    }
    string get_typ() {
        return typ;
    }
    int get_wiek() {
        return wiek;
    }
    int get_grubosc() {
        return grubosc;
    }

    void wypisz_sycko_drzefo()
    {
        cout << "Wypisz Nazwe: " << nazwa << endl;
        cout << "Wypisz Kolor Lisci: " << kolor_lisci << endl;
        cout << "Wypisz typ: " << typ << endl;
        cout << "Wypisz wiek: " << wiek << endl;
        cout << "Wypisz grubosc: " << grubosc << endl;
    }
};
int main()
{

    cout << "Klasa Drzefo >:) \n";
    drzefo d1;
    d1.wypisz_drzefo();

}
