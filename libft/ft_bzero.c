/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:28:50 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/15 15:54:36 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// n es el número de bytes que van a ser rellenados con 0
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// int main(void)
// {
// 	char j[] = "HOla me llamo Manuel";
// 	size_t num = 3;
// 	ft_bzero(j, num);
// 	printf("%c", j[5]);
// }