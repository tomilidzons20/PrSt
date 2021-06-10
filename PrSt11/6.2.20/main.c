#include <stdio.h>
#include <stdlib.h>

void zamien(unsigned int n, unsigned int m, int tab1[n][m], int tab2[n][m])
{
    int tym;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            tym = tab1[i][j];
            tab1[i][j] = tab2[i][j];
            tab2[i][j] = tym;
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
    unsigned int n = 2, m = 3;
    int tab1[2][3] = {{1, 2, 3}, {1, 2, 3}};
    int tab2[2][3] = {{-1, -2, -3}, {-1, -2, -3}};
    wypisz(n, m, tab1);
    wypisz(n, m, tab2);
    zamien(n, m, tab1, tab2);
    wypisz(n, m, tab1);
    wypisz(n, m, tab2);
    return 0;
}
