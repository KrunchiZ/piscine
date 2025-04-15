/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 10:59:53 by kchiang           #+#    #+#             */
/*   Updated: 2025/04/15 15:25:50 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
	space_index = 0;
	while (space_index < 31)
	{
		if (space_index % 2 && argv[space_index] != ' ')
			return (1);
		space_index++;
	}
	return (0);
}

void	parse_grid(int *clue, int *answer, char *argv)
{
	int	i;
	int j;

	i = 0;
	while (i < 16)
		answer[i++] = 0;
	i = 0;
	j = 0;
	while (i < 31)
	{
		if (i % 2 == 0)
			clue[j++] = argv[i];
		i++;
	}
	return ;
}

int	main(int argc, char *argv[])
{
	int	clue[16];
	int	answer[16];

	if (arg_is_invalid(argc, argv[1]))
		write(1, "Error\n", 6);
	else
	{
		write(1, "start_program\n", 14);
		parse_grid(clue, answer, argv[1]);
	}
	return (0);
}
