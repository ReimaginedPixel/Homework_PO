#include <iostream>

using namespace std;


int main()
{
	int a=0, b=5;
	cout<<"przed wejsciem do funckji zmienne a wynosz¹ a= " << a << " teraz b= " << b << "\n";
	swap(a,b);
	cout<<"przed wejsciem do funckji zmienne a wynosz¹ a= " << a << " teraz b= " << b << "\n";
	
	system("pause");
}
void swap( int c,int d)
{
	int temp = c;
	c = d;
	d = temp;
	cout<<"W funkcji SWAP zmienne wynosza a=" << c << " teraz b= " << d << "\n";
}
