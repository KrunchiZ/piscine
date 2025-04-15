/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_is_bad.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 00:19:01 by kchiang           #+#    #+#             */
/*   Updated: 2025/04/16 00:45:43 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	left_is_bad(int n, int *answer, int *clue, int pos)
{
}

int	right_is_bad(int n, int *answer, int *clue, int pos)
{
}

int	row_is_bad(int n, int *answer, int *clue, int pos)
{
	if (left_is_bad(n, answer, clue, pos))
		return (1);
	if (right_is_bad(n, answer, clue, pos))
		return (1);
	return (0);
}
