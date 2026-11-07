/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 17:25:30 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/15 15:43:13 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Cambia una cadena en mi ejemplo por NNNNNNN el numero de veces que dice num
void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*p;

	p = ptr;
	i = 0;
	while (i < num)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (p);
}

// int main(void)
// {
// 	size_t num = 7;
// 	char cadena[] = "Funciona?";

// 	ft_memset(cadena,'N',num);
// 	printf("%s", cadena);
// }