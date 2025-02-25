#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    // Inicjalizacja tablicy 100 elementów
    int tab[100] = {};
    tab[0] = 77;
    tab[1] = 99;
    tab[2] = -88;
    cout << "pierwszy element tablicy: " << tab[0] << endl;
    cout << "drugi element tablicy: " << tab[1] << endl;
    cout << "trzeci element tablicy: " << tab[2] << endl;
    cout << "czwarty element tablicy: " << tab[3] << endl;

    // Wyœwietlanie wszystkich elementów tablicy
    for(int i = 0; i < 100; i++) {
        cout << "\nKolejny element tablicy to: " << tab[i] << endl;
    }
    cout << "\n-+=======================================+-\n" << endl;

    // Tablica losowych liczb
    int losowe[30];
    srand(time(NULL));

    // Generowanie 30 losowych liczb
    for (int i = 0; i < 30; i++) {
        losowe[i] = rand() % 100 + 1;
        cout << "Losowa liczba to: " << losowe[i] << endl;
    }

    cout << "\n-+=======================================+-\n" << endl;

    // Obliczanie sumy i œredniej z tablicy losowych liczb
    int suma = 0;
    int dlugosc_losowe = sizeof(losowe) / sizeof(int);
    cout << "Dlugosc tablicy: " << dlugosc_losowe << endl;

    for (int i = 0; i < dlugosc_losowe; i++) {
        suma += losowe[i];
    }

    cout << "Suma z losowych to: " << suma << endl;
    double srednia = suma / static_cast<double>(dlugosc_losowe);
    cout << "Œrednia z losowych w tablicy: " << srednia << endl;

    cout << "\n-+=======================================+-\n" << endl;

    // Odczyt co drugiego elementu tablicy
    cout << "Co drugi element tablicy: ";
    for (int i = 0; i < 30; i += 2) {  // Iteracja co 2 element
        cout << losowe[i] << ",";
    }
    cout << endl;

    cout << "\n-+=======================================+-\n" << endl;

    // Odczytanie pierwszego elementu tablicy
    cout << "Pierwszy element tablicy losowych liczb: " << losowe[0] << endl;

    cout << "\n-+=======================================+-\n" << endl;

    // Odczytanie ostatniego elementu tablicy
    cout << "Ostatni element tablicy losowych liczb: " << losowe[29] << endl;

    cout << "\n-+=======================================+-\n" << endl;

    // Odczytanie pi¹tego elementu od koñca tablicy
    cout << "Pi¹ty element od koñca tablicy: " << losowe[24] << endl;

    cout << "\n-+=======================================+-\n" << endl;

    // Liczenie liczb parzystych i nieparzystych
    int ilep = 0, ilen = 0;
    int liczby_parzystej[100] = {};
    int liczby_nieparzystej[100] = {}; 
    for (int i = 0; i < dlugosc_losowe; i++) {
        if (losowe[i] % 2 == 0) {
            cout << "Parzysta z tablicy: " << losowe[i] << " na indexie: " << i << endl;
            liczby_parzystej[ilep] = losowe[i];
			ilep++;
        } else {
            liczby_nieparzystej[ilen] = losowe[i];
			ilen++;
        }
    }

    cout << "Iloœæ liczb parzystych to: " << ilep << endl;
    cout << "Iloœæ liczb nieparzystych to: " << ilen << endl;

    cout << "\n-+=========== Tablica liczb parzystych ==========+-\n" << endl;

	for(int i = 0; i < 30; i++)
	{
		cout << "Tablica liczb parzystych " << liczby_parzystej[i] << endl;
	}

    cout << "\n-+=========== Tablica liczb nieparzystych ==========+-\n" << endl;
	
	for(int i = 0; i < 30; i++)
	{
		cout << "Tablica liczb nieparzystych " << liczby_nieparzystej[i] << endl;
	}
    
	return 0;
    
    return 0;
}

