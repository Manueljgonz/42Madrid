/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 13:27:56 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/07 17:02:55 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
// 	t_list *new;
// 	t_list *lst;
// 	new = (t_list *)malloc(sizeof(t_list));
// 	lst = (t_list *)malloc(sizeof(t_list));
// 	new->content = "hola";
// 	new->next = NULL;
// 	lst->content = "adios";
// 	lst->next = NULL;
// 	ft_lstadd_front(&lst,new);
// 	while (lst != NULL)
// 	{
// 		printf("%s ", (char *)lst->content);
// 		lst = lst->next;
// 	}
// }