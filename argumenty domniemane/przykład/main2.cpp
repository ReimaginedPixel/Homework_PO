#include <iostream>
using namespace std;

void przywitanie(string imie = "Goœciu") {
    cout << "Czeœæ, " << imie << "!" << endl;
}

int main() {
    przywitanie();          // Czeœæ, Goœciu!
    przywitanie("Ania");    // Czeœæ, Ania!
    return 0;
}

