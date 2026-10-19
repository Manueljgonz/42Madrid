/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 17:15:21 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/16 11:20:08 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Función recursiva
void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		n = n * -1;
		write(fd, "-", 1);
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	if (n != -2147483648)
	{
		c = (n % 10) + '0';
		write(fd, &c, 1);
	}
}

// int main(void)
// {
// 	int c = 0;
// 	int fd = 1;
// 	ft_putnbr_fd(c, fd);
// }