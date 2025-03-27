/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:13:06 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/05 21:39:08 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*first_ch;

	first_ch = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str - 'A' + 'a';
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
	char	ch[] = "ABc-DefG";

	printf("\"%s\" >> ", ch);
	ft_strlowcase(ch);
	printf("\"%s\"", ch);
	return (0);
}
*/
