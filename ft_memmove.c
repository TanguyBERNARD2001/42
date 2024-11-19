/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabernar <tanguy.bernard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:23:43 by tabernar          #+#    #+#             */
/*   Updated: 2024/11/19 12:51:35 by tabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*o_src;
	char	*o_destination;
	
	o_src = (char *)src;
	o_destination = (char *)dst;
	
	if (o_src > o_destination)
	{
	}

	i = 0;
	temp = 'a';
	while (i < n)
	{
		temp = *(char *)(src + i);
		*(char *)(dst + i) = temp;
		i++;
	}
	*(char *)(dst + i) = '\0';
	return (dst);
}
