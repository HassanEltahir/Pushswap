/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:34:30 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/19 16:54:21 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print(int nb, int fd)
{
	char	c;

	if (nb > 0)
	{
		ft_print(nb / 10, fd);
		c = nb % 10 + '0';
		write(fd, &c, 1);
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == 0)
	{
		write(fd, "0", 1);
	}
	else if (nb == -2147483648)
	{
		write(fd, "-", 1);
		write(fd, "2", 1);
		nb = 147483648;
	}
	else if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	ft_print(nb, fd);
}

// int main()
// {
// 	ft_putnbr_fd(-12583, 1);
// 	return (0);
// }
