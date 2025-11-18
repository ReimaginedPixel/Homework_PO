#include <iostream>
#include "Glosnik.h"
using namespace std;

int main() {
    Glosnik g1;

    g1.set_nazwa("CoolBoom");
    g1.set_glosnosc(75);
    g1.set_kolor("Czarny");
    g1.set_wlaczony(false);

    cout << "We Love " << g1.get_nazwa() << " as the name of the class thing!!" << endl;

    cout << "\n--- Dane glosnika ---" << endl;
    g1.wypisz_wszystko();

    cout << "\nWlaczamy glosnik..." << endl;
    g1.wlacz();

    cout << "\n--- Dane po wlaczeniu ---" << endl;
    g1.wypisz_wszystko();

    return 0;
}
