/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:05:47 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/03 09:58:29 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// function to print 3 digits in ascending order
void	print_digit(char h, char t, char o)
{
	if ((h < t) && (t < o))
	{
		write(1, &h, 1);
		write(1, &t, 1);
		write(1, &o, 1);
		if (!((h == '7') && (t == '8') && (o == '9')))
			write(1, ", ", 2);
	}
}

// loop function for print_digit
void	ft_print_comb(void)
{
	char	one;
	char	ten;
	char	hundred;

	hundred = '0';
	ten = '1';
	one = '2';
	while (hundred <= '7')
	{
		while (ten <= '8')
		{
			while (one <= '9')
			{
				print_digit(hundred, ten, one);
				one++;
			}
			one = (ten++) + 1;
		}
		ten = (hundred++) + 1;
	}
}

/*
int	main(void)
{
	ft_print_comb();
}
*/
