#include <iostream>
#include <locale.h>
#include <limits>
#include <cstdlib>  

using namespace std;

// funkcja czyszcząca ekran konsoli
void WyczyscEkran() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// funkcja ktora sprawdza liczby zeby niedalo sie wpisać litery (float)
float wczytajFloat(const string& prompt) {
    float wartosc;
    while (true) {
        cout << prompt;
        if (cin >> wartosc) {
            break;
        } else {
            cout << "\n|X|> Błędne dane! Wprowadź poprawną liczbę.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return wartosc;
}

// funkcja ktora sprawdza liczby zeby niedalo sie wpisać litery (int)
int wczytajInt(const string& prompt) {
    int wartosc;
    while (true) {
        cout << prompt;
        if (cin >> wartosc) {
            break;
        } else {
            cout << "\n|X|> Błędny wybór! Wprowadź liczbę.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return wartosc;
}

// linia
void linia() {
    cout << "\n-+=================================+-\n";
}

// figury
void kwadrat() {
    float a = wczytajFloat("\n |> Podaj bok kwadratu: \n -> ");
    cout << "\nPole: " << a * a << " cm2" << endl;
    cout << "Obwód: " << 4 * a << " cm" << endl;
    linia();
}

void prostokat() {
    float a = wczytajFloat("\n |> Podaj długość: \n -> ");
    float b = wczytajFloat(" |> Podaj szerokość: \n -> ");
    cout << "\nPole: " << a * b << " cm2" << endl;
    cout << "Obwód: " << 2 * (a + b) << " cm" << endl;
    linia();
}

void trapez() {
    float a = wczytajFloat("\n |> Podaj podstawę a: \n -> ");
    float b = wczytajFloat(" |> Podaj podstawę b: \n -> ");
    float h = wczytajFloat(" |> Podaj wysokość h: \n -> ");
    float bok1 = wczytajFloat(" |> Podaj bok 1: \n -> ");
    float bok2 = wczytajFloat(" |> Podaj bok 2: \n -> ");
    cout << "\nPole: " << ((a + b) * h) / 2 << " cm2" << endl;
    cout << "Obwód: " << a + b + bok1 + bok2 << " cm" << endl;
    linia();
}

void trojkat() {
    float a = wczytajFloat("\n |> Podaj podstawę: \n -> ");
    float h = wczytajFloat(" |> Podaj wysokość: \n -> ");
    float b = wczytajFloat(" |> Podaj bok 2: \n -> ");
    float c = wczytajFloat(" |> Podaj bok 3: \n -> ");
    cout << "\nPole: " << (a * h) / 2 << " cm2" << endl;
    cout << "Obwód: " << a + b + c << " cm" << endl;
    linia();
}

void rownoleglobok() {
    float a = wczytajFloat("\n |> Podaj podstawę: \n -> ");
    float b = wczytajFloat(" |> Podaj bok sąsiedni: \n -> ");
    float h = wczytajFloat(" |> Podaj wysokość: \n -> ");
    cout << "\nPole: " << a * h << " cm2" << endl;
    cout << "Obwód: " << 2 * (a + b) << " cm" << endl;
    linia();
}

void szesciokat() {
    float a = wczytajFloat("\n |> Podaj długość boku: \n -> ");
    cout << "\nPole: " << (3 * 1.73205 * a * a) / 2 << " cm2" << endl;
    cout << "Obwód: " << 6 * a << " cm" << endl;
    linia();
}

// menu
void wyswietlMenu() {
    cout << "\n-+=========- Lista Figur -=========+-";
    cout << "\n    1. Kwadrat        2. Prostokąt";
    cout << "\n    3. Trapez         4. Trójkąt";
    cout << "\n    5. Równoległobok  6. Sześciokąt";
    linia();
}

void menu() {
    int wybor = 0;
    int wyborwyjscie = 0;

    while (true) {
        WyczyscEkran();
        wyswietlMenu();

        wybor = wczytajInt("\n |> Wybierz figurę do obliczenia\n -> ");

        WyczyscEkran();

        switch (wybor) {
            case 1:
                linia();
                cout << "\nWybrano Kwadrat\n";
                kwadrat();
                break;
            case 2:
                linia();
                cout << "\nWybrano Prostokąt\n";
                prostokat();
                break;
            case 3:
                linia();
                cout << "\nWybrano Trapez\n";
                trapez();
                break;
            case 4:
                linia();
                cout << "\nWybrano Trójkąt\n";
                trojkat();
                break;
            case 5:
                linia();
                cout << "\nWybrano Równoległobok\n";
                rownoleglobok();
                break;
            case 6:
                linia();
                cout << "\nWybrano Sześciokąt\n";
                szesciokat();
                break;
            default:
                linia();
                cout << " |> Podałeś złą liczbę!\n";
                linia();
                cout << "\nNaciśnij Enter aby spróbować ponownie...";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin.get();
                continue; // wracamy na początek pętli menu
        }

        // pytanie o wyjście lub kontynuację
        while (true) {
            wyborwyjscie = wczytajInt("\n |> Wyjść z programu? 1 = tak, inna liczba = nie \n -> ");
            if (wyborwyjscie == 1) {
                return;
            } else {
                break; // powrót do menu - ekran się wyczyści w następnej iteracji
            }
        }
    }
}

int main() {
    setlocale(LC_CTYPE, "Polish");
    menu();
    return 0;
}
