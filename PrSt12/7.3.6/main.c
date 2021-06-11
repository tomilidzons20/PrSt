#include <stdio.h>
#include <stdlib.h>

struct element * znajdz(struct element * list, int a)
{
    while((list != NULL) && (list->i != a))
        list = list->next;
    return list;
};
