#include <iostream>

using namespace std;

int obliczPozostaleZycie(int ZyciePotwora, int silaBohatera){
	
	ZyciePotwora =  ZyciePotwora - silaBohatera;

	
	return ZyciePotwora;
}



int main() {
	string imieBohatera;
	int silaBohatera;
	string typPotwora;
	int ZyciePotwora;
	
	cout << "Podaj Imie Bohatera! " << endl;
	cin >> imieBohatera;
	cout << "Podaj Sile Bohatera! " << endl;
	cin >> silaBohatera;	
	cout << "Podaj Typ Potwora! " << endl;
	cin >> typPotwora;	
	cout << "Podaj Zycie Potwora! " << endl;
	cin >> ZyciePotwora;
	
	cout << imieBohatera << " zaatakowal potwora typu " << typPotwora <<"! Potwor ma teraz " << ZyciePotwora << " punktow zycia." << endl;		
	
	obliczPozostaleZycie(ZyciePotwora, silaBohatera);
	
	cout << "Potworowi Zostalo " << ZyciePotwora << " Zycia" << endl;
	
	return 0;
}
