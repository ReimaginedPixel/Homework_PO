#include <iostream>
#include <string>
#include<cstring>
#include <cctype>
#include <iomanip>

using namespace std;
//zadanie 1 funckja z forum dokumentacji:

int OdwrocenieStringa(string TekstDoOdworcenia)
{
    string Orginal (TekstDoOdworcenia);
    string Odwrocony(Orginal.rbegin(), Orginal.rend());
    cout << "\nThe reversed string is " << Odwrocony << endl;

    return 0;
}

//zmienilem z tego:
//int complexReverseString(string userInput)
//{
//    string source(userInput);
//    string target(source.rbegin(), source.rend());
//    cout << "The reversed string is " << target << endl;
//
//    return 0;
//}

int main()
{

    //Zadanie 1.

    string tekst1;
    cout << "Odwrocenie Lter: \n> ";
    cin >> tekst1;
    OdwrocenieStringa(tekst1);

    //zadanie 2.

    string tekst2;
    cout << "Dlugosc Stringa: \n> ";
    cin >> tekst2;
    cout << "\nDlugosc Tego Tekstu To: " << tekst2.length() << " Liter.\n" << endl;

    //zadanie 3.
    string tekst3, tekst4;
    cout << "Polonczenie Tekstu:\nPodaj Tekst Nr.1 \n> ";
    cin >> tekst3;
    cout << "Podaj Tekst Nr.2 \n> ";
    cin >> tekst4;

    cout << "Polonczony Tekst To: " << tekst3 + tekst4 << endl;

    //zadanie 4.
    string tekst5;
    cout << "Zmienienie Litery Na Wieksze: \n> " << endl;
    cin >> tekst5;

    for (int i = 0; i < tekst5.size(); i++) {
        tekst5[i] = toupper(tekst5[i]);
    }

    cout << "\nPowiekszony Tekst:" << tekst5 << endl << endl;

    //zadanie 5.

    string tekst6;
    cout << "Liczenie Liter a: \n> " << endl;
    cin >> tekst6;

    int policz = 0;

    for (int i = 0; i < tekst5.size(); i++) {
        if (tekst5[i] == 'a' || tekst5[i] == 'A') {
            policz++;
        }
    }

    cout << "Liczba liter 'a': " << policz << endl;

    //Zadanie 6.
    string tekst7, slowo1;
    cout << "czy string zawiera slowo?\nPodaj Tekst: \n> " << endl;
    cin >> tekst7;
    cout << "Podaj Slowo: \n> " << endl;
    cin >> slowo1;

    if (tekst7.find(slowo1) != string::npos) {
        cout << "\nTak, znaleziono." << endl;
    }
    else {
        cout << "\nNie znaleziono." << endl;
    }
}