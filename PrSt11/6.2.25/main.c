#include <stdio.h>
#include <stdlib.h>

void przepisz(int n, int m, int tab[n][m])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < m; j++)
        {
            int tym = tab[i][j];
            tab[i][j] = tab[j][i];
            tab[j][i] = tym;
        }
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
    int tab1[3][3] = {{1, 2, 3}, {-1, -2, -3}, {4, 4, 4}};
    wypisz(n, m, tab1);
    przepisz(n, m, tab1);
    wypisz(n, m, tab1);
    return 0;
}
