#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int as, lz = 0;
    printf("Wpisuj rzeczy a wyswietle kazdy znak wraz z jego dziesietnym kodem ASCII\n");
    printf("Znak # konczy program\n");
    while((ch = getchar()) != '#')
    {
        as = ch;
        if(ch == '\n')
            lz = 0;
        if(ch == ' ' || ch == '\n')
            continue;
        else
        {
            printf(" %c -> %d |", ch, as);
            lz++;
        }
        if(lz % 8 == 0)
        {
            lz = 0;
            printf("\n");
        }
    }
    printf("\nKoniec programu");
    return 0;
}
