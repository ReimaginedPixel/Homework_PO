#include <iostream>

using namespace std;

void dodawanie() {
    int a, b;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;
    cout << "Wynik dodawania: " << a + b << endl;
}

void odejmowanie() {
    int a, b;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;
    cout << "Wynik odejmowania: " << a - b << endl;
}

// funkcja ktora zwraca wartosc mnozenie
int mnozenie_zwraca() {
    int a, b;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;
    return a * b;
}

// funckja ktora zwraca wynik dzielenie
int dzielenie_zwraca() {
    int a, b;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;
    if (b == 0) {
        cout << "Nie mozna dzielic przez 0" << endl;
        return 0; // oddaje 0 jako error
    }
    return a / b;
}

void mnozenie() {
    int a, b;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;
    cout << "Wynik mnozenia: " << a * b << endl;
}

void dzielenie() {
    int a, b;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;
    if(b == 0) {
        cout << "Nie mozna dzielic przez 0" << endl;
    } else {
        cout << "Wynik dzielenia: " << a / b << endl;
    }
}

int main() {
    int wybor;
    cout << "Zadanie | Wybierz co chcesz zrobic" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "5. Mnozenie (zwraca wartosc)" << endl;
    cout << "6. Dzielenie (zwraca wartosc)" << endl;
    cin >> wybor;

    switch(wybor)
    {
        case 1:
            cout << "Wybrales dodawanie" << endl;
            dodawanie();
            break;
        case 2:
            cout << "Wybrales odejmowanie" << endl;
            odejmowanie();
            break;
        case 3:
            cout << "Wybrales mnozenie" << endl;
            mnozenie();
            break;
        case 4:
            cout << "Wybrales dzielenie" << endl;
            dzielenie();
            break;
        case 5:
            cout << "Wybrales mnozenie (zwraca wartosc)" << endl;
            cout << "Wynik mnozenia: " << mnozenie_zwraca() << endl;
            break;
        case 6:
            cout << "Wybrales dzielenie (zwraca wartosc)" << endl;
            cout << "Wynik dzielenia: " << dzielenie_zwraca() << endl;
            break;
        default:
            cout << "Nie ma takiej opcji" << endl;
            break;
    }
    return 0;
}
