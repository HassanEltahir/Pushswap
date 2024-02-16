/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:24:17 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/17 15:25:54 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	if (s[i])
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
// int main()
// {
// 	char testString[] = "Hello, World!";
// 	ft_striteri(testString,printCharacter);
// }