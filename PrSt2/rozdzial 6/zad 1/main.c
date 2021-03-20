#include <stdio.h>
#include <stdlib.h>

#define ROZMIAR 26

int main()
{
    char litery[ROZMIAR];
    for(int i = 0; i < ROZMIAR; i++)
    {
        litery[i] = 'a' + i;
    }
    printf("%s", litery);
    return 0;
}
