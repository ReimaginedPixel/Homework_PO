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
    cout << "Pole: " << a * a << endl;
    cout << "Obw�d: " << 4 * a << endl;
    linia();
}

void prostokat() {
    float a, b;
    cout << "\n |> Podaj d�ugo��: \n -> ";
    cin >> a;
    cout << " |> Podaj szeroko��: \n -> ";
    cin >> b;
    cout << "Pole: " << a * b << endl;
    cout << "Obw�d: " << 2 * (a + b) << endl;
    linia();
}

void trapez() {
    float a, b, h, bok1, bok2;
    cout << "\n |> Podaj podstaw� a: \n -> ";
    cin >> a;
    cout << " |> Podaj podstaw� b: \n -> ";
    cin >> b;
    cout << " |> Podaj wysoko�� h: \n -> ";
    cin >> h;
    cout << " |> Podaj bok 1: \n -> ";
    cin >> bok1;
    cout << " |> Podaj bok 2: \n -> ";
    cin >> bok2;
    cout << "Pole: " << ((a + b) * h) / 2 << endl;
    cout << "Obw�d: " << a + b + bok1 + bok2 << endl;
    linia();
}

void trojkat() {
    float a, h, b, c;
    cout << "\n |> Podaj podstaw�: \n -> ";
    cin >> a;
    cout << " |> Podaj wysoko��: \n -> ";
    cin >> h;
    cout << " |> Podaj bok 2:\n ->  ";
    cin >> b;
    cout << " |> Podaj bok 3: \n -> ";
    cin >> c;
    cout << "Pole: " << (a * h) / 2 << endl;
    cout << "Obw�d: " << a + b + c << endl;
    linia();
}

void rownoleglobok() {
    float a, h, b;
    cout << "\n |> Podaj podstaw�: \n -> ";
    cin >> a;
    cout << " |> Podaj bok s�siedni: \n -> ";
    cin >> b;
    cout << " |> Podaj wysoko��: \n -> ";
    cin >> h;
    cout << "Pole: " << a * h << endl;
    cout << "Obw�d: " << 2 * (a + b) << endl;
    linia();
}

void szesciokat() {
    float a;
    cout << "\n |> Podaj d�ugo�� boku: \n -> ";
    cin >> a;
    cout << "Pole: " << (3 * 1.73205 * a * a) / 2 << endl; // sqrt(3) ? 1.73205
    cout << "Obw�d: " << 6 * a << endl;
    linia();
}


//menu
void menu() {
	int wybor = 0;
	int wyborwyjscie = 0;
	
	cout << "\n-+=========- Lista Figur -=========+-";
	cout << "\n    1. Kwadrat        2.Prostok�t";
	cout << "\n    3. Trapez         4.Tr�jk�t";
	cout << "\n    5. R�wnoleg�obok  6.Sze�ciok�t";
	linia();
	
	while(true)
	{
		
	cout << "\n |> Wybierz Figure Do Obliczenia\n -> ";
	cin >> wybor; 
	
		

switch(wybor) {
    case 1: {
        linia();
        cout << "Wybrano Kwadrat\n";
        kwadrat();
        break;
    }

    case 2: {
        linia();
        cout << "Wybrano Prostok�t\n";
        prostokat();
        break;
    }

    case 3: {
        linia();
        cout << "Wybrano Trapez\n";
        trapez();
        break;
    }

    case 4: {
        linia();
        cout << "Wybrano Tr�jk�t\n";
        trojkat();
        break;
    }

    case 5: {
        linia();
        cout << "Wybrano R�wnoleg�obok\n";
        rownoleglobok();
        break;
    }

    case 6: {
        linia();
        cout << "Wybrano Sze�ciok�t\n";
        szesciokat();
        break;
    }


    default: {
        linia();
        cout << " |> Poda�e� z�� liczb�!\n";
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


