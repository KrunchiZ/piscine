/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:26:30 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/04 09:55:03 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 4;
	printf("a = %d\nb = %d\n\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("new a = %d\nnew b = %d\n", a, b);
	return (0);
}
*/
