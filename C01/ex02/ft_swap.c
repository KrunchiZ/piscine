/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 17:38:15 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/03 19:28:23 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 4;
	printf("a = %d\n", a);
	printf("b = %d\n\n", b);
	ft_swap(&a, &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return (0);
}
*/
