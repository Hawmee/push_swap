/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 20:01:36 by varandri          #+#    #+#             */
/*   Updated: 2026/02/15 20:30:14 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//mampidina an'ilay pile
void	ft_rev_rotate(t_list *stack)
{
	
}

void	ft_r_rev_rotate(t_list *stack_a, t_list *stack_b)
{
	ft_rev_rotate(stack_a);
	ft_rev_rotate(stack_b);
}
