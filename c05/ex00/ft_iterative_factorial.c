/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:50:31 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/15 16:08:33 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	factorial = 1;
	while (nb > 1)
		factorial *= nb--;
	return (factorial);
}

/*
int	main(void)
{
	int	n = 5;
	printf("Factorial of %d is %d.", n, ft_iterative_factorial(n));
	return (0);
}
*/
