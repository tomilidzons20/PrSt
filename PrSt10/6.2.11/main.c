#include <stdio.h>
#include <stdlib.h>

void jedynka(int tab[][100], unsigned int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            tab[i][j] = 1;
        }
    }
}

int suma(int tab[][100], unsigned int n)
{
    int suma = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            suma += tab[i][j];
        }
    }
    return suma;
}

int main()
{
    unsigned int n = 3;
    int tab[n][100];
    jedynka(tab, n);
    printf("Suma : %d", suma(tab, n));
    return 0;
}
