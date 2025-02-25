#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cout << "==== Program do Przeliczanie Walut ====" << endl;
    cout << "Podaj Kwotê do przeliczenia\n";
    int kwota = 0;

    cin >> kwota;
        if (kwota <= 0)
    {
        cout << "kwota niemoze wynosic 0\n" << endl;
    }
    else
    {
    cout << "podaj walutê, w ktorej podales kwotê\n";
    cout << "podaj literkê u - USD, e - EUR, g - GBP\n";
    char waluta;
    cin >> waluta;
    switch (waluta)
    {
    case 'u':
        {
            //USD > 400 PLN
            cout << "wybrales walute USD\n";
            cout << kwota << " USD to " << (kwota * 3) << " PLN";
            break;

        }
    case 'e':
        {
            //EUR > 400 PLN
            cout << "wybrales walute EUR\n";
            cout << kwota << " EUR to " << (kwota * 4) << " PLN";
            break;

        }
    case 'g':
        {
            //GBP > 500 PLN
            cout << "wybrales walute GBP\n";
            cout << kwota << " GBP to " << (kwota * 5) << " PLN";
            break;

        }
    default:
        cout << "inna waluta - koniec";
    }
    return 0;
    }

}
