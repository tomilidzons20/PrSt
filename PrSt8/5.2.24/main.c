#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void kopiuj(char *nap1, char *nap2)
{
    strcpy(nap2, nap1);
}

void kopiujt(wchar_t *nap1, wchar_t *nap2)
{
    wcscpy(nap2, nap1);
}

int main()
{
    char nap1[] = "Bagno";
    char nap2[15] = "";
    wchar_t nap3[] = L"mleczny";
    wchar_t nap4[15] = L"";
    printf("%s\n%s\n", nap1, nap2);
    kopiuj(&nap1, &nap2);
    printf("%s\n%s\n", nap1, nap2);
    printf("===========================\n");
    printf("%ls\n%ls\n", nap3, nap4);
    kopiujt(&nap3, &nap4);
    printf("%ls\n%ls\n", nap3, nap4);
    return 0;
}
