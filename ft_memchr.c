/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabernar <tanguy.bernard@student.42.f      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:34:34 by tabernar          #+#    #+#             */
/*   Updated: 2024/11/19 12:31:46 by tabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(char *)(s + i) == c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int count, char **val)
{
	const void	*s;
	int			c;
	size_t		n;
	char		*str;

	if (count > 3)
	{
		s = val[1];
		c = atoi(val[2]);
		n = atoi(val[3]);
		printf("\nDEBUT\n\n");
		printf("Phrase : %s\n", (char *)s);
		printf("Caractere : %c\n", c);
		printf("Taille : %lu\n", n);
		fflush(stdout);
		str = (char *)memchr(s, c, n);
		printf("\nFonction memchr : %s\n", str);
		fflush(stdout);
		str = (char *)ft_memchr(s, c, n);
		printf("\nFonction ft_memchr : %s\n", str);
		printf("\nFIN\n");
		fflush(stdout);
	}
	return (0);
}
*/
