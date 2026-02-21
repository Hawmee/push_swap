/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokyrand <tokyrand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 08:37:50 by tokyrand          #+#    #+#             */
/*   Updated: 2026/02/21 08:40:01 by tokyrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	lst_size(t_list *list)
{
	size_t	i;

	i = 0;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}