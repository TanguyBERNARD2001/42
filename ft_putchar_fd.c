/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabernar <tanguy.bernard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:42:16 by tabernar          #+#    #+#             */
/*   Updated: 2024/11/19 11:54:26 by tabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
#include <fcntl.h>
#include <stdio.h>

int	main(int count, char **val)
{
	char		c;
	int			fd;
	const char	*path;
	int			sr;
	char		buf[4];

	if (count > 2)
	{
		c = val[1][0];
		path = val[2];
		fd = open(path,O_RDWR | O_CREAT);
		if (fd == 2 || fd == -1)
			return (1);
		ft_putchar_fd(c, fd);
		close(fd);
		fd = open(path, O_RDWR | O_CREAT);
		if (fd == 2 || fd == -1)
			return (1);
		printf("\nDEBUT\n\n");
		printf("Path : %s\n", path);
		printf("Charactere : %c\n", c);
		printf("Fonction  ft_putchar_fd\n\n");
		sr = read(fd, buf, 4);
		if (sr == -1)
			return (1);
		while (sr > 0)
		{
			write(1, buf, sr);
			sr = read(fd, buf, 4);
		}
		printf("\n\nFIN\n");
		close(fd);
	}
	return (0);
}
*/
