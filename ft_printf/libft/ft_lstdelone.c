/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 19:38:13 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/15 15:33:15 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Libera un t_list
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void del_content(void *content)
// {
//     free(content);
//     printf("¡Contenido liberado correctamente!\n");
// }

// int main(void)
// {
//     t_list *nodo = (t_list *)malloc(sizeof(t_list));
//     if (!nodo)
//         return (1);

//     nodo->content = strdup("Hola 42, probando lstdelone"); 
//     nodo->next = NULL;

//     printf("Antes de borrar:\n");
//     printf("Dirección del nodo: %p\n", (void *)nodo);
//     printf("Contenido original: %s\n\n", (char *)nodo->content);

//     printf("Ejecutando ft_lstdelone...\n");
//     ft_lstdelone(nodo, del_content);  
//     printf("¡Nodo destruido con éxito!\n");

//     return (0);
// }