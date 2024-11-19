/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabernar <tanguy.bernard@student.42.f      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:35:30 by tabernar          #+#    #+#             */
/*   Updated: 2024/11/19 11:52:30 by tabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	f(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*strmapi;
	unsigned int	i;

	strmapi = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (strmapi == NULL)
		return (strmapi);
	i = 0;
	while (s[i])
	{
		strmapi[i] = (f(i, s[i]));
		i++;
	}
	strmapi[i] = '\0';
	return (strmapi);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int count, char **val)
{
	char const	*s;
	char		*strmapi;

	if (count > 1)
	{
		s = val[1];
		printf("\nDEBUT\n\n");
		printf("Phrase : %s\n", s);
		printf("\nFonction strmapi\n");
		strmapi = ft_strmapi(s, f);
		printf("Phrase : %s\n", strmapi);
		printf("\nFIN\n");
		free(strmapi);
	}
	return (0);
}
*/
