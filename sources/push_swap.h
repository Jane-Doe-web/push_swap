#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "../libft/libft.h"


int    check_if_digit (char **arr, int need_to_free);
long	ft_atol(const char *nptr, t_list **a, char **args, int flag);
void    free_args(char **args);
void    error_handler (char *str, char **args, int need_to_free);
void    free_stack_nodes(t_list **a);
void    init_stack_a(t_list **a, char**args, int flag);
void    check_doubles(char **args, int flag);

#endif