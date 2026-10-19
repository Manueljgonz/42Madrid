/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:37:01 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/16 12:12:18 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_while(char *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (s1[i] != set[j])
			break ;
		i++;
	}
	return (i);
}

// Elimina los caracteres de set en s1 al principio y al final del string
// El substring lo q hace el substing con start y len 
char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	z;

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	i = ft_while((char *)s1, set);
	z = ft_strlen(s1) - 1;
	while (z > i)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[z] == set[j])
				break ;
			j++;
		}
		if (s1[z] != set[j])
			break ;
		z--;
	}
	return (ft_substr(s1, i, (size_t)(z - i + 1)));
}

// int main(void)
// {
// 	char hola[] =  "lorem ipsum dolor sit amet";
// 	char b[] = "l ";
// 	char *res = ft_strtrim(hola,b);
// 	printf("%s",res);
// }