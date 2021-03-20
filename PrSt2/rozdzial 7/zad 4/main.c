#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int izm = 0;
    printf("Wpisuj slowa a zmienie . w ! a ! w !! i policze ilosc zmian\n");
    printf("# konczy program\n");
    while((ch = getchar()) != '#')
    {
        if(ch == '!')
        {
            ch = '!';
            izm++;
            printf("%c%c", ch,ch);
        }
        else
        {
            if(ch == '.')
            {
                ch = '!';
                izm++;
            }
            printf("%c", ch);
        }
    }
    printf("\nIlosc zmian: %d", izm);
    return 0;
}
