#include <iostream>

using namespace std;
int main() {

while(true) 
{
	cout << "Wybiez Figure Aby Obliczyc Pole\n1.kwadrat\n2.prostokont\n3.trojkont\n4. trapez\nWybierz\n";
	int bok_kwadratu;
	int figura;
	int wybor;
	int pole;
	cin >> figura;
	if (figura<0 or figura>4) 
		{
			cout << "Zla figura!\n Podaj Ponownie! \n";
		} 
		
	else
	{
		
	switch(figura)
	{
		case 1:
			{
				while(true)
				{
				cout << "Obliczenie Pola Kwadratu\nPodaj Bok Kwadratu\n"	;
				cin >> bok_kwadratu;
				//obliczenia
				pole = bok_kwadratu*bok_kwadratu;
				cout<< "pole wynosi: " << pole << endl;
				if(bok_kwadratu<=0)
				{
					cout << "Zla Liczba! Niemoze byc 0 lub ponizej!\n";
				} else
					{
					while(true) 
						{
						cout << "Czy chcesz kontynuowac?\n1 = Tak\n2 = Nie\n";
						cin >> wybor;
						if (wybor<0 or wybor > 2 ) 
						{
							cout << "zly wybor\n";
						}	else {
							break;
						}			
					}	
				}
				//czy chvesz kontynowac
				while(true) 
					{
					cout << "Czy chcesz kontynuowac?\n1 = Tak\n2 = Nie\n";
					cin >> wybor;
					if (wybor<0 or wybor > 2 ) 
					{
						cout << "zly wybor\n";
					}	else {
						break;
					}			
				}

				if (wybor == 2) 
				{
					break;
				}
				}
				break;
			}
		case 2:
			{
				while(true)
				{
				cout << "2"	;
				}				
				break;
			}
		case 3:
			{
				while(true)
				{
				cout << "3"	;
				}				
				break;
			}	
		case 4:
			{
				while(true)
				{
				cout << "4"	;
				}				
				break;
			}					
	}
	}
}
	
	
	

	return 0;
}
