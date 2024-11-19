/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabernar <tanguy.bernard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:39:02 by tabernar          #+#    #+#             */
/*   Updated: 2024/11/19 16:57:25 by tabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

typedef struct	s_list
{
	void	*content;
	struct s_list	*next;
} t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (new);
	new->content = content;
	new->next = NULL;
	return (new);
}

t_list	*initialisation()
{
	t_list	*element;
	element = malloc(sizeof(t_list));
	if (element == NULL)
		return (element);
	element->next = NULL;
	return (element);
}

#include <stdio.h>

int	main(int count, char **val)
{
	char	*content;
	t_list	*test;

	if (count > 1)
	{
		content = val[1];
		printf("\nDEBUT\n\n");
		printf("Contenu : %s\n", content);
		printf("Fonction ft_lstnew\n\n");
		test = initialisation();
		test = ft_lstnew(content);
		printf("content %s", (char *)test->content);
		printf("\n\nFIN\n");
		free(test);
	}
	return (0);
}
