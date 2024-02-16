/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:22:16 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/17 15:22:17 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!(lst))
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}
// void delete(void *delete)
// {
// 	free(delete);
// }
// 	int main()
// {
// 	t_list *node = malloc(sizeof(t_list));
// 	t_list *node1 = malloc(sizeof(t_list));
// 	t_list *node2 = malloc(sizeof(t_list));
// 	node -> content = ft_strdup("1");
// 	node ->next = node1;
// 	node1 -> content = ft_strdup("2");
// 	node1 ->next = node2;
// 	node2 -> content = ft_strdup("3");
// 	node2 ->next = NULL;
// 	ft_lstclear(&node,delete);
// 	if (node == NULL)
// 		printf("All nodes have been deleted.\n");
// 	else
// 		printf("Node deletion failed.\n");
// 	return (0);
// }