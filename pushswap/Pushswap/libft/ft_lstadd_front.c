/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:21:58 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/17 15:22:10 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	(*new).next = *lst;
	*lst = new;
}

// int main(void)
// {
// 	t_list **head;
// 	t_list *list;
// 	t_list *list2;

// 	list = malloc(sizeof(t_list));
// 	list2 = malloc(sizeof(t_list));
// 	*head = list;
// 	list->content = (void *) 53;
// 	list2->content = (void *) 20;

// 	ft_lstadd_front(head, list2);
// 	if (list2->next->content == (void *) 53)
// 		printf("true");
// 	return (1);
// }