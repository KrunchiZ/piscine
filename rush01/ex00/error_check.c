/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:53:36 by kchiang           #+#    #+#             */
/*   Updated: 2025/04/15 22:09:15 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

// check if argv has 16 numbers (1-4) and only spaces in between
int	arg_is_invalid(int argc, char *argv)
{
	int	index;

	if (argc != 2 || ft_strlen(argv) != 31)
		return (1);
	index = 0;
	while (index < 31)
	{
		if (index % 2 && argv[index] != ' ')
			return (1);
		else if (index % 2 == 0 && (argv[index] < '1' || argv[index] > '4'))
		{
			write(1, "KO", 2);
			return (1);
		}
		index++;
	}
	return (0);
}
