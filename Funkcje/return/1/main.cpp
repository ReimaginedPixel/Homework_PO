#include <iostream>

using namespace std;

void linia()
{
	cout << "\n------------------------------- \n\n";
}


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
	/*
	linia();
	czyGodzinaPoprawna(-2,478,839); //nic nie jest poprawne
	linia();
	czyGodzinaPoprawna(1,478,839); //tylko godzina 
	linia();
	czyGodzinaPoprawna(1,2,839); //tylko godzina i minuty
	linia();
	czyGodzinaPoprawna(1,2,3); //wszytko poprawne
	return 0;
	*/
	linia();
	czyGodzinaPoprawna(24,30,30); //nic nie jest poprawne
	linia();
	czyGodzinaPoprawna(12, 88, 50); //tylko godzina 
	linia();
	czyGodzinaPoprawna(1,00,99); //tylko godzina i minuty
	linia();
	czyGodzinaPoprawna(7,33,01); //wszytko poprawne
	return 0;
	
}
