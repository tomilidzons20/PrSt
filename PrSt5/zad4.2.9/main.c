#include <stdio.h>
#include <stdlib.h>

void zamiana(unsigned int, int*, int*, int*);
void wyswietl(unsigned int, int*);

int main()
{
    unsigned int n = 5;
    int tab1[] = {5,4,3,5,5};
    int tab2[] = {1,3,8,8,3};
    int tab3[] = {9,9,3,1,2};
    wyswietl(n, &tab1);
    wyswietl(n, &tab2);
    wyswietl(n, &tab3);
    zamiana(n, &tab1, &tab2, &tab3);
    printf("==============\n");
    wyswietl(n, &tab1);
    wyswietl(n, &tab2);
    wyswietl(n, &tab3);
    return 0;
}

void zamiana(unsigned int n, int *tab1, int *tab2, int *tab3)
{
    int t1, t2, t3;
    for(int i = 0; i < n; i++)
    {
        t1 = tab1[i];
        t2 = tab2[i];
        t3 = tab3[i];
        if(tab1[i] >= tab2[i])
        {
            if(tab1[i] >= tab3[i])
            {
                tab1[i] = t1;
                tab2[i] = t2;
                tab3[i] = t3;
            }
            else
            {
                tab1[i] = t3;
                tab2[i] = t1;
                tab3[i] = t2;
            }
        }
        else
        {
            if(tab2[i] >= tab3[i])
            {
                tab1[i] = t2;
                tab2[i] = t1;
                tab3[i] = t3;
            }
            else
            {
                tab1[i] = t3;
                tab2[i] = t2;
                tab3[i] = t1;
            }
        }

    }
}

void wyswietl(unsigned int n, int *tab)
{
    for(int i = 0; i < n; i++)
        printf("%d", tab[i]);
    printf("\n");
}
