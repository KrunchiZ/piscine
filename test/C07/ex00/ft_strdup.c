/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:11:14 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/17 14:32:57 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*host;
	int		length;
	int		i;

	length = ft_strlen(src);
	host = (char *)malloc(length + 1);
	if (host == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		host[i] = src[i];
		i++;
	}
	host[i] = '\0';
	return (host);
}

/*
int	main(int argc, char **argv)
{
	char	*dup;

	if (argc != 2)
		return (0);
	dup = ft_strdup(argv[1]);
	if (dup == NULL)
		printf("Malloc failed");
	else
	{
		printf("Copied: \"%s\"\n", dup);
		free(dup);
	}
	return (0);
}
*/
