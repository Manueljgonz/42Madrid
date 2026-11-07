/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:24:50 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/30 13:01:05 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Library/ft_printf.h"

static int	evaluator(char const chr, va_list args)
{
	void	*juan;

	if (chr == 'd' || chr == 'i')
		return (ft_print_nbr(va_arg(args, int), 1));
	else if (chr == 'c')
		return (ft_print_pchar(va_arg(args, int), 1));
	else if (chr == 's')
		return (ft_print_pstr(va_arg(args, char *), 1));
	else if (chr == 'p')
	{
		juan = va_arg(args, void *);
		if (!juan)
			return (ft_print_pstr ("(nil)", 1));
		ft_print_pstr("0x", 1);
		return ((ft_print_ptr((uintptr_t)juan)) + 2);
	}
	else if (chr == 'u')
		return (ft_print_wsnbr(va_arg(args, unsigned int), 1));
	else if (chr == 'x')
		return (ft_print_ptr(va_arg(args, unsigned int)));
	else if (chr == 'X')
		return (ft_print_hexupper(va_arg(args, unsigned int)));
	else if (chr == '%')
		return (ft_print_pchar('%', 1));
	return (0);
}

int	ft_printf(char const *string, ...)
{
	va_list	args;
	int		i;
	int		c;

	va_start(args, string);
	i = 0;
	c = 0;
	while (string && string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i++;
			if (string[i] == '\0')
				break ;
			c = c + evaluator(string[i], args);
			c = c - 1;
		}
		else
			write (1, (const void *)&string[i], 1);
		i++;
		c++;
	}
	va_end(args);
	return (c);
}

// int main(void)
// {
// 	// printf("%d\n",printf(" funcciona? %s \n","holaaa"));
// }
