#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr, sp = 0, snp = 0, ip = 0, inp = 0;
    float srp, srnp;
    printf("Wpisuj liczby calkowite, 0 konczy program.\n");
    while(1)
    {
        scanf("%d", &nr);
        if(nr == 0)
            break;
        switch(nr % 2)
        {
            case 0:
                sp += nr;
                ip++;
                break;
            case 1:
                snp += nr;
                inp++;
                break;
        }
    }
    if(ip == 0 && inp == 0)
    {
        printf("Niepodano zadnych liczb!");
        return 0;
    }
    if(ip > 0)
    {
        srp = (float)sp / (float)ip;
        printf("Ilosc liczb parzystych: %d, Suma liczb parzystych: %d, Srednia wartosc liczb parzystych: %g\n", ip, sp, srp);
    }
    if(inp > 0)
    {
        srnp = (float)snp / (float)inp;
        printf("Ilosc liczb nieparzystych: %d, Suma liczb nieparzystych: %d, Srednia wartosc liczb nieparzystych: %g\n", inp, snp, srnp);
    }
    return 0;
}
