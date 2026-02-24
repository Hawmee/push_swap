/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 20:35:35 by varandri          #+#    #+#             */
/*   Updated: 2026/02/24 17:02:38 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// #include <unistd.h>
#include <stdio.h>

int	main(void)
{
	t_list	*list;
	t_list	*stack_b;
	int	i;

	i = 0;
	list = NULL;
	stack_b = NULL;
	while (i < 5)
	{
		new_list(&list, i);
		i ++;
	}
	ft_rotate(&list, NULL, NULL);
	ft_rotate(&list, NULL, NULL);
	ft_swap(&list, NULL, NULL);
	ft_push(&list, &stack_b, NULL, NULL);
	while (list)
	{
		printf("%i", list->value);
		list = list->next;
	}
	printf("\n");
	ft_rotate(&stack_b, NULL, NULL);
	while(stack_b)
	{
		printf("%i", stack_b->value);
		stack_b = stack_b->next;
	}
	return (0);
}
