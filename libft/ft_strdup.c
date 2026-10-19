/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:07:55 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/16 11:49:43 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Duplica un string en otro
char	*ft_strdup(const char *s1)
{
	char	*hola;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != 0)
		i++;
	hola = (malloc ((i + 1) * sizeof(char)));
	if (!hola)
		return (NULL);
	while (i > j)
	{
		hola[j] = s1[j];
		j++;
	}
	hola[j] = '\0';
	return (hola);
}

// int main(void)
// {
// 	char cp[] = "holaaa";
//     char *ptr_duplicado;
//     ptr_duplicado = ft_strdup(cp);

//     if (ptr_duplicado != NULL) {
//         printf("%s\n", ptr_duplicado);
//                 free(ptr_duplicado); 
//     }
// }