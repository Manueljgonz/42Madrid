/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:58:32 by mjusdado          #+#    #+#             */
/*   Updated: 2026/11/07 17:18:35 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void del_content(void *content)
// {
//     printf("%s ", (char *)content);
// }
// Applies a function to each element of a list
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
// 	t_list *one = (t_list *)malloc(sizeof(t_list));
// 	t_list *two = (t_list *)malloc(sizeof(t_list));
// 	t_list *three = (t_list *)malloc(sizeof(t_list));
// 	one->content = "a";
// 	one->next = two;
// 	two->content = "b";
// 	two->next = three;
// 	three->content = "c";
// 	three->next = NULL;
// 	ft_lstiter(one,del_content);
// 	while(one->next != NULL)
// 	{
// 		one = one->next;
// 	}
// }