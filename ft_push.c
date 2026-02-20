/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:52:37 by varandri          #+#    #+#             */
/*   Updated: 2026/02/21 00:37:16 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	remove_front(t_list **list)
{
	t_list	*before;

	if (!list || !*list)
		return ;
	*list = (*list)->next;
}

void	push(t_list **from, t_list **to, t_ac_list **act_lst, char *act_name)
{
	t_list	*last;

	if (!from || !*from)
		return ;
	if (act_name)
		new_action(act_lst, act_name);
	lst_add_front(to, *from);
	remove_front(from);
}
