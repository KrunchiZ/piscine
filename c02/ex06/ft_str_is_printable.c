/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:13:06 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/05 21:01:41 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= ' ' && *str <= '~'))
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
	int		yes;

	ch = "ABCDEFG";
	imp = "ABCDEFG\n";
	yes = ft_str_is_printable(ch);
	if (yes == 1)
		printf("\"%s\" is printable.", ch);
	else
		printf("\"%s\" \nError: Non printable detected.", ch);
	putchar('\n');
	yes = ft_str_is_printable(imp);
	if (yes == 1)
		printf("\"%s\" is printable.", imp);
	else
		printf("\"%s\" \nError: Non printable detected.", imp);
	return (0);
}
*/
