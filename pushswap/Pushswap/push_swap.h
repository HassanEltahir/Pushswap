#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H



# include <stdbool.h>
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include "libft/libft.h"
typedef	struct s_stack_node
{
	int		nbr;
	int		index;
	int 	push_cost;
	bool	above_medium;
	bool	cheapest;
	struct	s_stack_node	*target_node;
	struct	s_stack_node	*next;
	struct	s_stack_node	*prev;
}		t_stack_node;

char **ft_split(char *str,char separator)
//Stack initiation

//Nodes initiation

//Stack utils

//Commands

//Algorithms

#endif