/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 11:04:25 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/16 11:29:36 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// nmemb son los objetos que necesitas (char por ej) y size el 
// tamaño de cada objeto 
// if (nmemb != 0 && size != 0 && (nmemb > ((size_t)-1) / size))
// Esta linea se asegura de no ser 0 para no dividir entre 0 y 
// lo otro para que quepa en la memoria
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*reserva;
	size_t			i;

	i = 0;
	if (nmemb != 0 && size != 0 && (nmemb > ((size_t)-1) / size))
		return (NULL);
	reserva = malloc (nmemb * size);
	if (size == 0)
		return (reserva);
	if (!reserva)
		return (NULL);
	while (i < nmemb * size)
	{
		reserva[i] = 0;
		i++;
	}
	return ((void *)reserva);
}

// int main(void)
// {
// 	size_t a = 1844674407370955164;
// 	size_t b = 4;
// 	ft_calloc(a,b);
// 	free(ft_calloc(a,b));
// }
