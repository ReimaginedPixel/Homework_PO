#include <iostream>
#include <ctime>


using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    srand(time(NULL));
    cout << " Losowa " << rand() << endl;

    int losowa100 = rand() % 100 + 1;
    cout << "Liczba losowa z przedzialu od 1 do 100: " << losowa100 << endl;

    int losowa50 = rand() % 50 + 1;
    cout << "Liczba z przedzialu od 1 do 50: " << losowa50 << endl;

    return 0;
}
