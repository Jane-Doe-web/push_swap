/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:24:36 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/08 11:17:36 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
/*
#include <stdio.h>
int	main()
{
	unsigned char c;
	c = '1';
	printf("%c\n", ft_toupper(c));
	c = 't';
	printf("%c\n", ft_toupper(c));
	c = 'R';
        printf("%c\n", ft_toupper(c));
	c = '\n';
        printf("%c", ft_toupper(c));
}
*/
