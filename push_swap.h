/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:46:41 by varandri          #+#    #+#             */
/*   Updated: 2026/02/20 23:45:00 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int		value;
	int		index;
	t_list	*next;
}				t_list;

typedef	struct ac_struct
{
	char *name;
	ac_list *next;
}				ac_list;

t_list	*lst_new(int value);
t_list	*lst_last(t_list *list);
void	lst_add_back(t_list **list, t_list *node);
void	lst_add_front(t_list **list, t_list *node);

ac_list	*lst_ac_new(char *name);
size_t	lst_ac_size(ac_list *list);
ac_list	*lst_ac_last(ac_list *list);
void	lst_ac_add_back(ac_list **list, ac_list *node);


void	push(t_list **from, t_list **to);
void	ft_swap(t_list **stack);
void	ft_s_swap(t_list **stack_a, t_list **stack_b);
void	ft_rotate(t_list **stack);
void	ft_r_rotate(t_list **stack_a, t_list **stack_b);
void	ft_rev_rotate(t_list **stack);
void	ft_r_rev_rotate(t_list **stack_a, t_list **stack_b);

int		find_index(t_list *list, t_list	*node);
t_list	*find_min(t_list *list);
void	ft_ps_simple(t_list *stack_a, t_list *stack_b);

void	ft_ps_medium(t_list *stack_a, t_list *stack_b);
void	ft_ps_complex(t_list *stack_a, t_list *stack_b);
void	ft_ps_adaptive(t_list *stack_a, t_list *stack_b);

#endif
