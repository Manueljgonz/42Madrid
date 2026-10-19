/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:54:23 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/16 11:50:23 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Comparación de strings
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	int				res;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' && i < (n - 1)) || (s2[i] != '\0' && i < (n - 1)))
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	res = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (res);
}

// int main(void)
// {
// 	char s1[] = "abcdefgi";
// 	char s2[] = "abcdefgh";
// 	size_t n = 7;
// 	printf("%d",ft_strncmp(s1,s2,n));
// }