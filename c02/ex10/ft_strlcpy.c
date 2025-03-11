/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:56:25 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/11 10:46:04 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;

	srclen = 0;
	i = 0;
	if (src == 0 || dest == 0 || size == 0)
		return (srclen);
	while (src[i] != '\0')
	{
		srclen++;
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}

/*
int	main(void)
{
	char			dest[5] = "DEST";
	char			*src;
	unsigned int	len;

	src = "0123456789";
	printf("src = \"%s\"\ndest = \"%s\"\n", src, dest);
	len = ft_strlcpy(dest, src, 5);
	printf("new dest = \"%s\"\nNote: src length = %u", dest, len);
	return (0);
}
*/
