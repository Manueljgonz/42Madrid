/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 11:04:25 by mjusdado          #+#    #+#             */
/*   Updated: 2026/11/07 17:06:25 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*reserve;
	size_t			i;

	i = 0;
	if (nmemb != 0 && size != 0 && (nmemb > ((size_t)-1) / size))
		return (NULL);
	reserve = malloc (nmemb * size);
	if (size == 0)
		return (reserve);
	if (!reserve)
		return (NULL);
	while (i < nmemb * size)
	{
		reserve[i] = 0;
		i++;
	}
	return ((void *)reserve);
}

// int main(void)
// {
// 	size_t a = 1844674407370955164;
// 	size_t b = 4;
// 	ft_calloc(a,b);
// 	free(ft_calloc(a,b));
// }
