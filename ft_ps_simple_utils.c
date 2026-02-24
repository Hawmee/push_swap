/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_simple_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 15:36:13 by varandri          #+#    #+#             */
/*   Updated: 2026/02/24 14:48:47 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_value_place(t_list *list, t_list	*node)
{
	int	i;

	if (!node)
		return (0);
	i = 0;
	while (list && list != node)
	{
		list = list->next;
		i ++;
	}
	return (i);
}

t_list	*ft_find_min_value(t_list *list)
{
	t_list	*node;
	t_list	*node_min;

	node = list;
	node_min = list;
	while (node)
	{
		if (node->value < node_min->value)
			node_min = node;
		node = node->next;
	}
	return (node_min);
}
