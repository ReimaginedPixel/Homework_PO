#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s1 = "-->   Pierwszy napis   <---";
    string s2("-->   Napis dwa   <---");

    string gwiazdki(50, '*');
    cout << gwiazdki << endl;

    // ==-+--------+-     -+--------+-==
    // ZAD 2 – Wyśrodkowanie napisów
    // ==-+--------+-     -+--------+-==
    string puste(25, ' ');
    cout << puste << s1 << puste << endl;
    cout << puste << s2 << puste << endl;

    cout << gwiazdki << endl;

    // ==-+--------+-     -+--------+-==
    // ZAD 3 – Dodanie # na początku, środku i końcu
    // ==-+--------+-     -+--------+-==
    string s1_hash = "# " + s1 + " #";
    string s2_hash = "# " + s2 + " #";

    cout << s1_hash << endl;
    cout << s2_hash << endl;

    cout << gwiazdki << endl;

    // ==-+--------+-     -+--------+-==
    // ZAD 4 – Kopiowanie do drugiej zmiennej
    // ==-+--------+-     -+--------+-==
    string kopia = s1_hash + "     " + s2_hash;
    cout << kopia << endl;

    cout << gwiazdki << endl;

    // ==-+--------+-     -+--------+-==
    // ZAD 5 – Zmiana długości kopii
    // ==-+--------+-     -+--------+-==
    string zmienione = kopia;

    // obcięcie do 20
    zmienione.resize(20);

    // rozszerzenie do 40, znak 'x'
    zmienione.resize(40, 'x');

    cout << "zmienione --> " << zmienione << endl;

    cout << gwiazdki << endl;

    // ==-+--------+-     -+--------+-==
    // ZAD 6 – Liczba gwiazdek od użytkownika
    // ==-+--------+-     -+--------+-==
    int n;
    cout << "Podaj liczbe gwiazdek: ";
    cin >> n;

    string user_gwiazdki(n, '*');
    cout << user_gwiazdki << endl;

    // ==-+--------+-     -+--------+-==
    // ZAD 7 – Kopiowanie wycinka tekstu
    // ==-+--------+-     -+--------+-==
    string tekst = "Oba niniejsze napisy z pozycji 8 i 20 znakow kopiuje do nowego obiektu";
    string wycinek = tekst.substr(8, 20);

    cout << wycinek << endl;
    cout << "Zbadac dlugosc nowopowstalego napisu --> "
         << wycinek.length() << " znakow" << endl;

    cout << gwiazdki << endl;

    // ==-+--------+-     -+--------+-==
    // ZAD 8 – Zamiana co drugiego znaku na *
    // ==-+--------+-     -+--------+-==
    string zmieniony = s1;

    for (size_t i = 1; i < zmieniony.size(); i += 2)
        zmieniony[i] = '*';

    cout << zmieniony << endl;

    cout << gwiazdki << endl;

    // ==-+--------+-     -+--------+-==
    // ZAD 9 – Wszystkie stringi dużymi literami
    // ==-+--------+-     -+--------+-==
    auto duze = [](string x)
    {
        for (char &c : x)
            c = toupper(c);
        return x;
    };

    cout << duze(s1) << endl;
    cout << duze(s2) << endl;
    cout << duze(s1_hash) << endl;
    cout << duze(s2_hash) << endl;
    cout << duze(zmieniony) << endl;

    cout << gwiazdki << endl;

    return 0;
}
