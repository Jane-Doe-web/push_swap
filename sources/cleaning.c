#include "push_swap.h"

void    free_args(char **args)
{
    int i;

    i = 0;
    while (args[i])
        free(args[i++]);
    free(args);
}

void    error_handler (char *str, char **args, int need_to_free)
{
    ft_printf("%s", str);
    if (need_to_free)
        free_args(args);
    exit (1);
}

void    free_stack_nodes(t_list **a)
{
    ft_printf("Error\n");
    ft_lstclear(a);
    exit (1);
}

