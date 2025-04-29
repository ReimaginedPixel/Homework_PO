#include <iostream>
#include <locale.h>

using namespace std;

void linia() {
	cout << "\n-+=================================+-\n";
}

void menu() {
	int wybor = 0;
	int wyborwyjscie = 0;
	
	cout << "Wybierz Figure";
	cout << "\n-+=========- Lista Figur -=========+-";
	cout << "\n    1. Kwadrat        2.Prostok¹t";
	cout << "\n    3. Trapez         4.Trójk¹t";
	cout << "\n    5. Równoleg³obok  6.Szeœciok¹t";
	linia();
	
	while(true)
	{
		
	cout << "\n |> Wybierz Figure Do Obliczenia\n -> ";
	cin >> wybor; 
	

		cout << "\n |> Wyjsc Z Programu? 1 = tak,  0 = nie \n -> ";
		cin >> wyborwyjscie;
		if(wyborwyjscie == 1)
		{
			break;
		}
		else
		{
			wyborwyjscie = 0;
		}
		
		
		

	switch(wybor) {
		
		case 1:
			{
				
				break;
			}
			
		default:
		{
			cout << " |> Poda³eœ Z³¹ Liczbe!";
			break;
		}
		
		
		
		
		
	} //zamkniecie switch
	
	} //zamkniecie while
		
} //zamkniecie funkcji

int main() { //obliczenie pol figur
	setlocale(LC_CTYPE, "Polish");
	menu();
}


