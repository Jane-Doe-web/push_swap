/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:48:21 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/22 15:49:07 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*a;

	if (*lst == NULL || lst == NULL)
		return ;
	while (*lst != NULL)
	{
		a = (*lst)->next;
		free(*lst);
		*lst = a;
	}
	*lst = NULL;
}
/*
#include <stdlib.h>

void del(void *content)
{
    free(content);
}

int main()
{
    t_list *meow = ft_lstnew(ft_strdup("Purrpurr")); 
    ft_lstadd_back(&meow, ft_lstnew(ft_strdup("Barkbark")));
    ft_lstadd_back(&meow, ft_lstnew(ft_strdup("Squeaksqueak")));

    t_list *current = meow;
    while (current) 
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    ft_lstclear(&meow, del);

    if (meow == NULL)
        printf("The list is cleared and empty.\n");
    else
    {
        current = meow;
        while (current) 
        {
            printf("%s\n", (char *)current->content);
            current = current->next;
        }
    }
}*/
