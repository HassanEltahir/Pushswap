/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:21:09 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/19 16:47:57 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t count)
{
	char	*j;
	size_t	i;

	i = 0;
	j = (char *)str;
	while (i < count)
	{
		j[i] = c;
		i++;
	}
	return ((void *)j);
}
