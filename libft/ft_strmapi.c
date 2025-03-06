/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:06:33 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/16 17:11:17 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len_s;
	int		i;
	char	*str;

	len_s = ft_strlen(s);
	str = malloc(len_s + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	f(unsigned int i, char c)
{
	c += 1;
	return (c);
}

#include <stdio.h>
int main()
{
	char *result = ft_strmapi("ABCDE", f);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	return (0);
}*/
