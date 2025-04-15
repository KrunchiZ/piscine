/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:50:11 by kchiang           #+#    #+#             */
/*   Updated: 2025/04/16 03:30:27 by kchiang          ###   ########.fr       */
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

void	check_clue(int *n, int *pos, int *answer, int clue[4][4])
{
	if ((*pos % 4 == 0 && row_is_bad(answer, clue, *pos))
		|| (*pos > 12 && col_is_bad(answer, clue, *pos - 1)))
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

void	test_answer(int *answer)
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

int	solve_puzzle(int clue[4][4], int *answer, int n, int pos)
{
	while (pos < 16)
	{
		n = 1;
		while (n <= 4 && pos < 16)
		{
			if (is_unique(n, answer, pos))
			{
				answer[pos++] = n++;
				check_clue(&n, &pos, answer, clue);
			}
			else
			{
				n++;
				while (n > 4)
				{
					if (pos == 0)
						return (0);
					answer[pos--] = 0;
					n = answer[pos] + 1;
				}
			}
		}
	}
	return (1);
}
