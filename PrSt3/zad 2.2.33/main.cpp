#include <iostream>

using namespace std;

unsigned int suma(unsigned int = 0, unsigned int = 0, unsigned int = 0, unsigned int = 0, unsigned int = 0);

int main()
{
    cout << "Liczenie sumy bez wszystkich argumentow (argumenty domyslne)" << endl;
    cout << suma(1,2,3,4,5) << endl;
    cout << suma(1,2,4,5) << endl;
    cout << suma(1,4,5) << endl;
    cout << suma(4,5) << endl;
    cout << suma() << endl;
    return 0;
}

unsigned int suma(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e)
{
    unsigned int wynik = 0;
    wynik = a + b + c + d + e;
    return wynik;
}
