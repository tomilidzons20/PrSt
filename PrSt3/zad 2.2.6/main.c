#include <stdio.h>
#include <stdlib.h>

int potega(int, int);

int main()
{
    int l1, l2;
    printf("Podaj liczby dodatnie calkowite n i m przynajmniej jedna rozna od zera a policze n^m\n");
    scanf("%d %d", &l1, &l2);
    if((l1 == 0 && l2 == 0) || (l1 < 0 || l2 < 0))
    {
        printf("Nie poprawne liczby");
        return 0;
    }
    printf("Wynik = %d", potega(l1, l2));
    return 0;
}


int potega(int n, int m)
{
    int wynik = 1;
    for(int i = m; i != 0; i--)
        wynik *= n;
    return wynik;
}
