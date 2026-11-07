/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 16:32:59 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/07 17:03:02 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if (a > 47 && a < 58)
		return (1);
	if (a > 64 && a < 91)
		return (1);
	if (a > 96 && a < 123)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	char a = '_';
// 	int resultado = ft_isalnum(a);
// 	printf("%d", resultado);
// }