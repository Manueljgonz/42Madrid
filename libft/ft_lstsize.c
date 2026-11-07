/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:44:19 by mjusdado          #+#    #+#             */
/*   Updated: 2026/11/07 17:23:18 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

// int main(void)
// {
// 	t_list *one;
// 	t_list *two;
// 	int i = 0;
// 	one = (t_list *)malloc(sizeof(t_list));
// 	two = (t_list *)malloc(sizeof(t_list));
// 	one->content = "hello";
// 	one->next = two;
// 	two->content = "byee";
// 	two->next = NULL;
// 	i = ft_lstsize(one);
// 	printf("%d",i);
// }