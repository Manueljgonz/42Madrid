/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:37:17 by mjusdado          #+#    #+#             */
/*   Updated: 2026/09/25 13:31:32 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_swap(int *a, int*b)
{
	int	cambio;

	cambio = *a;
	*a = *b;
	*b = cambio;
}

// int main(void)
// {
// 	int a = 69;
// 	int b = 64;
// 	ft_swap(&a, &b);
// 	printf ("%d %d", a, b);
// }
