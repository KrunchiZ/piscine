/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 00:42:25 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/10 02:02:13 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<fcntl.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>
#include<libgen.h>

void	ft_tail_stdin(void)
{
}

int	main(int argc, char **argv)
{
	int	c_pos;
	int	tail_bytes;

	if (argc < 2)
	{
		ft_tail_stdin();
	}
	else
	{
		c_pos = check_option(argv);
		if (c_pos == argc - 1)
		{
			print_missing_argument;
			return (1);
		}
		if (c_pos)
		{
			tail_bytes = ft_atoi(argv[c_pos + 1]);
			if (tail_bytes == -1)
			{
				print_invalid_argument;
				return (1);
			}
		}
		else
		{
			exec_normal_tail;
		}
	}
	return (0);
}
