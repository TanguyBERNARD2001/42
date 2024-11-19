/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabernar <tanguy.bernard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:58:31 by tabernar          #+#    #+#             */
/*   Updated: 2024/11/19 17:28:58 by tabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

typedef struct	s_list
{
	void	*content;
	struct s_list	*next;
} t_list;

t_list	**initialisation()
{
	t_list **lst;
	**lst = (t_list **)malloc(sizeof(t_list *));
	t_list	*new;
	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL || lst == NULL)
		return (NULL);
	new->content = NULL;
	new->next = NULL;
	lst->next = new;
	return (lst);
}

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list *));
	if (new == NULL)
		return (new);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = t_list->first;
	lst->next = new;

}

#include <stdio.h>
#include <stdlib.h>

int	main(int count, char **val)
{
	char	*content;
	t_list	*new;
	t_list	**lst;

	if (count > 1)
	{
		content = val[1];
		printf("\nDEBUT\n\n");
		printf("Content %s\n", content);
		new = ft_lstnew(content);
		lst = initialisation();
		ft_lstadd_front(lst, new);
		printf("Fonction ft_lstadd_front\n\n");
		printf("content : %s\n", (char *)lst->next->content);
		printf("\nFIN\n\n");
		free(new);
		free(lst);
	}
	return (0);
}
