#include <iostream>
#include <locale.h>

using namespace std;

void linia() {
	cout << "\n-+=================================+-\n";
}
void menu() {
	cout << "Wybierz Figure";
	cout << "\n-+=========- Lista Figur -=========+-";
	cout << "\n    1. Kwadrat        2.Prostok�t";
	cout << "\n    3. Trapez         4.Tr�jk�t";
	cout << "\n    5. R�wnoleg�obok  6.Sze�ciok�t";
	linia();
	
	cout << "\n Wybierz Figure Do Obliczenia\n -> ";
	
	int wybor = 0;
	cin >> wybor; 
}

int main() { //obliczenie pol figur
	setlocale(LC_CTYPE, "Polish");
	menu();
}


