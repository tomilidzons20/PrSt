#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1.3.9
    int wybor3;
    float liczba1, liczba2, wynik;
    printf("Wybierz operacje\n");
    printf("1. Dodawanie\n");
    printf("2. Odejmowanie\n");
    printf("3. Mnozenie\n");
    printf("4. Dzielenie\n");
    scanf("%d", &wybor3);
    if(wybor3 > 4 || wybor3 < 1)
    {
        printf("Nieprawidlowe dzialanie");
        return 0;
    }
    printf("Podaj 2 liczby: \n");
    scanf("%f %f", &liczba1, &liczba2);
    if(wybor3 == 1)
        wynik = liczba1 + liczba2;
    if(wybor3 == 2)
        wynik = liczba1 - liczba2;
    if(wybor3 == 3)
        wynik = liczba1 * liczba2;
    if(wybor3 == 4)
        wynik = liczba1 / liczba2;
    printf("Wynik dzialania: %g", wynik);
    return 0;
}
