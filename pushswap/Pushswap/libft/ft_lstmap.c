/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:23:10 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/19 17:57:11 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_elements;
	t_list	*newlinked;

	newlinked = NULL;
	while (lst)
	{
		new_elements = ft_lstnew(f(lst->content));
		if (!new_elements)
		{
			ft_lstclear(&newlinked, del);
			return (0);
		}
		ft_lstadd_back(&newlinked, new_elements);
		lst = lst->next;
	}
	return (newlinked);
}
// void ft_print(t_list *content)
// {
// 	t_list *node;
// 	node = content;
// 	while(node->next != NULL)
// 	{
// 		printf("%s",node -> content);
// 		node = node ->next;
// 	}
// 	printf("%s",node ->content);
// }

// int main()
// {
// 	t_list *first;
// 	t_list *second;
// 	t_list *third;

// 	first = ft_lstnew(ft_strdup("a"));
// 	second = ft_lstnew(ft_strdup("b"));
// 	third = ft_lstnew(ft_strdup("c"));
// 	first->next = second;
// 	second->next = third;
// 	third ->next = NULL;
// 		ft_lstadd_back(&first,third);
// 	// t_list *four = ft_lstnew(ft_strdup("d"));
// 	// ft_print(first);

// 	ft_print(first);
// }

// 	t_list *new_linked_list = ft_lstmap(first, capitialize, del);
// 	print_list(new_linked_list);
// }