/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 15:57:35 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/16 11:28:53 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Cuenta los digitos
static int	contador(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

// min number y lo rellena (se puede hacer con strdup)
static char	*minnmb(void)
{
	char	*i	;

	i = malloc(12 * sizeof(char));
	if (!i)
		return (NULL);
	i[0] = '-';
	i[1] = '2';
	i[2] = '1';
	i[3] = '4';
	i[4] = '7';
	i[5] = '4';
	i[6] = '8';
	i[7] = '3';
	i[8] = '6';
	i[9] = '4';
	i[10] = '8';
	i[11] = '\0';
	return (i);
}

// Motor principal del itoa
static void	operator(int s, int n, char *num)
{
	while (s > 0)
	{
		num[s - 1] = (n % 10) + '0';
		n = n / 10;
		s--;
	}
}

// Si es negativo reserva un espacio mas y como se rellena de derecha
// a izquierda cabe bien el -
char	*ft_itoa(int n)
{
	char	*num;
	int		s;
	int		neg;

	neg = 1;
	if (n == -2147483648)
		return (minnmb());
	s = contador(n);
	if (n < 0)
	{
		n = (n * -1);
		neg = -1;
		s++;
	}
	num = malloc(s + 1);
	if (!num)
		return (NULL);
	num[s] = '\0';
	operator(s, n, num);
	if (neg < 0)
		num[0] = '-';
	return (num);
}

// int main(void)
// {
// 	int i = -425;
// 	printf("%s" , ft_itoa(i));
// }