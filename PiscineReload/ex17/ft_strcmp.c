/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:29:54 by mjusdado          #+#    #+#             */
/*   Updated: 2026/09/25 14:02:26 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	contador;
	int	resultado;

	resultado = 0;
	contador = 0;
	while (s1[contador] != '\0' || s2[contador] != '\0')
	{
		if (s1[contador] == s2[contador])
		{
			contador++;
		}
		else
		{
			resultado = s1[contador] - s2[contador];
			return (resultado);
		}
	}
	return (resultado);
}

// int main(void)
// {
// 	char uno[] = "holaS";
// 	char dos[] = "holas";

// 	ft_strcmp(uno,dos);
// }