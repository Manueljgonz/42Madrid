/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:05:59 by mjusdado          #+#    #+#             */
/*   Updated: 2026/10/16 12:00:27 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static size_t	ft_strlen(char *a)
// {
// 	size_t	i;

// 	i = 0;
// 	while (a[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// Une dos strings creando otra
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	char		*uno;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	uno = malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!uno)
		return (NULL);
	while (s1[j] != '\0')
		uno[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		uno[i++] = s2[j++];
	uno[i] = '\0';
	return (uno);
}

// int main(void)
// {
// 	char *a = ft_strjoin("tripouille", "42");
// 	printf("%s",a);
// 	return 0;
// }