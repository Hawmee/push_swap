/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:51:40 by varandri          #+#    #+#             */
/*   Updated: 2026/02/19 13:49:32 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **stack)
{
	t_list	*sec_node;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	sec_node = (*stack)->next;
	(*stack)->next = sec_node->next;
	sec_node->next = *stack;
	*stack = sec_node;
}

void	ft_s_swap(t_list **stack_a, t_list **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
}
