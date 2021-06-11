#include <stdio.h>
#include <stdlib.h>

struct element * usun(struct element * list, struct element * el)
{
    struct element * wsk, *wsk2;
    if(list == NULL)
        return list;
    wsk = list;
    if(list == el)
    {
        list = list->next;
        free(wsk);
        return list;
    }
    while((wsk->next != NULL) && (wsk->next != el))
        wsk = wsk->next;
    if(wsk->next != NULL)
    {
        wsk2 = wsk->next;
        wsk->next = wsk2->next;
        free(wsk2);
    }
    return list;
};
