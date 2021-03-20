#include <stdio.h>
#include <stdlib.h>

#define RZAD 6

int main()
{
    char ch = 'F';
    for(int i = 0; i < RZAD; i++)
    {
        for(int j = 0; j <= i; j++)
            printf("%c", (ch - j));
        printf("\n");
    }
    return 0;
}
