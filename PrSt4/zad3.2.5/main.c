//Napisz funkcj�, kt�rej argumentami s� dwa wska�niki do sta�ych typu int,
//za� zwracan� warto�ci� jest suma warto�ci zmiennych wskazywanych przez argumenty.

#include <stdio.h>
#include <stdlib.h>

int suma(int *, int *);

int main()
{
    const int a = 3, b = 8;
    int wynik = suma(&a, &b);
    printf("%d", wynik);
    return 0;
}

int suma(int *a, int *b)
{
    return (*a + *b);
}
