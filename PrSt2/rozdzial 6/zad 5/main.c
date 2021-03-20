#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l1, l2;
    printf("Podaj zakres od jakiej liczby do jakiej ma byc tabela: ");
    scanf("%d %d", &l1, &l2);
    if(l1 > l2)
    {
        printf("Pierwsza liczba mniejsza od drugiej");
        return 0;
    }
    for(int i = l1; i <= l2; i++)
        printf("%d  %d  %d\n", i, i*i, i*i*i);
    return 0;
}
