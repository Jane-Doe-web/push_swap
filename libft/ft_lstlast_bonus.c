/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:00:09 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/22 16:00:41 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int main()
{
	t_list *result;
	
	t_list *cat;
	cat = ft_lstnew("Meow");
	
	t_list *dog;
	dog = ft_lstnew("Woof");
	cat->next = dog;
	
	t_list *mouse;
	mouse = ft_lstnew("Squeack");
	dog->next = mouse;
	
	result = ft_lstlast(cat);
	printf("%s", (char *)result->content);
}*/
