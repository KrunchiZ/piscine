/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:56:29 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/03 10:31:49 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digit(char a1, char a2, char b1, char b2)
{
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
	if (!((a1 == '9') && (a2 == '8') && (b1 == '9') && (b2 == '9')))
		write(1, ", ", 2);
}

void	print_loop(char a1, char a2)
{
	char	b1;
	char	b2;

	while (a1 <= '9')
	{
		while (a2 <= '9')
		{
			b1 = a1;
			b2 = a2 + 1;
			while (b1 <= '9')
			{
				while (b2 <= '9')
				{
					print_digit(a1, a2, b1, b2);
					b2++;
				}
				b1++;
				b2 = '0';
			}
			a2++;
		}
		a1++;
		a2 = '0';
	}
}

void	ft_print_comb2(void)
{
	char	a1;
	char	a2;

	a1 = '0';
	a2 = a1;
	print_loop(a1, a2);
}

/*
int	main(void)
{
	ft_print_comb2();
}
*/
