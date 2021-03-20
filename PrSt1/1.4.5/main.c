#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    int wynik = 0;
    printf("Podaj nieujemna liczbe calkowita: ");
    scanf("%d", &n);
    for(i = 1; i < n+1; i++)
        wynik += (i*i);
    printf("%d", wynik);
    return 0;
}
