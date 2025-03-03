/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 10:48:32 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/02 12:27:54 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	print_square(int x, int y, int row, int column)
{
	if (column == 1 && row == 1) 
		ft_putchar('A');
	else if ((column == y && row == 1) || (column == 1 && row == x))
		ft_putchar('C');
	else if (column == y && row == x)
		ft_putchar('A');
	else if (((1 < column) && (column < y)) && (row == 1 || row == x))
		ft_putchar('B');
	else if ((column == 1 || column == y) && ((1 < row) && (row < x)))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int y, int x)
{	
	int	row;
	int	col;

	row = 1;
	col = 1;
	while (row <= x)
	{
		while (col <= y)
		{
			print_square(x, y, row, col);
			col ++;
		}
		row ++;
		col = 1;
		ft_putchar('\n');
	}
}
