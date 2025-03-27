/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:13:06 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/05 21:35:40 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*first_ch;

	first_ch = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
			str++;
		}
		else
			str++;
	}
	return (first_ch);
}

/*
int	main(void)
{
	char	ch[] = "abc-dEFg";

	printf("\"%s\" >> ", ch);
	ft_strupcase(ch);
	printf("\"%s\"", ch);
	return (0);
}
*/
