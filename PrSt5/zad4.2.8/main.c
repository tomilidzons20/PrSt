#include <stdio.h>
#include <stdlib.h>

void wyswietl1(unsigned int, int*);
void wyswietl2(unsigned int, double*);
void przepisz(unsigned int, int*, int*, double*);

int main()
{
    unsigned int n = 5;
    int tab1[] = {1,2,3,4,5};
    int tab2[] = {5,4,3,2,1};
    double tab3[] = {0,0,0,0,0,0,0,0,0,0};
    wyswietl1(n, &tab1);
    wyswietl1(n, &tab2);
    wyswietl2(n, &tab3);
    przepisz(n, &tab1, &tab2, &tab3);
    printf("============\n");
    wyswietl1(n, &tab1);
    wyswietl1(n, &tab2);
    wyswietl2(n, &tab3);
    return 0;
}

void przepisz(unsigned int n, int *tab1, int *tab2, double *tab3)
{
    //a
//    for(int i = 0; i < n; i++)
//        tab3[i] = tab1[i];
//    for(int i = n, j = 0; i < 2*n; i++, j++)
//        tab3[i] = tab2[j];
    //b
    for(int i = 0, j = 1, k = 0; i < n; i++, j += 2, k += 2)
        {
            tab3[j] = tab1[i];
            tab3[k] = tab2[i];
        }
}

void wyswietl1(unsigned int n, int *tab)
{
    for(int i = 0; i < n; i++)
        printf("%d ", tab[i]);
    printf("\n");
}

void wyswietl2(unsigned int n, double *tab)
{
    for(int i = 0; i < 2 * n; i++)
        printf("%.2f ", tab[i]);
    printf("\n");
}
