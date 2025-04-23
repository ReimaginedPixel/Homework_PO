#include <iostream>

using namespace std;


void petla1(int a) {
	
	for(int i = 1;i<=a;i++)
	{
		cout << endl;
		for(int i = 1;i<=a;i++){
		cout << "X";	
		}
		
	}



}


int main() {
	
	int a;
	cout << "Podaj Liczbe Wielkosci petli" << endl;
	cin >> a;
	petla1(a);
	
	
	return 0;
}
