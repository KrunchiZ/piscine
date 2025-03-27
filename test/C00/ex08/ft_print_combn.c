/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:46:34 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/02 19:32:56 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	digit;

	if (n == 0)
		return ;
	digit = (--n) + '0';
	ft_print_combn(n);
	write(1, &digit, 1);
}

int	main(void)
{
	ft_print_combn(2);
}
