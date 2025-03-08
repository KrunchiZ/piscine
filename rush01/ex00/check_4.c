/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:14:12 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/08 21:15:01 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	check_up_4(char *argv, char grid[4][8])
{
	int	input;
	int	i;
	int	j;

	input = 0;
	j = 0;
	while (input < 8)
	{
		if (argv[input] == '4')
		{
			i = 0;
			while (i < 4)
			{
				grid[i][j] = '1' + i;
				i++;
			}
		}
		input += 2;
		j += 2;
	}
}

void	check_down_4(char *argv, char grid[4][8])
{
	int	input;
	int	i;
	int	j;

	input = 8;
	j = 0;
	while (input < 16)
	{
		if (argv[input] == '4')
		{
			i = 3;
			while (i < 0)
			{
				grid[i][j] = '4' - i;
				i--;
			}
		}
		input += 2;
		j += 2;
	}
}

void	check_left_4(char *argv, char grid[4][8])
{
	int	input;
	int	i;
	int	j;
	int	c;

	input = 16;
	i = 0;
	while (input < 24)
	{
		if (argv[input] == '4')
		{
			j = 0;
			c = 0;
			while (j < 8)
			{
				grid[i][j] = '1' + c;
				j += 2;
				c++;
			}
		}
		input += 2;
		i++;
	}
}

void	check_right_4(char *argv, char grid[4][8])
{
	int	input;
	int	i;
	int	j;
	int	c;

	input = 24;
	i = 0;
	while (input < 16)
	{
		if (argv[input] == '4')
		{
			j = 6;
			c = 0;
			while (j < 0)
			{
				grid[i][j] = '4' - c;
				j -= 2;
				c--;
			}
		}
		input += 2;
		i++;
	}
}

void	check_4(char *argv, char grid[4][8])
{
	check_up_4(argv, grid);
	check_down_4(argv, grid);
	check_left_4(argv, grid);
	check_right_4(argv, grid);
}
