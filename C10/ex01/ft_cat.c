/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:50:45 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/08 14:27:26 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_cat(char *filename)
{
	int		file_descriptor;
	ssize_t	file_bytes;
	char	host;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		write(1, "Cannot read file.", 17);
	else
	{
		file_bytes = read(file_descriptor, &host, 1);
		while (file_bytes)
		{
			if (file_bytes == -1)
			{
				write(1, "Cannot read file.", 17);
				break ;
			}
			write(1, &host, 1);
			file_bytes = read(file_descriptor, &host, 1);
		}
		close(file_descriptor);
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		write(1, "File name missing.", 18);
	else if (argc > 2)
		write(1, "Too many arguments.", 19);
	else
		ft_display_file(argv[1]);
	return (0);
}
