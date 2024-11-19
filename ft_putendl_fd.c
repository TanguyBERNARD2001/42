/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabernar <tanguy.bernard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:48:09 by tabernar          #+#    #+#             */
/*   Updated: 2024/11/19 11:57:32 by tabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

/*
#include <fcntl.h>
#include <stdio.h>

int	main(int count, char **val)
{
	char	*s;
	int		fd;
	int		sr;
	char	*path;
	char	buf[1000];

	if (count > 2)
	{
		s = val[1];
		path = val[2];
		fd = open(path, O_WRONLY);
		if (fd == -1 || fd == 2)
			return (1);
		ft_putendl_fd(s, fd);
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
