#include <iostream>
#include <locale.h>
#include <limits>
#include <cstdlib>

using namespace std;

// Czyszczenie ekranu
void WyczyscEkran() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

float wczytajFloat() {
    float wartosc;
    while (true) {
        if (cin >> wartosc) {
            break;
        } else {
            cout << "\n|X|> B��dne dane! Wprowad� poprawn� liczb�.\n -> ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return wartosc;
}

int wczytajInt() {
    int wartosc;
    while (true) {
        if (cin >> wartosc) {
            break;
        } else {
            cout << "\n|X|> B��dne dane! Wprowad� poprawn� liczb�.\n -> ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return wartosc;
}

// Separator
void linia() {
    cout << "\n-+=================================+-\n";
}

// Figury
void kwadrat() {
    cout << "\n |> Podaj bok kwadratu: \n -> ";
    float a = wczytajFloat();
    cout << "\nPole: " << a * a << " cm2" << endl;
    cout << "Obw�d: " << 4 * a << " cm" << endl;
    linia();
}

void prostokat() {
    cout << "\n |> Podaj d�ugo��: \n -> ";
    float a = wczytajFloat();
    cout << " |> Podaj szeroko��: \n -> ";
    float b = wczytajFloat();
    cout << "\nPole: " << a * b << " cm2" << endl;
    cout << "Obw�d: " << 2 * (a + b) << " cm" << endl;
    linia();
}

void trapez() {
    cout << "\n |> Podaj podstaw� a: \n -> ";
    float a = wczytajFloat();
    cout << " |> Podaj podstaw� b: \n -> ";
    float b = wczytajFloat();
    cout << " |> Podaj wysoko�� h: \n -> ";
    float h = wczytajFloat();
    cout << " |> Podaj bok 1: \n -> ";
    float bok1 = wczytajFloat();
    cout << " |> Podaj bok 2: \n -> ";
    float bok2 = wczytajFloat();
    cout << "\nPole: " << ((a + b) * h) / 2 << " cm2" << endl;
    cout << "Obw�d: " << a + b + bok1 + bok2 << " cm" << endl;
    linia();
}

void trojkat() {
    cout << "\n |> Podaj podstaw�: \n -> ";
    float a = wczytajFloat();
    cout << " |> Podaj wysoko��: \n -> ";
    float h = wczytajFloat();
    cout << " |> Podaj bok 2: \n -> ";
    float b = wczytajFloat();
    cout << " |> Podaj bok 3: \n -> ";
    float c = wczytajFloat();
    cout << "\nPole: " << (a * h) / 2 << " cm2" << endl;
    cout << "Obw�d: " << a + b + c << " cm" << endl;
    linia();
}

void rownoleglobok() {
    cout << "\n |> Podaj podstaw�: \n -> ";
    float a = wczytajFloat();
    cout << " |> Podaj bok s�siedni: \n -> ";
    float b = wczytajFloat();
    cout << " |> Podaj wysoko��: \n -> ";
    float h = wczytajFloat();
    cout << "\nPole: " << a * h << " cm2" << endl;
    cout << "Obw�d: " << 2 * (a + b) << " cm" << endl;
    linia();
}

void szesciokat() {
    cout << "\n |> Podaj d�ugo�� boku: \n -> ";
    float a = wczytajFloat();
    cout << "\nPole: " << (3 * 1.73205 * a * a) / 2 << " cm2" << endl; // ?3 ? 1.73205
    cout << "Obw�d: " << 6 * a << " cm" << endl;
    linia();
}

// Menu
void wyswietlMenu() {
    cout << "\n-+=========- Lista Figur -=========+-";
    cout << "\n    1. Kwadrat        2. Prostok�t";
    cout << "\n    3. Trapez         4. Tr�jk�t";
    cout << "\n    5. R�wnoleg�obok  6. Sze�ciok�t";
    linia();
}

void menu() {
    int wybor = 0;
    int wyborwyjscie = 0;

    while (true) {
        WyczyscEkran();
        wyswietlMenu();

        cout << "\n |> Wybierz figur� do obliczenia\n -> ";
        wybor = wczytajInt();

        WyczyscEkran();

        switch (wybor) {
            case 1:
                linia();
                cout << "\nWybrano Kwadrat\n";
                kwadrat();
                break;
            case 2:
                linia();
                cout << "\nWybrano Prostok�t\n";
                prostokat();
                break;
            case 3:
                linia();
                cout << "\nWybrano Trapez\n";
                trapez();
                break;
            case 4:
                linia();
                cout << "\nWybrano Tr�jk�t\n";
                trojkat();
                break;
            case 5:
                linia();
                cout << "\nWybrano R�wnoleg�obok\n";
                rownoleglobok();
                break;
            case 6:
                linia();
                cout << "\nWybrano Sze�ciok�t\n";
                szesciokat();
                break;
            default:
                linia();
                cout << " |> Poda�e� z�� liczb�!\n";
                linia();
                cout << "\nNaci�nij Enter aby spr�bowa� ponownie...";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin.get();
                continue;
        }

        cout << "\n |> Wyj�� z programu? 1 = tak, inna liczba = nie \n -> ";
        wyborwyjscie = wczytajInt();
        if (wyborwyjscie == 1) {
            return;
        }
    }
}

int main() {
    setlocale(LC_CTYPE, "Polish");
    menu();
    return 0;
}

