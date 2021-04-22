#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int f1(int a)
{
    return a;
}

int f2(int a)
{
    return a;
}

bool wywolaj(int (*f1)(int a1), int (*f2)(int a2), unsigned int n)
{
    for(int i = 0; i <= n; i++)
        if(f1(i) != f2(i))
            return false;
    return true;
}

int main()
{
    printf("%d\n", wywolaj(f1, f2, 5));
    return 0;
}
