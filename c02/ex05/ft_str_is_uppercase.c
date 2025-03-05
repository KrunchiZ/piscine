/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:13:06 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/05 19:34:33 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		else
			str++;
	}
	return (1);
}

/*
int	main(void)
{
	char	*ch;
	char	*imp;
	int		alpha;

	ch = "ABCDEFG";
	imp = "ABCDEfG";
	alpha = ft_str_is_uppercase(ch);
	if (alpha == 1)
		printf("\"%s\" contains uppercases only.", ch);
	else
		printf("\"%s\" is an imposter.", ch);
	putchar('\n');
	alpha = ft_str_is_uppercase(imp);
	if (alpha == 1)
		printf("\"%s\" contains uppercases only.", imp);
	else
		printf("\"%s\" is an imposter.", imp);
	return (0);
}
*/
