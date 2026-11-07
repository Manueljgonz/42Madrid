/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 19:38:13 by mjusdado          #+#    #+#             */
/*   Updated: 2026/11/07 17:45:53 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// free t_list
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void del_content(void *content)
// {
//     free(content);
//     printf("free!\n");
// }

// int main(void)
// {
//		t_list *node = (t_list *)malloc(sizeof(t_list));
//		if (!node)
//			return (1);
//		node->content = strdup("Test"); 
//		node->next = NULL;
//		ft_lstdelone(node, del_content);  
//		printf("node gone\n");
//		return (0);
// }