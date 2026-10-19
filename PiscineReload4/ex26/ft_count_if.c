/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 12:38:13 by mjusdado          #+#    #+#             */
/*   Updated: 2026/09/25 13:48:46 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!tab || !f)
		return (0);
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			count ++;
		i++;
	}
	return (count);
}

// int comprobante(char *hola)
// {
// 	if (hola[0] == 'c')
// 		return (1);
// 	else
// 		return (0);
// }

// int main(void)
// {
// 	char *array[] = {"Hola", "Caro","Hola","caro","AAAA","caro", 0};
// 	int resultado = ft_count_if(array, &comprobante);
// 		printf("%d\n", resultado);
// }