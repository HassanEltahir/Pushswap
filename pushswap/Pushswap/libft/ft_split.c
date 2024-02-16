/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:33:16 by haeltahi          #+#    #+#             */
/*   Updated: 2024/01/07 12:24:39 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// int main(int ac, char **av)
// {
//     char **result = ft_split(av[1], av[2][0]);
//     int i = 0;
// 	// printf("%d\n", ft_countwords(s, ' '));
//     while (result[i])
//     {
//         printf("%s\n", result[i]);
//         i++;
//     }

//     // Free memory allocated for the split strings
//     i = 0;
//     while (result[i])
//     {
//         free(result[i]);
//         i++;
//     }
//     free(result);

//     return (0);
// }