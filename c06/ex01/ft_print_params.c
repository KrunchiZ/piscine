/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 17:55:18 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/16 18:23:03 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_arg(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
	return ;
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc < 2)
		return (0);
	i = 1;
	while (i < argc)
		put_arg(argv[i++]);
	return (0);
}
