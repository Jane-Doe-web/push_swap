/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:11:42 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/21 14:47:53 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;	
	int	word_counter;

	i = 0;
	word_counter = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			word_counter++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (word_counter);
}

static char	*ft_word(char const *str, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (*str && *str == c)
		str++;
	while (str[i] && str[i] != c)
		i++;
	word = malloc(i + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	*free_words(int i, char **ptr)
{
	while (i > 0)
	{
		free(ptr[i - 1]);
		i--;
	}
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**ptr_words;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	ptr_words = malloc (sizeof(char *) * (words + 1));
	if (!ptr_words)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		ptr_words[i] = ft_word(s, c);
		if (ptr_words[i] == NULL)
			return (free_words(i, ptr_words));
		while (*s && *s != c)
			s++;
		i++;
	}
	ptr_words[i] = NULL;
	return (ptr_words);
}
/*
int main()
{
	char **arr;
	int i = 0;
	arr = ft_split("Hello!", ' ');
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
}
*/
