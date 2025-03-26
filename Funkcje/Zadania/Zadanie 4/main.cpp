#include <iostream>

using namespace std;

int najwiekszaliczba(int a, int b)
{
	if (a >= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}


int main() {
	int a,b;
	cout << "Podaj 2 Liczby\n";
	cout << "Liczba pierwsza\n";
	cin >> a;
	cout << "Liczba pierwsza\n";
	cin >> b;
	
	cout << "Najwiêkasz liczba to: " << najwiekszaliczba(a,b) << endl;

}
