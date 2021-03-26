#include <stdio.h>
#include <stdlib.h>

void przypisanie(unsigned int, int*, int*, int*);
void wyswietl(unsigned int, int*);

int main()
{
    unsigned int n = 5;
    int tab1[] = {2, 7, 4, 1, 1};
    int tab2[] = {1, 1, 1, 1, 2};
    int tab3[] = {3, 4, 5, 6, 7};
    wyswietl(n, &tab1);
    wyswietl(n, &tab2);
    wyswietl(n, &tab3);
    przypisanie(n, &tab1, &tab2, &tab3);
    printf("==============\n");
    wyswietl(n, &tab1);
    wyswietl(n, &tab2);
    wyswietl(n, &tab3);
    return 0;
}

void przypisanie(unsigned int n, int *tab1, int *tab2, int *tab3)
{
    //a
//    for(int i = 0; i < n; i++)
//        tab3[i] = tab1[i] + tab2[i];
    //b
//    for(int i = 0; i < n; i++)
//        if(tab1[i] >= tab2[i])
//            tab3[i] = tab1[i];
//        else
//            tab3[i] = tab2[i];
    //c
    int t3, t2;
    for(int i = 0; i < n; i++)
    {
        t3 = tab3[i];
        t2 = tab2[i];
        tab2[i] = tab1[i];
        tab3[i] = t2;
        tab1[i] = t3;
    }
}

void wyswietl(unsigned int n, int *tab)
{
    for(int i = 0; i < n; i++)
        printf("%d ", tab[i]);
    printf("\n");
}
