/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 11:49:04 by mjusdado          #+#    #+#             */
/*   Updated: 2026/11/07 17:41:47 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Word counter 
static int	ft_wordiv(char *string, int div)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (string[0] != (char)div && string[0] != '\0')
		j++;
	while (string[i] != '\0')
	{
		if (string[i] == (char)div && string[i] != string[i + 1])
		{
			if (string[i + 1] != '\0')
				j++;
		}
		i++;
	}
	return (j);
}

// Letter counter
static int	ft_lettercount(char *string, int i, int div)
{
	int	j;

	j = 0;
	while (string[i] == (char)div && string[i] != '\0')
		i++;
	while (string[i] != '\0')
	{
		if (string[i] != (char)div)
			j++;
		if (string[i + 1] == (char)div || string[i + 1] == '\0')
			return (j + 1);
		i++;
	}
	return (0);
}

// Filler function
static char	*ft_fill(char *string, int i, int div)
{
	int		j;
	char	*res;

	res = malloc(ft_lettercount(string, i, div));
	if (!res)
		return (NULL);
	while (string[i] == (char)div && string[i] != '\0')
		i++;
	j = 0;
	while (string[i] != '\0')
	{
		res[j] = string[i];
		i++;
		j++;
		if (string[i] == (char)div || string[i] == '\0')
		{
			res[j] = '\0';
			return (res);
		}
	}
	return (NULL);
}

// Follows the position where it needs to copy
static int	ft_start(char *s1, int div, int i, int k)
{
	char	**box;

	if (i == -1)
	{
		box = (char **)s1;
		while (k > 0)
		{
			k--;
			free(box[k]);
		}
		free(box);
		return (0);
	}
	if ((s1[0] != div && k == 0))
		return (i);
	while (s1[i] != div && s1[i] != '\0')
		i++;
	while (s1[i] == div && s1[i] != '\0')
		i++;
	return (i);
}

// El split  		
// if (!box_grande[k] && !ft_start((char *)big_box, c, -1, k))
// boolean becouse of space :)
char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**box_grande;

	if (!s)
		return (NULL);
	i = ft_wordiv((char *)s, c);
	box_grande = malloc((i + 1) * sizeof(char *));
	if (!box_grande)
		return (NULL);
	k = 0;
	j = 0;
	while (i > k)
	{
		j = ft_start((char *)s, c, j, k);
		box_grande[k] = ft_fill((char *)s, j, c);
		if (!box_grande[k] && !ft_start((char *)box_grande, c, -1, k))
			return (NULL);
		k++;
	}
	box_grande[k] = NULL;
	return (box_grande);
}

// int main(void)
// {
// 	char *string = "Hello my name is manuel ";
// 	char c = ' ';
// 	char **box = ft_split(string ,c);
// 	int x = 0;
//     while (box[x] != NULL)
//     {
//         printf("%s ", box[x]);
//         free(box[x]);
//         x++;
//     }
//     free(box);
//     return 0;
// }