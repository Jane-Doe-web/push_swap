/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_and_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:37:00 by esteudle          #+#    #+#             */
/*   Updated: 2025/03/25 18:16:41 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	stack_sorted(t_list **a)
{
	t_list	*temp;

	if (!a || !*a)
		return (1);
	temp = *a;
	while (temp->next)
	{
		if (temp->nbr > temp->next->nbr)
			return (0);
		temp = temp->next;
	}
	return (1);
}

void	swap_a(t_list **x)
{
	t_list	*temp;

	if (!x || !*x || !(*x)->next)
		return ;
	temp = (*x)->next;
	(*x)->next = temp->next;
	temp->next = *x;
	*x = temp;
	ft_printf("sa\n");
}

void	swap_b(t_list **x)
{
	t_list	*temp;

	if (!x || !*x || !(*x)->next)
		return ;
	temp = (*x)->next;
	(*x)->next = temp->next;
	temp->next = *x;
	*x = temp;
	ft_printf("sb\n");
}

void	push_b(t_list **x, t_list **y)
{
	t_list	*temp;

	if (!x || !*x)
		return ;
	temp = *x;
	*x = (*x)->next;
	temp->next = *y;
	*y = temp;
	ft_printf("pb\n");
}

void	push_a(t_list **x, t_list **y)
{
	t_list	*temp;

	if (!x || !*x)
		return ;
	temp = *x;
	*x = (*x)->next;
	temp->next = *y;
	*y = temp;
	ft_printf("pa\n");
}
