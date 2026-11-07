/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:58:44 by mjusdado          #+#    #+#             */
/*   Updated: 2026/11/07 17:05:00 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	exception(const char *nptr, int i)
{
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t'
		|| nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == '\v')
		i++;
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	negativo;

	negativo = 1;
	result = 0;
	i = 0;
	i = exception(nptr, i);
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
		result = ((result * 10) + (nptr[i] - '0'));
		i++;
	}
	if (negativo < 0)
		result = result * -1;
	return (result);
}

// int main(void)
// {
// 	char a[] = "-6871";
// 	printf("%d" , ft_atoi(a));
// }