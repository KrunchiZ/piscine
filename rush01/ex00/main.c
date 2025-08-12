/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 10:59:53 by kchiang           #+#    #+#             */
/*   Updated: 2025/08/13 00:56:43 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static char	*init_answer_array(int ans_size);
static void	print_answer(int *answer);
static void	free_clue(char **clue, int row_size);

int	main(int argc, char *argv[])
{
	int		*answer;
	t_var	var;

	if (arg_is_invalid(argc, argv[1], &var))
		write(STDOUT_FILENO, "Error\n", 6);
	else
	{
		answer = init_answer_array(var.ans_size);
		var.clue = parse_clue(argv[1], var);
		if (!var.clue || !answer)
			write(STDOUT_FILENO, "Error\n", 6);
		if (solve_puzzle(answer, var))
			print_answer(answer, var);
		else
			write(STDOUT_FILENO, "Error\n", 6);
	}
	return (free_clue(var), free(answer), EXIT_SUCCESS);
}

static char	*init_answer_array(int ans_size)
{
	int	i;
	int	*answer;

	answer = (int *)malloc(ans_size * sizeof(int));
	if (!answer)
		return (NULL);
	i = 0;
	while (i < ans_size)
		answer[i++] = 0;
	return (answer);
}

static void	print_answer(int *answer, t_var var)
{
	int		i;
	char	c;

	i = 0;
	while (i < var.ans_size)
	{
		c = answer[i] + '0';
		write(1, &c, 1);
		if ((i + 1) % var.row_size == 0)
			write(1, "\n", 1);
		else
			write(1, " ", 1);
		i++;
	}
	return ;
}

static void	free_clue(t_var var)
{
	int	row;

	row = 0;
	while (row < var.row_size)
		free(var.clue[row++]);
	free(var.clue);
	return ;
}
