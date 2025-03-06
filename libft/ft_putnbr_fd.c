/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:15:00 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/16 16:25:14 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		nbr = nbr % 10;
	}
	if (nbr < 10)
	{
		c = nbr + '0';
		write (fd, &c, 1);
	}
}
/*
#include <fcntl.h>

int main ()
{
	int fd = open ("text.txt", O_WRONLY | O_CREAT, 0644);
	if (fd != -1)
	{
		ft_putnbr_fd(-90, fd);
		close(fd);
	}
	return (0);
}
*/
