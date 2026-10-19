/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 12:46:35 by mjusdado          #+#    #+#             */
/*   Updated: 2026/09/25 13:29:01 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	numero;

	numero = 1;
	if (nb <= 0)
		return (0);
	else
	{
		while (numero * numero <= nb)
		{
			if (numero * numero == nb)
				return (numero);
			numero++;
		}
		return (0);
	}
}

// int main(void)
// {
// 	printf("%d", ft_sqrt(81));
// 	return (0);
// }