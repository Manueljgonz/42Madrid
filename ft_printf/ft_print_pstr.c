/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 17:34:18 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/30 11:56:17 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Library/ft_printf.h"

int	ft_print_pstr(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_print_pstr ("(null)", 1));
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	return (i);
}

// int main(void)
// {
// 	printf("%d",ft_print_pstr("Holaaaaaa", 1));
// }