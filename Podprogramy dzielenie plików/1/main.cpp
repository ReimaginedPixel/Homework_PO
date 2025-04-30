#include <iostream>

using namespace std;



int main() {
	dodawanie(5,8);
	cout << "odjemowanie " <<  odejmowanie(7,4);
	
}

void dodawanie(int a, int b) {
	cout << "Suma Liczb a: " << a << " i b: " << b << " to: " << a + b << endl;
}

double odejmowanie(int a, int b){
	return a - b;
}

