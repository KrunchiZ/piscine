/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_clue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 00:55:00 by kchiang           #+#    #+#             */
/*   Updated: 2025/08/13 01:01:52 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**parse_clue(char *argv, t_var var)
{
	int	i;
	int	row;
	int	col;
	int	**clue;

	clue = init_clue(var.row_size);
	if (!clue)
		return (NULL);
	i = 0;
	row = 0;
	col = 0;
	while (i < var.clue_len)
	{
		if (i % 2 == 0)
			clue[row][col++] = argv[i] - '0';
		if (col == var.row_size)
		{
			row++;
			col = 0;
		}
		i++;
	}
	return (clue);
}

static char	**init_clue(int	row_size)
{
	int	**clue;
	int	row;

	clue = (int **)malloc(var.row_size * sizeof(int *));
	if (!clue)
		return (NULL);
	row = 0;
	while (row < var.row_size)
	{
		clue[row] = (int *)malloc(var.row_size * sizeof(int));
		if (!clue[row])
		{
			while (row >= 0)
				free(clue[row--]);
			free(clue);
			return (NULL);
		}
		row++;
	}
	return (clue);
}
