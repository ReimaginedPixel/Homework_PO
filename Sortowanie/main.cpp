#include <iostream>

using namespace std;

int main() {
    int a, b, Y;
    
    cout << "Podaj liczb� do dzielenia: ";
    cin >> a;

    cout << "Podaj dzielnik: ";
    cin >> b;
    
    if (b == 0) {
        cout << "Dzielnik nie mo�e wynosi� 0!" << endl;
    } 
	else {
        Y = a / b;
        cout << "Y wynosi: " << Y << endl;
    }
    
    return 0;
}

