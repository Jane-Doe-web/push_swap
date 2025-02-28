/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:35:00 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/15 17:34:05 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	cc;

	i = 0;
	cc = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (cc == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
#include <string.h>

int	main()
{
	printf("%s\n", ft_strchr("Hello darkness, my old friend", 'd'));
	printf("%s\n", strchr("Hello darkness, my old friend", 'd'));

	printf("%p\n", ft_strchr("But in the end it didn't even matter", 'z'));
        printf("%p\n", strchr("But in the end it didn't even matter", 'z'));

	printf("%p\n", ft_strchr("Hello darkness, my old friend", '\0'));
        printf("%p\n", strchr("Hello darkness, my old friend", '\0'));

}
*/
