/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabernar <tanguy.bernard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:23:25 by tabernar          #+#    #+#             */
/*   Updated: 2024/11/19 11:54:02 by tabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/*
#include <fcntl.h>
#include <stdio.h>

int	main(int count, char **val)
{
		char    *s;
		int     fd;
		const char      *path;
		size_t  sr;
		char    buf[2];

		if (count > 2)
		{
				s = val[1];
				path = val[2];
				fd = open(path, O_RDWR | O_CREAT);
				printf("fd ->%d\n", fd);
				if (fd == -1 || fd == 2)
					return (1);
				ft_putstr_fd(s, fd);
				printf("\nDEBUT\n\n");
				printf("Path : %s\n", path);
				printf("Phrase : %s\n", s);
				printf("Fonction  ft_putchar_fd\n\n");
		close(fd);
		fd = open(path, O_RDWR | O_CREAT);
		if (fd == -1 || fd == 2)
			return (1);
				sr = read(fd, buf, 2);
				while (sr > 0)
				{
						sr = read(fd, buf, 2);
				}
				printf("\n\nFIN\n");
				close(fd);
		}
		return (0);
}
*/
