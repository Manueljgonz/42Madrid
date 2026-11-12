/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:11:17 by mjusdado          #+#    #+#             */
/*   Updated: 2026/11/10 12:19:27 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_free_s(char **storage)
{
	free (*storage);
	*storage = NULL;
	return (NULL);
}

static char	*ft_free_b(char **storage, char *line)
{
	free (line);
	free (*storage);
	*storage = NULL;
	return (NULL);
}

static char	*ft_while(char *storage, char *line, int fd)
{
	int		final;
	char	*temp;
	int		found;

	final = 1;
	found = ft_proof(storage);
	while (found == 0 && final > 0)
	{
		final = read(fd, line, BUFFER_SIZE);
		if (final < 0)
			return (ft_free_s(&storage));
		if (final == 0)
			break ;
		line[final] = '\0';
		found = ft_proof(line);
		temp = ft_strjoin(storage, line);
		if (!temp)
			return (ft_free_s(&storage));
		free (storage);
		storage = temp;
	}
	return (storage);
}

char	*get_next_line(int fd)
{
	static char	*storage = NULL;
	char		*line;
	char		*temp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!line)
		return (ft_free_b(&storage, line));
	storage = ft_while(storage, line, fd);
	free (line);
	if (!storage || storage[0] == '\0')
		return (ft_free_s(&storage));
	line = ft_separator(storage);
	if (!line)
		return (ft_free_b(&storage, line));
	temp = ft_cleaner(storage);
	if (!temp && ft_proof(storage) == 1)
		return (ft_free_b(&storage, line));
	free(storage);
	storage = temp;
	return (line);
}

// #include <stdio.h>
// #include <fcntl.h>
// #include <stdlib.h>
// #include "get_next_line.h"

// int main(void)
// {
//     int fd = open("archivo.txt", O_RDONLY);
//     char *line;

//     while ((line = get_next_line(fd)) != NULL)
//     {
//         printf("%s", line);
//         free(line);
//     }
//     close(fd);
//     return (0);
// }