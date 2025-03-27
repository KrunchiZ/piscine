/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 17:55:18 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/16 18:07:11 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*str;

	if (argc)
	{
		str = argv[0];
		while (*str)
			write(1, str++, 1);
		write(1, "\n", 1);
	}
	return (0);
}
