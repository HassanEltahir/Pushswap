/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:39:07 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/17 15:39:15 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return (NULL);
}
// int main()
// {
// 	char s[] = "Hello, World!";
// 	int ch = 'o';
// 	const char *result = ft_strrchr(s,ch);
// 		if (result != NULL)
// {
//     printf("Found '%c' at position: %ld\n", ch, result - s);
// }
// else
// {
//     printf("'%c' not found\n", ch);
// }
// }