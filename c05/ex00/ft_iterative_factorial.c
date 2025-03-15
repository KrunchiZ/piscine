/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:50:31 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/13 14:09:42 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	factorial = nb;
	nb -= 1;
	while (nb > 0)
		factorial *= nb--;
	return (factorial);
}

/*
int	main(void)
{
	int	n = 4;
	printf("Factorial of %d is %d.", n, ft_iterative_factorial(n));
	return (0);
}
*/
