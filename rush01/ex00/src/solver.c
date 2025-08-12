/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:50:11 by kchiang           #+#    #+#             */
/*   Updated: 2025/08/13 00:09:00 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	is_unique(t_var var, int *answer)
{
	int	i;

	i = var.pos;
	while (i >= (var.pos / var.row_size * var.row_size))
	{
		if (var.n == answer[i])
			return (false);
		i--;
	}
	i = var.pos;
	while (i >= 0)
	{
		if (var.n == answer[i])
			return (false);
		i -= var.row_size;
	}
	return (true);
}

static void	check_clue(t_var *var, int *answer)
{
	if ((var->pos % var->row_size == 0 && row_is_bad(answer, *var))
		|| (var->pos > 12 && col_is_bad(answer, *var)))
	{
		var->pos--;
		while (var->n > 4)
		{
			answer[var->pos] = 0;
			var->n = answer[var->pos--] + 1;
		}
	}
	else
		var->n = 1;
	return ;
}

int	solve_puzzle(int *answer, t_var var)
{
	while (var.pos < var.ans_size)
	{
		var.n = 1;
		while (var.n <= var.row_size && var.pos < var.ans_size)
		{
			if (is_unique(var, answer))
			{
				answer[var.pos++] = var.n++;
				check_clue(&var, answer);
			}
			else
			{
				while (++var.n > var.row_size)
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
