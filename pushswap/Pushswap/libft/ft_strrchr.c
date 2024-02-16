/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:39:27 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/17 15:39:35 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	char const	*aux;

	aux = NULL;
	while (*s)
	{
		if (*s == (char)c)
			aux = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return ((char *)aux);
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