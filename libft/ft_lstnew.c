/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 12:22:27 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/07 17:02:49 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lista;

	lista = (t_list *)malloc(sizeof(t_list));
	if (!lista)
		return (NULL);
	lista->content = content;
	lista->next = NULL;
	return (lista);
}

// int main(void)
// {
// 	t_list *hola;
// 	hola = ft_lstnew("hola");
// 		while (hola != NULL)
// 		{
// 			printf("%s", (char *)hola->content);
// 			hola = hola->next;
// 		}
// }