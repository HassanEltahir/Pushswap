/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:22:39 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/17 15:22:40 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}
// void putstr_fd(void *str)
// {
// 	ft_putstr_fd((char*)str,1);
// }
// int main()
// {
//  struct s_list *new;

// 	new = ft_lstnew("1");
// 	ft_lstadd_front(&new,ft_lstnew("2"));
// 	ft_lstadd_front(&new,ft_lstnew("3"));
// 	ft_lstiter(new,&putstr_fd);
// }