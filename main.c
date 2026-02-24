/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 20:35:35 by varandri          #+#    #+#             */
/*   Updated: 2026/02/24 17:14:15 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// #include <unistd.h>
#include <stdio.h>

int	main(void)
{
	t_list	*list;
	t_list	*stack_b;
	t_ac_list	*act_list;
	int	i;

	i = 0;
	list = NULL;
	stack_b = NULL;
	act_list = NULL;
	while (i < 5)
	{
		new_list_value(&list, i);
		i ++;
	}
	ft_rotate(&list, &act_list, "ra");
	ft_rotate(&list, &act_list, "ra");
	ft_swap(&list, &act_list, "sa");
	ft_push(&list, &stack_b, &act_list, "pa");
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
	printf("\n");
	while (act_list)
	{
		printf("%s\n", act_list->name);
		act_list = act_list->next;
	}	
	return (0);
}
