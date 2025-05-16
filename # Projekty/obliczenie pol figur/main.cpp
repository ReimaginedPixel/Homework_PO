#include <iostream>
#include <locale.h>

using namespace std;

// linia
void linia() {
	cout << "\n-+=================================+-\n";
}

//figury
void kwadrat() {
    float a;
    cout << "\n |> Podaj bok kwadratu: \n -> ";
    cin >> a;
    cout << "\nPole: " << a * a << " cm2" << endl;
    cout << "Obwód: " << 4 * a << " cm" << endl;
    linia();
}

void prostokat() {
    float a, b;
    cout << "\n |> Podaj d³ugoœæ: \n -> ";
    cin >> a;
    cout << " |> Podaj szerokoœæ: \n -> ";
    cin >> b;
    cout << "\nPole: " << a * b << " cm2" << endl;
    cout << "Obwód: " << 2 * (a + b) << " cm" << endl;
    linia();
}

void trapez() {
    float a, b, h, bok1, bok2;
    cout << "\n |> Podaj podstawê a: \n -> ";
    cin >> a;
    cout << " |> Podaj podstawê b: \n -> ";
    cin >> b;
    cout << " |> Podaj wysokoœæ h: \n -> ";
    cin >> h;
    cout << " |> Podaj bok 1: \n -> ";
    cin >> bok1;
    cout << " |> Podaj bok 2: \n -> ";
    cin >> bok2;
    cout << "\nPole: " << ((a + b) * h) / 2 << " cm2" << endl;
    cout << "Obwód: " << a + b + bok1 + bok2 << " cm" << endl;
    linia();
}

void trojkat() {
    float a, h, b, c;
    cout << "\n |> Podaj podstawê: \n -> ";
    cin >> a;
    cout << " |> Podaj wysokoœæ: \n -> ";
    cin >> h;
    cout << " |> Podaj bok 2:\n ->  ";
    cin >> b;
    cout << " |> Podaj bok 3: \n -> ";
    cin >> c;
    cout << "\nPole: " << (a * h) / 2 << " cm2" << endl;
    cout << "Obwód: " << a + b + c << " cm" << endl;
    linia();
}

void rownoleglobok() {
    float a, h, b;
    cout << "\n |> Podaj podstawê: \n -> ";
    cin >> a;
    cout << " |> Podaj bok s¹siedni: \n -> ";
    cin >> b;
    cout << " |> Podaj wysokoœæ: \n -> ";
    cin >> h;
    cout << "\nPole: " << a * h << " cm2" << endl;
    cout << "Obwód: " << 2 * (a + b) << " cm" << endl;
    linia();
}

void szesciokat() {
    float a;
    cout << "\n |> Podaj d³ugoœæ boku: \n -> ";
    cin >> a;
    cout << "\nPole: " << (3 * 1.73205 * a * a) / 2 << " cm2" << endl;
    cout << "Obwód: " << 6 * a << " cm" << endl;
    linia();
}


//menu
void menu() {
	int wybor = 0;
	int wyborwyjscie = 0;
	
	cout << "\n-+=========- Lista Figur -=========+-";
	cout << "\n    1. Kwadrat        2.Prostok¹t";
	cout << "\n    3. Trapez         4.Trójk¹t";
	cout << "\n    5. Równoleg³obok  6.Szeœciok¹t";
	linia();
	
	while(true)
	{
		
	cout << "\n |> Wybierz Figure Do Obliczenia\n -> ";
	cin >> wybor; 
	
		

switch(wybor) {
    case 1: {
        linia();
        cout << "\nWybrano Kwadrat\n";
        kwadrat();
        break;
    }

    case 2: {
        linia();
        cout << "\nWybrano Prostok¹t\n";
        prostokat();
        break;
    }

    case 3: {
        linia();
        cout << "\nWybrano Trapez\n";
        trapez();
        break;
    }

    case 4: {
        linia();
        cout << "\nWybrano Trójk¹t\n";
        trojkat();
        break;
    }

    case 5: {
        linia();
        cout << "\nWybrano Równoleg³obok\n";
        rownoleglobok();
        break;
    }

    case 6: {
        linia();
        cout << "\nWybrano Szeœciok¹t\n";
        szesciokat();
        break;
    }


    default: {
        linia();
        cout << " |> Poda³eœ z³¹ liczbê!\n";
        break;
    }

		
		
		
		
	} //zamkniecie switch
	
		cout << "\n |> Wyjsc Z Programu? 1 = tak,  0 = nie \n -> ";
		cin >> wyborwyjscie;
		if(wyborwyjscie == 1)
			{
				break;
			}
		else 
			{
				wyborwyjscie = 0;
				linia();
			}
		
	} //zamkniecie while
		
} //zamkniecie funkcji

int main() { //obliczenie pol figur
	setlocale(LC_CTYPE, "Polish");
	menu();
}


