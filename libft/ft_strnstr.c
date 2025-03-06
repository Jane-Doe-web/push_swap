/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:43:42 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/11 21:12:42 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j])
		{
			j++;
			if (j == ft_strlen(little))
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
        char big[] = "Haystack in the haystack";
        char little[] = "in";
        size_t len = 18;
        printf("%p\n", ft_strnstr(big, little, len));
        printf("%s", ft_strnstr(big, little, len));
}
*/
