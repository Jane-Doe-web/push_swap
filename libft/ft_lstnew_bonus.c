/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:46:34 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/21 18:03:02 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(long nbr, int index)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->nbr = nbr;
	new->index = index;
	new->next = NULL;
	return (new);
}
/*
int main()
{
	t_list *a;
	a = ft_lstnew("HI");
	printf("%s", (char *)a->content);
}
*/
