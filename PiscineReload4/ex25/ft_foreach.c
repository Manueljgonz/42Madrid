/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 11:44:21 by mjusdado          #+#    #+#             */
/*   Updated: 2026/09/25 14:05:05 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	if (!tab || !f || length <= 0)
		return ;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// void ft_putnbr(hola)
// {
// 	printf("%d", hola);
// }

// int main (void)
// {
// 	int tamaño = 4;
// 	int hola[] = {1 , 1, 4, 4, 2};
// 	ft_foreach(hola,tamaño,ft_putnbr);

// }