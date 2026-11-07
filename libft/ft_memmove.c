/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 13:10:55 by mjusdado          #+#    #+#             */
/*   Updated: 2026/11/07 17:27:06 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// memcopy but from right to left
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
//		char text[] = "123456789";
//		printf("Original text: %s\n", text);
//		// SOURCE (src)  : text (starts at '1', index 0)
//		// DEST (dest)   : text + 2 (starts at '3', index 2)
//		// LENGTH (n)    : 5 bytes ("12345")
//		// Since dest (text + 2) is GREATER than src (text), 
//		// it will trigger the 'else' in ft_memmove and copy backwards.
//		ft_memmove(text + 2, text, 5);
//		// Expected output: "121234589"
//		printf("With ft_memmove: %s\n", text);
//		return (0);
// }
