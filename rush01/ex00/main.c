/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 10:59:53 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/08 21:26:00 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_space(char grid[4][8])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 8)
		{
			if (j == 7)
				grid[i][j] = '\n';
			else
				grid[i][j] = ' ';
			j++;
		}
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

void	print_grid(char grid[4][8])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 8)
		{
			write(1, &grid[i][j++], 1);
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		inlength;
	int		doable;
	char	grid[4][8];

	inlength = ft_strlen(argv[1]);
	if (argc != 2 || inlength != 31)
		write(1, "Error\n", 6);
	doable = ft_check(argv[1]);
	if (doable == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	print_space(grid);
	check_4(argv[1], grid);
	print_grid(grid);
	return (0);
}
