/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:50:11 by kchiang           #+#    #+#             */
/*   Updated: 2025/08/13 11:44:24 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	is_unique(t_var var, int *answer);
static void	check_clue(t_var *var, int *answer);
static int	is_fullrow(int pos, int row_size);
static int	is_fullcol(int pos, int row_size);

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
					var.n = answer[var.pos];
				}
			}
		}
	}
	return (true);
}

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
	if ((!is_fullrow(var->pos, var->row_size) && exceed_left_clue(answer, *var))
		|| (!is_fullcol(var->pos, var->row_size)
		&& exceed_top_clue(answer, *var)))
	{
		answer[--var->pos] = 0;
		var->n = answer[--var->pos] + 1;
	}
	else if ((is_full_row(var->pos, var->row_size) && row_is_bad(answer, *var))
		|| (is_full_col(var->pos, var->row_size) && col_is_bad(answer, *var)))
	{
		var->pos--;
		while (var->n > var->row_size)
		{
			answer[var->pos] = 0;
			var->n = answer[var->pos--] + 1;
		}
	}
	else
		var->n = 1;
	return ;
}

static int	is_fullrow(int pos, int row_size)
{
	return (pos % row_size == 0);
}

static int	is_fullcol(int pos, int row_size)
{
	return (pos > row_size * (row_size - 1));
}
