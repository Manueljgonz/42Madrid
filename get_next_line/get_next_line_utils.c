/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:10:01 by mjusdado          #+#    #+#             */
/*   Updated: 2026/11/10 12:19:27 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t	ft_strlen(const char *a)
{
	size_t	i;

	if (!a)
		return (0);
	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *storage, char const *line)
{
	size_t		i;
	size_t		j;
	char		*new;

	i = 0;
	j = 0;
	if (!line)
		return (NULL);
	new = malloc (ft_strlen(storage) + ft_strlen(line) + 1);
	if (!new)
		return (NULL);
	while (storage && storage[j] != '\0')
		new[i++] = storage[j++];
	j = 0;
	while (line[j] != '\0')
		new[i++] = line[j++];
	new[i] = '\0';
	return (new);
}

char	*ft_separator(char *stor)
{
	char	*res;
	int		i;

	if (!stor)
		return (NULL);
	i = 0;
	while ((stor[i] != '\0') && (stor[i] != '\n'))
		i++;
	if (stor[i] == '\n')
		i++;
	res = malloc(i + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (stor[i] && stor[i] != '\n')
	{
		res[i] = stor[i];
		i++;
	}
	if (stor[i] == '\n')
		res[i++] = '\n';
	res[i] = '\0';
	return (res);
}

char	*ft_cleaner(char *storage)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!storage)
		return (NULL);
	while (storage[i] != '\n' && storage[i] != '\0')
		i++;
	if (storage[i] == '\0')
		return (NULL);
	i = i + 1;
	j = i;
	while (storage[j] != '\0')
		j ++;
	res = malloc((j - i) + 1);
	if (!res)
		return (NULL);
	j = 0;
	while (storage[i] != '\0')
		res[j++] = storage[i++];
	res[j] = '\0';
	return (res);
}

int	ft_proof(char *storage)
{
	int	i;

	i = 0;
	if (!storage)
		return (0);
	while (storage[i] != '\0')
	{
		if (storage[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
