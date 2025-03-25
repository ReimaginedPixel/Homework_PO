#include <iostream>

using namespace std;

void dzien_tyg(int dzien);
//funkcja która po podaniu liczby zwraca dzien tygodnia

int main() {
	int a;
	cout << "Podaj dzien\n";
	cin >> a;
	dzien_tyg(a);
}

void dzien_tyg(int dzien) {
	switch(dzien)
	{
		case 1:
		{
			cout << "Poniedzia³ek \n";
			break;
		}
		case 2:
		{
			cout << "Wtorek \n";
			break;
		}
		case 3:
		{
			cout << "Œroda \n";
			break;
		}
		case 4:
		{
			cout << "Czwartek \n";
			break;
		}
		case 5:
		{
			cout << "Pi¹tek \n";
			break;
		}
		case 6:
		{
			cout << "Sobota \n";
			break;
		}
		case 7:
		{
			cout << "Niedziela \n";
			break;
		}
		default:
		{
			cout << "Z³a liczba (Inny dzien?) ( od 1 do 7 )" << endl;
		}												
	}
}

