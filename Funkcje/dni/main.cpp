#include <iostream>

using namespace std;

void dzien_tyg(int dzien);
//funkcja kt�ra po podaniu liczby zwraca dzien tygodnia

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
			cout << "Poniedzia�ek \n";
			break;
		}
		case 2:
		{
			cout << "Wtorek \n";
			break;
		}
		case 3:
		{
			cout << "�roda \n";
			break;
		}
		case 4:
		{
			cout << "Czwartek \n";
			break;
		}
		case 5:
		{
			cout << "Pi�tek \n";
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
			cout << "Z�a liczba (Inny dzien?) ( od 1 do 7 )" << endl;
		}												
	}
}

