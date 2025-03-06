/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:49:44 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/22 15:59:19 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}
/*
int main ()
{
	t_list *meow = ft_lstnew("Purrpurr");
	ft_lstadd_front(&meow, ft_lstnew("Barkbark"));
    	ft_lstadd_front(&meow, ft_lstnew("Squeaksqueak"));
	
	t_list *current = meow;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	printf("\n");
	t_list *frog;
	frog = ft_lstnew("Ribbitribbit");
	ft_lstadd_back(&meow, frog);
	
	current = meow;
	
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
}*/
