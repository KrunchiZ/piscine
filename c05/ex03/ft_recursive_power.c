/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:12:40 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/13 14:37:04 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	answer;

	answer = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (answer);
	if (power == 0)
		return (answer);
	answer = nb * ft_recursive_power(nb, power - 1);
	return (answer);
}

/*
int	main(void)
{
	int nbr = 2;
	int	pwr = 3;
	int	answer = ft_recursive_power(nbr, pwr);

	printf("%d to the power of %d = %d.", nbr, pwr, answer);
	return (0);
}
*/
