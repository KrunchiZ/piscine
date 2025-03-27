/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:12:01 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/15 18:51:01 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (i + dest_len < size - 1)
	{
		if (*src)
			dest[dest_len + i++] = *src++;
		else
			break ;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*
int	main(void)
{
	char	*src = "abc";
	char	dest[10] = "012345";
	int		n = 8;
	int		length;

	printf("\"%s\" + \"%s\"\n", dest, src);
	length = ft_strlcat(dest, src, n);
	printf("=> \"%s\", returned length = %d", dest, length);
	return (0);
}
*/
