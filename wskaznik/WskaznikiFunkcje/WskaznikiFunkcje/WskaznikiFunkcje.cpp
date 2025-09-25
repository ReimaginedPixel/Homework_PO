/*
#include <iostream>
using namespace std;

    Wyjaśnienie programu:

    1. Funkcja `siema` przyjmuje wskaźnik do zmiennej typu int.
       Dzięki temu możemy zmieniać oryginalną wartość przekazaną z main().

    2. W funkcji używamy operatora `*` (dereferencja wskaźnika),
       aby dostać się do wartości przechowywanej pod danym adresem
       i nadajemy jej nową wartość.

    3. W main():
       - Tworzymy zmienną `liczba` o wartości 2.
       - Tworzymy wskaźnik `uwu`, który przechowuje adres zmiennej `liczba`.
       - Wypisujemy wartość zmiennej przez wskaźnik (`*uwu`).
       - Wywołujemy funkcję `siema(uwu)`, czyli przekazujemy adres zmiennej.
       - Funkcja zmienia wartość zmiennej na 10.
       - Ponownie wypisujemy zmienioną wartość.

    Dzięki wskaźnikom można bezpośrednio modyfikować wartości zmiennych
    z innych funkcji (w przeciwieństwie do zwykłego przekazywania przez wartość).


void siema(int* zmienna) 
{
    cout << "zmienilem ci zmienna hahahahah" << endl;
    *zmienna = 10; 
}

int main()
{
    int liczba = 2;
    int* uwu = &liczba;

    cout << "Przed: " << *uwu << endl;
    siema(uwu); 
    cout << "Po: " << *uwu << endl;
}

#include <iostream>
using namespace std;

int main()
{
    int* wsk1;
    double* wsk2;

    wsk1 = new int;
    wsk2 = new double;

    *wsk1 = 5;
    *wsk2 = -3;
    cout << "Wskaznik wsk1 " << *wsk1 << " a wskaznik wsk2 " << *wsk2 << endl;
    delete wsk1;
    delete wsk2;
    system("pause");
}


#include <iostream>
using namespace std;

char* producent(void)
{
    char* w;
    cout << "Wlasnie produkuje obiekt \n";
    w = new char;
    return w;
}

int main()
{
    char* w1, * w2, * w3, * w4;

    w1 = producent();
    w2 = producent();
    w3 = producent();
    w4 = producent();

    *w1 = 'H';
    *w2 = 'M';
    *w3 = 'I';

    cout << "Oto 3 znaki: " << *w1 << *w2 << *w3
        << "\noraz smiec w czwartym: " << *w4 << endl;

    // Zwolnienie pamięci
    delete w1;
    delete w2;
    delete w3;

    system("pause");
}

*/
#include <iostream>
using namespace std;

int main()
{
    cout << "Ile elementów ma miec tablica? \n ";
    int rozm;
    cin >> rozm;
    int* dyn_tablica = new int[rozm];
    // dwie formy pracy na tablicy.
    *dyn_tablica = 44;
    dyn_tablica [0] = 44;

    *(dyn_tablica + 3) = 100;
    dyn_tablica[3] = 100;

    delete[] dyn_tablica;
}