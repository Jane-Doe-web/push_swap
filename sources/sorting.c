/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:36:36 by esteudle          #+#    #+#             */
/*   Updated: 2025/03/25 18:19:17 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sort_four(t_list **a, t_list **b)
{
	push_b(a, b);
	sort_three(a);
	if ((*b)->index == 0)
		push_a(b, a);
	else if ((*b)->index == 1)
	{
		push_a(b, a);
		swap_a(a);
	}
	else if ((*b)->index == 2)
	{
		reverse_rotate(a);
		push_a(b, a);
		rotate(a);
		rotate(a);
	}
	else
	{
		push_a(b, a);
		rotate(a);
	}
}

long	find_smallest(t_list **x)
{
	long	min;
	t_list	*temp;

	temp = *x;
	min = temp->nbr;
	while (temp)
	{
		if (temp->nbr < min)
			min = temp->nbr;
		temp = temp->next;
	}
	return (min);
}

long	find_greatest(t_list **x)
{
	long	max;
	t_list	*temp;

	temp = *x;
	max = temp->nbr;
	while (temp)
	{
		if (temp->nbr > max)
			max = temp->nbr;
		temp = temp->next;
	}
	return (max);
}

void	sort_three(t_list **a)
{
	long	smallest;
	long	greatest;

	if (stack_sorted(a))
		return ;
	smallest = find_smallest(a);
	greatest = find_greatest(a);
	if ((*a)->nbr == smallest)
	{
		reverse_rotate(a);
		swap_a(a);
	}
	if ((*a)->nbr == greatest)
	{
		rotate(a);
		if (!stack_sorted(a))
			swap_a(a);
	}
	if (!stack_sorted(a))
	{
		if ((*a)->next->next->nbr == smallest)
			reverse_rotate(a);
		else
			swap_a(a);
	}
}

void	push_swap(t_list **a)
{
	t_list	*b;

	b = NULL;
	set_index(a);
	if (ft_lstsize(*a) == 2)
		swap_a(a);
	if (ft_lstsize(*a) == 3)
		sort_three(a);
	if (ft_lstsize(*a) == 4)
		sort_four(a, &b);
	if (ft_lstsize(*a) == 5)
		sort_five(a, &b);
	if (ft_lstsize(*a) > 5)
		radix_sort(a, &b);
}
