/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:08:32 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/12 20:06:21 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//check if base is unique and i > 1, then return i to len
int	valid_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

//putnbr using len as base sys
void	exec_putnbr(long number, char *base, int len)
{
	if (!number)
		return ;
	exec_putnbr(number / len, base, len);
	number = number % len;
	write(1, &base[number], 1);
	return ;
}

//find the length of radix(base ptr) to determine the base system
void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	number;

	len = valid_check(base);
	if (len <= 1)
		return ;
	number = nbr;
	if (number < 0)
	{
		write(1, "-", 1);
		number *= -1;
	}
	exec_putnbr(number, base, len);
	return ;
}

/*
int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
	return (0);
}
*/
