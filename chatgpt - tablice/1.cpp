#include <iostream>
using namespace std;

int main() {
    int N;
    
    cout << "Podaj liczb� N: ";
    cin >> N;
    
    int i = 2; 
    
    
    while (i <= N) {
        cout << i << "\n";
        i += 2; 
    }
    
    return 0;
}

