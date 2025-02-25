#include <iostream>
#include <unistd.h>
using namespace std;

int main() 
{
	//policz sumê 10 kolejnych liczb pierwszy do 1
	//int i = 0;
	//int suma = 0;
	//while (i < 10)
	//{
	//	i++;
	//	suma = suma + i;
	//	cout << "i = " << i << " | suma posrednia = "<< suma << endl;
	//	sleep(1);
	//}
	//cout << "Suma 10 Kolejnych liczb to: " << suma << endl;
	//do
	//{
	//	if (i < 20) 
	//	{
	//	i = i + 2;
	//	suma = suma + i;
	//	cout << "i = " << i << " | suma posrednia = "<< suma << endl;
	///	sleep(1);	
	//	} 
	//	else 
	//	{
	//		break;
	//	}
	//}
	//while(true);
	//cout << "Suma 10 Kolejnych liczb to: " << suma << endl;
// wypisz mi 35 liczb pocz¹wszy od 87 z krokiem -5
	int i = 87;
	int suma = 0;
	int liczba = 0;
	do
	{
		if (liczba < 35)
		{
			liczba++; 
			i = i - 5;
			suma = suma + i;
			cout<< liczba << ". |" <<  " i = " << i << endl;
		} 
		else
		{
			break;
		}
	}
	while(true);
}

