/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:58:56 by mjusdado          #+#    #+#             */
/*   Updated: 2026/11/07 17:22:10 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del_content(void *content)
// {
// 	free (content);
// }
// void	*f(void *c)
// {
// 	c = "1";
// 	return (c);
// }

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
// 	t_list *one = (t_list *)malloc(sizeof(t_list));
// 	t_list *two = (t_list *)malloc(sizeof(t_list));
// 	t_list *three = (t_list *)malloc(sizeof(t_list));
// 	t_list *new = (t_list *)malloc(sizeof(t_list));
// 	one->content = "a";
// 	one->next = two;
// 	two->content = "b";
// 	two->next = three;
// 	three->content = "c";
// 	three->next = NULL;
// 	new = ft_lstmap(one, f, del_content);
// 	while(new != NULL)
// 	{
// 		printf("%s", (char *)new->content);
// 		new = new->next;
// 	}
// }