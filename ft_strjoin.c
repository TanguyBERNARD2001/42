/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabernar <tanguy.bernard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:15:37 by tabernar          #+#    #+#             */
/*   Updated: 2024/11/16 10:54:39 by tabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*join;
	size_t	size_join;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	size_join = sizeof(char) * (lens1 + lens2 + 1);
	join = (char *)malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (join == NULL)
		return (join);
	ft_strlcpy(join, s1, lens1 + 1);
	ft_strlcat(join, s2, size_join);
	join[size_join] = '\0';
	return (join);
}

/*
int	main(int count, char **val)
{
	char const	*s1;
	char const	*s2;
	char		*strjoin;

	if (count > 2)
	{
		s1 = val[1];
		s2 = val[2];
		printf("\nDEBUT\n\n");
		fflush(stdout);
		printf("Phrase 1 : %s\n", s1);
		printf("Phrase 2 : %s\n", s2);
		fflush(stdout);
		strjoin = ft_strjoin(s1, s2);
		printf("\nJoin : %s\n", strjoin);
		fflush(stdout);
		printf("\nFIN\n");
		free(strjoin);
	}
	return (0);
}
*/
