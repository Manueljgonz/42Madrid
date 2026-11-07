/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:43:45 by mjusdado          #+#    #+#             */
/*   Updated: 2026/11/07 17:20:51 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int main(void)
// {
// 	t_list *one;
// 	t_list *two;
// 	one = (t_list *)malloc(sizeof(t_list));
// 	two = (t_list *)malloc(sizeof(t_list));
// 	one->content = "hello";
// 	one->next = two;
// 	two->content = "byee";
// 	two->next = NULL;
// 	t_list *res = ft_lstlast(one);
// 	printf("%s", (char *)res->content);
// }