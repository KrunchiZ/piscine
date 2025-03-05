/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:56:25 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/05 11:50:18 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	if (n <= 0)
	{
		write(1, "error: n is 0 or negative", 26);
		write(1, "\n", 1);
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		if (src[i] == '\0')
			dest[n] = '\0';
	}
	return (dest);
}

/*
int	main(void)
{
	char	dest[100];
	char	*src;

	src = "string";
	ft_putstr(src);
	ft_strncpy(dest, src, 5);
	write(1, "\n", 1);
	write(1, "Copied: ", 9);
	ft_putstr(dest);
}
*/
