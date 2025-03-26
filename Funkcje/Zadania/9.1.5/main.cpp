#include <iostream>

using namespace std;

void pitagoras() {
	int a = 0, b = 0, c = 0;
	cout << "Obliczanie a do kwadratu + b do kwadratu = c do kwadratu\n";
	cout << "Podaj a\n "<< endl;;
	cin >> a;
	cout << "Podaj b\n " << endl;
	cin >> b;	
	cout << "Podaj c\n " << endl;
	cin >> c;
		
	a=a*a,b=b*b,c=c*c;
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
