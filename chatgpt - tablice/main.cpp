#include <iostream>
using namespace std;

int main() {
    cout << "Jakich chcesz rozmiar tablicy?\n";
    int rrr;
    cin >> rrr;  // Wczytujemy rozmiar tablicy

    // Tworzymy dynamiczn¹ tablicê
    int* a = new int[rrr];

    // Przyk³ad: wype³nianie tablicy wartoœciami
    for (int i = 0; i < rrr; i++) {
        a[i] = i + 1;  // Przypisujemy wartoœci do tablicy
    }

    // Wypisywanie tablicy
    for (int i = 0; i < rrr; i++) {
        cout << "Element " << i << ": " << a[i] << endl;


}

