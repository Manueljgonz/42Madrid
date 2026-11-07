/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 19:46:46 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/28 16:04:11 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft.h"
# include <stdarg.h>
# include <stdint.h>

int		ft_print_hexupper(uintptr_t dec);
int		ft_print_nbr(int n, int fd);
int		ft_print_pchar(char c, int fd);
int		ft_print_pstr(char *s, int fd);
int		ft_print_ptr(uintptr_t dec);
int		ft_print_wsnbr(unsigned int n, int fd);
int		ft_printf(char const *string, ...);

#endif