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
t_list	*lst_clear(t_list **list, void (*del)(void *));

#endif