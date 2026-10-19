/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:29:30 by mjusdado          #+#    #+#             */
/*   Updated: 2026/09/25 16:50:27 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	resultado;

	resultado = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb != 0)
	{
		resultado = resultado * nb;
		nb--;
	}
	return (resultado);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(3));
// 	return (0);
// }