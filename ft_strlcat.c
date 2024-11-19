/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabernar <tanguy.bernard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:35:18 by tabernar          #+#    #+#             */
/*   Updated: 2024/11/19 12:53:08 by tabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	length;

	length = ft_strlen(dst);
	if (size < length)
		return (length + ft_strlen(src));
	else if (ft_strlen(src) == 0 && length == 0)
		return (0);
	else
	{
		i = 0;
		while (i < size - length - 1 && src[i])
		{
			dst[length + i] = src[i];
			i++;
		}
		dst[length + size] = '\0';
		if (size < length)
			return (ft_strlen(src) + size);
		else
			return (ft_strlen(src) + length);
	}
}
