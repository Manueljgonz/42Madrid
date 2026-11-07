/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:54:57 by mjusdado          #+#    #+#             */
/*   Updated: 2026/11/07 17:13:30 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Another way of doing it.
// #include "libft.h"
// void ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	while (*lst != NULL)
// 		lst = &(*lst)->next;
// 	*lst = new;
// }
// int main(void)
// {
// 	t_list *one;
// 	t_list *two;
// 	one = (t_list *)malloc(sizeof(t_list));
// 	two = (t_list *)malloc(sizeof(t_list));
// 	one->content = "hola";
// 	two->content = "adios";
// 	two->next = NULL;
// 	ft_lstadd_back(&one ,two);
// 	while (one != NULL)
// 	{
// 		printf("%s ", (char *)one->content);
// 		one = one->next;
// 	}
// }

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*res;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	res = *lst;
	while (res->next != NULL)
		res = res->next;
	res->next = new;
}

// int main(void)
// {
// 	t_list *one;
// 	t_list *two;

// 	one = (t_list *)malloc(sizeof(t_list));
// 	two = (t_list *)malloc(sizeof(t_list));
// 	one->content = "hello ";
// 	two->content = "byee";
// 	two->next = NULL;
// 	ft_lstadd_back(&one ,two);

// 	while (one != NULL)
// 	{
// 		printf("%s", (char *)one->content);
// 		one = one->next;
// 	}
// }