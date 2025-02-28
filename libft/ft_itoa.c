/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:16:17 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/18 19:30:23 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	count_digit(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i = 1;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		len_unchanged;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = count_digit(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	len_unchanged = len;
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n = n / 10;
	}
	str[len_unchanged] = '\0';
	return (str);
}
/*
int main()
{
	printf("%s\n", ft_itoa(-787897));
	return (0);
}*/	
