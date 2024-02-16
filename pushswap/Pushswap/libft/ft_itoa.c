/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:21:52 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/19 14:50:16 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdlib.h>

static char	*ft_revprint(char *str)
{
	char	temp;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str)- 1;
	if (str[i] == '-')
		i++;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}

static int	ft_countwords(long n)
{
	long	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		i;

	i = 0;
	nb = n;
	if (n == 0)
		return (ft_strdup("0"));
	str = malloc(sizeof(char) * (ft_countwords(nb)+ 1));
	if (!str)
	{
		return (NULL);
	}
	while (nb)
	{
		if (nb < 0)
		{
			str[i++] = '-';
			nb *= -1;
		}
		str[i++] = nb % 10 + '0';
		nb /= 10;
	}
	str[i] = '\0';
	return (ft_revprint(str));
}

// int main(int ac, char **av)
// {
// 	char *result = ft_itoa(atoi(av[1]));
// 	printf("%s\n", result);
// 	free(result);
// 	return 0;
// }
