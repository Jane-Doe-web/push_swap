/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:26:38 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/15 16:55:42 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char *s1;
	char *s2;
	unsigned int n;
	int result;
	
	n = 6;
	s1 = "test\200";
	s2 = "test\0";
	result = ft_strncmp(s1, s2, n);
	printf("%d\n", result);

	n = 3;
	s1 = "Hello";
	s2 = "Hellersdorf";
	result = ft_strncmp(s1, s2, n);
	printf("%d\n", result);

	n = 4;
	s1 = "Hello";
	s2 = "Herz";
	result = ft_strncmp(s1, s2, n);
	printf("%d\n", result);
	return(0);
}
*/
