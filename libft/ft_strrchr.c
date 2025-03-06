/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:55:50 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/15 17:33:01 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	cc;
	int				i;

	i = 0;
	cc = (unsigned char)c;
	while (s[i])
	{
		i++;
	}
	if (cc == '\0')
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
#include <string.h>

int	main()
{
	printf("%s\n", ft_strrchr("Hello darkness, my old friend", 'o'));
	printf("%s\n", strrchr("Hello darkness, my old friend", 'o'));

	printf("%p\n", ft_strrchr("But in the end it didn't even matter", 'z'));
    printf("%p\n", strrchr("But in the end it didn't even matter", 'z'));

	printf("%p\n", ft_strrchr("Hello darkness, my old friend", '\0'));
    printf("%p\n", strrchr("Hello darkness, my old friend", '\0'));
}
*/
