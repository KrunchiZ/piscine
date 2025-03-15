/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 12:30:12 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/15 16:55:38 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	fibo;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	fibo = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (fibo);
}

/*
int	main(void)
{
	int	index;

	index = 6;
	printf("Index %d on fibonacci seq = %d", index, ft_fibonacci(index));
	return (0);
}
*/
