/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:11:17 by mjusdado          #+#    #+#             */
/*   Updated: 2026/11/10 12:19:25 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
	static char	*storage[1024] = {NULL};
	char		*line;
	char		*temp;

	if (fd < 0 || fd >= 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	line = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!line)
		return (ft_free_b(&storage[fd], line));
	storage[fd] = ft_while(storage[fd], line, fd);
	free (line);
	if (!storage[fd] || storage[fd][0] == '\0')
		return (ft_free_s(&storage[fd]));
	line = ft_separator(storage[fd]);
	if (!line)
		return (ft_free_b(&storage[fd], line));
	temp = ft_cleaner(storage[fd]);
	if (!temp && ft_proof(storage[fd]) == 1)
		return (ft_free_b(&storage[fd], line));
	free(storage[fd]);
	storage[fd] = temp;
	return (line);
}

// #include <stdio.h>
// #include <fcntl.h>
// #include <stdlib.h>
// #include "get_next_line.h"

// int	main(void)
// {
// 	int		fd1;
// 	int		fd2;
// 	char	*line;

// 	fd1 = open("test1.txt", O_RDONLY);
// 	fd2 = open("test2.txt", O_RDONLY);
// 	while (1)
// 	{
// 		line = get_next_line(fd1);
// 		if (line)
// 		{
// 			printf("Archivo 1: %s", line);
// 			free(line);
// 		}
// 		line = get_next_line(fd2);
// 		if (line)
// 		{
// 			printf("Archivo 2: %s", line);
// 			free(line);
// 		}
// 		if (!line)
// 			break ;
// 	}
// 	close(fd1);
// 	close(fd2);
// 	return (0);
// }