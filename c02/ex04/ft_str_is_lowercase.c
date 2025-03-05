/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:13:06 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/05 18:45:24 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
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

	ch = "abcdefg";
	imp = "abcdeFg";
	alpha = ft_str_is_lowercase(ch);
	if (alpha == 1)
		printf("\"%s\" contains lowercases only.", ch);
	else
		printf("\"%s\" is an imposter.", ch);
	putchar('\n');
	alpha = ft_str_is_lowercase(imp);
	if (alpha == 1)
		printf("\"%s\" contains lowercases only.", imp);
	else
		printf("\"%s\" is an imposter.", imp);
	return (0);
}
*/
