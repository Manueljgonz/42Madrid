/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:17:35 by mjusdado          #+#    #+#             */
/*   Updated: 2026/11/07 17:24:31 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// It returns the occurrence of c in a memory block
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*j;

	i = 0;
	j = (unsigned char *)s;
	while (n > i)
	{
		if (j[i] == (unsigned char)c)
		{
			return ((unsigned char *)&j[i]);
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char a[] = "hellooo";
// 	char c = 'c';
// 	size_t n = 6;
// 	printf("%s", (char *)ft_memchr(a,c,n));
// }