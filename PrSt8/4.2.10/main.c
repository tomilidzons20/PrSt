#include <stdio.h>
#include <stdlib.h>

int maks(unsigned int n, int * tab)
{
    int max = tab[0];
    for(int i = 1; i < n; i++)
        if(tab[i] > max)
            max = tab[i];
    return max;
}

int mini(unsigned int n, int * tab)
{
    int min = tab[0];
    for(int i = 1; i < n; i++)
        if(tab[i] < min)
            min = tab[i];
    return min;
}

int maksI(unsigned int n, int * tab)
{
    int max = tab[0];
    int ind = 0;
    for(int i = 1; i < n; i++)
        if(tab[i] > max)
            {
                max = tab[i];
                ind = i;
            }
    return ind;
}

int miniI(unsigned int n, int * tab)
{
    int min = tab[0];
    int ind = 0;
    for(int i = 1; i < n; i++)
        if(tab[i] < min)
            {
                min = tab[i];
                ind = i;
            }
    return ind;
}

int maksB(unsigned int n, int * tab)
{
    int max = tab[0];
    int tym = tab[0];
    for(int i = 1; i < n; i++)
        if(abs(tab[i]) > max)
            {
                max = abs(tab[i]);
                tym = tab[i];
            }
    return tym;
}

int maksBI(unsigned int n, int * tab)
{
    int max = tab[0];
    int tym = tab[0];
    int ind = 0;
    for(int i = 1; i < n; i++)
        if(abs(tab[i]) > max)
            {
                max = abs(tab[i]);
                tym = tab[i];
                ind = i;
            }
    return ind;
}


int main()
{
    int n = 4;
    int tab[] = {1, 4, -6, -2};
    printf("maks: %d\n", maks(n, &tab));
    printf("min: %d\n", mini(n, &tab));
    printf("maks index: %d\n", maksI(n, &tab));
    printf("min index: %d\n", miniI(n, &tab));
    printf("maks bezwzgl: %d\n", maksB(n, &tab));
    printf("maks bezwzgl index: %d\n", maksBI(n, &tab));
    return 0;
}
