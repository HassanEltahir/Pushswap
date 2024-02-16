#include "push_swap.h"

static int	ft_countwords(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static	char	*word_dup(const char *s, int start, int finish)

{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(char) * (finish - start + 1));
	while (start < finish)
	{
		new[i++] = s[start++];
	}
	new[i] = '\0';
	return (new);
}

char	**ft_split(const char *str, char c)
{
	size_t	i;
	int		j;
	int		index;
	char	**split;
	static int cursor = 0;

	i = 0;
	index = -1;
	j = 0;
	split = malloc(sizeof(char *) * (ft_countwords(str, c) + 1));
	if (!str || !split)
		return (NULL);
	
	while (i <= ft_strlen(str))
	{
		if (str[i] != c && index < 0)
			index = i;
		else if ((str[i] == c || i == ft_strlen(str)) && index >= 0)
		{
			split[j++] = word_dup(str, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = NULL;
	return (split);
}

bool	stack_sorted(t_stack_node *stack)
{
	if(!(stack))
	{
		return (1);
	}
	if(stack->nbr > stack->next->nbr)
	{
			return(false);
	}
	return(true);
}
