#include <iostream>

using namespace std;
int main() 
{
//policz pola i obwody pó³  conajmniej 4 figór
cout << "Program Liczy pola i obwody wybranych figur\n";
cout << "Wybierz 1 - kwadrat \n";
cout << "Wybierz 2 - kolo \n";
cout << "Wybierz 3 - prostokant \n";
cout << "Wybierz 4 - trojkont \n";
int wybor;
cin >> wybor;
switch (wybor)
{
	case 1:
	{
		cout << "Co chcesz policzyc\n";
		cout << "Wybierz 1 aby policzyc - pole\n";
		cout << "Wybierz 2 aby policzyc - obwod\n";
		int pole_obw;
		cin >> pole_obw;
		if(pole_obw == 1)
		{
			int bok = 1;
			cout << "Liczysz pole kwadratu\n";
			cout << "Podaj bok kwadratu\n: ";
			cin >> bok;
			if (bok <= 0)
			{
				cout << "Bok ujemny lub rowny zero - nie licze \n";
			}
			else
			{
				int pole = bok * bok;
				cout << "Obliczone pole to: " << pole << " jednostek pola\n";
			}
		}
		if(pole_obw == 2)
		{
			int bok = 1;
			cout << "Liczysz obwod kwadratu\n";
			cout << "Podaj bok kwadratu\n: ";
			cin >> bok;
			if (bok <= 0)
			{
				cout << "Bok ujemny lub rowny zero - nie licze \n";
			}
			else
			{
				int obw = 4 * bok;
				cout << "Obliczone obwod to: " << obw << " jednostek dlugosci\n";
		}
		break;
	}
	case 2:
	{//kolo
		
		break;
	}
	case 3:
	{//prostokont
		cout << "Co chcesz policzyc\n";
		cout << "Wybierz 1 aby policzyc - pole\n";
		cout << "Wybierz 2 aby policzyc - obwod\n";
		int pole_obw;
		cin >> pole_obw;
			if(pole_obw == 1)
		{
			int bok1 = 1;
			int bok2 = 1;
			cout << "Liczysz pole prostokata\n";
			cout << "Podaj bok prostokata\n: ";
			cin >> bok1;
			cout << "Podaj drugi bok prostokata\n: ";
			cin >> bok2;
			if (bok1 <= 0)
			{
				cout << "Bok pierwszy jest ujemny lub rowny zero - nie licze \n";
			}

			if (bok2 <= 0)
			{
				cout << "Bok drugi jest ujemny lub rowny zero - nie licze \n";
			}
			else
			{
				int pole = bok1 * bok2;
				cout << "Obliczone pole prostokonta to: " << pole << " jednostek dlugosci\n";
			}
		}
		break;
	}
	case 4:
	{//trojkont
		break;
	}
	default: 
	{	
		break;
	}
}

}

}
