/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:19:00 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/14 17:49:31 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static char	*ft_strcpy(char	*dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str12;

	if (s1[0] == '\0' && s2[0] == '\0')
	{
		str12 = malloc(1);
		if (!str12)
			return (NULL);
		str12[0] = '\0';
		return (str12);
	}
	str12 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str12)
		return (NULL);
	ft_strcpy(str12, s1);
	ft_strcat(str12, s2);
	return (str12);
}
/*
int	main()
{
	char const *s1 = "Bundes";
	char const *s2 = "verwaltungsamt";
	char const *s12 = ft_strjoin(s1, s2);
	if (s12)
	{
		printf("%s", s12);
		free((char*)s12);
	}
	else
	{
		printf("Malloc failed");
	}
}
*/
