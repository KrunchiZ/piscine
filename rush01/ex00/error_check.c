/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:53:36 by kchiang           #+#    #+#             */
/*   Updated: 2025/04/15 15:57:29 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

// check if argv has 16 numbers and only spaces in between
int	arg_is_invalid(int argc, char *argv)
{
	int	space_index;

	if (argc != 2 || ft_strlen(argv) != 31)
		return (1);
	space_index = 0;
	while (space_index < 31)
	{
		if (space_index % 2 && argv[space_index] != ' ')
			return (1);
		space_index++;
	}
	return (0);
}
