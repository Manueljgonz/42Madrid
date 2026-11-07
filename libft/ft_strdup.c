/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:07:55 by mjusdado          #+#    #+#             */
/*   Updated: 2026/11/07 17:43:47 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Dup strings
char	*ft_strdup(const char *s1)
{
	char	*string;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != 0)
		i++;
	string = (malloc ((i + 1) * sizeof(char)));
	if (!string)
		return (NULL);
	while (i > j)
	{
		string[j] = s1[j];
		j++;
	}
	string[j] = '\0';
	return (string);
}

// int main(void)
// {
//		char cp[] = "Hello";
//		char *dup;
//		dup = ft_strdup(cp);

//		if (dup != NULL) {
//			printf("%s\n", dup);
//		free(dup); 
//     }
// }