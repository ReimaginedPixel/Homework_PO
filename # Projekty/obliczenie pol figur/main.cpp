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
            cout << "\n|X|> B³êdne dane! WprowadŸ poprawn¹ liczbê.\n -> ";
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
            cout << "\n|X|> B³êdne dane! WprowadŸ poprawn¹ liczbê.\n -> ";
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
    cout << "Obwód: " << 4 * a << " cm" << endl;
    linia();
}

void prostokat() {
    cout << "\n |> Podaj d³ugoœæ: \n -> ";
    float a = wczytajFloat();
    cout << " |> Podaj szerokoœæ: \n -> ";
    float b = wczytajFloat();
    cout << "\nPole: " << a * b << " cm2" << endl;
    cout << "Obwód: " << 2 * (a + b) << " cm" << endl;
    linia();
}

void trapez() {
    cout << "\n |> Podaj podstawê a: \n -> ";
    float a = wczytajFloat();
    cout << " |> Podaj podstawê b: \n -> ";
    float b = wczytajFloat();
    cout << " |> Podaj wysokoœæ h: \n -> ";
    float h = wczytajFloat();
    cout << " |> Podaj bok 1: \n -> ";
    float bok1 = wczytajFloat();
    cout << " |> Podaj bok 2: \n -> ";
    float bok2 = wczytajFloat();
    cout << "\nPole: " << ((a + b) * h) / 2 << " cm2" << endl;
    cout << "Obwód: " << a + b + bok1 + bok2 << " cm" << endl;
    linia();
}

void trojkat() {
    cout << "\n |> Podaj podstawê: \n -> ";
    float a = wczytajFloat();
    cout << " |> Podaj wysokoœæ: \n -> ";
    float h = wczytajFloat();
    cout << " |> Podaj bok 2: \n -> ";
    float b = wczytajFloat();
    cout << " |> Podaj bok 3: \n -> ";
    float c = wczytajFloat();
    cout << "\nPole: " << (a * h) / 2 << " cm2" << endl;
    cout << "Obwód: " << a + b + c << " cm" << endl;
    linia();
}

void rownoleglobok() {
    cout << "\n |> Podaj podstawê: \n -> ";
    float a = wczytajFloat();
    cout << " |> Podaj bok s¹siedni: \n -> ";
    float b = wczytajFloat();
    cout << " |> Podaj wysokoœæ: \n -> ";
    float h = wczytajFloat();
    cout << "\nPole: " << a * h << " cm2" << endl;
    cout << "Obwód: " << 2 * (a + b) << " cm" << endl;
    linia();
}

void szesciokat() {
    cout << "\n |> Podaj d³ugoœæ boku: \n -> ";
    float a = wczytajFloat();
    cout << "\nPole: " << (3 * 1.73205 * a * a) / 2 << " cm2" << endl; // ?3 ? 1.73205
    cout << "Obwód: " << 6 * a << " cm" << endl;
    linia();
}

// Menu
void wyswietlMenu() {
    cout << "\n-+=========- Lista Figur -=========+-";
    cout << "\n    1. Kwadrat        2. Prostok¹t";
    cout << "\n    3. Trapez         4. Trójk¹t";
    cout << "\n    5. Równoleg³obok  6. Szeœciok¹t";
    linia();
}

void menu() {
    int wybor = 0;
    int wyborwyjscie = 0;

    while (true) {
        WyczyscEkran();
        wyswietlMenu();

        cout << "\n |> Wybierz figurê do obliczenia\n -> ";
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
                cout << "\nWybrano Prostok¹t\n";
                prostokat();
                break;
            case 3:
                linia();
                cout << "\nWybrano Trapez\n";
                trapez();
                break;
            case 4:
                linia();
                cout << "\nWybrano Trójk¹t\n";
                trojkat();
                break;
            case 5:
                linia();
                cout << "\nWybrano Równoleg³obok\n";
                rownoleglobok();
                break;
            case 6:
                linia();
                cout << "\nWybrano Szeœciok¹t\n";
                szesciokat();
                break;
            default:
                linia();
                cout << " |> Poda³eœ z³¹ liczbê!\n";
                linia();
                cout << "\nNaciœnij Enter aby spróbowaæ ponownie...";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin.get();
                continue;
        }

        cout << "\n |> Wyjœæ z programu? 1 = tak, inna liczba = nie \n -> ";
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

