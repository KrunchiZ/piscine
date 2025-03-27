/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:59:11 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/16 11:44:30 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <limits.h>

int	ft_sqrt(int nb)
{
	long	sqrt;

	sqrt = 0;
	while (sqrt * sqrt <= nb)
	{
		if (sqrt * sqrt == nb)
			return ((int)sqrt);
		sqrt++;
	}
	return (0);
}

/*
int	main(void)
{
	int	nb = INT_MAX;
	int	sqrt = ft_sqrt(nb);
	if (sqrt)
		printf("sq_root of %d = %d\n", nb, sqrt);
	else
		printf("%d is irrational\n", nb);
	return (0);
}
*/
