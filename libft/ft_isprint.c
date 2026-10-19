/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 16:52:44 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/07 17:02:59 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	char a[] = "€a";
// 	int resultado = ft_isprint(a[0]);
// 	printf("%d", resultado);
// }