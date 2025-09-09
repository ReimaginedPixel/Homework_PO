#include <iostream>
#include <limits>

using namespace std;

void logo()
{
    cout << R"( _        _ _          _       _               
| |       | | |        | |     | |             
| | ____ _| | | ___   _| | __ _| |_ ___  _ __  
| |/ / _` | | |/ / | | | |/ _` | __/ _ \| '__| 
|   < (_| | |   <| |_| | | (_| | || (_) | |    
|_|\_\__,_|_|_|\_\\__,_|_|\__,_|\__\___/|_|    
)" << endl;
}

void menu()
{
    cout << "\n========== MENU KALKULATORA ==========\n";
    cout << "1. Dodawanie (+)\n";
    cout << "2. Odejmowanie (-)\n";
    cout << "3. Mnozenie (*)\n";
    cout << "4. Dzielenie (/)\n";
    cout << "5. Potega (x^y)\n";
    cout << "6. Pierwiastek kwadratowy\n";
    cout << "7. Procent\n";
    cout << "8. Reszta z dzielenia (%)\n";
    cout << "0. Wyjscie\n";
    cout << "======================================\n";
    cout << "Wybierz opcje: ";
}

// Funkcja wczytuje liczbę zmiennoprzecinkową
double wczytajLiczbe()
{
    double liczba;

    while (!(cin >> liczba)) {
        cout << "Blad: Wprowadz prawidlowa liczbe!\n";
        cout << "Podaj liczbe: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return liczba;
}

// Funkcja wczytuje liczbę całkowitą
int wczytajCalkowita()
{
    int liczba;

    while (!(cin >> liczba)) {
        cout << "Blad: Wprowadz prawidlowa liczbe calkowita!\n";
        cout << "Podaj liczbe calkowita: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return liczba;
}

// Wczytuje wybór z menu
int wczytajWybor()
{
    int wybor;

    while (!(cin >> wybor)) {
        cout << "Blad: Wprowadz prawidlowy numer opcji!\n";
        cout << "Wybierz opcje: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return wybor;
}

// Operacje
double dodawanie(double a, double b)
{
    return a + b;
}

double odejmowanie(double a, double b)
{
    return a - b;
}

double mnozenie(double a, double b)
{
    return a * b;
}

double dzielenie(double a, double b)
{
    return a / b;
}

double potega(double podstawa, int wykladnik)
{
    double wynik = 1;

    if (wykladnik >= 0) {
        for (int i = 0; i < wykladnik; i++) {
            wynik *= podstawa;
        }
    }
    else {
        for (int i = 0; i < -wykladnik; i++) {
            wynik *= podstawa;
        }
        wynik = 1 / wynik;
    }

    return wynik;
}

double pierwiastek(double liczba)
{
    if (liczba < 0) {
        cout << "Blad: Nie mozna obliczyc pierwiastka z liczby ujemnej!\n";
        return 0;
    }

    double wynik = liczba / 2;
    double poprzedni;

    for (int i = 0; i < 20; i++) {
        poprzedni = wynik;
        wynik = (wynik + liczba / wynik) / 2;
        double roznica = wynik - poprzedni;

        if (roznica < 0) {
            roznica = -roznica;
        }

        if (roznica < 0.000001) {
            break;
        }
    }

    return wynik;
}

double procent(double liczba, double proc)
{
    return (liczba * proc) / 100.0;
}

int resztaZDzielenia(int a, int b)
{
    return a % b;
}

bool czyKontynuowac()
{
    char wybor;
    cout << "\nChcesz wykonac kolejne obliczenie? (t/n): ";
    cin >> wybor;

    if (wybor == 't' || wybor == 'T') {
        system("cls"); // dla Windows, na Linuxie lepiej "clear"
        logo();
        return true;
    }

    return false;
}

int main()
{
    logo();

    int wybor;
    double liczba1, liczba2, wynik;
    int wykladnik;
    bool kontynuuj = true;

    cout << "Witaj w kalkulatorze!\n";

    while (kontynuuj) {
        menu();
        wybor = wczytajWybor();

        switch (wybor) {
        case 1: // Dodawanie
            cout << "Podaj pierwsza liczbe: ";
            liczba1 = wczytajLiczbe();

            cout << "Podaj druga liczbe: ";
            liczba2 = wczytajLiczbe();

            wynik = dodawanie(liczba1, liczba2);
            cout << "Wynik: " << liczba1 << " + " << liczba2 << " = " << wynik << "\n";
            break;

        case 2: // Odejmowanie
            cout << "Podaj pierwsza liczbe: ";
            liczba1 = wczytajLiczbe();

            cout << "Podaj druga liczbe: ";
            liczba2 = wczytajLiczbe();

            wynik = odejmowanie(liczba1, liczba2);
            cout << "Wynik: " << liczba1 << " - " << liczba2 << " = " << wynik << "\n";
            break;

        case 3: // Mnozenie
            cout << "Podaj pierwsza liczbe: ";
            liczba1 = wczytajLiczbe();

            cout << "Podaj druga liczbe: ";
            liczba2 = wczytajLiczbe();

            wynik = mnozenie(liczba1, liczba2);
            cout << "Wynik: " << liczba1 << " * " << liczba2 << " = " << wynik << "\n";
            break;

        case 4: // Dzielenie
            cout << "Podaj dzielna: ";
            liczba1 = wczytajLiczbe();

            cout << "Podaj dzielnik: ";
            liczba2 = wczytajLiczbe();

            if (liczba2 != 0) {
                wynik = dzielenie(liczba1, liczba2);
                cout << "Wynik: " << liczba1 << " / " << liczba2 << " = " << wynik << "\n";
            }
            else {
                cout << "Blad: Dzielenie przez zero!\n";
            }
            break;

        case 5: // Potega
            cout << "Podaj podstawe: ";
            liczba1 = wczytajLiczbe();

            cout << "Podaj wykladnik (liczba calkowita): ";
            wykladnik = wczytajCalkowita();

            wynik = potega(liczba1, wykladnik);
            cout << "Wynik: " << liczba1 << "^" << wykladnik << " = " << wynik << "\n";
            break;

        case 6: // Pierwiastek
            cout << "Podaj liczbe: ";
            liczba1 = wczytajLiczbe();

            if (liczba1 >= 0) {
                wynik = pierwiastek(liczba1);
                cout << "Wynik: √" << liczba1 << " = " << wynik << "\n";
            }
            break;

        case 7: // Procent
            cout << "Podaj liczbe: ";
            liczba1 = wczytajLiczbe();

            cout << "Podaj procent (%): ";
            liczba2 = wczytajLiczbe();

            wynik = procent(liczba1, liczba2);
            cout << liczba2 << "% z " << liczba1 << " = " << wynik << "\n";
            break;

        case 8: // Reszta z dzielenia
            cout << "Podaj pierwsza liczbe calkowita: ";
            liczba1 = wczytajCalkowita();

            cout << "Podaj druga liczbe calkowita: ";
            liczba2 = wczytajCalkowita();

            if (liczba2 != 0) {
                cout << "Reszta z dzielenia: " << (int)liczba1 << " % " << (int)liczba2
                    << " = " << resztaZDzielenia((int)liczba1, (int)liczba2) << "\n";
            }
            else {
                cout << "Blad: Dzielenie przez zero!\n";
            }
            break;

        case 0: // Wyjscie
            cout << "Dziekuje za skorzystanie z kalkulatora!\n\n";
            cout << R"(
 __                .__                
|  | ______   ____ |__| ____   ____   
|  |/ /  _ \ /    \|  |/ __ \_/ ___\  
|    <  <_> )   |  \  \  ___/\  \___  
|__|__\____/|___|__/__|\_____>\_____> 
)" << endl;
            kontynuuj = false;
            break;

        default:
            cout << "Nieprawidlowy wybor! Sprobuj ponownie.\n";
            break;
        }

        if (kontynuuj && wybor != 0) {
            kontynuuj = czyKontynuowac();
        }
    }

    return 0;
}