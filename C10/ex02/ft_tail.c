/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 00:42:25 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/13 14:59:32 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <libgen.h>

void	ft_puterror(char *str);

void	initialize_buffer(char *buffer, int n)
{
	int	i;

	i = 0;
	while (i < n)
		buffer[i++] = 0;
	return ;
}

void	exec_tail_stdin(char *buffer, int n_bytes)
{
	int	current;
	int	count;
	int	read_bytes;
	int	i;

	initialize_buffer(buffer, n_bytes);
	current = 0;
	count = 0;
	read_bytes = read(0, buffer[current], 1);
	while (read_bytes)
	{
		if (read_bytes == -1)
		{
			ft_puterror(strerror(errno));
			 return ;
		}
		current = (current + 1) % 10;
		count++;
		read_bytes = read(0, buffer[current], 1);
	}
	i = 0;
	if (count < n_bytes)
	{
		while (i < count)
		{
			write(1, buffer[current], 1);
			current = (current + 1) % 10;
			i++;
		}
	}
	//if count > n_bytes
	return (0);
}

int	exec_tail(char *filename, char *buffer, int n_bytes)
{
	initialize_buffer(buffer, n_bytes);
	return (0);
}

int	ft_tail(int argc, char **argv, int n_bytes, int c_pos)
{
	int		i;
	char	*buffer;

	buffer = (char *)malloc(n_bytes);
	if (buffer == NULL)
	{
		ft_puterror(basename(argv[0]));
		ft_puterror(": malloc failed\n");
		return (1);
	}
	if (argc == 3)
		exec_tail_stdin(buffer, n_bytes);
	else
	{
		i = 0;
		while (++i < argc)
		{
			if ((i != c_pos && i != c_pos + 1)
				&& (exec_tail(argv[i], buffer, n_bytes)))
				return (1);
		}
	}
	return (0);
}
