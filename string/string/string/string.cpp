#include <iostream>
#include <string>

using namespace std;
    // ---+-===============-+---
    //         FUNKCJA ZAD.2
    // ---+-===============-+---

string doWielkich(string tekst) {
    for (size_t i = 0; i < tekst.size(); i++) {
        if (tekst[i] >= 'a' && tekst[i] <= 'z') {
            tekst[i] -= 32;
        }
    }
    cout << tekst;
    return tekst;

}

int main() {

    // ---+-===============-+---
    //         ZADANIE 1
    // ---+-===============-+---

    cout << "=+- Zadanie 1. \n\nPodaj Tekst Do Sprawdzenia:\n> ";

    string tekst;
    getline(cin, tekst);

    cout << "Dlugosc: " << tekst.length() << endl;
    cout << "Pierwszy znak: " << tekst.front() << endl;
    cout << "Ostatni znak: " << tekst.back() << endl;

    // ---+-===============-+---
    //         ZADANIE 2
    // ---+-===============-+---
    cout << "\n=+- Zadanie 2. \n\n";

    doWielkich("Bardzo Fajny Tekst Lol");






    return 0;
}
