/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:58:48 by mjusdado          #+#    #+#             */
/*   Updated: 2026/09/25 13:31:31 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
// 	int a = 85;
// 	int b = 42;
// 	int div = 0;
// 	int mod = 0;
// 	ft_div_mod(a, b ,&div,&mod);
// 	printf ("%d %d", div , mod);
// }