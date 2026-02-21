/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokyrand <tokyrand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:46:41 by varandri          #+#    #+#             */
/*   Updated: 2026/02/21 08:40:25 by tokyrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}				t_list;

typedef struct s_ac_list
{
	char				*name;
	struct s_ac_list	*next;
}				t_ac_list;

t_list		*lst_new(int value);
t_list		*lst_last(t_list *list);
void		lst_add_back(t_list **list, t_list *node);
void		lst_add_front(t_list **list, t_list *node);
size_t		lst_size(t_list *list);

t_ac_list	*lst_ac_new(char *name);
size_t		lst_ac_size(t_ac_list *list);
t_ac_list	*lst_ac_last(t_ac_list *list);
void		lst_ac_add_back(t_ac_list **list, t_ac_list *node);

void		lst_clear(t_list **list);
void		lst_ac_clear(t_ac_list **list, void (*del)(void*));

void		new_action(t_ac_list	**list, char *name);

void		push(t_list **from, t_list **to, t_ac_list **act_lst,
				char *act_name);
void		ft_swap(t_list **stack, t_ac_list **act_lst, char *act_name);
void		ft_s_swap(t_list **stack_a, t_list **stack_b, t_ac_list **act_lst);
void		ft_rotate(t_list **stack, t_ac_list **act_lst, char *act_name);
void		ft_r_rotate(t_list **stack_a, t_list **stack_b,
				t_ac_list **act_lst);
void		ft_rev_rotate(t_list **stack, t_ac_list **act_lst, char *act_name);
void		ft_r_rev_rotate(t_list **stack_a, t_list **stack_b,
				t_ac_list **act_lst);

int			find_index(t_list *list, t_list	*node);
t_list		*find_min(t_list *list);
void		ft_ps_simple(t_list *stack_a, t_list *stack_b);

void		ft_ps_medium(t_list *stack_a, t_list *stack_b);
void		ft_ps_complex(t_list *stack_a, t_list *stack_b);
void		ft_ps_adaptive(t_list *stack_a, t_list *stack_b);

#endif
