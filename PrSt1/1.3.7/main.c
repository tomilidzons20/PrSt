#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, delta, x1, x2, pdelta;
    printf("Podaj wspolczynniki rownania kwadratowego a,b,c w postaci: ax^2 + bx + c = 0\n");
    scanf("%f %f %f", &a, &b, &c);
    delta = (b*b) - (4*a*c);
    pdelta = sqrt(delta);
    if(delta > 0)
    {
        x1 = ((-b - pdelta)/(2*a));
        x2 = ((-b + pdelta)/(2*a));
        printf("x1 = %g, x2 = %g", x1, x2);
    }
    if(delta == 0)
    {
        x1 = ((-1*b)/(2*a));
        printf("x = %g", x1);
    }
    if(delta < 0)
        printf("Brak rozwiazan!");
    return 0;
}
