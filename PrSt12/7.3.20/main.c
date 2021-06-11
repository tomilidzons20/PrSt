#include <stdio.h>
#include <stdlib.h>

void zerujBG(struct element * list)
{
    while(list != NULL)
    {
        list->i = 0;
        list = list->next;
    }
}

void zerujZG(struct element * list)
{
    while(list->next != NULL)
    {
        list = list->next;
        list->i = 0;
    }
}
