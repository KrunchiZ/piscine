/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:13:06 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/05 18:30:23 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		else
			str++;
	}
	return (1);
}

/*
int	main(void)
{
	char	*dg;
	char	*imp;
	int		num;

	dg = "0123456789";
	imp = "0I234S6789";
	num = ft_str_is_numeric(dg);
	if (num == 1)
		printf("\"%s\" contains digits only.", dg);
	else
		printf("\"%s\" is an imposter.", dg);
	putchar('\n');
	num = ft_str_is_numeric(imp);
	if (num == 1)
		printf("\"%s\" contains digits only.", imp);
	else
		printf("\"%s\" is an imposter.", imp);
	return (0);
}
*/
