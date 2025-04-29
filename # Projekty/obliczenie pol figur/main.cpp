#include <iostream>
#include <locale.h>

using namespace std;

void linia() {
	cout << "\n-+=================================+-\n";
}
void menu() {
	cout << "Wybierz Figure";
	cout << "\n-+=========- Lista Figur -=========+-";
	cout << "\n    1. Kwadrat        2.Prostok¹t";
	cout << "\n    3. Trapez         4.Trójk¹t";
	cout << "\n    5. Równoleg³obok  6.Szeœciok¹t";
	linia();
	
	cout << "\n Wybierz Figure Do Obliczenia\n -> ";
	
	int wybor = 0;
	cin >> wybor; 
}

int main() { //obliczenie pol figur
	setlocale(LC_CTYPE, "Polish");
	menu();
}


