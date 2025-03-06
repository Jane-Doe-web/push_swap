/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:21:06 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/21 20:43:27 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main ()
{
	t_list *meow = ft_lstnew("Purrpurr");
	ft_lstadd_back(&meow, ft_lstnew("Barkbark"));
    	ft_lstadd_back(&meow, ft_lstnew("Squeaksqueak"));
	
	t_list *current = meow;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	printf("\n");
	t_list *frog;
	frog = ft_lstnew("Ribbitribbit");
	ft_lstadd_front(&meow, frog);
	
	current = frog;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
}
*/
