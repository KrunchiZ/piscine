/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:12:40 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/13 14:29:17 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	answer;

	answer = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (answer);
	while (power > 0)
	{
		answer *= nb;
		power--;
	}
	return (answer);
}

/*
int	main(void)
{
	int nbr = 2;
	int	pwr = 3;
	int	answer = ft_iterative_power(nbr, pwr);

	printf("%d to the power of %d = %d.", nbr, pwr, answer);
	return (0);
}
*/
