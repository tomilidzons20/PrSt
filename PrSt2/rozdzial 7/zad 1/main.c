#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int odstepy = 0, nowelinie = 0, inneznaki = 0;
    printf("Wpisuj rzeczy a policze liczbe odstepow, znakow nowej linii i wszystkich innych znakow\n");
    printf("Znak # konczy zabawe\n");
    while((ch = getchar()) != '#')
    {
        if(isgraph(ch))
            inneznaki++;
        if(isspace(ch) && ch != '\n')
            odstepy++;
        if(ch == '\n')
            nowelinie++;
    }
    printf("Liczba odstepow: %d, liczba nowych linii: %d, liczba innych znakow: %d\n", odstepy, nowelinie, inneznaki);
    printf("Dzieki za zabawe");
    return 0;
}
