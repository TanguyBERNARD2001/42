/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabernar <tanguy.bernard@student.42.f      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:31:50 by tabernar          #+#    #+#             */
/*   Updated: 2024/11/19 12:03:35 by tabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*c;
	size_t	i;

	if (elementSize == 0 || elementCount == 0)
		return (NULL);
	c = malloc(elementSize * elementCount);
	if (c == NULL)
		return (c);
	i = 0;
	while (i < elementCount)
	{
		((char *)c)[i++] = '0';
	}
	return (c);
}
