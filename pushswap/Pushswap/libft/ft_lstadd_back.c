/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:21:55 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/17 15:21:56 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	struct s_list	*ptr;

	if (*lst)
	{
		ptr = *lst;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	else
	{
		*lst = new;
	}
}
// int main()

// {
//     t_list *lst = ft_lstnew((void *)54);
// 	ft_lstadd_back(&lst,ft_lstnew((void *)42));

// 	while (lst)
// 	{
// 		printf("%d", (int)lst->content);
// 		lst = lst->next;
// 	}
// 	if(lst->next->content == (void*)54)
// 	{
// 		// printf("true");
// 	}
// }
