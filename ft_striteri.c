/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabernar <tanguy.bernard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:04:42 by tabernar          #+#    #+#             */
/*   Updated: 2024/11/19 11:53:00 by tabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putchar(unsigned int i, char *s)
{
	printf("%c\n", s[i]);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s);
		i++;
	}
}

/*
#include <stdlib.h>

int	main(int count, char **val)
{
	char	*s;

	if (count > 1)
	{
		s = val[1];
		printf("\nDEBUT\n\n");
		printf("Phrase : %s\n", s);
		printf("\nFonction strmapi\n\n");
		ft_striteri(s, ft_putchar);
		printf("\nFIN\n");
	}
	return (0);
}
*/
