/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:12:01 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/13 16:11:43 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*temp;

	temp = dest;
	while (*dest)
		dest++;
	i = 0;
	while (i < nb && *src)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (temp);
}

/*
int	main(void)
{
	char	*src = "abc";
	char	dest[50] = "012";
	int		n = 2;

	printf("\"%s\" + first %d of \"%s\" = ", dest, n, src);
	ft_strncat(dest, src, n);
	printf("\"%s\"", dest);
	return (0);
}
*/
