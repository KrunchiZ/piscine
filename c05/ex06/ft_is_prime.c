/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 11:46:28 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/16 12:49:23 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <limits.h>

int	ft_is_prime(int nb)
{
	long	div;

	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb < 2)
		return (0);
	div = 3;
	while (div * div <= nb)
	{
		if (nb % div == 0)
			return (0);
		div += 2;
	}
	return (1);
}

/*
int	main(void)
{
	int	i = INT_MAX;

	if (ft_is_prime(i))
		printf("%d is prime\n", i);
	else
		printf("%d is not prime\n", i);
	return (0);
}
*/
