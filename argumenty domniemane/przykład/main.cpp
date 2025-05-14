#include <iostream>
using namespace std;

double cels_to_fahr(double stopnie) {
    return stopnie * 9.0 / 5.0 + 32.0;
}

void temperatura(double stopnie, int skala = 0) {
    cout << "Temperatura komory: ";
    switch (skala) {
        case 0:
            cout << stopnie << " C\n";
            break;
        case 1:
            cout << (stopnie + 273.15) << " K\n";
            break;
        case 2:
            cout << cels_to_fahr(stopnie) << " F\n";
            break;
        default:
            cout << "Nieznana skala!\n";
            break;
    }
}

int main() {
    temperatura(20.0, 0);  
    temperatura(20.0); //tosamo ale bez skali	 
    temperatura(20.0, 1);

    return 0;
}

