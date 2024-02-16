/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:22:24 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/19 16:52:44 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	is_in_the_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (true);
		set++;
	}
	return (false);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*result;

	start = 0;
	end = 0;
	if (!s1 && !set)
		return (NULL);
	while (s1[start] && is_in_the_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_the_set(s1[end - 1], set))
		end--;
	result = ft_substr(s1, start, end - start);
	return (result);
}

// int	main(void)
// {
// 	char *s;
// 	char *s1;
// 	s = "";
// 	s1 = "a";
// 	char *result = ft_strtrim(s, s1);
// 	free(result);
// 	// char *result1 = substr(s,start,len);
// 	printf("%s\n", result);
// 	// printf("%s",result1);
// }