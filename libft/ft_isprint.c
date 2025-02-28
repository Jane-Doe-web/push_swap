/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:47:46 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/07 18:52:44 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	printf("%d\n", ft_isprint('\n'));
	printf("%d\n", isprint('\n'));
	printf("%d\n", ft_isprint('A'));
        printf("%d\n", isprint('A'));
}
*/
