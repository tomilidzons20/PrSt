#include <stdio.h>
#include <stdlib.h>

unsigned int nwyraz(unsigned int);

int main()
{
    int liczba;
    printf("podaj dodatnia liczbe calkowita n a oblicze ten wyraz ciagu a_n = 2 * a_n-1 + 5\n");
    scanf("%d", &liczba);
    if(liczba < 0)
        return 0;
    printf("%d", nwyraz(liczba));
    return 0;
}

unsigned int nwyraz(unsigned int n)
{
    if(n <= 0)
        return 1;
    else
        return 2 * nwyraz(n-1) + 5;
}
