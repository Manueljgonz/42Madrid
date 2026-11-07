/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 16:36:46 by mjusdado          #+#    #+#             */
/*   Updated: 2026/11/07 17:28:11 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// File descriptor 
// 0: stdin (standar input)  
// 1: stdout (standar output) 
// 2: stderr (errors output)
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