//Napisz funkcj�, kt�rej argumentami s� n typu int oraz w wska�nik
//do int, kt�ra przepisuje warto�� n do zmiennej wskazywanej przez w

#include <stdio.h>
#include <stdlib.h>

void przepisanie(int, int *);

int main()
{
    int a = 3, b = 20;
    printf("a = %d, b = %d\n", a, b);
    przepisanie(a, &b);
    printf("a = %d, b = %d", a, b);
    return 0;
}

void przepisanie(int n, int *w)
{
    *w = n;
}
