/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:21:57 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/26 17:51:21 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*strdup(char *src, int length)
{
	//malloc with length + 1
	char	*copy;
	int		i;

	copy = (char *)malloc(sizeof(char) * (length + 1));
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);	
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*host;

	host = (struct *)malloc(sizeof(t_stock_str) * ac);
	host[ac]->str = 0;
	i = 0;
	while (i < ac)
	{
		//loop thru argv to get all the strings
		host[i]->size = ft_strlen(av[i]);
		host[i]->str = av[i];
		host[i]->copy = strdup(av[i], size);
		i++;
	}
	return (host);
}
