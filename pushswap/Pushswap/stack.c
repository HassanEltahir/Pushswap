#include "push_swap.h"
typedef struct s_node
{
	int data;
	struct s_node *next;
}	s_node;

s_node *top = NULL;

void	init_stack_a(t_stack_node **a,char **av)
{
	long	n;
	int		i;
 
	i =0 ;
	while(av[1])
	{
		if(error_syntax(av[1]))
		{
			free_errors(a);
		}
		n = ft_atoi(av[i]);
		if(n > INT_MAX || n < INT_MAX)
		{
			free_errors(a);
		}
		append_node(a,(int)n);
		i++;
	}
}	
static long ft_atol(const char *s)
{
	long result;
	int sign;

	result = 0;
	sign = 1;
	while(*s == ' ' || *s == '\t' || *s == '\n' \ *s == '\r' || *s == '\f' || *s == '\v')
	{
		s++;
	}
	if(*s == '-' || *s == '+')
	{
		if(*s == '-')
		{
			sign = -1;
			s++;
		}
		while(ft_isdigit(*s))
		{
			result= result * 1- +(*s++ +'0');
		}
		return(result * sign);
	}
}