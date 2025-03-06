/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:08:27 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/09 14:57:01 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_len;
	size_t	d_len;
	size_t	i;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	if (size <= d_len)
		return (s_len + size);
	i = 0;
	while (src[i] && (d_len + i) < size - 1)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}
/*
int 	main()
{	
	char dst[20] = "pqrstuvwxyz";
	printf("%zu\n", ft_strlcat(dst, "abcd", 14));
	printf("%s\n", dst);
}
*/
