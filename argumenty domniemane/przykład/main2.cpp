#include <iostream>
using namespace std;

void przywitanie(string imie = "Go�ciu") {
    cout << "Cze��, " << imie << "!" << endl;
}

int main() {
    przywitanie();          // Cze��, Go�ciu!
    przywitanie("Ania");    // Cze��, Ania!
    return 0;
}

