#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "../libft/libft.h"


int     check_if_digit (char **arr, int need_to_free);
int     stack_sorted(t_list **a);
long	ft_atol(const char *nptr, t_list **a, char **args, int flag);
void    free_args(char **args);
void    error_handler (char *str, char **args, int need_to_free);
void    free_stack_nodes(t_list **a);
void    init_stack_a(t_list **a, char**args, int flag);
void    check_doubles(char **args, int flag);
void    swap_a (t_list **x);
void    swap_b (t_list **x);
void    rotate(t_list **x);
void    push_swap(t_list **a);
void    reverse_rotate(t_list **x);
long    find_min(t_list **a);
void    set_index(t_list **a);
void    push_a(t_list **x, t_list **y);
void    push_b(t_list **x, t_list **y);
void    sort_three(t_list **a);
long    find_smallest(t_list **x);
long    find_greatest(t_list **x);
void    sort_four(t_list **a, t_list **b);
void    sort_five(t_list **a, t_list **b);
void    radix_sort(t_list **a, t_list **b);
void    exit_function(char **args, int need_to_free);
int     count_number_bits(t_list **a);
#endif