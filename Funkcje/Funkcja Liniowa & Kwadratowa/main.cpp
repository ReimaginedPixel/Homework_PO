#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double miejsce_zerowe(double a, double b) {	
	return -b/a;
}

void obliczenia(){

	srand(time(NULL));
	double tab_miejsce_zerowe[30] = {};
	int a = 0, b = 0;
	for(int i = 0; i <= 30; i++){
		a = rand()%201 - 100;
		b = rand()%201 - 100;
		tab_miejsce_zerowe[i] = miejsce_zerowe(a,b);	
	}
	
	for(int i = 0; i <= 30; i++) {
	cout << "Miejsc zerowe funkcji y = " << a << " x + " << b << " to: " << miejsce_zerowe[i] << endl;
	}	
}

//y = ax + b
int main() {
	//cout << "Miejsce Zerowe funkcji y = 5x + 6: " << miejsce_zerowe(5,6) << endl;
	obliczenia();
	
	
	
	
	return 0;
}
