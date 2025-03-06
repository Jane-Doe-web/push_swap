#include "push_swap.h"

int    stack_sorted(t_list **a)
{
    t_list *temp;

    if (!a || !*a)
        return(1);
    temp = *a;
    while (temp->next)
    {
        if (temp->nbr > temp->next->nbr)
            return (0);
        temp = temp->next;
    }
    return (1);    
}
