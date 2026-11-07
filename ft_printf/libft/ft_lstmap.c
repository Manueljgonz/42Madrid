/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:58:56 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/16 13:36:51 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del_content(void *content)
// {
// 	free (content);
// }
// void	*f(void *c)
// {
// 	c = "xxx";
// 	return (c);
// }

// Recorre una lista aplicando una función y la guarda en una nueva
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nod;
	t_list	*res;
	void	*c;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	while (lst != NULL)
	{
		c = f(lst->content);
		nod = ft_lstnew(c);
		if (!nod)
		{
			del(c);
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, nod);
		lst = lst->next;
	}
	return (res);
}

// int main(void)
// {
// 	t_list *uno = (t_list *)malloc(sizeof(t_list));
// 	t_list *dos = (t_list *)malloc(sizeof(t_list));
// 	t_list *tres = (t_list *)malloc(sizeof(t_list));
// 	t_list *nuevo = (t_list *)malloc(sizeof(t_list));
// 	uno->content = "a";
// 	uno->next = dos;
// 	dos->content = "b";
// 	dos->next = tres;
// 	tres->content = "c";
// 	tres->next = NULL;
// 	nuevo = ft_lstmap(uno, f, del_content);
// 	while(nuevo != NULL)
// 	{
// 		printf("%s", (char *)nuevo->content);
// 		nuevo = nuevo->next;
// 	}
// }