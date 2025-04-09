#include <iostream>

using namespace std;

int obliczPozostaleZycie(int ZyciePotwora, int silaBohatera){
	
	int NoweZyciePotwora;
	
	NoweZyciePotwora =  ZyciePotwora - silaBohatera;
	if(NoweZyciePotwora <= 0)
	{
		return 0;
	}
	else
	{
		return NoweZyciePotwora;
	}
}



int main() {
	string imieBohatera;
	int silaBohatera;
	string typPotwora;
	int ZyciePotwora;
	
	cout << "Podaj Imie Bohatera! " << endl << ">> ";
	cin >> imieBohatera;
	cout << "Podaj Sile Bohatera! " << endl << ">> ";
	cin >> silaBohatera;	
	cout << "Podaj Typ Potwora! " << endl << ">> ";
	cin >> typPotwora;	
	cout << "Podaj Zycie Potwora! " << endl << ">> ";
	cin >> ZyciePotwora;
	
	cout << imieBohatera << " zaatakowal potwora typu " << typPotwora <<"! Potwor ma teraz " << ZyciePotwora << " punktow zycia." << endl;		
	
	ZyciePotwora = obliczPozostaleZycie(ZyciePotwora, silaBohatera);
	
	cout << "Potworowi Zostalo " << ZyciePotwora << " Punktow Zycia" << endl;
	
	return 0;
}

