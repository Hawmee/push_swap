/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 20:01:36 by varandri          #+#    #+#             */
/*   Updated: 2026/02/19 15:45:34 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rev_rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = lst_last(*stack);
	last->next = first;
	while (first && first->next && first->next != last)
		first = first->next;
	first->next = NULL;
	*stack = last;
}

void	ft_r_rev_rotate(t_list **stack_a, t_list **stack_b)
{
	ft_rev_rotate(stack_a);
	ft_rev_rotate(stack_b);
}
