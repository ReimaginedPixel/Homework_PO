#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SIZE = 50; //sta³a

double miejsce_zerowe(double a, double b) {	
	return -b/a;
}

void obliczenia(){

	srand(time(NULL));
	double tab_miejsce_zerowe[SIZE] = {};
	int tab_a[SIZE];
	int tab_b[SIZE];
	int a = 0, b = 0;
	for(int i = 0; i <= SIZE; i++){
		tab_a[i] = rand()%201 - 100;
		tab_b[i] = rand()%201 - 100;
		tab_miejsce_zerowe[i] = miejsce_zerowe(tab_a[i], tab_b[i]);	
	}
	
	for(int i = 0; i <= SIZE; i++) {
	cout << i <<". Miejsc zerowe funkcji y = " << tab_a[i] << " x + " << tab_b[i] << " to: " << tab_miejsce_zerowe[i] << endl;
	}	
}

//y = ax + b
int main() {
	//cout << "Miejsce Zerowe funkcji y = 5x + 6: " << miejsce_zerowe(5,6) << endl;
	obliczenia();
	
	
	
	
	return 0;
}
