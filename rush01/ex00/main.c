/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 10:59:53 by kchiang           #+#    #+#             */
/*   Updated: 2025/04/15 14:28:52 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int	arg_is_invalid(int argc, char *argv)
{
	int	space_index;

	if (argc != 2 || ft_strlen(argv) != 31)
		return (1);
	space_index = 1;
	while (space_index < 32)
	{
		if (argv[space_index] != ' ')
			return (1);
		space_index += 2;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	grid[16];

	if (arg_is_invalid(argc, argv[1]))
		write(1, "Error\n", 6);
	else
	{
		write(1, "start_program", 13);
	}
	return (0);
}
