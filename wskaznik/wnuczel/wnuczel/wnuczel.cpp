#include <iostream>

using namespace std;
/*

void wnuczek(int babcia)
{
    babcia = -1;
    cout << "Wewnątrz funkcji babca: " << babcia << endl;
}
int main()
{
    int babcia = 1;
    cout << "Przed Funkcja Babcia: " << babcia << endl;
    wnuczek(babcia);
    cout << "Po Funkcji Babcia: " << babcia << endl;

}

*/

void wnuczek(int *wsk_wuczek)
{
    *wsk_wuczek = 100;
    cout << "Wewnątrz funkcji wnuczek: " << *wsk_wuczek << endl;
}

/*
void babcia(int &babcia)
{
    babcia = 200;
    cout << "Wewnątrz funkcji babca: " << babcia << endl;
}
*/

void uzupelnij(int *wsk)
{
    for (int i = 0; i < 10; i++) {
        *wsk = i + 100;
        *wsk++;
    }
}

void wypisz(int * wsk)
{
    for (int i = 0; i < 10; i++) {
        cout << "Tablica: " << *wsk << endl;
        *wsk++;
    }
}

void modyfikuj(int* wsk)
{
    {
        for (int i = 0; i < 4; i++) {
            *wsk = *wsk * (-1);
            *wsk++;
        }
    }

}
int main()
{
    int babcia = -1;
    cout << "Przed Funkcja Babcia: " << babcia << endl;
    wnuczek(&babcia);
    cout << "Po Funkcji Babcia: " << babcia << endl;
    int tablica[10];
    uzupelnij(tablica);
    wypisz(tablica);
    cout << "\n ------------------------------ \n";
    modyfikuj(tablica);
    wypisz(tablica);
}

