/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:13:07 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/16 17:14:02 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	f(unsigned int i, char *c)
{
	printf("Index: %u, Character: %c\n", i, *c);
	*c += 1;
}
#include <stdio.h>

int	main()
{	
	char	s [] = "12345";
	ft_striteri(s, f);
	printf("%s", s);
}*/
