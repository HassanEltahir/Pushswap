/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:21:25 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/17 16:52:03 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*k;

	i = 0;
	k = (char *)s;
	if (!s)
	{
		return (NULL);
	}
	k = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!k)
		return (NULL);
	while (s[i])
	{
		k[i] = (f(i, s[i]));
		i++;
	}
	k[i] = '\0';
	return (k);
}
