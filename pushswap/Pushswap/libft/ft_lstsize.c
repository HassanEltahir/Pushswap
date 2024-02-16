/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:23:18 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/17 15:23:19 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		i;

	ptr = lst;
	i = 0;
	if (lst == NULL)
	{
		return (0);
	}
	while (ptr)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
// void print_list(t_list *s)
// {
// 	t_list *temp;
// 	temp = s;
// 	while(temp)
// 	{
// 		printf("%s\n",(char *)temp ->content);
// 		temp = temp->next;
// 	}
// }
// int main()
// {
// 	t_list *node;
// 	t_list *node1;
// 	node = ft_lstnew(ft_strdup("1"));
// 	node1 = ft_lstnew(ft_strdup("2"));
// 	node->next = node1;
// 	// print_list(node);
// 	int a = ft_lstsize(node);
// 	printf("%d",a);
// }