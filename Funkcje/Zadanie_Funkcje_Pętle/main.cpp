#include <iostream>

using namespace std;


void petla1(int a) {
	
	for(int i = 1;i<=a;i++)
	{
		cout << endl;
		for(int j = 1;j<=a;j++){
		cout << "X";	
		}
		
	}
}
void petla2(int a) {
    for (int i = 1; i <= a; i++) {
    	
        for (int j = 1; j <= i; j++) { 
            cout << "X";
        
		}
        
		
		cout << endl;
    }
}

	




int main() {
	
	int a, b;

	
	cout << "Wybiez Rodzaj Petli" << endl;
	cin >> b;
	switch(b) {
		case 1: {  // zadanie 1
		
			cout << "Podaj Liczbe Wielkosci petli" << endl;
			cin >> a;		
		
			petla1(a);				
			break;
		}
		
		
		
		case 2: { // zadanie 2
			cout << "Podaj Liczbe Wielkosci petli" << endl;
			cin >> a;		
		
			petla2(a);		
			break;
		}
		
				
	}
	
	
	return 0;
}
