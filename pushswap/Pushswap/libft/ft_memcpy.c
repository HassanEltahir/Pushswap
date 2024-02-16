/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:23:30 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/17 15:23:31 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char			*dstp;
	const char		*srcp;
	unsigned int	i;

	if (dst == NULL && src == NULL)
	{
		return (dst);
	}
	dstp = (char *)dst;
	srcp = (char *)src;
	i = 0;
	while (i < len)
	{
		dstp[i] = srcp[i];
		i++;
	}
	return (dstp);
}
// int main()
// {
// 	char src[] = "abcde";

// 	printf("%s\n",ft_memcpy(src+2,src,3));

// }