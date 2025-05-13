#include <iostream>

using namespace std;

/*
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
*/

void swap(int c, int d);

int main()
{
	int a=0,b=5;
	cout<<"Przed wejœciem do funkcji zmienne wynosz¹ a= "<<a<<" teraz b= "<<b<<endl;
	swap(a,b);
	cout<<"teraz wyjsciu z funkcji zmienne wynosza a= "<<a<<" teraz b= "<<b<<endl;
	system("pause");
}

void swap(int c, int d)
{
	int temp = c;
	c=d;
	d=temp;
	cout<<"w funkcji swap zmienne wynosza a= "<<c<<" teraz b= "<<d<<endl;
}
