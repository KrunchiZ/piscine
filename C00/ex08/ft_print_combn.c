/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:46:34 by kchiang           #+#    #+#             */
/*   Updated: 2025/04/14 14:16:29 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb(int *comb, int n, int i)
{
	char	digit;

	while (i < n)
	{
		digit = comb[i] + '0';
		write(1, &digit, 1);
		i++;
	}
}

void	fill_comb(int *comb, int n, int count, int depth)
{
	while (1)
	{
		comb[depth++] = count++;
		if (depth == n)
		{
			print_comb(comb, n, 0);
			if (comb[0] != (10 - n))
				write(1, ", ", 2);
			else
				return ;
			depth--;
		}
		if (count > 9)
		{
			while (comb[depth] == 9)
				depth--;
			count = comb[depth] + 1;
		}
	}
}

void	ft_print_combn(int n)
{
	int		comb[9];

	if (n > 0 && n < 10)
		fill_comb(comb, n, 0, 0);
}

/*
int	main(int argc, char **argv)
{
	int n;

	n = argv[1][0] - '0';
	if (argc == 2 && argv[1][1] == '\0')
		ft_print_combn(n);
	return (0);
}
*/
