/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_wsnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 18:03:11 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/30 11:56:27 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Library/ft_printf.h"

int	ft_print_wsnbr(unsigned int n, int fd)
{
	char	c;
	int		i;

	i = 0;
	if (n > 9)
		i = i + ft_print_wsnbr(n / 10, fd);
	c = (n % 10) + '0';
	i = (i + write(fd, &c, 1));
	return (i);
}

// int main (void)
// {
// 	printf("\n%d",ft_wsnbr(2344457723, 1));
// }