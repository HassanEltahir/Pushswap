/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:22:35 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/17 15:22:36 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
// void del(void *delete)
// {
//     free(delete);
// }
// int main()
// {
//     t_list *node = malloc(sizeof(t_list));
//     int *n = malloc(sizeof(int));
//     *n = 1;
//     // content = n;
//     node -> content = n;
//     node ->next = NULL;
//     ft_lstdelone(node,del);
// }