/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:21:57 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/26 18:05:25 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

//strlen the length of argv and store it in struct size
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

//strdup malloc with struct size
char	*strdup(char *src, int length)
{
	char	*copy;
	int		i;

	copy = (char *)malloc(sizeof(char) * (length + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);	
}

//free previous malloc copy in host when there is error
void	free_host(t_stock_str *host, int depth)
{
	int	i;

	i = 0;
	while (i < depth)
		free(host[i++].copy);
	return ;
}

//parse in argv[1] as av, ac as max size for host struct malloc
t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*host;

	host = (struct *)malloc(sizeof(t_stock_str) * ac);
	if (host == NULL)
		return (NULL);
	host[ac]->str = 0;
	i = 0;
	while (i < ac)
	{
		host[i].size = ft_strlen(av[i]);
		host[i].str = av[i];
		host[i].copy = strdup(av[i], host[i].size);
		if (host[i]->copy == NULL)
		{
			free_host(host, i);
			return (NULL);
		}
		i++;
	}
	return (host);
}
