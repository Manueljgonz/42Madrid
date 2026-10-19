/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:30:57 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/16 12:18:52 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Lo que esribe s es el string, r el res, l es el tamaño a copiar
// y a es start
static char	*r(char const *s, char *r, size_t l, unsigned int a)
{
	size_t	j;

	j = 0;
	while (s[a] != '\0' && j < l)
		r[j++] = s[a++];
	r[j] = '\0';
	return (r);
}

// De un string sacas un string q empiece por start y que tenga el
// tamaño de len
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (start >= i)
	{
		res = (char *)malloc(1);
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	if (i - start < len)
		res = (char *)malloc(i - start + 1);
	else
		res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	res = r(s, res, len, start);
	return (res);
}

// int main(void)
// {
// 	char a[] = "";
// 	int start = 3;
// 	size_t len = 30;
// 	printf("%s", ft_substr(a, start, len));
// 	return(0);
// }