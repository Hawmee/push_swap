/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_simple.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 20:12:24 by varandri          #+#    #+#             */
/*   Updated: 2026/02/24 14:13:01 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_up(size_t counter,t_list **stack, t_ac_list **act_lst)
{
	while(counter)
	{
		ft_rotate(stack, act_lst, "ra");
		counter--;
	}
}

static void	rotate_down(size_t counter,t_list **stack, t_ac_list **act_lst)
{
	while(counter)
	{
		ft_rev_rotate(stack, act_lst, "rra");
		counter--;
	}
}

void	ft_ps_simple(t_list **stack_a, t_list **stack_b, t_ac_list **act_lst)
{
	int		min_index;
	t_list	*min;
	size_t	size_a;

	size_a = lst_size(*stack_a);
	while ( size_a > 2)
	{
		min = find_min(*stack_a);
		min_index = find_index(*stack_a, min);
		if (min_index <= size_a / 2 && min_index)
			rotate_up(min_index, stack_a, act_lst);
		else if (min_index > size_a / 2 && min_index)
			rotate_down((size_a - min_index), stack_a, act_lst);
		ft_push(stack_a, stack_b, act_lst, "pb");
		size_a--;
	}
	if ((*stack_a)->value > ((*stack_a)->next)->value)
		ft_swap(stack_a, act_lst, "sa");
	while (*stack_b)
	{
		ft_push(stack_b, stack_a, act_lst, "pa");
	}
}
