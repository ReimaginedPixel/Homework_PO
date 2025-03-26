#include <iostream>

using namespace std;

void pitagoras() {
	int a = 0, b = 0, c = 0;
	cout << "Sprawdzanie poprawnosci wyrazenia algebraicznego\n";
	cout << "Podaj a\n (Bêdzie podniesione Do Kwadratu)"<< endl;;
	cin >> a;
	cout << "Podaj b\n (Bêdzie podniesione Do Kwadratu)" << endl;
	cin >> b;	
	cout << "Koncowy Wynik c" << endl;
	cin >> c;
		
	a=a*a,b=b*b,c;
	if(a+b==c)
	{
		cout << "To wyrazenie algebraiczne jest poprawne\n";
	}
	else
	{
		cout << "To wyrazenie algebraiczne nie jest poprawne";
	}
}



int main() {
	
	pitagoras();
	return 0;
}
