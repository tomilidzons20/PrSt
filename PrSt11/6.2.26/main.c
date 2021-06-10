#include <stdio.h>
#include <stdlib.h>

void przepisz(int n, int m, int tab1[n][m], int tab2[m][n])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < m; j++)
        {
            tab2[i][j] = tab1[j][i];
            tab2[j][i] = tab1[i][j];
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
    int tab2[3][3] = {{0,0,0}, {0,0,0}, {0,0,0}};
    wypisz(n, m, tab1);
    wypisz(n, m, tab2);
    przepisz(n, m, tab1, tab2);
    wypisz(n, m, tab2);
    return 0;
}
