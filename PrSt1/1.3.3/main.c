#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, wynik;
    printf("Podaj 3 liczby calkowite: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1 >= n2)
        if(n1 > n3)
            wynik = n1;
        else
            wynik = n3;
    if(n2 >= n1)
        if(n2 > n3)
            wynik = n2;
        else
            wynik = n3;
    printf("Najwieksza liczba: %d", wynik);

    return 0;
}
