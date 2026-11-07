/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:54:57 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/14 18:01:58 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// void ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	while (*lst != NULL)
// 		lst = &(*lst)->next;
// 	*lst = new;
// }
// int main(void)
// {
// 	t_list *uno;
// 	t_list *dos;
// 	uno = (t_list *)malloc(sizeof(t_list));
// 	dos = (t_list *)malloc(sizeof(t_list));
// 	uno->content = "hola";
// 	dos->content = "adios";
// 	dos->next = NULL;
// 	ft_lstadd_back(&uno ,dos);
// 	while (uno != NULL)
// 	{
// 		printf("%s ", (char *)uno->content);
// 		uno = uno->next;
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
// 	t_list *uno;
// 	t_list *dos;

// 	uno = (t_list *)malloc(sizeof(t_list));
// 	dos = (t_list *)malloc(sizeof(t_list));
// 	uno->content = "hola ";
// 	dos->content = "adios";
// 	dos->next = NULL;
// 	ft_lstadd_back(&uno ,dos);

// 	while (uno != NULL)
// 	{
// 		printf("%s", (char *)uno->content);
// 		uno = uno->next;
// 	}
// }