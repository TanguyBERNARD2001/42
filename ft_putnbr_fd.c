/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabernar <tanguy.bernard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:21:54 by tabernar          #+#    #+#             */
/*   Updated: 2024/11/19 12:37:08 by tabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar(int n, int fd)
{
	char	c;

	c = n + '0';
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-21474836478", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	else if (n < 10)
		ft_putchar(n, fd);
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar(n % 10, fd);
	}
}

/*
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int count, char **val)
{
	int		n;
	int		fd;
	char	*path;
	char	buf[4];
	int		sr;

	if (count > 2)
	{
		n = atoi(val[1]);
		path = val[2];
		printf("\nDEBUT\n\n");
		printf("Nb = %d\n", n);
		printf("Path : %s\n", path);
		printf("\nFonction ft_putnbr_fd\n\n");
		fd = open(path, O_RDWR | O_CREAT);
		if (fd == -1 || fd == 2)
			return (1);
		ft_putnbr_fd(n, fd);
		close(fd);
		fd = open(path, O_RDWR | O_CREAT);
		if (fd == -1 || fd == 2)
			return (1);
		sr = read(fd, buf, 4);
		if (sr == -1)
			return (1);
		while (sr > 0)
		{
			write(1, buf, sr);
			sr = read(fd, buf, 4);
		}
		close(fd);
	}
	return (0);
}
*/
