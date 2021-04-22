#include <stdio.h>
#include <stdlib.h>

int *funkcja(unsigned int n)
{
    return malloc(n * sizeof(double));
}

int main()
{
    printf("%d", funkcja(4));
    return 0;
}
