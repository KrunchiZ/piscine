/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:12:01 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/10 19:16:47 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}

/*
int	main(void)
{
	char	*src = "abc";
	char	dest[50] = "012";

	printf("\"%s\" + \"%s\" = ", dest, src);
	ft_strcat(dest, src);
	printf("\"%s\"", dest);
	return (0);
}
*/
