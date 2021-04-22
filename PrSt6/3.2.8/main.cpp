#include <iostream>

using namespace std;

void funkcja(int &a, int *b)
{
    int tym;
    tym = a;
    a = *b;
    *b = tym;
}

int main()
{
    int l1 = 4;
    int l2 = 5;
    funkcja(l1, &l2);
    cout << l1 << endl << l2 << endl;
    return 0;
}
