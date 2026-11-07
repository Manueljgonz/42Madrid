/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:58:32 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/15 15:35:24 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void del_content(void *content)
// {
//     printf("%s ", (char *)content);
// }
// Aplica una función sobre la propia lista
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int main(void)
// {
// 	t_list *uno = (t_list *)malloc(sizeof(t_list));
// 	t_list *dos = (t_list *)malloc(sizeof(t_list));
// 	t_list *tres = (t_list *)malloc(sizeof(t_list));
// 	uno->content = "a";
// 	uno->next = dos;
// 	dos->content = "b";
// 	dos->next = tres;
// 	tres->content = "c";
// 	tres->next = NULL;
// 	ft_lstiter(uno,del_content);
// 	while(uno->next != NULL)
// 	{
// 		uno = uno->next;
// 	}
// }