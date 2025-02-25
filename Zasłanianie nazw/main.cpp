#include <iostream>
#include <conio.h>
using namespace std;


int k = 33;

int main() 
{
	cout << "Jestem w main ,k=" << k << "\n";
	{
		int k = 10;  //zmienna lokalna
		cout << "po lokalnej definicji k="
		<< k                   
		<< "\nagle obiekt globalny k="
		<<::k ;
	}
	cout << "\nPoza blokiem k=" << k << endl;
	
	getch();
}
