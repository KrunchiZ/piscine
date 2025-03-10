/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:12:01 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/10 22:10:10 by kchiang          ###   ########.fr       */
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

	if (dest == 0 || src == 0 || size == 0)
		return (0);
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= size - 1)
		return (dest_len + src_len);
	i = dest_len;
	while (i < size - 1)
	{
		if (*src)
			dest[i++] = *src++;
		if (!(*src))
			break ;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

/*
int	main(void)
{
	char	*src = "abc";
	char	dest[10] = "012";
	int		n = 5;
	int		length;

	printf("\"%s\" + \"%s\" = ", dest, src);
	length = ft_strlcat(dest, src, n);
	printf("\"%s\", intended length = %d", dest, length);
	return (0);
}
*/
