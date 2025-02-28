/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:22:23 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/08 11:26:24 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
/*
#include <stdio.h>
int	main()
{
	unsigned char c;
	c = '1';
	printf("%c\n", ft_tolower(c));
	c = 't';
	printf("%c\n", ft_tolower(c));
	c = 'R';
        printf("%c\n", ft_tolower(c));
	c = '\n';
        printf("%c", ft_tolower(c));
}
*/
