#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "=== ZADANIA Z WSKAZNIKOW ===" << endl << endl;

    // ========== ZADANIE 1 ==========
    // Dwa obiekty a, b oraz dwa wskazniki (*wsk1, *wsk2) typu int
    cout << "ZADANIE 1: Wskazniki na obiekty a i b" << endl;

    int a = 1, b = 2;
    int* wsk1, * wsk2;

    wsk1 = &a;  // wskaznik wsk1 pokazuje na obiekt a
    wsk2 = &b;  // wskaznik wsk2 pokazuje na obiekt b

    // Sprawdzenie czy wskazniki dobrze pokazuja
    cout << "Adres a: " << &a << ", wartosc a: " << a << endl;
    cout << "Adres wsk1: " << wsk1 << ", wartosc *wsk1: " << *wsk1 << endl;
    cout << "Adres b: " << &b << ", wartosc b: " << b << endl;
    cout << "Adres wsk2: " << wsk2 << ", wartosc *wsk2: " << *wsk2 << endl;
    cout << endl;

    // ========== ZADANIE 2 ==========
    // Zmiana wartosci w obiektach (c,d) za pomoca wskaznikow
    cout << "ZADANIE 2: Modyfikacja obiektow przez wskazniki" << endl;

    int c = -1, d = -1;
    int* modyfikator1, * modyfikator2;

    modyfikator1 = &c;
    modyfikator2 = &d;

    cout << "Przed modyfikacja:" << endl;
    cout << "c = " << c << ", d = " << d << endl;

    *modyfikator1 = 10;  // zmiana wartosci c przez wskaznik
    *modyfikator2 = 20;  // zmiana wartosci d przez wskaznik

    cout << "Po modyfikacji:" << endl;
    cout << "c = " << c << ", d = " << d << endl;
    cout << endl;

    // ========== ZADANIE 3 ==========
    // Wskaznik pokazujacy na rozne obiekty
    cout << "ZADANIE 3: Wskaznik pokazuje na rozne obiekty" << endl;

    double pierwszy = 4.1;
    double drugi = 3.3333;
    double* wsk;

    wsk = &pierwszy;
    cout << "Wskazuje na pierwszy: adres = " << wsk << ", wartosc = " << *wsk << endl;

    wsk = &drugi;
    cout << "Wskazuje na drugi: adres = " << wsk << ", wartosc = " << *wsk << endl;
    cout << endl;

    // ========== ZADANIE 4 ==========
    // Wskaznik do tablicy - podstawowe operacje
    cout << "ZADANIE 4: Wskaznik do tablicy - podstawowe operacje" << endl;

    int tablica[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int* wsk_tab;

    wsk_tab = tablica;  // alternatywnie: wsk_tab = &tablica[0];

    int pierw = *wsk_tab;           // pierwszy element (0)
    int drug = *(wsk_tab + 1);      // nastepny element (1)

    wsk_tab = &tablica[9];          // ustawienie na element 9

    int ostatni = *wsk_tab;         // ostatni element (9)
    int dwa_mniej = *(wsk_tab - 2); // element o dwa mniejszy (7)

    cout << "Pierwszy element: " << pierw << endl;
    cout << "Nastepny element: " << drug << endl;
    cout << "Ostatni element: " << ostatni << endl;
    cout << "Element o dwa mniejszy: " << dwa_mniej << endl;
    cout << endl;

    // ========== ZADANIE 5 ==========
    // Wyswietlanie calej tablicy przez wskaznik
    cout << "ZADANIE 5: Wyswietlanie tablicy przez wskaznik" << endl;

    int tablica1[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int* wskt = tablica1;

    cout << "Zawartosc tablicy: ";
    for (int i = 0; i < 10; i++) {
        cout << *(wskt + i) << " ";
    }
    cout << endl << endl;

    // ========== ZADANIE 6 ==========
    // Przesuwanie wskaznika i wyswietlanie fragmentow tablicy
    cout << "ZADANIE 6: Przesuwanie wskaznika" << endl;

    int tablica2[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int* gdzie_pokazuje = tablica2;

    cout << "Zerowy element: " << *gdzie_pokazuje << endl;

    cout << "Nastepne 4 elementy: ";
    for (int i = 1; i <= 4; i++) {
        cout << *(gdzie_pokazuje + i) << " ";
    }
    cout << endl;

    gdzie_pokazuje += 5;
    cout << "Wskaznik pokazuje teraz na: " << *gdzie_pokazuje << endl;

    gdzie_pokazuje = &tablica2[7];
    cout << "Elementy od 7 do końca: ";
    for (int i = 7; i < 10; i++) {
        cout << *(gdzie_pokazuje + (i - 7)) << " ";
    }
    cout << endl << endl;

    // ========== ZADANIE 7 ==========
    // Tablica z wartosciami ujemnymi
    cout << "ZADANIE 7: Tablica z wartosciami ujemnymi" << endl;

    int tabl_ujemne[10] = { 0,-1,-2,-3,-4,-5,-6,-7,-8,-9 };
    int* wsk_ujemne;
    wsk_ujemne = tabl_ujemne;

    cout << "Zerowy element: " << *wsk_ujemne << endl;

    cout << "Zawartosc tablicy:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << *(wsk_ujemne + i) << " ";
    }
    cout << endl << endl;

    // ========== ZADANIE 8 ==========
    // Jeden wskaznik do czytania dwoch roznych tablic
    cout << "ZADANIE 8: Jeden wskaznik, dwie tablice" << endl;

    int pierwsza_tab[15] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-11,-12,-13,-14,-15 };
    int druga_tab[5] = { 1,2,3,4,5 };
    int* wsk_int2;

    // Czytanie tablicy pierwszej
    wsk_int2 = pierwsza_tab;
    cout << "Zawartosc tablicy pierwsza[15]:" << endl;
    for (int i = 0; i < 15; i++) {
        cout << *(wsk_int2 + i) << " ";
    }
    cout << endl;

    // Czytanie tablicy drugiej
    wsk_int2 = druga_tab;
    cout << "Zawartosc tablicy druga[5]:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(wsk_int2 + i) << " ";
    }
    cout << endl << endl;

 

    // ========== ZADANIE 9 ==========
    // Wprowadzone zmiany w skaznikach
    cout << "ZADANIE 9: Wprowadzone zmiany w skaznikach" << endl;

    int* wsk_int;
    double* wsk_dub;

    int calkowite[10];
    double rzeczywiste[10];

    wsk_int = calkowite;
    wsk_dub = rzeczywiste;

    for (int i = 0; i < 10; i++) {
        *(wsk_int + i) = i + 1;
        *(wsk_dub + i) = (i + 1) * 0.5;
    }

    cout << "Tablica calkowite: ";
    for (int i = 0; i < 10; i++)
        cout << calkowite[i] << " ";
    cout << endl;

    cout << "Tablica rzeczywiste: ";
    for (int i = 0; i < 10; i++)
        cout << rzeczywiste[i] << " ";
    cout << endl;

    wsk_int = &calkowite[2];
    wsk_dub = &rzeczywiste[4];

    cout << "\nWsk_int pokazuje na calkowite[2] = " << *wsk_int << endl;
    cout << "Wsk_dub pokazuje na rzeczywiste[4] = " << *wsk_dub << endl;

    for (int i = 0; i < 3; i++) {
        *(wsk_int + i) = -(*(wsk_int + i));
        *(wsk_dub + i) = -(*(wsk_dub + i));
    }

    wsk_int = calkowite;
    wsk_dub = rzeczywiste;

    cout << "\nTablica calkowite po zmianach: ";
    for (int i = 0; i < 10; i++)
        cout << *(wsk_int + i) << " ";
    cout << endl;

    cout << "Tablica rzeczywiste po zmianach: ";
    for (int i = 0; i < 10; i++)
        cout << *(wsk_dub + i) << " ";
    cout << endl;

// ========== ZADANIE 10 ==========
    // Dynamiczne przydzielanie pami�ci dla dw�ch wska�nik�w na int
    cout << "ZADANIE 10: Dynamiczne przydzielanie pamieci dla int" << endl;

    int* wsk11 = new int;
    int* wsk22 = new int;

    *wsk1 = 100;
    *wsk2 = 200;

    cout << "Pierwsza warto��: " << *wsk11 << endl;
    cout << "Druga warto��: " << *wsk22 << endl;

    *wsk1 = 555;
    *wsk2 = 777;

    cout << "Po zmianie - pierwsza warto��: " << *wsk11 << endl;
    cout << "Po zmianie - druga warto��: " << *wsk22 << endl;

    delete wsk11;
    delete wsk22;
    cout << endl;
    
    // ========== ZADANIE 11 ==========
    cout << "ZADANIE 11: Dynamiczne przydzielanie pamieci dla int" << endl;
	
	int* wsk1_1;
    int* wsk2_1;
    
    wsk1_1 = new int;
    wsk2_1 = new int;
    
    cout << "Wypisane Liczby to: " << *wsk1_1  << " i " << *wsk2_1 << endl;
    
	*wsk1_1 = 100;
    *wsk2_1 = 200;
    
    cout << "Wypisane Liczby to: " << *wsk1_1  << " i " << *wsk2_1 << endl;


    // ========== ZADANIE 12 ==========
    
    cout << "ZADANIE 12: Wskaznik typu double" << endl;
    double* wsk1_2 = new double;
    double* wsk2_2 = new double;
    
    cout << "Wpisz 2 liczby: ";
    cin >> *wsk1_2 >> *wsk2_2;
    cout << "wskaznik 1: " << *wsk1_2 << "wskaznik 2: " << *wsk2_2;
        
    // ========== ZADANIE 13 ==========
    
    cout << "ZADANIE 13: Dynamiczny obszar pamieci dla 5 elemntowj tablicy" << endl;

    int* wsk1_3 = new int[5];
    for (int i = 0; i < 5; i++) 
	{
        cout << "Podaj element nr " << (i + 1) << ": ";
        cin >> wsk1_3[i];
    }
    
    cout << "\nWprowadzone elementy: ";
    for (int i = 0; i < 5; i++) {
        cout << wsk1_3[i] << " ";
    }
    
    cout << endl;

    delete[] wsk1_3; 
    
    
    // ========== ZADANIE 14 ==========
    

    // ========== ZADANIE 15 ==========
    

    // ========== ZADANIE 16 ==========
    
    // ========== ZADANIE 17 ==========
    
    // ========== ZADANIE 18 ==========
    
    
    
    cout << "=== KONIEC WYKONANYCH ZADAN ===" << endl;

    return 0;
    
    /*
    zadanie 13
        int* wsk = new int[5];
    cout << "" << endl;
    cout << "Podaj pierwszy element : ";
    cin >> wsk[0];

    //zadanie 14
    /*char* tab1 = new char[5];
    char* tab2 = new char[5];

    for (int i = 0; i < 5; i++) {
        cout << "Podaj znak do tab1[" << i << "]: ";
        cin >> *(tab1 + i);
    }

    for (int i = 0; i < 5; i++) {
        cout << "Element z tablicy (wskaznikowo): " << *(tab1 + i) << endl;
    }

    for (int i = 0; i < 5; i++) {
        cout << "Podaj znak do tab2[" << i << "]: ";
        cin >> tab2[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << "Element z tablicy (tablicowo): " << tab2[i] << endl;
    }

    delete[] tab1;
    delete[] tab2;
    //zadanie 15
    int* tablica = new int[15];
    //srand(time(0));

    for (int i = 0; i < 15; i++) {
        int losowa = rand() % 100 + 1;
        *(tablica + i) = losowa;

        if (*(tablica + i) % 3 == 0) {
            cout << *(tablica + i) << endl;
        }
    }

    delete[] tablica;
    */
    //zadanie 16
    /*int* tablica = new int[15];
    srand(time(0));
    int min, max;
    podajliczbe(min, max);

    for (int i = 0; i < 15; i++) {
        int losowa = rand() % (max - min + 1) + min;
        *(tablica + i) = losowa;

        if (*(tablica + i) % 3 == 0) {
            cout << *(tablica + i) << endl;
        }
    }

    delete[] tablica;
    return 0;
    // zadanie 17
void podajliczbe(int& min, int& max) {
    cout << "Podaj dolny przedzial losowania: ";
    cin >> min;
    cout << "Podaj maksymalny przedzial losowania: ";
    cin >> max;
}

void wypisz3(int* tablica, int min, int max, int rozmiar) {
    srand(time(0));
    for (int i = 0; i < rozmiar; i++) {
        int losowa = rand() % (max - min + 1) + min;
        *(tablica + i) = losowa;

        if (*(tablica + i) % 3 == 0) {
            cout << *(tablica + i) << endl;
        }
    }
}*/
        /*int* tablica = new int[15];
        int min, max;

        podajliczbe(min, max);
        wypisz3(tablica, min, max, 15);

        delete[] tablica;
        return 0;
        int* wsk = new int[5];

        for (int i = 0; i < 5; i++) {
            *(wsk + i) = (i + 1);
        }

        for (int i = 0; i < 5; i++) {
            cout << "Element z tablicy to: " << *(wsk + i) << endl;
        }

        delete[] wsk;

        cout << "-----------------\n";
        char* tab1 = new char[5];
        char* tab2 = new char[5];

        for (int i = 0; i < 5; i++) {
            cout << "Podaj znak do tab1[" << i << "]: ";
            cin >> *(tab1 + i);
        }

        for (int i = 0; i < 5; i++) {
            cout << "Element z tablicy (wskaznikowo): " << *(tab1 + i) << endl;
        }

        for (int i = 0; i < 5; i++) {
            cout << "Podaj znak do tab2[" << i << "]: ";
            cin >> tab2[i];
        }

        for (int i = 0; i < 5; i++) {
            cout << "Element z tablicy (tablicowo): " << tab2[i] << endl;
        }

        delete[] tab1;
        delete[] tab2;*/
        //13


    }
}
