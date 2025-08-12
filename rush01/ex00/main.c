/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 10:59:53 by kchiang           #+#    #+#             */
/*   Updated: 2025/08/12 20:13:44 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

// parse argv in clue, fill up answer with zeroes
void	parse_clue(int clue[4][4], char *argv)
{
	int	i;
	int	row;
	int	col;

	i = 0;
	row = 0;
	col = 0;
	while (i < 31)
	{
		if (i % 2 == 0)
			clue[row][col++] = argv[i] - '0';
		i++;
		if (col == 4)
		{
			row++;
			col = 0;
		}
	}
	return ;
}

void	parse_answer(int *answer)
{
	int	i;

	i = 0;
	while (i < 16)
		answer[i++] = 0;
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
	int		clue[4][4];
	int		answer[16];
	t_var	var;

	if (arg_is_invalid(argc, argv[1]))
		write(1, "Error\n", 6);
	else
	{
		clue = NULL;
		answer = NULL;
		parse_clue(clue, argv[1]);
		parse_answer(answer);
		var = (t_var){line_size = 4, ans_size = 16};
		if (solve_puzzle(clue, answer, var))
			print_answer(answer);
		else
			write(1, "Error\n", 6);
	}
	return (free_clue(clue), free(answer), EXIT_SUCCESS);
}
