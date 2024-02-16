/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:21:56 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/19 10:19:43 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	j;
	char			*temp;
	size_t			substrlen;

	j = 0;
	substrlen = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	while (substrlen < len && s[substrlen + start])
		substrlen++;
	temp = malloc(sizeof(char) * (substrlen + 1));
	if (!temp)
		return (NULL);
	while (j < substrlen)
	{
		temp[j] = s[start + j];
		j++;
	}
	temp[j] = '\0';
	return (temp);
}

// int main()
// {
// 	char *s;
// 	unsigned int start;
// 	unsigned int len;
// 	s= "tripouille";
// 	start = ft_strlen(s)+ 1;
// 	len = 42000;
// 	char *result = ft_substr(s,start,len);
// 	// char *result1 = substr(s,start,len);
// 	printf("%s\n",result);
// 	// printf("%s",result1);
// }