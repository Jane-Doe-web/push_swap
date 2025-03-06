/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:17:12 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/11 12:13:33 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdlib.h"
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			total_size;
	size_t			i;

	total_size = nmemb * size;
	if (total_size == 0)
		return (malloc(0));
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*
#include "stdio.h"
int	main()
{	
	size_t nmemb = 5;
	size_t size = 4;
	int *array = ft_calloc(nmemb, size);
	if (!array)
		return (0);
	int *original_arr = array;
	size_t i = 0;
	while (i < nmemb)
	{	
		printf("%d", array[i]);
		i++;
	}
	free (original_arr);
	return(0);
}
*/
