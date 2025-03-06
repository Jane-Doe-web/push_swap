/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:11:18 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/15 12:11:29 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
#include <fcntl.h>

int main()
{
	int fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
	if (fd != -1)
	{
		ft_putchar_fd('X', fd);
		close(fd);
	}
	return (0);
}
*/
