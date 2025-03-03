/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:34:29 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/03 13:13:07 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digit(int nb)
{
	char	digit;

	if (nb == 0)
		return ;
	digit = (nb % 10) + '0';
	nb /= 10;
	print_digit(nb);
	write(1, &digit, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		write(1, "0", 1);
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		print_digit(nb);
	}
	else
		print_digit(nb);
}


int	main(void)
{
	ft_putnbr(-2147483648);
}

