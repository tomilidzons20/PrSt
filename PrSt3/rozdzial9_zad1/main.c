#include <stdio.h>
#include <stdlib.h>

double min(double, double);

int main()
{
    double l1, l2;
    printf("Podaj dwie liczby a zwroce mniejsza: ");
    scanf("%lf %lf", &l1, &l2);
    if(l1 == l2)
        printf("Takie same liczby\n");
    else
        printf("%lf", min(l1, l2));
    return 0;
}

double min(double x, double y)
{
    if(x < y)
        return x;
    else
        return y;
}
