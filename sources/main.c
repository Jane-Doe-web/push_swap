#include "push_swap.h"

void    error_handler (char *str)
{
    ft_printf("%s", str);
    exit (1);
}


void    free_args(char **args)
{
    int i;

    i = 0;
    while (args[i])
        free(args[i++]);
    free(args);
}

int    check_if_digit (char **arr)
{
    int i;
    int j;

    i = 0;
    while (arr[i])
    {
        j = 0;
        if (arr[i][0] == '-' || arr[i][0] == '+')
            j++;
        if (!arr[i][j])
            error_handler("Error\n");
        while (arr[i][j])
        {    
            if (!ft_is_digit(arr[i][j]))
                error_handler("Error\n");
            j++;
        }
        i++;
    }
    return (0);
}

void    free_stack_nodes(t_stack_node **a)
{
    ft_printf("Error\n");
    ft_lstclear(a, free);
    exit (1);
}

void    init_stack_a(t_stack_node **a, char**args)
{
    int i;
    t_stack_node *temp;
    t_stack_node *new;

    i = 0;
    *a = ft_lstnew(atoi(args[0]), -1);
    if (atoi(args[i]) > INT_MAX || atoi(args[i]) < INT_MIN)
        free_stack_nodes(&a);     
    temp = *a;
    while (args[i])
    {
        if (atoi(args[i]) > INT_MAX || atoi(args[i]) < INT_MIN)
            free_stack_nodes(&a);  
        new = ft_lstnew(atoi(args[i]), -1);
        ft_lstadd_back(&temp, new);
        temp = new;
        i++;
    }
}

int main(int argc, char *argv[])
{
    t_stack_node *a;
    t_stack_node *b;
    char    **args;

    a = NULL;
    b = NULL;
    if (argc == 1 || (argc == 2 && !argv[1][0]))
        return (1);
    else if (argc == 2)
        args = ft_split(argv[1], ' ');
    else
        args = argv + 1;
    check_if_digit(args);
    init_stack_a(&a, args);
    if (args && *args)
        free_args(&args);
    if (!stack_sorted(&a))
    {
        if (stack_len(a) == 2)
            sa(&a);
        else
            sort_stacks(&a, &b);
    }
    free_stack(&a);
}
