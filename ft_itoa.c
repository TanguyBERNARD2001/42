/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabernar <tanguy.bernard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 11:35:12 by tabernar          #+#    #+#             */
/*   Updated: 2024/11/19 12:39:27 by tabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/stdlib.h>

size_t	ft_intlen(long n)
{
	size_t	i;

	if (n < 0)
	{
		n = -n;
		i = 1;
	}
	else if (n == 0)
		return (1);
	else
		i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*res;
	int		i;

	nb = n;
	i = ft_intlen(nb);
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (res == NULL)
		return (res);
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	res[i] = '\0';
	i--;
	if (nb == 0)
		res[i] = '0';
	while (nb > 0)
	{
		res[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (res);
}

/*
#include <stdio.h>

int	main(int count, char **val)
{
	int		n;
	char	*res2;

//	char	*res1;
	if (count > 1)
	{
		n = atoi(val[1]);
		printf("\nDEBUT\n\n");
		printf("Nombre = %d\n", n);
		fflush(stdout);
//		if(!(res1 = (char *)malloc(sizeof(char) * (ft_intlen(n) + 1)))
//			return (res1);
//		itoa(n, res1, 10);
//		printf("\nFonction itoa : %s\n", res1);
//		free(res1);
		res2 = ft_itoa(n);
		printf("\nFonction ft_itoa : %s\n", res2);
		printf("\nFIN\n");
		fflush(stdout);
	}
	return (0);
}
*/
