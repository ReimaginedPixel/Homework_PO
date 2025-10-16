#include <iostream>
#include <cmath>
using namespace std;

// ===================== Zad. 2 =====================
double sum1(double x, double y)
{
    cout << "Suma zwracana przez wartość funkcji\n";
    return x + y;
}

void sum2(double x, double y, double* z)
{
    cout << "Suma zwracana przez wskaźnik\n";
    *z = x + y;
}

void sum3(double x, double y, double& z)
{
    cout << "Suma zwracana przez referencję\n";
    z = x + y;
}

// ===================== Zad. 4 =====================
double max1(double a, double b)
{
    return (a > b) ? a : b;
}

void max2(double a, double b, double* m)
{
    *m = (a > b) ? a : b;
}

void max3(double a, double b, double& m)
{
    m = (a > b) ? a : b;
}

// ===================== Zad. 5 =====================
void zamien1(double* a, double* b)
{
    double tmp = *a;
    *a = *b;
    *b = tmp;
}

void zamien2(double& a, double& b)
{
    double tmp = a;
    a = b;
    b = tmp;
}

// ===================== Zad. 6 =====================
double far2cel1(double f)
{
    return (f - 32) * 5.0 / 9.0;
}

void far2cel2(double f, double* c)
{
    *c = (f - 32) * 5.0 / 9.0;
}

void far2cel3(double f, double& c)
{
    c = (f - 32) * 5.0 / 9.0;
}

// ===================== Zad. 7 =====================
int funkcja1(int a)
{
    if (a < 1 || a > 30) return 0;
    if (a % 3 == 0) return 7;
    return 5 * a - 7;
}

void funkcja2(int a, int* f)
{
    *f = funkcja1(a);
}

void funkcja3(int a, int& f)
{
    f = funkcja1(a);
}

// ===================== Zad. 8 =====================
int funkcja8_1(int op, int a, int b)
{
    switch (op)
    {
    case 1: return a + b;
    case 2: return a - b;
    case 3: return a * b;
    case 4: return (b != 0) ? a / b : 0;
    }
    return 0;
}

void funkcja8_2(int op, int a, int b, int* f)
{
    *f = funkcja8_1(op, a, b);
}

void funkcja8_3(int op, int a, int b, int& f)
{
    f = funkcja8_1(op, a, b);
}

// ===================== Zad. 9 =====================
int add31(int a, int b, int c)
{
    return a + b + c;
}

void add32(int a, int b, int c, int* suma)
{
    *suma = a + b + c;
}

void add33(int a, int b, int c, int& suma)
{
    suma = a + b + c;
}

// ===================== Zad. 10 =====================
double potega1(double x, int n)
{
    return pow(x, n);
}

void potega2(double x, int n, double* p)
{
    *p = pow(x, n);
}

void potega3(double x, int n, double& p)
{
    p = pow(x, n);
}

// ===================== Zad. 11 =====================
void zad11()
{
    int n;
    cout << "Podaj n (<=25): ";
    cin >> n;

    if (n < 1 || n > 25) return;

    int* tab = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) tab[i] = abs(tab[i]);
        else tab[i] = -abs(tab[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;

    delete[] tab;
}

// ===================== main =====================
int main()
{
    double a = 0, b = 0, wynik;

    // Wczytanie dwóch liczb rzeczywistych od użytkownika
    cout << "Podaj Dwie Liczby Typu Double\n >> ";
    cin >> a;
    cout << " >> ";
    cin >> b;

    // Zad.2 - suma dwóch liczb na trzy sposoby
    cout << "sum1: " << sum1(a, b) << endl;

    sum2(a, b, &wynik);
    cout << "sum2: " << wynik << endl;

    sum3(a, b, wynik);
    cout << "sum3: " << wynik << endl;

    // Zad.3 - wskaźnik na zmienną typu int
    int zmienna = 5;
    int* wsk_zmienna = &zmienna;
    cout << "Wartość zmiennej: " << zmienna
        << ", przez wskaźnik: " << *wsk_zmienna << endl;

    // Zad.4 - funkcja max dwóch liczb
    cout << "max1: " << max1(a, b) << endl;

    // Zad.5 - zamiana wartości zmiennych (referencja)
    zamien2(a, b);
    cout << "Po zamianie a=" << a << " b=" << b << endl;

    // Zad.6 - konwersja temperatury F → C
    cout << "F->C: " << far2cel1(212) << endl;

    // Zad.7 - funkcja warunkowa (dla liczby 10)
    cout << "funkcja1(10): " << funkcja1(10) << endl;

    // Zad.8 - prosta kalkulacja (op=3 → mnożenie)
    cout << "funkcja8_1(3,4,5): " << funkcja8_1(3, 4, 5) << endl;

    // Zad.9 - suma trzech liczb
    cout << "add31: " << add31(1, 2, 3) << endl;

    // Zad.10 - potęgowanie (2^10)
    cout << "potega1(2,10): " << potega1(2, 10) << endl;

    // Zad.11 - tablica dynamiczna (użytkownik podaje liczby)
    zad11();

    return 0;
}
