/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 17:32:40 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/30 11:56:01 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Library/ft_printf.h"

int	ft_print_nbr(int n, int fd)
{
	char	c;
	int		count;

	count = 0;
	if (n == -2147483648)
		return (write(fd, "-2147483648", 11));
	else if (n < 0)
	{
		n = n * -1;
		count = count + write(fd, "-", 1);
	}
	if (n > 9)
		count = count + ft_print_nbr(n / 10, fd);
	c = (n % 10) + '0';
	count = count + write(fd, &c, 1);
	return (count);
}

// int main(void)
// {
// 	int c = 12345;
// 	int fd = 1;
// 	printf("\n%d",ft_print_nbr(c, fd));
// }