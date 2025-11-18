#include <iostream>
using namespace std;

class Glosnik {
private:
    string nazwa;
    int glosnosc;
    string kolor;
    bool wlaczony;

public:
    // Settery
    void set_nazwa(string nazwa);
    void set_glosnosc(int glosnosc);
    void set_kolor(string kolor);
    void set_wlaczony(bool wlaczony);

    // Gettery
    string get_nazwa();
    int get_glosnosc();
    string get_kolor();
    string get_wlaczony();

    // Dodatkowe metody
    void wlacz();
    void wylacz();
    void wypisz_wszystko();
};
