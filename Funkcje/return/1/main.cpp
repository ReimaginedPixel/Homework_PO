#include <iostream>

using namespace std;

bool czyGodzinaPoprawna( int godz, int min, int sek )
	{
		cout << "Jestem w funkcji czyGodzinaPoprawna\n";
		if( godz < 0 || godz > 23 )
			return false;
			
		cout << "Godzina jest Poprawna\n";
		if( min < 0 || min > 59)
			return false;
			
		cout << "Godziny i minuty sa poprawne\n";
		if( sek < 0 || sek > 59)
			return false;
			
		cout << "Czas jest poprawny\n";
		return true;
	}
	

int main() {
	czyGodzinaPoprawna(1,2,3);
	return 0;
}
