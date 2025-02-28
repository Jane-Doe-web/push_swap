/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:45:16 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/07 15:20:52 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", isalpha('A'));
}
*/
