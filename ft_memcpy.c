/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabernar <tanguy.bernard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:12:57 by tabernar          #+#    #+#             */
/*   Updated: 2024/11/19 14:28:05 by tabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t	i;
	
	i = 0;
	if (dst == NULL || src == NULL)
		return (NULL);
	while (i < size)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	*(char *)(dst + i) = '\0';
	return (dst);
}
