/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:57:25 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/16 19:25:26 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static int	is_in(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	int		len;
	int		start;
	int		trimmed_len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	len = ft_strlen(s1);
	while (s1[start] && is_in(set, s1[start]))
		start ++;
	while (len > start && is_in(set, s1[len - 1]))
		len--;
	trimmed_len = len - start;
	if (trimmed_len == 0)
		return (ft_strdup(""));
	trimmed_str = ft_substr(s1, start, trimmed_len);
	return (trimmed_str);
}
/*
#include <stdio.h>

int main()
{
	char *result = ft_strtrim("HFSSSyFSFH", "HFS");
    	printf("%s\n", result);
    	free(result);
    	return (0);
}
*/				
