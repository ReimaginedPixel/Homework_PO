#include <iostream>
#include <cmath>

using namespace std;

void dodawanie(); // Deklaracja funkcji - deklaracja pracownika
void kreski(); // Deklaracja przed

void kreski() {
    cout << "\n=+----------------------------------------+=\n";
}

void dodawanie(int a, int b); // Deklaracja funkcji o nazwie dodawanie
// Funkcja nie zwraca wyniku, ale przyjmuje 2 parametry

void roznica(int a, int b);

int main() {
    // Program kalkulator
    int a = 1, b = 1, g, h, i, j;
    int suma = a + b;

    kreski();
    cout << "Pierwiastek z liczby " << sqrt(4) << endl;
    kreski();
    
    dodawanie(); // Wywo�anie pracownika do pracy xD
    
    kreski();
    cout << "Podaj liczby do obliczenia dodawania \nPodaj pierwsz�: ";
    cin >> g;
    cout << "Podaj drug� liczb�: ";
    cin >> h;
    
    dodawanie(g, h);
    
    cout << "Podaj liczby do obliczenia roznicy \nPodaj pierwsz�: ";
    cin >> i;
    cout << "Podaj drug� liczb�: ";
    cin >> j;
    
    roznica(i, j);
    
    

    return 0;
}

void dodawanie(int a, int b) { // Definicja funkcji - czyli co ma robi�
    int suma = a + b;
    cout << "Suma liczba dodawania a: " << a << " + " << b << " = " << suma << endl;
    kreski();
}

void dodawanie() {
    int a = 1, b = 1;
    cout << "Pracownik obliczy� " << a << " + " << b << " to: " << (a + b) << endl;
}

void roznica(int a, int b) {
    int suma = a - b;
    cout << "Suma liczba roznicy a: " << a << " - " << b << " = " << suma << endl;
    kreski();
}
