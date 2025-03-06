/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:47:21 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/22 15:47:52 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	n;

	n = 0;
	while (lst)
	{
		lst = lst->next;
		n++;
	}
	return (n);
}
/*
int main()
{
	t_list *meow = ft_lstnew("Purrpurr");
	ft_lstadd_front(&meow, ft_lstnew("Barkbark"));
    	ft_lstadd_front(&meow, ft_lstnew("Squeaksqueak"));
	
	printf("%d", ft_lstsize(meow));
}
*/
