/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 00:15:25 by varandri          #+#    #+#             */
/*   Updated: 2026/02/21 00:46:00 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	new_action(t_ac_list	**list, char *name)
{
	t_ac_list	*node;

	if (!name)
		return ;
	node = lst_ac_new(name);
	if (!node)
		return ;
	lst_ac_add_back(list, node);
}
