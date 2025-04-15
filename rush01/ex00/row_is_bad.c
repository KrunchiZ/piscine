/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_is_bad.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 00:19:01 by kchiang           #+#    #+#             */
/*   Updated: 2025/04/16 02:17:12 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	left_is_bad(int *answer, int *clue, int pos)
{
	int	max;
	int	seen;
	int	i;

	seen = 0;
	max = 0;
	i = 4;
	while (i >= 1)
	{
		if (answer[pos - i] > max)
		{
			seen++;
			max = answer[pos - i];
		}
		i--;
	}
	if (seen != clue[(pos / 4) - 1])
		return (1);
	return (0);
}

int	right_is_bad(int *answer, int *clue, int pos)
{
	int	max;
	int	seen;
	int	i;

	seen = 0;
	max = 0;
	i = 1;
	while (i <= 4)
	{
		if (answer[pos - i] > max)
		{
			seen++;
			max = answer[pos - i];
		}
		i++;
	}
	if (seen != clue[(pos / 4) - 1])
		return (1);
	return (0);
}

int	row_is_bad(int *answer, int clue[4][4], int pos)
{
	if (left_is_bad(answer, clue[2], pos))
		return (1);
	if (right_is_bad(answer, clue[3], pos))
		return (1);
	return (0);
}
