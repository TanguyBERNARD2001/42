/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabernar <tanguy.bernard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:10:33 by tabernar          #+#    #+#             */
/*   Updated: 2024/11/15 18:23:26 by tabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	stock;

	stock = ft_strlen(little);
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < len)
	{
		j = 0;
		while (little[j] == big[i] && little[j] && i < len)
		{
			i++;
			j++;
		}
		if (j == stock)
			return ((char *)(big + i - j));
		i++;
	}
	return (0);
}
