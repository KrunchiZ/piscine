/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:13:06 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/05 18:13:21 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z') && !(*str >= 'a' && *str <= 'z'))
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
	imp = "ab0defg";
	alpha = ft_str_is_alpha(ch);
	if (alpha == 1)
		printf("\"%s\" contains alphabets only.", ch);
	else
		printf("\"%s\" is an imposter.", ch);
	putchar('\n');
	alpha = ft_str_is_alpha(imp);
	if (alpha == 1)
		printf("\"%s\" contains alphabets only.", imp);
	else
		printf("\"%s\" is an imposter.", imp);
	return (0);
}
*/
