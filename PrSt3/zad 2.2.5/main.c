#include <stdio.h>
#include <stdlib.h>

float potega(int);

int main()
{
    int liczba;
    printf("Podaj liczbe calkowita n a podniose 2 do tej potegi: ");
    scanf("%d", &liczba);
    printf("%g", potega(liczba));
    return 0;
}

float potega(int n)
{
    float wynik = 1;
    if(n > 0)
    {
        for(int i = n; i != 0; i--)
            wynik *= 2;
    }
    else
    {
        for(int i = n; i != 0; i++)
            wynik *= 2;
        wynik = 1 / wynik;
    }
    return wynik;
}
