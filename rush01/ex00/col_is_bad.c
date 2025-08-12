/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   col_is_bad.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 00:19:01 by kchiang           #+#    #+#             */
/*   Updated: 2025/08/12 20:11:52 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	top_is_bad(int *answer, int *clue, t_var var)
{
	int	max;
	int	seen;
	int	i;

	seen = 0;
	max = 0;
	i = var.line_size - 1;
	while (i >= 0)
	{
		if (answer[var.pos - (i * var.line_size)] > max)
		{
			seen++;
			max = answer[var.pos - (i * var.line_size)];
		}
		i--;
	}
	if (seen != clue[var.pos - (var.line_size * var.line_size - 1)])
		return (true);
	return (false);
}

int	bottom_is_bad(int *answer, int *clue, t_var var)
{
	int	max;
	int	seen;
	int	i;

	seen = 0;
	max = 0;
	i = 0;
	while (i <= var.line_size - 1)
	{
		if (answer[var.pos - (i * var.line_size)] > max)
		{
			seen++;
			max = answer[var.pos - (i * var.line_size)];
		}
		i++;
	}
	if (seen != clue[var.pos - (var.line_size * var.line_size - 1)])
		return (true);
	return (false);
}

int	col_is_bad(int *answer, int **clue, t_var var)
{
	var.pos--;
	if (top_is_bad(answer, clue[0], var))
		return (true);
	if (bottom_is_bad(answer, clue[1], var))
		return (true);
	return (false);
}
