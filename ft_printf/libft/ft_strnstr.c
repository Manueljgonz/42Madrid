/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:23:45 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/16 11:57:29 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	if (*little == '\0')
// 			return ((char *)big);
// 	while (big[i] != '\0' && i < len)
// 	{
// 		if (little[j] == big[i] && little[j] != '\0')
// 		{
// 			j++;
// 		}
// 		else
// 		{
// 			if (j > 0)
// 				i = i - j;
// 			j = 0;
// 		}
// 		i++;
// 		if (little[j] == '\0')
// 			return ((char *)&big[i - j]);
// 	}
// 	return (NULL);
// }

// Encontrar la cadena little en la cadena big
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i] == little[j] && i < len)
		{
			i++;
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i - j]);
		}
		i = (i - j) + 1;
	}
	return (NULL);
}

// int main(void)
// {
// 	char big[] = "lorem ipsum dolor sit amet";
// 	char little[] = "dolor";
// 	size_t len = 15;
// 	printf("%s", (char *)ft_strnstr(big,little,len));
// }