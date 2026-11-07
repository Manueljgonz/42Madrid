/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:57:38 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/14 12:33:13 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p;
	unsigned char const	*j;

	if (!dest && !src)
		return (dest);
	p = (unsigned char *)dest;
	j = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		p[i] = j[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	char a[] = "Hola me llamo manuel";
// 	char b[30];
// 	size_t n = 5;
// 	ft_memcpy(b,a,n);
// 	printf("%s", b);
// }
