/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_medium_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 15:44:07 by tokyrand          #+#    #+#             */
/*   Updated: 2026/02/23 23:41:37 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_attribution(t_list **stack)
{
	t_list	*list;
	t_list	*min;
	long	index;
	size_t	stack_size;

	if (!stack || !*stack)
		return ;
	stack_size = lst_size(*stack);
	index = 0;
	while (index < (long)stack_size)
	{
		list = *stack;
		min = NULL;
		while (list)
		{
			if ((list->index == -1) && (!min || list->value <= min->value))
				min = list;
			list = list->next;
		}
		if (min)
			min->index = index;
		index ++;
	}
}

size_t	ft_range_block(t_list *stack, size_t n_block)
{
	t_list	*list;
	size_t	*min;
	size_t	*max;
	size_t	range;

	if (!stack || !n_block)
		return (0);
	min = (ft_find_min_index(stack))->index;
	max = (ft_find_max_index(stack))->index;
	range = (max - min) / n_block;
	return (range);
}

int		ft_find_node_place(t_list *list, t_list *node)
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

t_list	*ft_find_block_element(t_list *stack, size_t range_block)
{
	size_t	l_size;
	size_t	b_start;
	size_t	b_end;
	t_list	*node_min;

	if (!stack)
		return (NULL);
	node_min = ft_find_min_index(stack);
	l_size = lst_size(stack);
	b_start = node_min->index;
	b_end = (node_min->index) * range_block;
	while (stack)
	{
		if (stack->index >= b_start && stack->index <= b_end)
				return (stack);
		stack = stack->next;
	}
	return (NULL);
}