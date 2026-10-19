/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:46:21 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/15 15:41:14 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Compara memoria
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*a;
	const unsigned char	*b;

	i = 0;
	a = (const unsigned char *)s1;
	b = (const unsigned char *)s2;
	while (i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char s1[] = "Holaaaa";
// 	char s2[] = "Holaaa";
// 	size_t n = 12;
// 	printf("%d",ft_memcmp(s1,s2,n));
// }