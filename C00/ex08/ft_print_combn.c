/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:46:34 by kchiang           #+#    #+#             */
/*   Updated: 2025/04/14 12:43:41 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	int		comb[9];
	int		i;
	int		j;
	int		depth;
	char	digit;

	i = 0;
	depth = 0;
	while (i < 10)
	{
		comb[depth] = i;
		depth++;
		if (depth == n)
		{
			j = 0;
			while (j < n)
			{
				digit = comb[j] + '0';
				write(1, &digit, 1);
				j++;
			}
			if (comb[0] != (10 - n))
				write(1, ", ", 2);
			depth--;
		}
		if (i == 9)
		{
			depth--;
			i = comb[depth] + 1;
		}
		else
			i++;
	}
	return ;
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
