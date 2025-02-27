/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:05:47 by kchiang           #+#    #+#             */
/*   Updated: 2025/02/27 21:32:57 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// function to print 3 digits in ascending order
void	print_digit(char h, char t, char o)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	if ((h < t) && (t < o))
	{
		write(1, &h, 1);
		write(1, &t, 1);
		write(1, &o, 1);
		if (!((h == '7') && (t == '8') && (o == '9')))
		{
			write(1, &comma, 1);
			write(1, &space, 1);
		}
	}
}

// loop function for print_digit
void	ft_print_comb(void)
{
	char	o;
	char	t;
	char	h;

	h = '0';
	t = '1';
	o = '2';
	while (h <= '7')
	{
		while (t <= '8')
		{
			while (o <= '9')
			{
				print_digit(h, t, o);
				o++;
			}
			o = (t++) + 1;
		}
		t = (h++) + 1;
	}
}
