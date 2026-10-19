/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:39:33 by mjusdado          #+#    #+#             */
/*   Updated: 2026/09/25 13:44:25 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*num;
	int	i;

	if (min >= max)
		return (NULL);
	num = malloc((max - min) * sizeof(int));
	if (num == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		num[i] = min;
		min++;
		i++;
	}
	return (num);
}

// int	main(void)
// {
// 	int a = 2;
// 	int b = 7;
// 	int i = 0;
// 	int tam = b - a;
// 	int *res = ft_range(a,b);

// 	while (i < tam)
// 	{
// 		printf("%d ", res[i]);
// 		i++;
// 	}
// }