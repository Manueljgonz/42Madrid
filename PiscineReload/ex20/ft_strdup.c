/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:19:05 by mjusdado          #+#    #+#             */
/*   Updated: 2026/09/25 13:41:34 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *cadena)
{
	int	i;

	i = 0;
	while (cadena[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copia;
	int		i;

	copia = malloc(ft_strlen(src) + 1);
	i = 0;
	if (copia == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		copia[i] = src[i];
		i++;
	}
	copia[i] = '\0';
	return (copia);
}

// int main(void)
// {
// 	char cadena[]= '';
// 	char *resultado=ft_strdup(cadena);
// 	printf("%s", resultado);
// }
//si da mal probar el sizeoff