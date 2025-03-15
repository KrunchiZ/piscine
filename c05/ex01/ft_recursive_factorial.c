/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:50:31 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/13 14:11:39 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb == 0)
		return (factorial);
	if (nb < 0)
		return (0);
	factorial = nb * ft_recursive_factorial(nb - 1);
	return (factorial);
}

/*
int	main(void)
{
	int	n = 4;
	printf("Factorial of %d is %d.", n, ft_recursive_factorial(n));
	return (0);
}
*/
