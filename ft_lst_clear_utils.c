/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_clear_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 23:30:27 by varandri          #+#    #+#             */
/*   Updated: 2026/02/21 00:46:24 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_clear(t_list **list)
{
	t_list	*temp;

	if (!list)
		return ;
	while (*list)
	{
		temp = *list;
		*list = (*list)->next;
		free(temp);
	}
}

void	lst_ac_clear(t_ac_list **list, void (*del)(void*))
{
	t_ac_list	*temp;

	if (!list || !del)
		return ;
	while (*list)
	{
		temp = *list;
		*list = (*list)->next;
		del(temp->name);
		free(temp);
	}
}
