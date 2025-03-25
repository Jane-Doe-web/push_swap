/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:34:58 by esteudle          #+#    #+#             */
/*   Updated: 2025/03/25 17:35:12 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "../libft/libft.h"

int		check_if_digit(char **arr, int need_to_free);
int		stack_sorted(t_list **a);
int		count_number_bits(t_list **a);
void	free_args(char **args);
void	error_handler(char *str, char **args, int need_to_free);
void	free_stack_nodes(t_list **a);
void	init_stack_a(t_list **a, char**args, int flag);
void	check_doubles(char **args, int flag);
void	swap_a(t_list **x);
void	swap_b(t_list **x);
void	rotate(t_list **x);
void	push_swap(t_list **a);
void	reverse_rotate(t_list **x);
void	set_index(t_list **a);
void	push_a(t_list **x, t_list **y);
void	push_b(t_list **x, t_list **y);
void	sort_three(t_list **a);
void	sort_four(t_list **a, t_list **b);
void	sort_five(t_list **a, t_list **b);
void	radix_sort(t_list **a, t_list **b);
long	find_smallest(t_list **x);
long	find_greatest(t_list **x);
long	ft_atol(const char *nptr, t_list **a, char **args, int flag);
long	find_min(t_list **a);

#endif
