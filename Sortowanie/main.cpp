#include <iostream>

using namespace std;

int main() {
    int a, b, Y;
    
    cout << "Podaj liczbê do dzielenia: ";
    cin >> a;

    cout << "Podaj dzielnik: ";
    cin >> b;
    
    if (b == 0) {
        cout << "Dzielnik nie mo¿e wynosiæ 0!" << endl;
    } 
	else {
        Y = a / b;
        cout << "Y wynosi: " << Y << endl;
    }
    
    return 0;
}

