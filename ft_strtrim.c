/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabernar <tanguy.bernard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:51:45 by tabernar          #+#    #+#             */
/*   Updated: 2024/11/19 12:38:31 by tabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_check(char const *s1, char const *set, int i)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == s1[i])
			return (1);
		j++;
	}
	return (0);
}

int	ft_count_c(char const *s1, char const *set)
{
	size_t	start;
	size_t	finish;
	size_t	i;

	start = 0;
	i = 0;
	finish = ft_strlen(s1) - 1;
	while (ft_check(s1, set, start) == 1 && s1[start])
	{
		start++;
		i++;
	}
	while (ft_check(s1, set, finish) == 1 && finish > 0)
	{
		finish--;
		i++;
	}
	return (ft_strlen(s1) - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strtrim;
	int		start;
	int		finish;
	int		countc;
	int		i;

	i = 0;
	start = 0;
	finish = ft_strlen(s1) - 1;
	countc = ft_count_c(s1, set);
	strtrim = (char *)malloc(sizeof(char) * (countc + 1));
	if (strtrim == NULL)
		return (strtrim);
	while (ft_check(s1, set, start) == 1 && s1[start])
		start++;
	while (ft_check(s1, set, finish) == 1 && finish > 0)
		finish--;
	while (start + i < finish)
	{
		strtrim[i] = s1[start + i];
		i++;
	}
	strtrim[i] = '\0';
	return (strtrim);
}

/*
#include <stdio.h>

int	main(int count, char **val)
{
	char const	*s1;
	char const	*set;
	char		*strtrim;

	if (count > 2)
	{
		s1 = val[1];
		set = val[2];
		printf("\nDEBUT\n\n");
		printf("Phrase : %s\n", s1);
		printf("Set : %s\n", set);
		printf("\nFonction ft_strtrim\n\n");
		strtrim = ft_strtrim(s1, set);
		printf("\nTrimmer : %s\n", strtrim);
		printf("\nFIN\n");
		free(strtrim);
	}
	return (0);
}
*/
