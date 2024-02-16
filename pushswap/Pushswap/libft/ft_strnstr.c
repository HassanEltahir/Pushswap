/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:39:41 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/17 15:40:01 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t n)
{
	size_t	j;

	if (!haystack && !n)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && n--)
	{
		j = 0;
		while (*(haystack + j) == *(needle + j) && j <= n)
		{
			if ((*(needle + j + 1) == '\0'))
				return ((char *)haystack);
			j++;
		}
		haystack++;
	}
	return (NULL);
}
// int main()
// {
//     char str[]="FF your FF return (FF now FF");
//     char str1[]="abdullah";
//     size_t n = strlen(str1);
//     printf("%s\n",ft_strnstr(str,str1,n));
//     // printf ("%s",strnstr(str,str1,25));
// }