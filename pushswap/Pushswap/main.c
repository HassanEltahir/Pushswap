#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "push_swap.h"
int stack[256];
int count = 0;
int main(int ac,char **av)
{
	t_stack_node *a;
	t_stack_node *b;
	
	stacka = NULL;
	stackb = NULL;
	if(ac == 1 || ac == 2 && !(av[1][0]))
		return (1);
	else if(ac == 2)
	{
		av = ft_split(av[1],' ');
		init_stack_a(&a,av+ 1);
	}
	if(!(stack_sorted(a)))
	{
		if(stack_len(a) == 2)
		{
			sa(&a,false);
		}
		else if(stack_len(a) == 3)
		{
			sort_three(&a);
		}
		else
			sort_stacks(&a,&b);
	}
	free_stack(&a);
}
void	init_nodes_a(t_stack_node *a,t_stack_node *b)
{
	current_index(a);
	current_index(b);
	set_target_a(a,b);
	cost_analysis_a(a,b);
	set_cheapest(a);
}