/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_medium.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 19:26:58 by varandri          #+#    #+#             */
/*   Updated: 2026/02/24 02:56:56 by varandri         ###   ########.fr       */
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

void	ft_ps_medium(t_list **stack_a, t_list **stack_b,t_ac_list **act_lst)
{
	size_t	n_block;
	size_t	rng_block;
	t_list	*elem;
	size_t 	node_place;

	
	if (!stack_a || !*stack_a)
	return ;
	index_attribution(stack_a);
	n_block = ft_sqrt(lst_size(*stack_a));
	while(n_block)
	{
		rng_block = ft_range_block(*stack_a, n_block);
		while (*stack_a)
		{
			elem = ft_find_block_element(*stack_a, rng_block);
			node_place = ft_find_node_place(stack_a, elem);
			if (node_place <= lst_size(*stack_a) / 2)
				rotate_up(node_place, stack_b, act_lst);
			else if (node_place > lst_size(*stack_a) / 2)
				rotate_down(node_place,stack_b, act_lst);
			if (elem->index < (*stack_b)->index)
			{
				push(stack_a, stack_b, act_lst, "pb");
				ft_swap(stack_b, act_lst,"sb");
			}
			else
				push(stack_a, stack_b, act_lst, "pb");
		}
		n_block--;
	}
	while (*stack_b)
	{
		elem = ft_find_max_index(*stack_b);
		node_place = ft_find_node_place(*stack_b, elem);
		if (node_place <= lst_size(*stack_a) / 2)
			rotate_up(node_place, stack_a, act_lst);
		else if (node_place > lst_size(*stack_a) / 2)
			rotate_down(node_place,stack_a, act_lst);
		push(stack_a, stack_b, act_lst, "pb");
	}
	if (node_place < lst_size)
	return ;
}