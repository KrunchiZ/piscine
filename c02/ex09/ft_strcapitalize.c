/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:19:52 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/10 10:07:13 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i != 0) && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] - 'A' + 'a';
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 'a' + 'A';
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] >= '0' && str[i - 1] <= '9')
				;
			else if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				;
			else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				;
			else
				str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	array[] = "heLLo, hoW aRe you? 42kl piscIne-feBRuary; guCCi+gUcci";

	printf("\"%s\"\n\nCapitalized:\n", array);
	ft_strcapitalize(array);
	printf("\"%s\"", array);
	return (0);
}
*/
