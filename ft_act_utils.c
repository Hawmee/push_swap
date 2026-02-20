/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_act_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 16:15:30 by varandri          #+#    #+#             */
/*   Updated: 2026/02/20 23:28:32 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

ac_list	*lst_ac_new(char *name)
{
	ac_list	*node;

	node = (ac_list *)malloc(sizeof(ac_list));
	if (!node)
		return (NULL);
	node->name = name;
	node->next = NULL ;
	return (node);
}

size_t	lst_ac_size(ac_list *list)
{
	ac_list	*node;
	size_t	i;

	node = list;
	i = 0;
	while (node)
	{
		node = node->next;
		i++;
	}
	return (i);
}

ac_list	*lst_ac_last(ac_list *list)
{
	while (list && list->next)
		list = list->next;
	return (list);
}

void	lst_ac_add_back(ac_list **list, ac_list *node)
{
	ac_list	*last;

	if (!node || !list)
		return ;
	if (!*list)
	{
		*list = node;
		return ;
	}
	last = lst_ac_last(*list);
	last->next = node;
}
