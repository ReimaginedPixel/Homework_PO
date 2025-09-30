#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void funkcja_1(int a, int b)
{
    if (a < b)
    {
        cout << "najmneijsza liczba jest: " << a << endl;
    }
    else
    {
        cout << "najmneijsza liczba jest: " << b << endl;
    }

}

void funkcja_2(int* a, int* b)
{
    int c, d;

    d = *a;
    c = *b;

    *a = c;
    *b = d;

}

void funkcja_3(int* a)
{

    for (int i = 0; i < 5; i++)
    {
        cout << "Podaj element nr " << (i + 1) << endl;
        cin >> a[i];
    }

}

int main()
{
    //Napisz program tworzący trzy zmienne typu int.
    //Zainicjuj te trzy wartości liczbami 
    //(a!=b, b!=c, a!=c). oraz wskaźniki do trzech 
    //zmiennych typu int.  
    //Program zwraca jako wartość najmniejszą z 
    //liczb za pomocą wskaźnika.

    cout << "\nZadanie 1\n";
    int a_1 = 15;
    int b_1 = 10;
    int c_1 = 5;

    int* wsk1_1;
    int* wsk2_1;
    int* wsk3_1;

    wsk1_1 = &a_1;
    wsk2_1 = &b_1;
    wsk3_1 = &c_1;

    if (a_1 < b_1 && a_1 < c_1)
    {
        cout << "najmneijsza liczba jest: " << a_1 << endl;
    }
    else 
    {
        if (b_1 < a_1 && b_1 < c_1)
            {
               cout << "najmneijsza liczba jest: " << b_1 << endl;
            }
        else 
            {
                cout << "najmneijsza liczba jest: " << c_1 << endl;
            } 

    }
   //Napisz funkcję otrzymującą jako argumenty wskaźniki 
   //do dwóch zmiennych typu int, która zwraca jako wartość 
   //mniejszą z liczb wskazywanych przez argumenty

    cout << "\nZadanie 2\n";
    int a_2 = 2;
    int b_2 = 4;

    int* wsk1_2;
    int* wsk2_2;

    wsk1_2 = &a_2;
    wsk2_2 = &b_2;
    funkcja_1(*wsk1_2, *wsk2_2);

    //Napisz funkcję otrzymującą jako argumenty wskaźniki 
    //do dwóch zmiennych typu int, która zamienia ze sobą 
    //wartości wskazywanych zmiennych.
    cout << "\nZadanie 3\n";
    int a_3 = 6;
    int b_3 = 7;

    int* wsk1_3;
    int* wsk2_3;

    wsk1_3 = &a_3;
    wsk2_3 = &b_3;

    cout << "liczby przed zmiana: " << *wsk1_3 << " i " << *wsk2_3 << endl;

    funkcja_2(wsk1_3, wsk2_3);

    cout << "liczby po zmianie: " << *wsk1_3 << " i " << *wsk2_3 << endl;

    
    //Napisz program, który stworzy 10 elementową 
    // oraz wpisze wylosowane liczby do niej.Program 
    //użyje wskaźnika i wyszuka w tej tablicy 
    //największą liczbę.

    cout << "\nZadanie 4\n";


    //Stwórz funkcję, która uzupełnia 5 
    //elementową dynamicznie stworzoną tablice. 
    //Odczytaj dane z tej tablicy. 
    cout << "\nZadanie 5\n";
    int* wsk1_5 = new int[5];

    funkcja_3(wsk1_5);

    cout << "Wprowadzone elementy: ";
    for (int i = 0; i < 5; i++)
    {
        cout << "Liczba " << i << " " << wsk1_5[i] << endl;
    }

    delete[] wsk1_5;




}
