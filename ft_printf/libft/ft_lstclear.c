/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 11:53:37 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/14 18:07:10 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void del_content(void *content)
// {
//     free(content);
//     printf("¡Contenido liberado correctamente!\n");
// }

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*puntero;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		puntero = (*lst)->next;
		del((*lst)->content);
		free (*lst);
		*lst = puntero;
	}
}

// int main(void)
// {
// 	t_list *hola = (t_list *)malloc(sizeof(t_list));
// 	hola->content = strdup("hola");
// 	hola->next = NULL;
// 	ft_lstclear(&hola,del_content);
// }