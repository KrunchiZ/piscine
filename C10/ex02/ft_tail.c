/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 00:42:25 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/10 16:19:12 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <libgen.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	return ;
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		n *= 10;
		n += str[i] - '0';
		i++;
	}
	return (n);
}

int	main(int argc, char **argv)
{
	int		c_pos;
	int		tail_bytes;
	char	*program_name;

	program_name = basename(argv[0]);
	c_pos = check_option(argv);
	if (c_pos == argc - 1)
	{
		ft_putstr(program_name);
		write(1, ": option requires an argument -- 'c'\n", 37);
		return (1);
	}
	tail_bytes = ft_atoi(argv[c_pos + 1]);
	if (tail_bytes == -1)
	{
		ft_putstr(program_name);
		write(1, ": invalid number of bytes: '", 38);
		ft_putstr(argv[c_pos + 1]);
		write(1, "'\n", 2);
		return (1);
	}
	ft_tail(argc, argv, tail_bytes);
	return (0);
}
