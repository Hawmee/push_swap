/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:46:41 by varandri          #+#    #+#             */
/*   Updated: 2026/02/26 17:43:04 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				value;
	long			index;
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
t_list		*ft_find_min_index(t_list *list);
t_list		*ft_find_max_index(t_list *list);

t_ac_list	*lst_ac_new(char *name);
size_t		lst_ac_size(t_ac_list *list);
t_ac_list	*lst_ac_last(t_ac_list *list);
void		lst_ac_add_back(t_ac_list **list, t_ac_list *node);

void		lst_clear(t_list **list);
void		lst_ac_clear(t_ac_list **list, void (*del)(void*));

void		new_action(t_ac_list	**list, char *name);
void		new_list_value(t_list **list, int value);
void		rotate_up(size_t counter, t_list **stack, t_ac_list **act_lst);
void		rotate_down(size_t counter, t_list **stack, t_ac_list **act_lst);
void		ft_ps_few(t_list **stack_a, t_list **stack_b, t_ac_list **actions);

void		ft_push(t_list **from, t_list **to, t_ac_list **act_lst,
				char *act_name);
void		ft_swap(t_list **stack, t_ac_list **act_lst, char *act_name);
void		ft_s_swap(t_list **stack_a, t_list **stack_b, t_ac_list **act_lst);
void		ft_rotate(t_list **stack, t_ac_list **act_lst, char *act_name);
void		ft_r_rotate(t_list **stack_a, t_list **stack_b,
				t_ac_list **act_lst);
void		ft_rev_rotate(t_list **stack, t_ac_list **act_lst, char *act_name);
void		ft_r_rev_rotate(t_list **stack_a, t_list **stack_b,
				t_ac_list **act_lst);

t_list		*ft_find_min_value(t_list *list);
t_list		*ft_find_max_value(t_list *list);
void		ft_ps_simple(t_list **stack_a, t_list **stack_b,
				t_ac_list **act_lst);

size_t		ft_sqrt(size_t nb);
void		index_attribution(t_list **stack);
size_t		ft_range_block(t_list *stack, size_t n_block);
int			ft_find_node_place(t_list *list, t_list *node);
int			is_member_block(t_list *list, size_t min_index, size_t rng_block);
void		ft_ps_medium(t_list **stack_a, t_list **stack_b,
				t_ac_list **act_lst);

void		ft_ps_complex(t_list **stack_a, t_list **stack_b,
				t_ac_list **act_lst);
void		ft_ps_adaptive(t_list *stack_a, t_list *stack_b);

#endif
