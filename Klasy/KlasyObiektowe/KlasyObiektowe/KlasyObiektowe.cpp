#include <iostream>
using namespace std;

class osoba {
public:
    int wiek;

    void wypisz()
    {
        cout << "Wypisz wiek " << wiek << endl;
    }
};

class kwadrat {
    int bok;
    int obwod;
    int pole;
    string nazwa;
    string kolor;
    string jednostka;

public:
    // Setter boku z automatycznym przeliczeniem pola i obwodu
    void set_bok(int b) {
        if (b < 0) {
            cout << "Podano ujemną wartość boku (" << b << "), zamieniam na dodatnią." << endl;
            b *= -1;
        }
        bok = b;
        obwod = 4 * bok;
        pole = bok * bok;
    }

    int get_bok() {
        return bok;
    }

    int get_obwod() {
        return obwod;
    }

    int get_pole() {
        return pole;
    }

    // Nazwa
    void set_nazwa(string n) {
        nazwa = n;
    }

    string get_nazwa() {
        return nazwa;
    }

    // Kolor
    void set_kolor(string k) {
        kolor = k;
    }

    string get_kolor() {
        return kolor;
    }

    // Jednostka
    void set_jednostka(string j) {
        jednostka = j;
    }

    string get_jednostka() {
        return jednostka;
    }

    // Wypisanie danych o kwadracie
    void wypisz_kwadrat() {
        cout << endl;
        cout << "=+= INFORMACJE O KWADRACIE =+=" << endl;
        cout << "Nazwa: " << get_nazwa() << endl;
        cout << "Kolor: " << get_kolor() << endl;
        cout << "Bok: " << get_bok() << " " << get_jednostka << endl;
        cout << "Obwód: " << get_obwod() << " " << get_jednostka << endl;
        cout << "Pole: " << get_pole() << " " << jednostka << "²" << endl;
        cout << "=+--------------------------+=" << endl;
    }
};

class komputer {
    string nazwa;
    int ilosc_rdzeni;
    int ram;
    bool czy_dziala;

public:

    void set_nazwa(string n) {
        nazwa = n;
    }

    string get_nazwa() {
        return nazwa;
    }

    void set_ilosc_rdzeni(int ilosc) {
        if (ilosc < 0) {
            cout << "Podano ujemna liczbe rdzeni (" << ilosc << "), zamieniam na dodatnią." << endl;
            ilosc *= -1;
        }
        ilosc_rdzeni = ilosc;
    }

    int get_ilosc_rdzeni() {
        return ilosc_rdzeni;
    }

    void set_ram(int pamiec) {
        if (pamiec < 0) {
            cout << "Podano ujemna ilosc RAM (" << pamiec << "), zamieniam na dodatnią." << endl;
            pamiec *= -1;
        }
        ram = pamiec;
    }

    int get_ram() {
        return ram;
    }

    void set_czy_dziala(bool dziala) {
        czy_dziala = dziala;
    }

    string get_czy_dziala() {
        if (czy_dziala == true)
        {
            return "Tak";
        }
        else {
            return "Nie";
        }
    }

    void wypisz_komputer() {
        cout << endl;
        cout << "=+= INFORMACJE O KOMPUTERZE =+=" << endl;
        cout << "Nazwa: " << get_nazwa() << endl;
        cout << "Rdzenie: " << get_ilosc_rdzeni() << endl;
        cout << "RAM: " << get_ram() << " GB" << endl;
        cout << "Dziala?: " << get_czy_dziala() << endl;
        cout << "=+--------------------------+=" << endl;
    }
};

class monitor {
public:
    string marka;
    string model;
    int data_produkcji;
    int wysokosc;
    int szerokosc;
    int czestotliwosc;
    double cale;

    void wypisz_monitor()
    {
        cout << endl;
        cout << "=+= INFORMACJE O MONITORZE =+=" << endl;
        cout << "Marka: " << marka << endl;
        cout << "Model: " << model << endl;
        cout << "Data produkcji: " << data_produkcji << endl;
        cout << "Wysokosc: " << wysokosc << " cm" << endl;
        cout << "Szerokosc: " << szerokosc << " cm" << endl;
        cout << "Przekatna (cale) : " << cale << " cale" << endl;
        cout << "Czestotliwosc: " << cale << " cale" << endl;
        cout << "=+--------------------------+=" << endl;
    }
};


int main()
{
    // kwadrat
    kwadrat q1;
    q1.set_nazwa("Kwadrat testowy");
    q1.set_kolor("zielony");
    q1.set_jednostka("cm");
    q1.set_bok(-5); // automatycznie zrobi się 5
    q1.wypisz_kwadrat();



    // osoba
    osoba ja;
    ja.wiek = 17;
    ja.wypisz();
    
    //komputer
    
    komputer k1;
    //k1.nazwa = "Stacja01";
    k1.set_nazwa("Komp2");
    //k1.ilosc_rdzeni = 12;
    k1.set_ilosc_rdzeni(-13);
    //k1.ram = 2048;
    //k1.czy_dziala = true;
    k1.set_czy_dziala(false);
    k1.wypisz_komputer();

    //monitor
    monitor m1;
    m1.marka = "Philips";
    m1.model = "243V";
    m1.data_produkcji = 2012;
    m1.wysokosc = 160;
    m1.szerokosc = 250;
    m1.cale = 16.3;
    m1.czestotliwosc = 240;
    m1.wypisz_monitor();

    //monitor
    monitor m2;
    m2.marka = "Samsung";
    m2.model = "Odyssey G5";
    m2.data_produkcji = 2021;
    m2.wysokosc = 210;
    m2.szerokosc = 340;
    m2.cale = 27.0;
    m2.czestotliwosc = 165;
    m2.wypisz_monitor();

    /*
    //monitor
    monitor m3;
    m3.marka = "LG";
    m3.model = "UltraGear";
    m3.data_produkcji = 2020;
    m3.wysokosc = 200;
    m3.szerokosc = 320;
    m3.cale = 24.5;
    m3.czestotliwosc = 144;
    m3.wypisz_monitor();

    //monitor
    monitor m4;
    m4.marka = "Acer";
    m4.model = "Nitro VG240Y";
    m4.data_produkcji = 2019;
    m4.wysokosc = 190;
    m4.szerokosc = 310;
    m4.cale = 23.8;
    m4.czestotliwosc = 75;
    m4.wypisz_monitor();

    //monitor
    monitor m5;
    m5.marka = "ASUS";
    m5.model = "TUF VG27AQ";
    m5.data_produkcji = 2022;
    m5.wysokosc = 220;
    m5.szerokosc = 360;
    m5.cale = 27.0;
    m5.czestotliwosc = 165;
    m5.wypisz_monitor();

    //monitor
    monitor m6;
    m6.marka = "Dell";
    m6.model = "U2419H";
    m6.data_produkcji = 2018;
    m6.wysokosc = 190;
    m6.szerokosc = 310;
    m6.cale = 24.0;
    m6.czestotliwosc = 60;
    m6.wypisz_monitor();

    //monitor
    monitor m7;
    m7.marka = "BenQ";
    m7.model = "Zowie XL2546K";
    m7.data_produkcji = 2021;
    m7.wysokosc = 200;
    m7.szerokosc = 320;
    m7.cale = 24.5;
    m7.czestotliwosc = 240;
    m7.wypisz_monitor();

    //monitor
    monitor m8;
    m8.marka = "MSI";
    m8.model = "Optix MAG274QRF";
    m8.data_produkcji = 2022;
    m8.wysokosc = 215;
    m8.szerokosc = 345;
    m8.cale = 27.0;
    m8.czestotliwosc = 165;
    m8.wypisz_monitor();

    //monitor
    monitor m9;
    m9.marka = "HP";
    m9.model = "X24ih";
    m9.data_produkcji = 2021;
    m9.wysokosc = 200;
    m9.szerokosc = 320;
    m9.cale = 23.8;
    m9.czestotliwosc = 144;
    m9.wypisz_monitor();

    //monitor
    monitor m10;
    m10.marka = "AOC";
    m10.model = "24G2U";
    m10.data_produkcji = 2020;
    m10.wysokosc = 195;
    m10.szerokosc = 315;
    m10.cale = 24.0;
    m10.czestotliwosc = 144;
    m10.wypisz_monitor();

    //monitor
    monitor m11;
    m11.marka = "ViewSonic";
    m11.model = "XG2405";
    m11.data_produkcji = 2019;
    m11.wysokosc = 190;
    m11.szerokosc = 310;
    m11.cale = 24.0;
    m11.czestotliwosc = 144;
    m11.wypisz_monitor();

    //monitor
    monitor m12;
    m12.marka = "Gigabyte";
    m12.model = "M27Q";
    m12.data_produkcji = 2022;
    m12.wysokosc = 215;
    m12.szerokosc = 345;
    m12.cale = 27.0;
    m12.czestotliwosc = 170;
    m12.wypisz_monitor();

    //monitor
    monitor m13;
    m13.marka = "Lenovo";
    m13.model = "G27q-20";
    m13.data_produkcji = 2021;
    m13.wysokosc = 210;
    m13.szerokosc = 340;
    m13.cale = 27.0;
    m13.czestotliwosc = 165;
    m13.wypisz_monitor();

    //monitor
    monitor m14;
    m14.marka = "Samsung";
    m14.model = "Smart M7";
    m14.data_produkcji = 2023;
    m14.wysokosc = 230;
    m14.szerokosc = 370;
    m14.cale = 32.0;
    m14.czestotliwosc = 60;
    m14.wypisz_monitor();

    //monitor
    monitor m15;
    m15.marka = "Philips";
    m15.model = "272E1GAJ";
    m15.data_produkcji = 2020;
    m15.wysokosc = 210;
    m15.szerokosc = 335;
    m15.cale = 27.0;
    m15.czestotliwosc = 144;
    m15.wypisz_monitor();

    //monitor
    monitor m16;
    m16.marka = "ASUS";
    m16.model = "ROG Swift PG259QN";
    m16.data_produkcji = 2022;
    m16.wysokosc = 200;
    m16.szerokosc = 320;
    m16.cale = 24.5;
    m16.czestotliwosc = 360;
    m16.wypisz_monitor();

    //monitor
    monitor m17;
    m17.marka = "LG";
    m17.model = "32UN880";
    m17.data_produkcji = 2021;
    m17.wysokosc = 240;
    m17.szerokosc = 380;
    m17.cale = 32.0;
    m17.czestotliwosc = 60;
    m17.wypisz_monitor();

    //monitor
    monitor m18;
    m18.marka = "Dell";
    m18.model = "S3422DWG";
    m18.data_produkcji = 2023;
    m18.wysokosc = 250;
    m18.szerokosc = 420;
    m18.cale = 34.0;
    m18.czestotliwosc = 165;
    m18.wypisz_monitor();
    */



}

