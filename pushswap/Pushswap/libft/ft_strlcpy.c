/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:38:48 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/17 15:38:53 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	char			*srcp;

	i = 0;
	j = ft_strlen(src);
	srcp = (char *)src;
	if (dstsize == 0)
	{
		return (j);
	}
	while (i < dstsize - 1 && srcp[i])
	{
		dst[i] = srcp[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
// int main()
// {
// 	char dst[]="annhghfghgghfghgfhfshf";
// 	char src[]="hassan";
// 	printf("%zu\n",ft_strlcpy(dst,src,0));
// 	printf("%lu",strlcpy(dst,src,0));
// }