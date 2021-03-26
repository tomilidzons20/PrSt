#include <stdio.h>
#include <stdlib.h>

void przepisz(unsigned int, int*, int*);
void wyswietl(unsigned int, int*);

int main()
{
    unsigned int n = 8;
    int tab1[] = {2, 7, 4, 1, 1, 8, 9, 10};
    int tab2[] = {1, 1, 1, 1, 2, 2, 2, 3};
    wyswietl(n, &tab1);
    wyswietl(n, &tab2);
    przepisz(n, &tab1, &tab2);
    wyswietl(n, &tab1);
    wyswietl(n, &tab2);
    return 0;
}

void przepisz(unsigned int n, int *tab1, int *tab2)
{
    //a
//    for(int i = 0; i < n; i++)
//        tab2[i] = tab1[i];
    //b
    for(int j = n - 1, i = 0; j >= 0; j--, i++)
        tab2[i] = tab1[j];
}

void wyswietl(unsigned int n, int *tab)
{
    for(int i = 0; i < n; i++)
        printf("%d ", tab[i]);
    printf("\n");
}
