/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:43:45 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/14 18:04:54 by mjusdado         ###   ########.fr       */
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
// 	t_list *uno;
// 	t_list *dos;
// 	uno = (t_list *)malloc(sizeof(t_list));
// 	dos = (t_list *)malloc(sizeof(t_list));
// 	uno->content = "hola";
// 	uno->next = dos;
// 	dos->content = "adios";
// 	dos->next = NULL;
// 	t_list *res = ft_lstlast(uno);
// 	printf("%s", (char *)res->content);
// }