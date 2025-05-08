/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:50:45 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/08 16:07:09 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

void	print_error(char *filename, char *program)
{
	char	*error_code;

	while (program)
		write(1, program++, 1);
	write(1, ": ", 2);
	while (filename)
		write(1, filename++, 1);
	write(1, ": ", 2);
	error_code = strerror(errno);
	while (error_code)
		write(1, error_code++, 1);
	return ;
}

int	ft_cat(char *filename, char *program)
{
	int		file_descriptor;
	ssize_t	read_bytes;
	char	buffer_ch;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		print_error(filename, program);
		return (1);
	}
	read_bytes = read(file_descriptor, &buffer_ch, 1);
	while (read_bytes)
	{
		if (read_bytes == -1)
		{
			print_error(filename, program);
			return (1);
		}
		write(1, &buffer_ch, 1);
		read_bytes = read(file_descriptor, &buffer_ch, 1);
	}
	close(file_descriptor);
	return (0);
}

void	ft_cat_stdin(void)
{
	char	buffer_ch;
	ssize_t	read_bytes;

	read_bytes = read(0, &buffer_ch, 1);
	while (read_bytes)
	{
		write(1, &buffer_ch, 1);
		read(0, &buffer_ch, 1);
	}
	return ;
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		ft_cat_stdin();
	else
	{
		i = 1;
		while (i < argc)
		{
			if (ft_cat(argv[i++], argv[0]))
				return (1);
		}
	}
	return (0);
}
