//Napisz funkcjê, której argumentami s¹ dwa wskaŸniki do sta³ych typu int,
//zaœ zwracan¹ wartoœci¹ jest suma wartoœci zmiennych wskazywanych przez argumenty.

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
