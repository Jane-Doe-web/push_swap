/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:35:35 by esteudle          #+#    #+#             */
/*   Updated: 2025/03/25 18:32:18 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	count_number_bits(t_list **a)
{
	int		max_index;
	int		i;
	t_list	*temp;

	if (!a || !*a)
		return (0);
	i = 0;
	temp = *a;
	max_index = temp->index;
	while (temp)
	{
		if (temp->index > max_index)
			max_index = temp->index;
		temp = temp->next;
	}
	while (max_index)
	{
		max_index = max_index >> 1;
		i++;
	}
	return (i);
}

void	radix_sort(t_list **a, t_list **b)
{
	int	num_bits;
	int	size;
	int	bits;
	int	temp;

	num_bits = count_number_bits(a);
	bits = 0;
	size = ft_lstsize(*a);
	temp = size;
	while (bits < num_bits)
	{
		while (size > 0)
		{
			if ((((*a)->index >> bits) & 1) == 0)
				push_b(a, b);
			else
				rotate(a);
			size--;
		}
		while (*b)
			push_a(b, a);
		bits++;
		size = temp;
	}
}
