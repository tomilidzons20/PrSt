#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void wytnijzn(char *nap1, char *nap2)
{
    int i ,j;
    int wyst[256] = {};
    for(i = 0; nap2[i] != 0; i++)
        wyst[nap2[i]] = 1;
    for(i = 0, j = 0; nap1[i] != 0; i++)
        if(wyst[nap1[i]] == 1)
        {
            if(j < i)
                nap1[j] = nap1[i];
            j++;
        }
    nap1[j] = 0;
}

bool czywyst(wchar_t z, wchar_t *nap)
{
    int i;
    for(i = 0; nap[i] != 0; i++)
        if(nap[i] == z)
        return true;
    return false;
}

void wytnijzw(wchar_t *nap1, wchar_t *nap2)
{
    int i, j;
    for(i = 0, j = 0; nap1[i] != 0; i++)
        if(czywyst(nap1[i], nap2))
        {
            if(j < i)
                nap1[j] = nap1[i];
            j++;
        }
    nap1[j] = 0;
}

int main()
{
    char n1[] = "bagienny";
    char n2[15] = "bagno";
    wchar_t n3[] = L"mleczny";
    wchar_t n4[30] = L"mleko";
    printf("%s\n%s\n", n1, n2);
    wytnijzn(&n1, &n2);
    printf("%s\n%s\n", n1, n2);
    printf("===========================\n");
    printf("%ls\n%ls\n", n3, n4);
    wytnijzw(&n3, &n4);
    printf("%ls\n%ls\n", n3, n4);
    return 0;
}
