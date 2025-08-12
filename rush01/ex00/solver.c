/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:50:11 by kchiang           #+#    #+#             */
/*   Updated: 2025/08/12 20:13:01 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_unique(int nbr, int *answer, int pos)
{
	int	i;

	i = pos;
	while (i >= (pos / 4 * 4))
	{
		if (nbr == answer[i])
			return (0);
		i--;
	}
	i = pos;
	while (i >= 0)
	{
		if (nbr == answer[i])
			return (0);
		i -= 4;
	}
	return (1);
}

void	check_clue(t_var *var, int *answer, int **clue)
{
	if ((var->pos % var->line_size == 0 && row_is_bad(answer, clue, *var))
		|| (var->pos > 12 && col_is_bad(answer, clue, *var)))
	{
		(*pos)--;
		while (*n > 4)
		{
			answer[*pos] = 0;
			*n = answer[(*pos)--] + 1;
		}
	}
	else
		*n = 1;
	return ;
}

int	solve_puzzle(int **clue, int *answer, t_var var)
{
	while (var.pos < var.ans_size)
	{
		var.n = 1;
		while (var.n <= var.line_size && var.pos < var.ans_size)
		{
			if (is_unique(var.n, answer, var.pos))
			{
				answer[var.pos++] = var.n++;
				check_clue(&var, answer, clue);
			}
			else
			{
				while (++var.n > var.line_size)
				{
					if (var.pos == 0)
						return (false);
					answer[var.pos--] = 0;
					var.n = answer[var.pos] + 1;
				}
			}
		}
	}
	return (true);
}
