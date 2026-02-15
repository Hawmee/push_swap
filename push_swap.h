#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct  s_list
{
	int		value;
	int		index;
	t_list	*next;
} t_list;

t_list	*lst_new(int value);
t_list	*lst_last(t_list *list);
void	lst_add_back(t_list **list, t_list *node);
void	lst_add_front(t_list **list, t_list *node);

void	push(t_list *from, t_list *to);
void	ft_swap(t_list *stack);
void	ft_s_swap(t_list *stack_a, t_list *stack_b);
void	ft_rotate(t_list *stack);
void	ft_r_rotate(t_list *stack_a, t_list *stack_b);
void	ft_rev_rotate(t_list *stack);
void	ft_r_rev_rotate(t_list *stack_a, t_list *stack_b);

void	ft_ps_simple(t_list *stack_a, t_list *stack_b);
void	ft_ps_medium(t_list *stack_a, t_list *stack_b);
void	ft_ps_complex(t_list *stack_a, t_list *stack_b);
void	ft_ps_adaptive(t_list *stack_a, t_list *stack_b);

#endif