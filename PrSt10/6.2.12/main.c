#include <stdio.h>
#include <stdlib.h>

void jedynka(unsigned int n, unsigned int m, int tab[n][m])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            tab[i][j] = 1;
        }
    }
}

int suma(unsigned int n, unsigned int m, int tab[n][m])
{
    int suma = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            suma += tab[i][j];
        }
    }
    return suma;
}

int main()
{
    unsigned int n = 3, m = 5;
    int tab[n][100];
    jedynka(n, m, tab);
    printf("Suma : %d", suma(n, m, tab));
    return 0;
}
