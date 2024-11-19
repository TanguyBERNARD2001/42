/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabernar <tanguy.bernard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:41:53 by tabernar          #+#    #+#             */
/*   Updated: 2024/11/19 11:53:24 by tabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_cw(const char *s, char c)
{
	int	i;
	int	cw;

	cw = 0;
	i = 0;
	while (s[i] && s[i] != c)
	{
		cw++;
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
	}
	return (cw);
}

char	*ft_xtract(const char *s, char c, int *strt)
{
	int		d;
	char	*word;
	int		i;

	d = *strt;
	while (s[*strt] != c && s[*strt])
		*strt = *strt + 1;
	word = (char *)malloc(sizeof(char) * (*strt - d + 1));
	if (word == NULL)
		return (word);
	i = 0;
	while (i < *strt - d)
	{
		word[i] = s[d + i];
		i++;
	}
	word[i] = '\0';
	printf("%s", word);
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char	**tab_split;
	int		*strt;
	int		p;
	int		i;

	i = 0;
	p = 0;
	strt = &p;
	tab_split = (char **)malloc(sizeof(char *) * (ft_cw(s, c) + 1));
	if (tab_split == NULL)
		return (tab_split);
	while (s[*strt])
	{
		if (s[*strt] != c && s[*strt])
		{
			tab_split[i] = ft_xtract(s, c, strt);
			i++;
		}
		else
			*strt = *strt + 1;
	}
	tab_split[i] = NULL;
	return (tab_split);
}

/*
#include <stdio.h>

int	main(int count, char **val)
{
	const char	*s;
	char		c;
	char		**tab_split;
	int			i;

	if (count > 2)
	{
		s = val[1];
		c = val[2][0];
		i = 0;
		printf("\nDEBUT\n\n");
		printf("Phrase : %s\n", s);
		printf("Set : %c\n", c);
		tab_split = ft_split(s, c);
		printf("\nFONCTION SPLIT\n\n");
		while (i < ft_cw(s,c))
		{
			printf("Mot %d : %s\n", i + 1, tab_split[i]);
			i++;
		}
		i = 0;
		while (tab_split[i])
		{
			free(tab_split[i]);
			i++;
		}
		free(tab_split);
	}
	return (0);
}
*/
