/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:14:24 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/18 20:40:45 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

int	calc_strslen(int size, char **strs)
{
	int	i;
	int	strslen;

	i = 0;
	strslen = 0;
	while (i < size)
		strslen += ft_strlen(strs[i++]);
	return (strslen);
}

char	*strscat(char *host, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (host[i])
		i++;
	j = 0;
	while (src[j])
		host[i++] = src[j++];
	host[i] = '\0';
	return (host);
}

char	*fill_host(char *host, char **strs, char *sep, int size)
{
	int	i;

	i = 0;
	host[0] = '\0';
	while (i < size)
	{
		strscat(host, strs[i]);
		if (i < size - 1)
			strscat(host, sep);
		i++;
	}
	return (host);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		strslen;
	char	*host;

	strslen = calc_strslen(size, strs);
	if (!size)
	{
		host = (char *)malloc(1);
		if (host == NULL)
			return (NULL);
		host[0] = '\0';
		return (host);
	}
	else
	{
		host = (char *)malloc(strslen + (ft_strlen(sep) * (size - 1)) + 1);
		if (host == NULL)
			return (NULL);
		fill_host(host, strs, sep, size);
		return (host);
	}
}

/*
int	main(int argc, char **argv)
{
	char	*result;

	if (argc < 2)
		return (0);
	result = ft_strjoin(--argc, ++argv, "_");
	if (result != NULL)
	{
		printf("%s\n", result);
		free(result);
	}
	else
		printf("NULL pointer");
	return (0);
}
*/
