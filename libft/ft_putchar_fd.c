/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 16:36:46 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/15 15:55:14 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// File descriptor 
// 0: stdin (entrada estándar)  
// 1: stdout (salida estándar / pantalla) 
// 2: stderr (salida de errores estándar)
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main(void)
// {
// 	char c = 'c';
// 	int fd = 1;
// 	ft_putchar_fd(c, fd);
// }