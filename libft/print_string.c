/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 16:04:24 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/30 16:04:27 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	counter;

	counter = 0;
	if (!s)
	{
		counter += write(1, "(null)", 6);
		return (counter);
	}
	while (*s)
	{
		counter += write(1, s, 1);
		s++;
	}
	return (counter);
}
