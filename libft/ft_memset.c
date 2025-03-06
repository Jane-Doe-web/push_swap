/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:13:25 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/08 18:27:23 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	s1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s1[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main()
{
	size_t n;
	char s[20] = "Berlin Berlin";	
	char c;
	int j;


	j = 0;
	c = 'B';
	n = 7;
	ft_memset(s, c, n);
	printf("%s", s);	
}
*/
