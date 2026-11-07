/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 18:13:18 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/16 11:47:19 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Añade una cadena detras de otra ya existente
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	i = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	dst_len = i;
	if (dst_len == size)
		return (size + src_len);
	j = 0;
	while (src[j] != '\0' && (dst_len + j + 1) < size)
	{
		dst[dst_len + j] = src[j];
		j++;
	}
	if (dst_len + j < size)
		dst[dst_len + j] = '\0';
	return (dst_len + src_len);
}

// int main(void)
// {
// 	char dest[14] = "a";
// 	char src[] = "lorem ipsum dolor sit amet";
// 	size_t j = ft_strlcat(dest,src, 15);
// 	printf("%s\n" , dest);
// 	printf("%zu" , j);
// }