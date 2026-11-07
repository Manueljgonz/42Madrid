/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 17:01:59 by mjusdado          #+#    #+#             */
/*   Updated: 2026/11/07 17:45:24 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *a)
{
	size_t	i;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main(void)
// {
// 	char a[] = "Test";
// 	int resultado = ft_strlen(a);
// 	printf("%d", resultado);
// }