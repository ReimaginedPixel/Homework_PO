#include <iostream>

using namespace std;

int main() {
	int  liczba[10];
	cout << "Podaj Liczby Ca³kowite Do zapamiêtania" << endl;

	for(int i = 0;i < 10;i++) {
		cout << "Podaj Kolejna Liczbe ";
		cin >> liczba[i];	
	}

	for(int i = 0;i < 10;i++) {
		cout << "Liczba nr. " << i + 1 << " = "<< liczba[i] << endl;;	
	}

	
	
	return 0;
}
