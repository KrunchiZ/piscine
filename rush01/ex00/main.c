/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 10:59:53 by kchiang           #+#    #+#             */
/*   Updated: 2025/04/15 23:51:43 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

// parse argv in clue, fill up answer with zeroes
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

void	print_answer(int *answer)
{
	int		i;
	char	c;

	i = 0;
	while (i < 16)
	{
		c = answer[i] + '0';
		write(1, &c, 1);
		if (i == 3 || i == 7 || i == 11 || i == 15)
			write(1, "\n", 1);
		else
			write(1, " ", 1);
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
		parse_grid(clue, answer, argv[1]);
		if (solve_puzzle(clue, answer, 0))
			print_answer(answer);
		else
			write(1, "Error\n", 6);
	}
	return (0);
}
