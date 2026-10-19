/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:44:19 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/07 17:02:48 by mjusdado         ###   ########.fr       */
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
// 	t_list *uno;
// 	t_list *dos;
// 	int i = 0;
// 	uno = (t_list *)malloc(sizeof(t_list));
// 	dos = (t_list *)malloc(sizeof(t_list));
// 	uno->content = "hola";
// 	uno->next = dos;
// 	dos->content = "adios";
// 	dos->next = NULL;
// 	i = ft_lstsize(uno);
// 	printf("%d",i);
// }