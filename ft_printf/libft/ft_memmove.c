/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 13:10:55 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/15 15:42:18 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Como memcpy pero si la direccion de memoria de source es mayor que la de dest
// copia de derecha a izquierda para que no haya errores de overlaping
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
		ft_memcpy(d, s, n);
	else
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	return (dest);
}

// int main(void)
// {
//     char texto[] = "123456789";
//     printf("Texto original : %s\n", texto);
//     // ORIGEN (src)  : texto (empieza en el '1', posición 0)
//     // DESTINO (dest): texto + 2 (empieza en el '3', posición 2)
//     // CANTIDAD (n)  : 5 bytes ("12345")
//     // Como dest (texto + 2) es MAYOR que src (texto), 
//     // entrará en el 'else' de tu ft_memmove y copiará hacia atrás.
//     ft_memmove(texto + 2, texto, 5);
//     // Resultado esperado: "121234589"
//     printf("Con ft_memmove : %s\n", texto);
//     return (0);
// }