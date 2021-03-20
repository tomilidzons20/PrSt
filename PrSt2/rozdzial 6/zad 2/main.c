#include <stdio.h>
#include <stdlib.h>

#define RZAD 5

int main()
{
    for(int i = 0; i < RZAD; i++)
    {
        for(int j = 0; j <= i ; j++)
            printf("$");
        printf("\n");
    }
    return 0;
}
