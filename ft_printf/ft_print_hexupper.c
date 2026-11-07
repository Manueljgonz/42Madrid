/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexupper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 19:25:54 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/30 11:55:47 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Library/ft_printf.h"

static	void	printer_mayus(int rest)
{
	if (rest >= 0 && rest <= 9)
		ft_putnbr_fd(rest, 1);
	if (rest == 10)
		ft_putchar_fd('A', 1);
	if (rest == 11)
		ft_putchar_fd('B', 1);
	if (rest == 12)
		ft_putchar_fd('C', 1);
	if (rest == 13)
		ft_putchar_fd('D', 1);
	if (rest == 14)
		ft_putchar_fd('E', 1);
	if (rest == 15)
		ft_putchar_fd('F', 1);
}

int	ft_print_hexupper(uintptr_t dec)
{
	int	i;

	i = 0;
	if (dec >= 16)
	{
		i = i + ft_print_hexupper(dec / 16);
		printer_mayus(dec % 16);
		i += 1;
	}
	else
	{
		i = 1;
		printer_mayus(dec % 16);
	}
	return (i);
}
