#include <iostream>

using namespace std;

void logo()
{
    cout << " _        _ _          _       _               \n";
    cout << "| |       | | |        | |     | |             \n";
    cout << "| | ____ _| | | ___   _| | __ _| |_ ___  _ __  \n";
    cout << "| |/ / _` | | |/ / | | | |/ _` | __/ _ \| '__| \n";
    cout << "|   < (_| | |   <| |_| | | (_| | || (_) | |    \n";
    cout << "|_|\_\__,_|_|_|\_\\__,_|_|\__,_|\__\___/|_|    \n";
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
    cout << "0. Wyjscie\n";
    cout << "======================================\n";
    cout << "Wybierz opcje: ";
}

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
    if (wykladnik >= 0)
    {
        for (int i = 0; i < wykladnik; i++)
        {
            wynik *= podstawa;
        }
    }
    else
    {
        for (int i = 0; i < -wykladnik; i++)
        {
            wynik *= podstawa;
        }
        wynik = 1 / wynik;
    }
    return wynik;
}

double pierwiastek(double liczba)
{
    if (liczba < 0)
    {
        cout << "Blad: Nie mozna obliczyc pierwiastka z liczby ujemnej!\n";
        return 0;
    }

    double wynik = liczba / 2;
    double poprzedni;

    // Metoda Newtona dla pierwiastka kwadratowego
    for (int i = 0; i < 20; i++)
    {
        poprzedni = wynik;
        wynik = (wynik + liczba / wynik) / 2;

        // Sprawdzenie dokladnosci
        double roznica = wynik - poprzedni;
        if (roznica < 0) roznica = -roznica;
        if (roznica < 0.000001) break;
    }

    return wynik;
}

bool czyKontynuowac()
{
    char wybor;
    cout << "\nChcesz wykonac kolejne obliczenie? (t/n): ";
    cin >> wybor;
    return (wybor == 't' || wybor == 'T');
}

int main()
{
    logo();

    int wybor;
    double liczba1, liczba2, wynik;
    int wykladnik;
    bool kontynuuj = true;

    cout << "Witaj w kalkulatorze!\n";

    while (kontynuuj)
    {
        menu();
        cin >> wybor;

        switch (wybor)
        {
        case 1: // Dodawanie
            cout << "Podaj pierwsza liczbe: ";
            cin >> liczba1;
            cout << "Podaj druga liczbe: ";
            cin >> liczba2;
            wynik = dodawanie(liczba1, liczba2);
            cout << "Wynik: " << liczba1 << " + " << liczba2 << " = " << wynik << "\n";
            break;

        case 2: // Odejmowanie
            cout << "Podaj pierwsza liczbe: ";
            cin >> liczba1;
            cout << "Podaj druga liczbe: ";
            cin >> liczba2;
            wynik = odejmowanie(liczba1, liczba2);
            cout << "Wynik: " << liczba1 << " - " << liczba2 << " = " << wynik << "\n";
            break;

        case 3: // Mnozenie
            cout << "Podaj pierwsza liczbe: ";
            cin >> liczba1;
            cout << "Podaj druga liczbe: ";
            cin >> liczba2;
            wynik = mnozenie(liczba1, liczba2);
            cout << "Wynik: " << liczba1 << " * " << liczba2 << " = " << wynik << "\n";
            break;

        case 4: // Dzielenie
            cout << "Podaj pierwsza liczbe: ";
            cin >> liczba1;
            cout << "Podaj druga liczbe: ";
            cin >> liczba2;
            wynik = dzielenie(liczba1, liczba2);
            if (liczba2 != 0)
            {
                cout << "Wynik: " << liczba1 << " / " << liczba2 << " = " << wynik << "\n";
            }
            break;

        case 5: // Potega
            cout << "Podaj podstawe: ";
            cin >> liczba1;
            cout << "Podaj wykladnik (liczba calkowita): ";
            cin >> wykladnik;
            wynik = potega(liczba1, wykladnik);
            cout << "Wynik: " << liczba1 << "^" << wykladnik << " = " << wynik << "\n";
            break;

        case 6: // Pierwiastek kwadratowy
            cout << "Podaj liczbe: ";
            cin >> liczba1;
            if (liczba1 >= 0)
            {
                wynik = pierwiastek(liczba1);
                cout << "Wynik: √" << liczba1 << " = " << wynik << "\n";
            }
            break;

        case 0: // Wyjscie
            cout << "Dziekuje za skorzystanie z kalkulatora!\n";
            kontynuuj = false;
            break;

        default:
            cout << "Nieprawidlowy wybor! Sprobuj ponownie.\n";
            break;
        }

        if (kontynuuj && wybor >= 1 && wybor <= 6)
        {
            kontynuuj = czyKontynuowac();
        }
    }

    return 0;
}