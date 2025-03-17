#include "push_swap.h"

//move the elements up
void    rotate(t_list **x)
{
    t_list *temp;
    t_list *last;

    if (!x || !*x || !(*x)->next)
        return ;
    last = ft_lstlast(*x);
    temp = (*x)->next;
    last->next = *x;
    (*x)->next = NULL;
    *x = temp;
    ft_printf("ra\n");    
}
//move the elements down
void    reverse_rotate(t_list **x)
{
    t_list *temp;
    t_list *second_last;

    if (!x || !*x || !(*x)->next)
        return ;
    second_last = *x;
    while (second_last->next && second_last->next->next)
        second_last = second_last->next;
    temp = second_last->next;
    second_last->next = NULL;
    ft_lstadd_front(x, temp);
    ft_printf("rra\n"); 
}
long    find_min(t_list **a)
{
    t_list *temp;
    long min;
    int flag;

    if (!a || !*a)
        return (INT_MAX);
    flag = 1;
    temp = *a;
    while (temp)
    {
        if (temp->index == -1 && flag == 1) 
        {
            min = temp->nbr;
            flag = 0;
        }
        if (temp->index == -1 && temp->nbr < min)
            min = temp->nbr;
        temp = temp->next;
    }
    if (flag)
        return (INT_MAX);
    return (min);
}

void    set_index(t_list **a)
{
    t_list  *temp;
    long min;
    int i;

    if (!a || !*a)
        return ;
    i = 0;
    while (i < ft_lstsize(*a))
    {
        temp = *a;
        min = find_min(a);
        if (min == INT_MAX)
            return ;
        while (temp)
        {
            if (temp->nbr == min && temp->index == -1)
            {
                temp->index = i;
                i++;
                break;
            }
            temp = temp->next;
        }
    }
}
void    sort_five(t_list **a, t_list **b)
{
    while (ft_lstsize(*a) > 3)
    {
        if ((*a)->index == 0 || (*a)->index == 1)
            push_b(a, b);
        else
            rotate(a);
    }
    sort_three(a);
    if (stack_sorted(b))
        swap_b(b);
    push_a(b, a);
    push_a(b, a);
}
