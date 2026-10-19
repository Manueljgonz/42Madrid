/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:58:44 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/15 12:08:58 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	excepciones(const char *nptr, int i)
{
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t'
		|| nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == '\v')
		i++;
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	resultado;
	int	negativo;

	negativo = 1;
	resultado = 0;
	i = 0;
	i = excepciones(nptr, i);
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			negativo = -1;
		if (nptr[i + 1] == '-' || nptr[i + 1] == '+')
			return (0);
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		resultado = ((resultado * 10) + (nptr[i] - '0'));
		i++;
	}
	if (negativo < 0)
		resultado = resultado * -1;
	return (resultado);
}

// int main(void)
// {
// 	char a[] = "-6871";
// 	printf("%d" , ft_atoi(a));
// }