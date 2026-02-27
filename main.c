#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "push_swap.h"  // include your t_list, t_ac_list, ft_ps_medium, etc.

void print_list(t_list *head)
{
    while (head)
    {
        printf("%d ", head->value);
        head = head->next;
    }
    printf("\n");
}

void print_index(t_list *head)
{
    while (head)
    {
        printf("%ld ", head->index);
        head = head->next;
    }
    printf("\n");
}

// Optional: check if list is sorted
int is_sorted(t_list *head)
{
    while (head && head->next)
    {
        if (head->value > head->next->value)
            return 0;
        head = head->next;
    }
    return 1;
}

int main(void)
{
    t_list *stack_a = NULL;
    t_list *stack_b = NULL;
    t_ac_list *act_lst = NULL;
	
    srand(time(NULL));

    // Fill stack_a with 500 random numbers
    for (int i = 0; i < 100; i++)
        new_list_value(&stack_a, rand() % 1000); // values 0-999

    printf("Before sortings:\n");
    // print_list(stack_a); // optional, very long
	// print_index(stack_a); // optional, very long

    // Call your medium sort
    ft_ps_complex(&stack_a, &stack_b, &act_lst);

    printf("\nAfter sorting:\n");
    // print_list(stack_a); // optional, very long
	// print_index(stack_a); // optional, very long


    if (is_sorted(stack_a))
    	printf("\n✅ Sorting successful!\n");
    else{
    	printf("\n❌ Sorting failed!\n");}
	printf("%zu", lst_ac_size(act_lst));
	// while (act_lst)
	// {
	// 	printf("%s\n", act_lst->name);
	// 	act_lst = act_lst->next;
	// }
	
    return 0;
}