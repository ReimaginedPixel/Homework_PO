#include <iostream>

using namespace std;

string ktoSilniejszy(int silaBohatera, int silaPotwora){
	
	if(silaBohatera > silaPotwora){
		return "Bohater";
	}
	else if(silaPotwora > silaBohatera){
		return "Potwór";
	}
	else{
		return "Remis";
	}	
	
}

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
	int silaPotwora;
	
	cout << "Podaj Imie Bohatera! " << endl << ">> ";
	cin >> imieBohatera;
	cout << "Podaj Sile Bohatera! " << endl << ">> ";
	cin >> silaBohatera;	
	cout << "Podaj Typ Potwora! " << endl << ">> ";
	cin >> typPotwora;	
	cout << "Podaj Zycie Potwora! " << endl << ">> ";
	cin >> ZyciePotwora;
	cout << "Podaj Sile Potwora! " << endl << ">> ";
	cin >> silaPotwora;
	
	cout << imieBohatera << " zaatakowal potwora typu " << typPotwora <<"! Potwor ma teraz " << ZyciePotwora << " punktow zycia." << endl;		
	
	ZyciePotwora = obliczPozostaleZycie(ZyciePotwora, silaBohatera);
	
	cout << "Potworowi Zostalo " << ZyciePotwora << " Punktow Zycia" << endl;
	
	string wynik = ktoSilniejszy(silaBohatera, silaPotwora);
	
	if(wynik == "Bohater"){
		cout << "Bohater ma przewagê!" << endl;
	}
	else if(wynik == "Potwór"){
		cout << "Potwor dominuje!" << endl;
	}
	else{
		cout << "Si³y s¹ wyrównane." << endl;
	}
	
	return 0;
}
