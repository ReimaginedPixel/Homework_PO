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
)" << endl; //r zapewnia ze sa spacje
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

// Funkcja wczytuje liczbę zmiennoprzecinkową od użytkownika
// Parametr: komunikat – tekst wyświetlany przy proszeniu o liczbę
// Zwraca: wprowadzoną liczbę typu double
double wczytajLiczbe(const string& komunikat)
{
    double liczba;
    cout << komunikat;

    // Pętla wykonuje się, dopóki użytkownik nie poda poprawnej liczby
    while (!(cin >> liczba))
    {
        cout << "Blad: Wprowadz prawidlowa liczbe!\n";
        cout << komunikat;
        cin.clear(); // Resetuje flagę błędu strumienia
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Odrzuca niepoprawne dane z bufora
    }

    return liczba;
}

// Funkcja wczytuje liczbę całkowitą od użytkownika
// Parametr: komunikat – tekst wyświetlany przy proszeniu o liczbę całkowitą
// Zwraca: wprowadzoną liczbę typu int
int wczytajCalkowita(const string& komunikat)
{
    int liczba;
    cout << komunikat;

    // Pętla wykonuje się, dopóki użytkownik nie poda poprawnej liczby całkowitej
    while (!(cin >> liczba))
    {
        cout << "Blad: Wprowadz prawidlowa liczbe calkowita!\n";
        cout << komunikat;
        cin.clear(); // Resetuje flagę błędu strumienia
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Odrzuca niepoprawne dane z bufora
    }

    return liczba;
}

// Funkcja wczytuje wybór opcji od użytkownika
// Zwraca: numer wybranej opcji (int)
int wczytajWybor()
{
    int wybor;

    // Pętla wykonuje się, dopóki użytkownik nie poda poprawnego numeru opcji
    while (!(cin >> wybor))
    {
        cout << "Blad: Wprowadz prawidlowy numer opcji!\n";
        cout << "Wybierz opcje: ";
        cin.clear(); // Resetuje flagę błędu strumienia
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Odrzuca niepoprawne dane z bufora
    }

    return wybor;
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

    if (wybor == 't' || wybor == 'T')
    {
        system("cls"); // czyści ekran w Windows
        logo();        // znowu pokazuje logo
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

    while (kontynuuj)
    {
        menu();
        wybor = wczytajWybor();

        switch (wybor)
        {
        case 1: // Dodawanie
            cout << "Podaj pierwsza liczbe: ";
            liczba1 = wczytajLiczbe("Podaj pierwsza liczbe: ");
            liczba2 = wczytajLiczbe("Podaj druga liczbe: ");
            wynik = dodawanie(liczba1, liczba2);
            cout << "Wynik: " << liczba1 << " + " << liczba2 << " = " << wynik << "\n";
            break;

        case 2: // Odejmowanie
            liczba1 = wczytajLiczbe("Podaj pierwsza liczbe: ");
            liczba2 = wczytajLiczbe("Podaj druga liczbe: ");
            wynik = odejmowanie(liczba1, liczba2);
            cout << "Wynik: " << liczba1 << " - " << liczba2 << " = " << wynik << "\n";
            break;

        case 3: // Mnozenie
            liczba1 = wczytajLiczbe("Podaj pierwsza liczbe: ");
            liczba2 = wczytajLiczbe("Podaj druga liczbe: ");
            wynik = mnozenie(liczba1, liczba2);
            cout << "Wynik: " << liczba1 << " * " << liczba2 << " = " << wynik << "\n";
            break;

        case 4: // Dzielenie
            liczba1 = wczytajLiczbe("Podaj pierwsza liczbe: ");
            liczba2 = wczytajLiczbe("Podaj druga liczbe: ");
            if (liczba2 != 0)
            {
                wynik = dzielenie(liczba1, liczba2);
                cout << "Wynik: " << liczba1 << " / " << liczba2 << " = " << wynik << "\n";
            }
            else
            {
                cout << "Blad: Dzielenie przez zero!\n";
            }
            break;

        case 5: // Potega
            liczba1 = wczytajLiczbe("Podaj podstawe: ");
            wykladnik = wczytajCalkowita("Podaj wykladnik (liczba calkowita): ");
            wynik = potega(liczba1, wykladnik);
            cout << "Wynik: " << liczba1 << "^" << wykladnik << " = " << wynik << "\n";
            break;

        case 6: // Pierwiastek kwadratowy
            liczba1 = wczytajLiczbe("Podaj liczbe: ");
            if (liczba1 >= 0)
            {
                wynik = pierwiastek(liczba1);
                cout << "Wynik: √" << liczba1 << " = " << wynik << "\n";
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
)" << endl; // dla r

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