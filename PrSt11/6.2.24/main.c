#include <stdio.h>
#include <stdlib.h>

void przepnij(unsigned int n, unsigned int m, int tab[n][m])
{
    int tym;
    for(int i = 0; i < n; i++)
    {
        tym = tab[i][m-1];
        for(int j = m - 1; j > 0; j--)
        {
            tab[i][j] = tab[i][j-1];
        }
        tab[i][0] = tym;
    }
}

void wypisz(unsigned int n, unsigned int m, int tab[n][m])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d\t", tab[i][j]);
        }
        printf("\n");
    }
    printf("========\n");
}

int main()
{
    unsigned int n = 3, m = 3;
    int tab1[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    wypisz(n, m, tab1);
    przepnij(n, m, tab1);
    wypisz(n, m, tab1);
    return 0;
}
