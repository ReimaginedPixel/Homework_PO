#include <iostream>
#include "dzialania.h"
#include "dzialania.cpp"

using namespace std;

int fun(int a,int b)
{
	cout << "Wewnotrz funkcji orginalna zwrocona to: " << a  << endl;
	a = -6;
	cout << "Wewnotrz Funkcji zmienna a to: " << a << endl;
	return a;
}

int main() {
	int a = 7;
	cout << "zmienna a to:  " <<  a << endl;
	cout << "po wyjsciu z funcki a  " <<  fun(a) << endl;
	cout << "Zmienna po wyjsciu z funkcji a to:  " <<  a << endl;
}



