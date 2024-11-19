/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabernar <tanguy.bernard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:53:57 by tabernar          #+#    #+#             */
/*   Updated: 2024/11/19 12:05:33 by tabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	sub = malloc(sizeof(char) * (len - (size_t)start + 1));
	if (sub == NULL)
		return (sub);
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int count, char **val)
{
	char const		*s;
	unsigned int	start;
	size_t			len;
	char			*sub;

	if (count > 3)
	{
		s = val[1];
		start = atol(val[2]);
		len = atol(val[3]);
		printf("\nDEBUT\n\n");
		fflush(stdout);
		printf("Phrase : %s\n", s);
		fflush(stdout);
		printf("Start : %d\n", start);
		fflush(stdout);
		printf("Taille : %lu\n", len);
		fflush(stdout);
		sub = ft_substr(s, start, len);
		printf("Sub : %s\n", sub);
		fflush(stdout);
		printf("\nFIN\n");
		fflush(stdout);
	}
	return (0);
}
*/
