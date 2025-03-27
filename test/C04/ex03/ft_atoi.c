/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 10:38:54 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/12 19:12:02 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	if_digit(char ch)
{
	if ('0' <= ch && ch <= '9')
		return (1);
	else
		return (0);
}

int	exec_atoi(char *str, int i, int sign, int nbr)
{
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (if_digit(str[i]))
	{
		if (i > 0 && if_digit(str[i - 1]))
			nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	return (nbr * sign);
}

int	ft_atoi(char *str)
{
	int	nbr;

	nbr = exec_atoi(str, 0, 1, 0);
	return (nbr);
}

/*
int	main(void)
{
	char	*str = " \t --+-123+45s7";
	printf("\"%s\" ft_atoi--> %d", str, ft_atoi(str));
	return (0);
}
*/
