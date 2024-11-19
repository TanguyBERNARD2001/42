/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabernar <tanguy.bernard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:47:00 by tabernar          #+#    #+#             */
/*   Updated: 2024/11/12 18:06:27 by tabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	uc;
	size_t			i;

	i = 0;
	uc = (unsigned char)c;
	while (i < n)
	{
		*(char *)(s + i) = c;
		i++;
	}
	return (s);
}
