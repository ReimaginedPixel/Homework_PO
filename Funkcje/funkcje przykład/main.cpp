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

int suma1(){ //funkacj aktora zwraca do miejsca wywyo�ania wartosc
			//funkcja nie przyjmuje parametr�w
	int a = 66; int b = 99;
	int suma = a + b;
	return suma; //tu moze byc a + b
}

int suma1(int a, int b){ //funkacj aktora zwraca do miejsca wywyo�ania wartosc
					     //funkcja przyjmuje dwa parametry
	return a + b;
}

int main() {
    // Program kalkulator
    int a = 1, b = 1, g, h, i, j;
    int suma = a + b;

    kreski();
    cout << "Pierwiastek z liczby " << sqrt(4) << endl;
    kreski();
    
    dodawanie(); // Wywo�anie pracownika do pracy 
    
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
    
    

	int karteczka = suma1();
	cout << "Ja szef og�aszam wynik " << karteczka*2 << endl;
	
	kreski();
	
	cout << "Ja Szef Licze " << suma1(10,10) << endl;
	cout << "Ja Szef Licze " << suma1(10,10) + suma1() << endl;
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
