/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_medium_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokyrand <tokyrand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 15:44:07 by tokyrand          #+#    #+#             */
/*   Updated: 2026/02/23 17:43:18 by tokyrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_sqrt(size_t nb)
{
	size_t	i;

	i = 0;
	while (i * i < nb && i <= 46340)
		i++;
	if (i * i > nb)
		i --;
	if (i * i <= nb)
		return (i);
	return (0);
}

void	index_attribution(t_list **stack)
{
	t_list			*list;
	t_list 			*min;
	long			index;
	size_t			stack_size;

	if (!stack || !*stack)
		return ;
	stack_size = lst_size(*stack);
	index = 0;
	while (index < (long)stack_size)
	{
		list = *stack;
		min = NULL;
		while(list)
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
	int		min;
	int		max;
	size_t	range;

	if (!stack || !n_block)
		return (0);
	min = 2147483647;
	max = 0;
	list = stack;
	while (list)
	{
		if (list->index <= min)
			min = list->index;
		if (list->index > max)
			max = list->index;
		list = list->next;
	}
	range =(max - min) / n_block;
}
