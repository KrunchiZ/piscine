/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:20:48 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/11 16:59:30 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

//print last digit with %, remove it with /, then recall until 0
void	print_nbr(int nb)
{
	if (!nb)
		return ;
	print_nbr(nb / 10);
	nb = nb % 10 + '0';
	write(1, &nb, 1);
	return ;
}

//cover case 0 and INT_MIN, convert negative to positive
void	ft_putnbr(int nb)
{
	if (!nb)
		write(1, "0", 1);
	else if (nb == INT_MIN)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		print_nbr(nb);
	}
	else
		print_nbr(nb);
	return ;
}

/*
int	main(void)
{
	ft_putnbr(INT_MAX);
	return (0);
}
*/
