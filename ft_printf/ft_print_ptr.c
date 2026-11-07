/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 17:46:33 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/30 11:56:23 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Library/ft_printf.h"

static void	printer(int rest)
{
	if (rest >= 0 && rest <= 9)
		ft_putnbr_fd(rest, 1);
	if (rest == 10)
		ft_putchar_fd('a', 1);
	if (rest == 11)
		ft_putchar_fd('b', 1);
	if (rest == 12)
		ft_putchar_fd('c', 1);
	if (rest == 13)
		ft_putchar_fd('d', 1);
	if (rest == 14)
		ft_putchar_fd('e', 1);
	if (rest == 15)
		ft_putchar_fd('f', 1);
}

int	ft_print_ptr(uintptr_t dec)
{
	int	i;

	i = 0;
	if (dec >= 16)
	{
		i = i + ft_print_ptr (dec / 16);
		printer(dec % 16);
		i += 1;
	}
	else
	{
		i = 1;
		printer(dec % 16);
	}
	return (i);
}

// int main (void)
// {
// 	printf("\n%d",ft_print_ptr(0x1f63));
// }