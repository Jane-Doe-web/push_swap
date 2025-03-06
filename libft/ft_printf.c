/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:54:33 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/30 15:58:58 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdarg.h>
#include "libft.h"

int	case_conditions(const char *str, va_list ap)
{
	if (*str == 'c')
		return (ft_putchar(va_arg(ap, int)));
	if (*str == 's')
		return (ft_putstr(va_arg(ap, char *)));
	if (*str == 'd' || *str == 'i')
		return (ft_printnum(va_arg(ap, int)));
	if (*str == 'u')
		return (ft_print_unsigned_int(va_arg(ap, unsigned int)));
	if (*str == 'x')
		return (ft_print_lower_hexa(va_arg(ap, unsigned int)));
	if (*str == 'X')
		return (ft_print_upper_hexa(va_arg(ap, unsigned int)));
	if (*str == 'p')
		return (ft_print_ptr(va_arg(ap, void *)));
	if (*str == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		counter;

	counter = 0;
	va_start(ap, str);
	if (!str)
		return (-1);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			counter += case_conditions(str, ap);
		}
		else
			counter += write(1, str, 1);
		str++;
	}
	va_end(ap);
	return (counter);
}
