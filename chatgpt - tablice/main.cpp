#include <iostream>
using namespace std;

int main() {
    cout << "Jakich chcesz rozmiar tablicy?\n";
    int rrr;
    cin >> rrr;  // Wczytujemy rozmiar tablicy

    // Tworzymy dynamiczn� tablic�
    int* a = new int[rrr];

    // Przyk�ad: wype�nianie tablicy warto�ciami
    for (int i = 0; i < rrr; i++) {
        a[i] = i + 1;  // Przypisujemy warto�ci do tablicy
    }

    // Wypisywanie tablicy
    for (int i = 0; i < rrr; i++) {
        cout << "Element " << i << ": " << a[i] << endl;


}

