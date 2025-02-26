#include <iostream>

using namespace std;

int main () {
	int wybor;
	cout << "Wybierz zadanie (1 - 9)\n";
	cin >> wybor;
	switch(wybor)
	{
		case 1: //zadanie 1
			{
			int tab[30];
				cout << "zapisano 10 elementów\n";
				tab[0] = 1;
				tab[1] = 2;	
				tab[2] = 3;	
				tab[3] = 4;	
				tab[4] = 5;	
				tab[5] = 6;
				tab[6] = 7;	
				tab[7] = 8;	
				tab[8] = 9;	
				tab[9] = 10;
				
				for(int i = 0;i < 10;i++) {
					cout << "Liczba nr. " << i + 1 << " = "<< tab[i] << endl;;	
				}	
							
				break;				
			}
		case 2: //zadanie 2
			{
				int  l_rzeczy[10];
				cout << "Podaj Liczby Rzeczywiste Do zapamiêtania" << endl;
				for(int i = 0;i < 10;i++) {
					cout << "Podaj Kolejna Liczbe ";
					cin >> l_rzeczy[i];	
				}
			
				for(int i = 0;i < 10;i++) {
					cout << "Liczba nr. " << i + 1 << " = "<< l_rzeczy[i] << endl;;	
				}
			break;	
							}
		case 3: //zadanie 3
			{
				
			break;	
			}
		case 4: //zadanie 4
			{
				
			break;	
			}
		case 5: //zadanie 5
			{
				
			break;	
			}
		case 6: //zadanie 6
			{
				
			break;	
			}
		case 7: //zadanie 7
			{
				
			break;	
			}
		case 8: //zadanie 8
			{
				
			break;	
			}
		case 9: //zadanie 9
			{
				
			break;	
			}																					
	}

	
	return 0;
}
