//Napisz funkcjê otrzymuj¹c¹ jako argumenty wskaŸniki do dwóch zmiennych typu int,
//która zamienia ze sob¹ wartoœci wskazywanych zmiennych tylko wtedy, gdy wskazywana przez drugi argument zmienna jest
//mniejsza od zmiennej wskazywanej przez pierwszy argument.

#include <stdio.h>
#include <stdlib.h>

void zamien(int *, int *);

int main()
{
    int a = 15, b = 19;
    zamien(&a, &b);
    printf("%d %d", a, b);
    return 0;
}

void zamien(int *a, int *b)
{
    if(*b < *a)
    {
        int l1 = *a;
        *a = *b;
        *b = l1;
    }
}
