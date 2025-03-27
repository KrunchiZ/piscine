/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:40:04 by kchiang           #+#    #+#             */
/*   Updated: 2025/03/18 12:09:26 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*host;
	int	i;

	if (min >= max)
		return (NULL);
	host = (int *)malloc(sizeof(int) * (max - min));
	if (host == NULL)
		return (NULL);
	i = 0;
	while (min + i < max)
	{
		host[i] = min + i;
		i++;
	}
	return (host);
}

/*
int	main(void)
{
	int	*array;
	int i = 0;

	array = ft_range(i, 3);
	if (array)
	{
		while (i < 3)
			printf("%d ", array[i++]);
		free(array);
	}
	return (0);
}
*/
