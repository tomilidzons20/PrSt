//Napisz bezargumentow� funkcj�, kt�ra rezerwuje pami�� dla pojedynczej
//zmiennej typu double i zwraca jako warto�� wska�nik do niej

#include <stdio.h>
#include <stdlib.h>

double *alokuj();

int main()
{
    int *wynik;
    wynik = alokuj();
    printf("%d", wynik);
    return 0;
}

double *alokuj()
{
    return malloc(sizeof(double));
}
