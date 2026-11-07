/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:17:48 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/19 20:19:55 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	function(unsigned int a, char b)
// {
// 	if ((a > 64 && a < 91) || (b > 64 && b < 91))
// 		return ('a');
// 	else
// 		return ('z');
// }

// Aplica una función sobre cada char de s en una cadena nueva
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*a;

	i = 0;
	a = malloc(ft_strlen(s) + 1);
	if (!a)
		return (NULL);
	while (s[i] != '\0')
	{
		a[i] = f(i, s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}

// int main(void)
// {
// 	char *a = "AaA";
// 	char *resultado = ft_strmapi(a ,function);
// 	printf("%s", resultado);
// }