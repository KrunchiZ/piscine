/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   col_is_bad.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 00:19:01 by kchiang           #+#    #+#             */
/*   Updated: 2025/04/16 01:53:24 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	top_is_bad(int *answer, int *clue, int pos)
{
	int	max;
	int	seen;
	int	i;

	seen = 0;
	max = 0;
	i = 3;
	while (i >= 0)
	{
		if (answer[pos - (i * 4)] > max)
		{
			seen++;
			max = answer[pos - (i * 4)];
		}
		i--;
	}
	if (seen != clue[pos - 12])
		return (1);
	return (0);
}

int	bottom_is_bad(int *answer, int *clue, int pos)
{
	int	max;
	int	seen;
	int	i;

	seen = 0;
	max = 0;
	i = 0;
	while (i <= 3)
	{
		if (answer[pos - (i * 4)] > max)
		{
			seen++;
			max = answer[pos - i];
		}
		i++;
	}
	if (seen != clue[pos - 12])
		return (1);
	return (0);
}

int	col_is_bad(int *answer, int clue[4][4], int pos)
{
	if (top_is_bad(answer, clue[0], pos))
		return (1);
	if (bottom_is_bad(answer, clue[1], pos))
		return (1);
	return (0);
}
