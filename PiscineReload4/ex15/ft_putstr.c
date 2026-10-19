/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:05:04 by mjusdado          #+#    #+#             */
/*   Updated: 2026/09/25 13:30:26 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_putstr(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		ft_putchar(str[contador]);
		contador++;
	}
}

// int main(void)
// {
// 	char cadena[]= "Aprovecho para condenar desde el fondo de mis vísceras";
// 	ft_putstr(cadena);
// }