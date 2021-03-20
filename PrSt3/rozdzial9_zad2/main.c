#include <stdio.h>
#include <stdlib.h>

void rzad_zn(char, int, int);

int main()
{
    char znak;
    int l1, l2;
    printf("Podaj znak, nr kolumny startowej, nr kolumny koncowej a narysuje to\n");
    scanf("%c %d %d", &znak, &l1, &l2);
    rzad_zn(znak, l1, l2);
    return 0;
}

void rzad_zn(char ch, int i, int j)
{
    for(int y = 0; y < 8; y++)
    {
        for(int x = 0; x < i - 1; x++)
            printf(" ");
        for(int x = 0; x <= j - i; x++)
            printf("%c", ch);
        printf("\n");
    }
}
