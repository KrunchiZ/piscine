/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_is_bad.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 00:19:01 by kchiang           #+#    #+#             */
/*   Updated: 2025/08/13 00:09:46 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	left_is_bad(int *answer, int *clue, t_var var)
{
	int	max;
	int	seen;
	int	i;

	seen = 0;
	max = 0;
	i = var.row_size;
	while (i >= 1)
	{
		if (answer[var.pos - i] > max)
		{
			seen++;
			max = answer[var.pos - i];
		}
		i--;
	}
	if (seen != clue[(var.pos / var.row_size) - 1])
		return (true);
	return (false);
}

int	right_is_bad(int *answer, int *clue, t_var var)
{
	int	max;
	int	seen;
	int	i;

	seen = 0;
	max = 0;
	i = 1;
	while (i <= var.row_size)
	{
		if (answer[var.pos - i] > max)
		{
			seen++;
			max = answer[var.pos - i];
		}
		i++;
	}
	if (seen != clue[(var.pos / var.row_size) - 1])
		return (true);
	return (false);
}

int	row_is_bad(int *answer, t_var var)
{
	if (left_is_bad(answer, var.clue[2], var))
		return (true);
	if (right_is_bad(answer, var.clue[3], var))
		return (true);
	return (false);
}
