using namespace std;

#include <iostream>

class Potworek {
	static int liczba_potworkow;
	int id ;
public:
	Potworek() {
		liczba_potworkow++;
		id = liczba_potworkow;
	}
	int getID() {
		return id;
	}
	static void pokaz_liczbe_potworkow() {
		cout << "Liczba stworzonych potworkow to: " << liczba_potworkow << endl;
	}
};
int Potworek::liczba_potworkow = 0;
int main()
{
	Potworek p1;
	cout << "Numer potworka to: " << p1.getID() << endl;

	Potworek p2;
	cout << "Numer potworka to: " << p2.getID() << endl;

	Potworek p3;
	cout << "Liczba Potworkow " << endl;
	Potworek::pokaz_liczbe_potworkow();
	cout << "Numer potworka to: " << p3.getID() << endl;

	Potworek p4;
	cout << "Numer potworka to: " << p4.getID() << endl;

	cout << "Numer Potworka 2: " << p2.getID() << endl;
}
