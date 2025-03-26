/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaning.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:34:06 by esteudle          #+#    #+#             */
/*   Updated: 2025/03/25 17:42:56 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	free_args(char **args)
{
	int	i;

	i = 0;
	while (args[i])
		free(args[i++]);
	free(args);
}

void	error_handler(char *str, char **args, int need_to_free)
{
	ft_printf("%s", str);
	if (need_to_free)
		free_args(args);
	exit (1);
}

void	free_stack_nodes(t_list **a)
{
	ft_printf("Error\n");
	ft_lstclear(a);
	exit (1);
}

void	clear_and_exit(t_list **a)
{
	ft_lstclear(a);
	exit (1);
}
