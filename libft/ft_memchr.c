/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:18:34 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/11 14:14:22 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	cc;
	size_t			i;

	s1 = (unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s1[i] == cc)
			return (s1 + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char s[] = "Hello Berlin!";
	char c = 'B';
	size_t n = 8;
	printf("%p\n", ft_memchr(s, c, n));
	printf("%p\n", memchr(s, c, n));
	printf("Found at index:%ld\n", ft_memchr(s, c, n) - (void *)s);
	printf("Found at index:%ld\n", memchr(s, c, n) - (void *)s);
}
*/
