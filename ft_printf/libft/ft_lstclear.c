/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 11:53:37 by mjusdado          #+#    #+#             */
/*   Updated: 2026/11/07 17:15:23 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void del_content(void *content)
// {
// 		free(content);
//		printf("free!\n");
// }

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*pointer;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		pointer = (*lst)->next;
		del((*lst)->content);
		free (*lst);
		*lst = pointer;
	}
}

// int main(void)
// {
// 	t_list *list = (t_list *)malloc(sizeof(t_list));
// 	list->content = strdup("hello");
// 	list->next = NULL;
// 	ft_lstclear(&list,del_content);
// }