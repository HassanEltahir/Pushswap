/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:33:53 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/17 15:38:36 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	total_len;
	size_t	i;

	i = 0;
	dst_len = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0 && dst_len < dstsize)
		return (0);
	while (dest[dst_len] && dst_len < dstsize)
		dst_len++;
	total_len = (src_len + dst_len);
	if (dstsize <= dst_len)
		return (total_len);
	while (src[i] && (dst_len + 1 < dstsize))
	{
		dest[dst_len] = src[i];
		i++;
		dst_len++;
	}
	if (dst_len < dstsize)
		dest[dst_len] = '\0';
	return (total_len);
}
