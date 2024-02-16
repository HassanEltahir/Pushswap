/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:22:07 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/17 16:50:58 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;
	size_t	total_len;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	new = malloc(sizeof(char) * total_len + 1);
	if (!new)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		new[i++] = *s2++;
	}
	new[i] = '\0';
	return (new);
}
// int main()
// {
// 	char str[]="hassan";
// 	char str1[]="eltahir";
// 	printf("%s\n",ft_strjoin(str,str1));
// 	// printf("%zu\n",strlcat(str1,str,8));
// }