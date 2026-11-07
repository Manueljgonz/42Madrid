/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:52:30 by mjusdado          #+#    #+#             */
/*   Updated: 2026/11/07 17:44:20 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void ft_chager(unsigned int i, char *s)
// {
// 	if ((i % 2) == 0)
// 		*s = 'S';
// 	if ((i % 2) != 0)
// 		*s = 'i';
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// int main(void)
// {
// 	char a[] = "Hello my name is manuel";
// 	ft_striteri(a ,ft_chager);
// }