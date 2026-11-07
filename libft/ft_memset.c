/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 17:25:30 by mjusdado          #+#    #+#             */
/*   Updated: 2026/11/07 17:27:38 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Changes a string
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
// 	char cadena[] = "Works?";

// 	ft_memset(cadena,'N',num);
// 	printf("%s", cadena);
// }