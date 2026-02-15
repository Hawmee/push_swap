/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 16:37:19 by varandri          #+#    #+#             */
/*   Updated: 2026/02/15 17:28:50 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*lst_new(int value)
{
	t_list	*node;
	
	node = (t_list *)malloc(sizeof(t_list));
	node->value = value;
	node->index = 0 ;
	node->next = NULL ;
	return (node);
}

t_list *lst_last(t_list *list)
{
	while (list && list->next)
		list = list->next;
	return (list);
}

void	lst_add_back(t_list **list, t_list *node)
{
	t_list	*last;
	
	last = lst_last(*list);
	if (!last)
		*list = node;
	else
	{
		node->index = last->index + 1;
		last->next = node;
	}
}