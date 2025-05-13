#include <iostream>
#include "dzialania.h"
#include "dzialania.cpp"

using namespace std;

int fun(int a,int b)
{
	cout << "Wewnotrz funkcji orginalna zwrocona to: " << a  << endl;
}
int main() {
	dodawanie(5,8);
	cout << "odjemowanie " <<  odejmowanie(7,4);
	
}



