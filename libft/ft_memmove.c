/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:50:11 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/15 18:57:20 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d > s)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
		return (dest);
	}
	else
	{
		ft_memcpy(d, s, n);
		return (dest);
	}
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char src[] = "Welcome";
	char dest[] = "toBerlin";
	ft_memmove(dest, src, 3);
	printf("%s", dest);
}
*/
