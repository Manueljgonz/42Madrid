/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 13:13:11 by mjusdado          #+#    #+#             */
/*   Updated: 2026/09/25 16:24:30 by mjusdado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

void	ft_display_file(char *filename)
{
	int		fd;
	int		bytes_read;
	char	buffer[BUF_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr_fd("Cannot read file.\n", 2);
		return ;
	}
	bytes_read = read(fd, buffer, BUF_SIZE);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, BUF_SIZE);
	}
	if (bytes_read < 0)
		ft_putstr_fd("Cannot read file.\n", 2);
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_putstr_fd("File name missing.\n", 2);
	else if (argc > 2)
		ft_putstr_fd("Too many arguments.\n", 2);
	else
		ft_display_file(argv[1]);
	return (0);
}
