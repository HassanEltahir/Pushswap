/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:21:16 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/19 09:09:26 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32 && *str))
		str++;
	if (*str == '-')
		sign = -1;
	if ((*str == '+' || *str == '-') && *str)
		str++;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		result = 10 * result + (*str - '0');
		str++;
		if ((result > LONG_MAX / 10) 
			|| (result == LONG_MAX / 10 && (*str - '0') > LONG_MAX % 10))
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
	}
	return (sign * result);
}

// int main()
// {

// 	int a =
// 	// printf("\n ft_atoi : -54\n");
// 	printf("%d\n",ft_atoi("9223372036854775807123123123123123123"));
// 	printf("%d", atoi("9223372036854775807123123123123123123"));

// 	printf("\n ft_atoi : A-645\n");
// 	printf("%d\n", ft_atoi("A-645"));
// 	printf("%d", atoi("A-645"));
// }

// 	printf("\n ft_atoi : +*=/L    LK26578\n");
// 	printf("%d\n", ft_atoi("+*=/L    LK26578"));
// 	printf("%d", atoi("+*=/L    LK26578"));
// }

// 	printf("\n ft_atoi : +*=/L26578\n");
// 	printf("%d\n", ft_atoi("+*=/L26578"));
// 	printf("%d", atoi("+*=/L26578"));

// 	printf("\n ft_atoi : 			2147483647\n");
// 	printf("%d\n", ft_atoi("			2147483647"));
// 	printf("%d", atoi("			2147483647"));
// }

// 	// printf("\n ft_atoi : -2147483645435454348\n");
// 	// printf("%d\n", ft_atoi("-214748345353454648"));
// 	// printf("%d", atoi("-214748368"));

// 	// printf("\n ft_atoi : 21474  gegev83648\n");
// 	// printf("%d\n", ft_atoi("21474  gegev83648"));
// 	// printf("%d", atoi("21474  gegev83648"));

// 	// printf("\n ft_atoi : hoyoyh-3562\n");
// // 	// printf("%d\n", ft_atoi("hoyoyh-3562"));
// // 	// printf("%d", atoi("hoyoyh-3562"));
// 	}